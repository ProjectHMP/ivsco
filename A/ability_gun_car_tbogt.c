void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    float fVar9;
    int I;
    boolean bVar11;
    int iVar12;
    unknown uVar13;
    int iVar14;
    int iVar15;
    int iVar16;

    l_U0 = 150.00000000;
    l_U90 = 0;
    l_U91 = 86.00000000;
    l_U92 = 274.00000000;
    l_U201 = 999999.90000000;
    l_U202 = 0.00000000;
    l_U203 = 0.26000000;
    l_U204 = 0.65000000;
    l_U206 = 0;
    l_U209 = "amb@smoke_cig";
    l_U210 = "create_cig";
    l_U211 = "partial_smoke";
    l_U212 = "partial_smoke_car";
    l_U213 = "partial_stub_out";
    l_U214 = {0.01400000, -0.01900000, 0.01100000};
    l_U217 = {0.00000000, 0.00000000, 0.00000000};
    l_U220 = {0.14700000, -0.02900000, 0.00000000};
    l_U223 = {0.00000000, 0.00000000, 0.00000000};
    l_U226 = {0.00000000, 0.00000000, 1.00000000};
    l_U229 = 0;
    l_U230 = 1;
    l_U231 = 3;
    l_U265 = 1;
    l_U286 = 0;
    l_U287 = 0;
    l_U288 = 0;
    l_U289 = 0;
    l_U290 = 0;
    l_U291 = 0;
    l_U292 = 0;
    l_U293 = 1;
    l_U294 = 0;
    l_U295 = 0;
    l_U296 = 1;
    l_U297 = 0;
    l_U298 = 0;
    l_U329 = 33.66300000;
    l_U330 = 45.00000000;
    l_U331 = 1.00000000;
    l_U332 = 999999.00000000;
    l_U335 = 10.30000000;
    l_U336 = 7.70000000;
    l_U337 = 0;
    l_U338 = 0;
    l_U342 = 0;
    l_U343 = 0;
    l_U364 = -1;
    l_U365 = -1;
    l_U366 = -1;
    l_U367 = -1;
    l_U368 = -1;
    l_U370 = 255;
    l_U371 = 211;
    l_U372 = 211;
    l_U373 = 99;
    g_U11219 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "Terry gun van - QUIT_OUT_OF_SCRIPT() - 1 \n" );
        sub_623();
    }
    sub_2550();
    l_U302 = {sub_5595( g_U39179 )};
    REQUEST_MODEL( 729783779 );
    REQUEST_MODEL( sub_2128( 6 ) );
    REQUEST_ANIMS( "MISSGUNVAN" );
    l_U374[0] = 443141696;
    l_U374[1] = 1015062504;
    l_U374[17] = -259610509;
    l_U374[2] = 1350491501;
    l_U374[3] = -97968031;
    l_U374[4] = 1941123364;
    l_U374[5] = -1658159368;
    l_U374[6] = 1343754678;
    l_U374[8] = -2139514995;
    l_U374[7] = 61597377;
    l_U374[9] = -2049396802;
    l_U374[10] = -1758615024;
    l_U374[11] = 1469285540;
    l_U374[12] = -1057900728;
    l_U374[13] = 502027354;
    l_U374[14] = 1650663205;
    l_U374[15] = 11021525;
    l_U374[16] = -2393703;
    for ( I = 0; I < 18; I++ )
    {
        REQUEST_MODEL( l_U374[I] );
    }
    while (((((((((((((((((((((NOT (HAS_MODEL_LOADED( 729783779 ))) || (NOT (HAS_MODEL_LOADED( sub_2128( 6 ) )))) || (NOT (HAVE_ANIMS_LOADED( "MISSGUNVAN" )))) || (NOT (HAS_MODEL_LOADED( l_U374[0] )))) || (NOT (HAS_MODEL_LOADED( l_U374[1] )))) || (NOT (HAS_MODEL_LOADED( l_U374[2] )))) || (NOT (HAS_MODEL_LOADED( l_U374[3] )))) || (NOT (HAS_MODEL_LOADED( l_U374[4] )))) || (NOT (HAS_MODEL_LOADED( l_U374[5] )))) || (NOT (HAS_MODEL_LOADED( l_U374[6] )))) || (NOT (HAS_MODEL_LOADED( l_U374[8] )))) || (NOT (HAS_MODEL_LOADED( l_U374[9] )))) || (NOT (HAS_MODEL_LOADED( l_U374[7] )))) || (NOT (HAS_MODEL_LOADED( l_U374[10] )))) || (NOT (HAS_MODEL_LOADED( l_U374[11] )))) || (NOT (HAS_MODEL_LOADED( l_U374[12] )))) || (NOT (HAS_MODEL_LOADED( l_U374[13] )))) || (NOT (HAS_MODEL_LOADED( l_U374[14] )))) || (NOT (HAS_MODEL_LOADED( l_U374[15] )))) || (NOT (HAS_MODEL_LOADED( l_U374[16] )))) || (NOT (HAS_MODEL_LOADED( l_U374[17] ))))
    {
        WAIT( 0 );
    }
    if (g_U11221)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "stubbs4" )) < 1)
        {
            g_U11221 = 0;
        }
    }
    if (g_U11221)
    {
        l_U413 = g_U11223;
        l_U798 = g_U11222;
        l_U266 = 1;
        l_U337 = 2;
        SET_MINIGAME_IN_PROGRESS( 1 );
        g_U10476 = 1;
        l_U258 = 1;
        sub_8088();
        l_U338 = 0;
    }
    while (true)
    {
        SUPPRESS_CAR_MODEL( 729783779 );
        sub_8618();
        if (NOT g_U11221)
        {
            if (NOT (l_U337 == 4))
            {
                if (IS_VEH_DRIVEABLE( l_U798 ))
                {
                    GET_CAR_COORDINATES( l_U798, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    if (NOT (sub_8771( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000 )))
                    {
                        CLEAR_AREA_OF_CHARS( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000 );
                    }
                }
            }
        }
        if (IS_PLAYER_PLAYING( sub_702() ))
        {
            if ((l_U259) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
            {
                if (IS_VEH_DRIVEABLE( l_U798 ))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, 0.00000000, 5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    GET_CAR_HEADING( l_U798, ref fVar8 );
                    fVar8 += 180.00000000;
                    SET_CHAR_COORDINATES( sub_751(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    SET_CHAR_HEADING( sub_751(), fVar8 );
                    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    l_U259 = 0;
                }
            }
            switch (l_U337)
            {
                case 0:
                CREATE_CAR( 729783779, l_U302._fU0._fU0, l_U302._fU0._fU4, l_U302._fU0._fU8, ref l_U798, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U798, 1, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U798, 2, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U798, 3, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U798, 4, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U798, 5, 0 );
                TURN_OFF_VEHICLE_EXTRA( l_U798, 6, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U798, 7, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U798, 8, 1 );
                TURN_OFF_VEHICLE_EXTRA( l_U798, 9, 1 );
                CHANGE_CAR_COLOUR( l_U798, 0, 0 );
                SET_EXTRA_CAR_COLOURS( l_U798, 0, 0 );
                SET_CAR_HEADING( l_U798, l_U302._fU12 );
                SET_CAR_COORDINATES( l_U798, l_U302._fU0._fU0, l_U302._fU0._fU4, l_U302._fU0._fU8 );
                LOCK_CAR_DOORS( l_U798, 3 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, -1.31800000, -0.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, -15.00000000, -15.00000000, -15.00000000, ref l_U789._fU0, ref l_U789._fU4, ref l_U789._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, 15.00000000, 15.00000000, 15.00000000, ref l_U792._fU0, ref l_U792._fU4, ref l_U792._fU8 );
                if (l_U789._fU0 > l_U792._fU0)
                {
                    fVar9 = l_U792._fU0;
                    l_U792._fU0 = l_U789._fU0;
                    l_U789._fU0 = fVar9;
                }
                if (l_U789._fU4 > l_U792._fU4)
                {
                    fVar9 = l_U792._fU4;
                    l_U792._fU4 = l_U789._fU4;
                    l_U789._fU4 = fVar9;
                }
                if (l_U789._fU8 > l_U792._fU8)
                {
                    fVar9 = l_U792._fU8;
                    l_U792._fU8 = l_U789._fU8;
                    l_U789._fU8 = fVar9;
                }
                SWITCH_PED_PATHS_OFF( l_U789._fU0, l_U789._fU4, l_U789._fU8, l_U792._fU0, l_U792._fU4, l_U792._fU8 );
                sub_9801( 6, ref l_U413, uVar2._fU0, uVar2._fU4, uVar2._fU8, l_U302._fU12 + 25.00000000 );
                SET_PED_DIES_WHEN_INJURED( l_U413, 1 );
                ADD_BLIP_FOR_COORD( l_U302._fU0._fU0, l_U302._fU0._fU4, l_U302._fU0._fU8, ref l_U257 );
                CHANGE_BLIP_SPRITE( l_U257, 118 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U413, 1 );
                l_U260 = 1;
                SETTIMERA( 0 );
                sub_11125( 1 );
                break;
                case 1:
                if (NOT g_U11234)
                {
                    if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        if (NOT sub_11204())
                        {
                            PRINT_HELP( "GC_EXP" );
                            g_U11234 = 1;
                        }
                    }
                }
                if (NOT l_U266)
                {
                    l_U324 = 0.00000000;
                    l_U262 = 0;
                    l_U342 = sub_5161();
                    l_U343 = 0;
                    l_U266 = 1;
                }
                if (l_U260)
                {
                    if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U413 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, -1.31800000, -0.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U798, ref fVar8 );
                            fVar8 += 25.00000000;
                            SET_CHAR_COORDINATES( l_U413, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( l_U413, fVar8 );
                        }
                    }
                    l_U260 = 0;
                }
                if (IS_VEH_DRIVEABLE( l_U798 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U413 )))
                    {
                        if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U798, sub_751() ))
                        {
                            CLEAR_CHAR_TASKS( l_U413 );
                            OPEN_SEQUENCE_TASK( ref l_U414 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_751() );
                            CLOSE_SEQUENCE_TASK( l_U414 );
                            TASK_PERFORM_SEQUENCE( l_U413, l_U414 );
                            CLEAR_SEQUENCE_TASK( l_U414 );
                            CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U798 );
                            if (l_U373 == 99)
                            {
                                l_U373 = 4;
                            }
                        }
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U413, sub_751(), 0 ))
                        {
                            CLEAR_CHAR_TASKS( l_U413 );
                            OPEN_SEQUENCE_TASK( ref l_U414 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_751() );
                            CLOSE_SEQUENCE_TASK( l_U414 );
                            TASK_PERFORM_SEQUENCE( l_U413, l_U414 );
                            CLEAR_SEQUENCE_TASK( l_U414 );
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U413 );
                            if (l_U373 == 99)
                            {
                                l_U373 = 5;
                            }
                        }
                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U413, sub_751(), 6.00000000, 6.00000000, 3.00000000, 0 ))
                        {
                            if ((l_U332 > 30000.00000000) AND (l_U373 == 99))
                            {
                                CLEAR_CHAR_TASKS( l_U413 );
                                TASK_LOOK_AT_CHAR( l_U413, sub_751(), -2, 0 );
                                OPEN_SEQUENCE_TASK( ref l_U414 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_751() );
                                CLOSE_SEQUENCE_TASK( l_U414 );
                                TASK_PERFORM_SEQUENCE( l_U413, l_U414 );
                                CLEAR_SEQUENCE_TASK( l_U414 );
                                l_U373 = 0;
                                l_U332 = 0.00000000;
                            }
                        }
                        if (NOT (IS_CHAR_FACING_CHAR( l_U413, sub_751(), 45.00000000 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U413, 29, ref l_U415 );
                            if (l_U415 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U413 );
                                TASK_LOOK_AT_CHAR( l_U413, sub_751(), -2, 0 );
                                OPEN_SEQUENCE_TASK( ref l_U414 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_751() );
                                CLOSE_SEQUENCE_TASK( l_U414 );
                                TASK_PERFORM_SEQUENCE( l_U413, l_U414 );
                                CLEAR_SEQUENCE_TASK( l_U414 );
                            }
                        }
                    }
                }
                if (sub_12215())
                {
                    iVar12 = 0;
                    if (((IS_VEH_DRIVEABLE( l_U798 )) AND (NOT (IS_CHAR_INJURED( l_U413 )))) AND (sub_12433()))
                    {
                        GET_CAR_COORDINATES( l_U798, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_751(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 6.00000000, 6.00000000, 2.00000000, 0 ))
                        {
                            iVar12 = 1;
                        }
                    }
                    if ((iVar12) AND (sub_12593( 3, 0 )))
                    {
                        if (sub_12816( 3, "E1GV_H01", 0 ))
                        {
                            fVar9 = 0.00000000;
                            if (NOT (IS_CHAR_INJURED( l_U413 )))
                            {
                                TASK_CLEAR_LOOK_AT( l_U413 );
                                UNLOCK_RAGDOLL( l_U413, 0 );
                            }
                            sub_11125( 2 );
                            l_U258 = 1;
                            g_U10476 = 1;
                            SET_MINIGAME_IN_PROGRESS( 1 );
                            break;
                        }
                    }
                    else
                    {
                        sub_1268( 3, "E1GV_H01" );
                    }
                }
                else
                {
                    l_U373 = 6;
                    sub_11125( 4 );
                }
                if (l_U337 == 1)
                {
                    if (IS_PLAYER_PLAYING( sub_702() ))
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_751(), l_U302._fU0._fU0, l_U302._fU0._fU4, l_U302._fU0._fU8, 15.00000000, 15.00000000, 5.00000000, 0 ))
                        {
                            if (IS_WANTED_LEVEL_GREATER( sub_702(), 0 ))
                            {
                                l_U373 = 6;
                                sub_11125( 4 );
                            }
                        }
                    }
                }
                if (l_U337 == 1)
                {
                    if (IS_PLAYER_PLAYING( sub_702() ))
                    {
                        if (TIMERA() > 300000)
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_751(), l_U302._fU0._fU0, l_U302._fU0._fU4, 100.00000000, 100.00000000, 0 )))
                            {
                                PRINT( "E1GV_GONE", 7500, 1 );
                                sub_11125( 4 );
                            }
                        }
                    }
                }
                break;
                case 7: break;
                case 2:
                if (NOT l_U266)
                {
                    CLEAR_HELP();
                    SET_PLAYER_CONTROL( sub_702(), 0 );
                    SET_WIDESCREEN_BORDERS( 1 );
                    if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U413 )))
                        {
                            if (IS_CHAR_DUCKING( l_U413 ))
                            {
                                SET_CHAR_DUCKING( l_U413, 0 );
                            }
                            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, l_U413, 0, 0, 6000 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U413, 1 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, -0.30000000, -3.20000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U798, ref fVar8 );
                            CLEAR_CHAR_TASKS( l_U413 );
                            OPEN_SEQUENCE_TASK( ref l_U414 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1, 0.50000000 );
                            TASK_ACHIEVE_HEADING( 0, fVar8 );
                            CLOSE_SEQUENCE_TASK( l_U414 );
                            TASK_PERFORM_SEQUENCE( l_U413, l_U414 );
                            CLEAR_SEQUENCE_TASK( l_U414 );
                            l_U373 = 1;
                        }
                        if (IS_CHAR_DUCKING( sub_751() ))
                        {
                            SET_CHAR_DUCKING( sub_751(), 0 );
                        }
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U777._fU0, l_U777._fU4, l_U777._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        GET_CAR_HEADING( l_U798, ref fVar8 );
                        fVar8 += l_U323;
                        OPEN_SEQUENCE_TASK( ref l_U414 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1, 0.50000000 );
                        CLOSE_SEQUENCE_TASK( l_U414 );
                        TASK_PERFORM_SEQUENCE( sub_751(), l_U414 );
                        CLEAR_SEQUENCE_TASK( l_U414 );
                    }
                    sub_8088();
                    SETTIMERA( 0 );
                    l_U266 = 1;
                }
                switch (l_U338)
                {
                    case 0:
                    bVar11 = false;
                    if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U774._fU0 - 0.30000000, l_U774._fU4, l_U774._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        if (IS_PLAYER_PLAYING( sub_702() ))
                        {
                            if (LOCATE_CHAR_ON_FOOT_3D( sub_751(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 3.00000000, 3.00000000, 3.00000000, 0 ))
                            {
                                bVar11 = true;
                            }
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U413 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U413, "MISSGUNVAN", "open_doors" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U413, "MISSGUNVAN", "open_doors", ref fVar9 );
                            if (fVar9 >= l_U316)
                            {
                                bVar11 = true;
                            }
                        }
                    }
                    if (NOT (l_U373 == 99))
                    {
                        bVar11 = false;
                    }
                    if (g_U11221)
                    {
                        bVar11 = true;
                    }
                    if (TIMERA() > 7000)
                    {
                        bVar11 = true;
                    }
                    if (bVar11)
                    {
                        if (g_U11221)
                        {
                            while (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( "GUNCARL", 3 )))
                            {
                                REQUEST_ADDITIONAL_TEXT( "GUNCARL", 3 );
                                WAIT( 0 );
                            }
                        }
                        else
                        {
                            while (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( "GUNCAR", 3 )))
                            {
                                REQUEST_ADDITIONAL_TEXT( "GUNCAR", 3 );
                                WAIT( 0 );
                            }
                        }
                        if (IS_VEH_DRIVEABLE( l_U798 ))
                        {
                            if (g_U11221)
                            {
                                GET_CAR_COORDINATES( l_U798, ref l_U302._fU0._fU0, ref l_U302._fU0._fU4, ref l_U302._fU0._fU8 );
                                GET_CAR_HEADING( l_U798, ref l_U302._fU12 );
                            }
                            sub_14936();
                            if (NOT g_U11221)
                            {
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, 0.00000000, 2.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                sub_15064( ref uVar5, ref fVar8 );
                                sub_16003( uVar2, 5.00000000, uVar5, fVar8 );
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, 0.00000000, -7.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000, 0, 1, ref uVar13 );
                                if (DOES_VEHICLE_EXIST( uVar13 ))
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, 0.00000000, 3.00000000, 0.00000000, ref l_U302._fU0._fU0, ref l_U302._fU0._fU4, ref l_U302._fU0._fU8 );
                                    SET_CAR_HEADING( l_U798, l_U302._fU12 );
                                    SET_CAR_COORDINATES( l_U798, l_U302._fU0._fU0, l_U302._fU0._fU4, l_U302._fU0._fU8 );
                                }
                            }
                            SET_CAR_HEADING( l_U798, l_U302._fU12 );
                            SET_CAR_COORDINATES( l_U798, l_U302._fU0._fU0, l_U302._fU0._fU4, l_U302._fU0._fU8 );
                            FREEZE_CAR_POSITION( l_U798, 1 );
                            if (NOT (IS_CHAR_INJURED( l_U413 )))
                            {
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, 0.00000000, -3.40000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                                GET_CAR_HEADING( l_U798, ref fVar8 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U413 );
                                SET_CHAR_COORDINATES( l_U413, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                                SET_CHAR_HEADING( l_U413, fVar8 );
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U780._fU0, l_U780._fU4, l_U780._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                TASK_PLAY_ANIM( l_U413, "open_doors", "MISSGUNVAN", 1000.00000000, 0, 0, 0, 1, -1 );
                            }
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U777._fU0, l_U777._fU4 - 1.00000000, l_U777._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U798, ref fVar8 );
                            SET_CHAR_COORDINATES_DONT_WARP_GANG( sub_751(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( sub_751(), fVar8 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U777._fU0, l_U777._fU4 - 0.20000000, l_U777._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            fVar8 += l_U323;
                            OPEN_SEQUENCE_TASK( ref l_U414 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U780._fU0, l_U780._fU4, l_U780._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            CLOSE_SEQUENCE_TASK( l_U414 );
                            TASK_PERFORM_SEQUENCE( sub_751(), l_U414 );
                            CLEAR_SEQUENCE_TASK( l_U414 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U780._fU0, l_U780._fU4, l_U780._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            SETTIMERA( 0 );
                            if (IS_VEH_DRIVEABLE( l_U798 ))
                            {
                                FREEZE_CAR_POSITION( l_U798, 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U413 )))
                            {
                                if (IS_CHAR_PLAYING_ANIM( l_U413, "MISSGUNVAN", "open_doors" ))
                                {
                                    SET_CHAR_ANIM_CURRENT_TIME( l_U413, "MISSGUNVAN", "open_doors", l_U316 );
                                }
                            }
                            DISPLAY_RADAR( 0 );
                            BEGIN_CAM_COMMANDS( ref l_U341 );
                            l_U262 = 1;
                            CREATE_CAM( 14, ref l_U299 );
                            ATTACH_CAM_TO_VEHICLE( l_U299, l_U798 );
                            SET_CAM_ATTACH_OFFSET( l_U299, l_U780._fU0, l_U780._fU4, l_U780._fU8 );
                            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U299, 1 );
                            POINT_CAM_AT_VEHICLE( l_U299, l_U798 );
                            SET_CAM_POINT_OFFSET( l_U299, l_U783._fU0, l_U783._fU4, l_U783._fU8 );
                            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U299, 1 );
                            SET_CAM_FOV( l_U299, l_U330 );
                            SET_CAM_ACTIVE( l_U299, 1 );
                            SET_CAM_PROPAGATE( l_U299, 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            l_U373 = 3;
                            l_U338 = 2;
                        }
                    }
                    break;
                    case 2:
                    if (TIMERA() < 2000)
                    {
                        if (DOES_CAM_EXIST( l_U299 ))
                        {
                            SET_CAM_ATTACH_OFFSET( l_U299, l_U780._fU0, l_U780._fU4, l_U780._fU8 );
                            SET_CAM_POINT_OFFSET( l_U299, l_U783._fU0, l_U783._fU4, l_U783._fU8 );
                            SET_CAM_FOV( l_U299, l_U330 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U413 )))
                        {
                            BLOCK_CHAR_GESTURE_ANIMS( l_U413, 1 );
                            if (IS_CHAR_PLAYING_ANIM( l_U413, "MISSGUNVAN", "open_doors" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U413, "MISSGUNVAN", "open_doors", ref fVar9 );
                                if (fVar9 < l_U316)
                                {
                                    fVar9 = l_U316;
                                }
                                if (fVar9 > l_U317)
                                {
                                    fVar9 = l_U317;
                                }
                                fVar9 -= l_U316;
                                l_U324 = (fVar9 / (l_U317 - l_U316)) * l_U318;
                                if (IS_VEH_DRIVEABLE( l_U798 ))
                                {
                                    if (NOT l_U290)
                                    {
                                        POP_CAR_BOOT( l_U798 );
                                        l_U290 = 1;
                                    }
                                    CONTROL_CAR_DOOR( l_U798, 3, 1, l_U324 );
                                    CONTROL_CAR_DOOR( l_U798, 2, 1, l_U324 );
                                }
                            }
                        }
                    }
                    else if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        CONTROL_CAR_DOOR( l_U798, 3, 1, 1.00000000 );
                        CONTROL_CAR_DOOR( l_U798, 2, 1, 1.00000000 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U413 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U413 );
                        BLOCK_CHAR_GESTURE_ANIMS( l_U413, 0 );
                    }
                    SETTIMERA( 0 );
                    l_U338 = 3;;
                    break;
                    case 3:
                    if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U413 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U774._fU0, l_U774._fU4, l_U774._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U798, ref fVar8 );
                            fVar8 += l_U322;
                            SET_CHAR_COORDINATES( l_U413, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( l_U413, fVar8 );
                        }
                    }
                    if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U777._fU0, l_U777._fU4, l_U777._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        GET_CAR_HEADING( l_U798, ref fVar8 );
                        fVar8 += l_U323;
                        CLEAR_AREA( uVar2._fU0, uVar2._fU4, uVar2._fU8, 4.00000000, 1 );
                        SET_CHAR_COORDINATES_DONT_WARP_GANG( sub_751(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        SET_CHAR_HEADING( sub_751(), fVar8 );
                    }
                    l_U780 = {l_U768};
                    l_U783 = {l_U771};
                    if (DOES_CAM_EXIST( l_U299 ))
                    {
                        SET_CAM_ATTACH_OFFSET( l_U299, l_U780._fU0, l_U780._fU4, l_U780._fU8 );
                        SET_CAM_POINT_OFFSET( l_U299, l_U783._fU0, l_U783._fU4, l_U783._fU8 );
                    }
                    SET_CAM_ACTIVE( l_U299, 1 );
                    SET_CAM_PROPAGATE( l_U299, 0 );
                    l_U780 = {l_U768};
                    l_U783 = {l_U771};
                    l_U330 = l_U329;
                    CREATE_CAM( 14, ref l_U300 );
                    if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        ATTACH_CAM_TO_VEHICLE( l_U300, l_U798 );
                        SET_CAM_ATTACH_OFFSET( l_U300, l_U780._fU0, l_U780._fU4, l_U780._fU8 );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U300, 1 );
                        POINT_CAM_AT_VEHICLE( l_U300, l_U798 );
                        SET_CAM_POINT_OFFSET( l_U300, l_U783._fU0, l_U783._fU4, l_U783._fU8 );
                        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U300, 1 );
                        SET_CAM_FOV( l_U300, l_U330 );
                    }
                    SET_CAM_ACTIVE( l_U300, 1 );
                    SET_CAM_PROPAGATE( l_U300, 0 );
                    CREATE_CAM( 3, ref l_U301 );
                    SET_CAM_INTERP_STYLE_DETAILED( l_U301, 1, 1, 1, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U301, l_U299, l_U300, 2000, 0 );
                    SET_CAM_ACTIVE( l_U301, 1 );
                    SET_CAM_PROPAGATE( l_U301, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U413 )))
                    {
                        CLEAR_CHAR_TASKS( l_U413 );
                    }
                    SETTIMERA( 0 );
                    l_U338 = 4;
                    break;
                    case 4:
                    if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        l_U292 = 1;
                    }
                    if ((NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U301 ))) || (TIMERA() > 2500))
                    {
                        DESTROY_CAM( l_U301 );
                        DESTROY_CAM( l_U300 );
                        l_U780 = {l_U768};
                        l_U783 = {l_U771};
                        l_U330 = l_U329;
                        if (DOES_CAM_EXIST( l_U299 ))
                        {
                            SET_CAM_ATTACH_OFFSET( l_U299, l_U780._fU0, l_U780._fU4, l_U780._fU8 );
                            SET_CAM_POINT_OFFSET( l_U299, l_U783._fU0, l_U783._fU4, l_U783._fU8 );
                            SET_CAM_FOV( l_U299, l_U330 );
                        }
                        SET_CAM_ACTIVE( l_U299, 1 );
                        SET_CAM_PROPAGATE( l_U299, 1 );
                        l_U338 = 5;
                    }
                    break;
                    case 5:
                    sub_11125( 3 );
                    break;
                }
                break;
                case 3:
                if (NOT l_U266)
                {
                    l_U292 = 1;
                    SET_WIDESCREEN_BORDERS( 0 );
                    SETTIMERA( 0 );
                    l_U266 = 1;
                }
                DISPLAY_CASH( 1 );
                DISPLAY_RADAR( 1 );
                sub_19307();
                if (IS_VEH_DRIVEABLE( l_U798 ))
                {
                    CONTROL_CAR_DOOR( l_U798, 3, 1, 1.00000000 );
                    CONTROL_CAR_DOOR( l_U798, 2, 1, 1.00000000 );
                }
                if (NOT l_U267[l_U342])
                {
                    l_U342 = sub_5161();
                }
                if (NOT l_U291)
                {
                    if (NOT l_U289)
                    {
                        sub_19724( l_U342 );
                    }
                    else
                    {
                        sub_22334( l_U342 );
                    }
                }
                else
                {
                    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_H05", "" );
                }
                if (l_U291)
                {
                    if (TIMERA() > 5000)
                    {
                        l_U291 = 0;
                    }
                }
                if (l_U289)
                {
                    if (TIMERB() > 5000)
                    {
                        l_U289 = 0;
                        l_U343 = 0;
                    }
                }
                if (l_U260)
                {
                    if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U413 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U774._fU0, l_U774._fU4, l_U774._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U798, ref fVar8 );
                            fVar8 += l_U322;
                            SET_CHAR_COORDINATES( l_U413, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( l_U413, fVar8 );
                        }
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U777._fU0, l_U777._fU4, l_U777._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        GET_CAR_HEADING( l_U798, ref fVar8 );
                        fVar8 += l_U323;
                        SET_CHAR_COORDINATES_DONT_WARP_GANG( sub_751(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        SET_CHAR_HEADING( sub_751(), fVar8 );
                    }
                    l_U260 = 0;
                }
                else if (IS_VEH_DRIVEABLE( l_U798 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U413 )))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U774._fU0, l_U774._fU4, l_U774._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U413, uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.10000000, 0.10000000, 2.00000000, 0 )))
                        {
                            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.10000000, 0.10000000, 2.00000000 )))
                            {
                                l_U260 = 1;
                            }
                        }
                    }
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U777._fU0, l_U777._fU4, l_U777._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_751(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.10000000, 0.10000000, 2.00000000, 0 )))
                    {
                        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.10000000, 0.10000000, 2.00000000 )))
                        {
                            l_U260 = 1;
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U798 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U412 ))
                    {
                        DETACH_OBJECT( l_U412, 1 );
                        ATTACH_OBJECT_TO_CAR( l_U412, l_U798, l_U339, l_U753, l_U756 );
                    }
                    for ( I = 0; I < 18; I++ )
                    {
                        if (I == l_U342)
                        {
                            if (sub_5171( I ))
                            {
                                if (NOT (DOES_OBJECT_EXIST( l_U393[I] )))
                                {
                                    sub_8242( I );
                                }
                                sub_26797( I );
                            }
                            else if (DOES_OBJECT_EXIST( l_U393[I] ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U393[I] ))
                                {
                                    DETACH_OBJECT( l_U393[I], 1 );
                                }
                                DELETE_OBJECT( ref l_U393[I] );
                            }
                        }
                        else if (sub_5171( I ))
                        {
                            if (NOT (DOES_OBJECT_EXIST( l_U393[I] )))
                            {
                                sub_8242( I );
                            }
                            sub_27474( I );
                        }
                        else if (DOES_OBJECT_EXIST( l_U393[I] ))
                        {
                            if (IS_OBJECT_ATTACHED( l_U393[I] ))
                            {
                                DETACH_OBJECT( l_U393[I], 1 );
                            }
                            DELETE_OBJECT( ref l_U393[I] );
                        };;;
                    }
                }
                if ((((NOT (sub_27853( 1 ))) AND (NOT (sub_27935( 1 )))) AND (NOT (sub_28018( 1 )))) AND (NOT (sub_28101( 1 ))))
                {
                    l_U333 = 0.00000000;
                }
                if (NOT (DOES_CAM_EXIST( l_U301 )))
                {
                    if (DOES_CAM_EXIST( l_U299 ))
                    {
                        SET_CAM_ATTACH_OFFSET( l_U299, l_U768._fU0, l_U768._fU4, l_U768._fU8 );
                        SET_CAM_POINT_OFFSET( l_U299, l_U771._fU0, l_U771._fU4, l_U771._fU8 );
                        SET_CAM_FOV( l_U299, l_U329 );
                    }
                }
                if ((NOT l_U258) || (l_U333 > 1000.00000000))
                {
                    if ((sub_27853( 1 )) AND (l_U334 > 400.00000000))
                    {
                        sub_28363( 3 );
                        l_U258 = 1;
                        if (l_U333 > 1000.00000000)
                        {
                            l_U334 = 0.00000000;
                        }
                    }
                }
                if ((NOT l_U258) || (l_U333 > 1000.00000000))
                {
                    if ((sub_27935( 1 )) AND (l_U334 > 400.00000000))
                    {
                        sub_28363( 2 );
                        l_U258 = 1;
                        if (l_U333 > 1000.00000000)
                        {
                            l_U334 = 0.00000000;
                        }
                    }
                }
                if ((NOT l_U258) || (l_U333 > 1000.00000000))
                {
                    if ((sub_28018( 1 )) AND (l_U334 > 400.00000000))
                    {
                        sub_28363( 0 );
                        l_U258 = 1;
                        if (l_U333 > 1000.00000000)
                        {
                            l_U334 = 0.00000000;
                        }
                    }
                }
                if ((NOT l_U258) || (l_U333 > 1000.00000000))
                {
                    if ((sub_28101( 1 )) AND (l_U334 > 400.00000000))
                    {
                        sub_28363( 1 );
                        l_U258 = 1;
                        if (l_U333 > 1000.00000000)
                        {
                            l_U334 = 0.00000000;
                        }
                    }
                }
                if (NOT l_U258)
                {
                    if (IS_CONTROL_PRESSED( 2, 77 ))
                    {
                        sub_1644( l_U342, ref l_U799 );
                        if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
                        {
                            I = (sub_32774( l_U342 )) - 1;
                        }
                        else
                        {
                            I = (sub_33129( l_U342 )) - 1;
                        }
                        if ((IS_SCORE_GREATER( sub_702(), I )) || (g_U11221))
                        {
                            if (sub_33517( l_U342 ))
                            {
                                if ((sub_5171( l_U342 )) || ((sub_22434( l_U799 )) > 0))
                                {
                                    if (NOT (sub_33667( l_U799 )))
                                    {
                                        if (NOT (sub_33811( l_U799 )))
                                        {
                                            if (l_U343 < 0)
                                            {
                                                l_U343 = 0;
                                            }
                                            if (l_U342 == 10)
                                            {
                                                if (IS_PLAYER_PLAYING( sub_702() ))
                                                {
                                                    GET_PLAYER_MAX_ARMOUR( sub_702(), ref iVar14 );
                                                    GET_CHAR_ARMOUR( sub_751(), ref iVar15 );
                                                    iVar16 = iVar14 - iVar15;
                                                    ADD_ARMOUR_TO_CHAR( sub_751(), iVar16 );
                                                    if (NOT g_U11221)
                                                    {
                                                        ADD_SCORE( sub_702(), (sub_32774( l_U342 )) * -1 );
                                                        INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_32774( l_U342 ) );
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                l_U288 = 0;
                                                if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
                                                {
                                                    if (NOT g_U11221)
                                                    {
                                                        ADD_SCORE( sub_702(), (sub_32774( l_U342 )) * -1 );
                                                        INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_32774( l_U342 ) );
                                                    }
                                                    l_U288 = 1;
                                                }
                                                else if (NOT g_U11221)
                                                {
                                                    ADD_SCORE( sub_702(), (sub_33129( l_U342 )) * -1 );
                                                    INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_33129( l_U342 ) );
                                                }
                                                GIVE_WEAPON_TO_CHAR( sub_751(), l_U799, sub_22434( l_U799 ), 0 );
                                                SET_CURRENT_CHAR_WEAPON( sub_751(), l_U799, 1 );
                                                sub_34248( l_U799 );
                                                DISPLAY_AMMO( 1 );
                                            }
                                            if ((NOT (l_U799 == 3)) AND (NOT (l_U799 == 55)))
                                            {
                                                if (NOT l_U294)
                                                {
                                                    l_U294 = 1;
                                                }
                                            }
                                            sub_34352( l_U799 );
                                            if (l_U286)
                                            {
                                                l_U267[l_U342] = 0;
                                            }
                                            if (NOT l_U288)
                                            {
                                                l_U373 = 7;
                                            }
                                            l_U289 = 1;
                                            l_U343++;
                                        }
                                        else
                                        {
                                            l_U289 = 1;
                                            l_U343 = 9999;
                                        }
                                    }
                                    else
                                    {
                                        l_U289 = 1;
                                        l_U343 = 2;
                                    }
                                }
                                else
                                {
                                    l_U343 = 0;
                                }
                            }
                            else
                            {
                                sub_11125( 6 );
                                l_U258 = 1;
                                break;
                            }
                        }
                        else if ((sub_5171( l_U342 )) || ((sub_22434( l_U799 )) > 0))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U413 )))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U413, 80, ref l_U415 );
                                if (l_U415 == 7)
                                {
                                    switch (l_U340)
                                    {
                                        case 0:
                                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U413, "no_way_a", "MISSGUNVAN", 8.00000000, 0, 0, 0, 0, -1 );
                                        break;
                                        case 1:
                                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U413, "no_way_b", "MISSGUNVAN", 8.00000000, 0, 0, 0, 0, -1 );
                                        break;
                                        case 2:
                                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U413, "no_way_c", "MISSGUNVAN", 8.00000000, 0, 0, 0, 0, -1 );
                                        break;
                                    }
                                    l_U340++;
                                    if (l_U340 > 2)
                                    {
                                        l_U340 = 0;
                                    }
                                }
                            }
                            l_U373 = 8;
                            PLAY_AUDIO_EVENT( "FRONTEND_MENU_ERROR" );
                            l_U291 = 1;
                            l_U343 = 0;
                        }
                        else
                        {
                            l_U343 = 0;
                        }
                        l_U258 = 1;
                        SETTIMERA( 0 );
                        SETTIMERB( 0 );
                    }
                }
                if (NOT l_U258)
                {
                    if (IS_CONTROL_PRESSED( 2, 23 ))
                    {
                        sub_35703();
                        l_U258 = 1;
                        if (g_U11221)
                        {
                            sub_11125( 5 );
                        }
                        else
                        {
                            sub_11125( 4 );
                        }
                    }
                }
                break;
                case 6:
                DISPLAY_CASH( 1 );
                sub_36179( l_U342 );
                if (IS_VEH_DRIVEABLE( l_U798 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U412 ))
                    {
                        DETACH_OBJECT( l_U412, 1 );
                        ATTACH_OBJECT_TO_CAR( l_U412, l_U798, l_U339, l_U753, l_U756 );
                    }
                    for ( I = 0; I < 18; I++ )
                    {
                        if (I == l_U342)
                        {
                            if (sub_5171( I ))
                            {
                                if (NOT (DOES_OBJECT_EXIST( l_U393[I] )))
                                {
                                    sub_8242( I );
                                }
                                sub_26797( I );
                            }
                            else if (DOES_OBJECT_EXIST( l_U393[I] ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U393[I] ))
                                {
                                    DETACH_OBJECT( l_U393[I], 1 );
                                }
                                DELETE_OBJECT( ref l_U393[I] );
                            }
                        }
                        else if (sub_5171( I ))
                        {
                            if (NOT (DOES_OBJECT_EXIST( l_U393[I] )))
                            {
                                sub_8242( I );
                            }
                            sub_27474( I );
                        }
                        else if (DOES_OBJECT_EXIST( l_U393[I] ))
                        {
                            if (IS_OBJECT_ATTACHED( l_U393[I] ))
                            {
                                DETACH_OBJECT( l_U393[I], 1 );
                            }
                            DELETE_OBJECT( ref l_U393[I] );
                        };;;
                    }
                }
                if (NOT l_U258)
                {
                    if (IS_CONTROL_PRESSED( 2, 78 ))
                    {
                        sub_11125( 3 );
                        l_U258 = 1;
                    }
                }
                if (NOT l_U258)
                {
                    if (IS_CONTROL_PRESSED( 2, 77 ))
                    {
                        l_U258 = 1;
                        if (NOT g_U11221)
                        {
                            ADD_SCORE( sub_702(), (sub_33129( l_U342 )) * -1 );
                            INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_33129( l_U342 ) );
                        }
                        GIVE_WEAPON_TO_CHAR( sub_751(), l_U799, sub_22434( l_U799 ), 0 );
                        SET_CURRENT_CHAR_WEAPON( sub_751(), l_U799, 1 );
                        if (l_U286)
                        {
                            l_U267[l_U342] = 0;
                        }
                        DISPLAY_AMMO( 1 );
                        l_U373 = 7;
                        l_U343 = 0;
                        sub_34352( l_U799 );
                        sub_11125( 3 );
                    }
                }
                if (NOT l_U258)
                {
                    if (IS_CONTROL_PRESSED( 2, 23 ))
                    {
                        sub_35703();
                        if (l_U368 == -1)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U368 );
                        }
                        if (l_U368 == 0)
                        {
                            ;
                        }
                        l_U258 = 1;
                        if (IS_VEH_DRIVEABLE( l_U798 ))
                        {
                            CONTROL_CAR_DOOR( l_U798, 3, 0, 1.00000000 );
                            CONTROL_CAR_DOOR( l_U798, 2, 0, 1.00000000 );
                        }
                        if (g_U11221)
                        {
                            sub_11125( 5 );
                        }
                        else
                        {
                            sub_11125( 4 );
                        }
                    }
                }
                break;
                case 5:
                if (NOT l_U266)
                {
                    if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        FREEZE_CAR_POSITION( l_U798, 0 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        LOCK_CAR_DOORS( l_U798, 3 );
                        if (NOT (IS_CHAR_INJURED( l_U413 )))
                        {
                            CLEAR_CHAR_TASKS( l_U413 );
                            TASK_CLEAR_LOOK_AT( l_U413 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U413, 1 );
                            BLOCK_CHAR_GESTURE_ANIMS( l_U413, 1 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            OPEN_SEQUENCE_TASK( ref l_U414 );
                            TASK_CLEAR_LOOK_AT( 0 );
                            if (l_U292)
                            {
                                TASK_PLAY_ANIM( 0, "close_doors", "MISSGUNVAN", 4.00000000, 0, 0, 0, 0, -1 );
                            }
                            CLOSE_SEQUENCE_TASK( l_U414 );
                            TASK_PERFORM_SEQUENCE( l_U413, l_U414 );
                            CLEAR_SEQUENCE_TASK( l_U414 );
                        }
                    }
                    l_U261 = 0;
                    l_U295 = 0;
                    SETTIMERA( 0 );
                    l_U266 = 1;
                }
                if (IS_VEH_DRIVEABLE( l_U798 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U413 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U413, "MISSGUNVAN", "close_doors" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U413, "MISSGUNVAN", "close_doors", ref fVar9 );
                            if (fVar9 < l_U319)
                            {
                                fVar9 = l_U319;
                            }
                            if (fVar9 > l_U320)
                            {
                                fVar9 = l_U320;
                            }
                            fVar9 -= l_U319;
                            l_U324 = 1.00000000 - ((fVar9 / (l_U320 - l_U319)) * l_U321);
                            if (l_U324 < 0.80000000)
                            {
                                sub_38634( 7 );
                                sub_38634( 8 );
                                sub_38634( 10 );
                            }
                            if (l_U324 < 0.30000000)
                            {
                                if (NOT l_U261)
                                {
                                    sub_38764();
                                    l_U261 = 1;
                                }
                            }
                            if (IS_VEH_DRIVEABLE( l_U798 ))
                            {
                                CONTROL_CAR_DOOR( l_U798, 3, 1, l_U324 );
                                CONTROL_CAR_DOOR( l_U798, 2, 1, l_U324 );
                            }
                        }
                    }
                }
                if (NOT l_U298)
                {
                    if (l_U324 < 0.05000000)
                    {
                        l_U298 = 1;
                    }
                }
                else if (IS_VEH_DRIVEABLE( l_U798 ))
                {
                    CONTROL_CAR_DOOR( l_U798, 3, 0, 0.00000000 );
                    CONTROL_CAR_DOOR( l_U798, 2, 0, 0.00000000 );
                    SHUT_CAR_DOOR( l_U798, 3 );
                    SHUT_CAR_DOOR( l_U798, 2 );
                }
                if (NOT l_U295)
                {
                    if (NOT (IS_CHAR_INJURED( l_U413 )))
                    {
                        if ((TIMERA() > 3000) || (l_U298))
                        {
                            BLOCK_CHAR_GESTURE_ANIMS( l_U413, 0 );
                            l_U295 = 1;
                            PRINTSTRING( "Terry gun van - QUIT_OUT_OF_SCRIPT() - 2 \n" );
                            sub_623();
                        }
                    }
                }
                break;
                case 4:
                if (NOT l_U266)
                {
                    if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        FREEZE_CAR_POSITION( l_U798, 0 );
                    }
                    if (DOES_BLIP_EXIST( l_U257 ))
                    {
                        REMOVE_BLIP( l_U257 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U798 ))
                    {
                        LOCK_CAR_DOORS( l_U798, 3 );
                        if (NOT (IS_CHAR_INJURED( l_U413 )))
                        {
                            CLEAR_CHAR_TASKS( l_U413 );
                            TASK_CLEAR_LOOK_AT( l_U413 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U413, 1 );
                            BLOCK_CHAR_GESTURE_ANIMS( l_U413, 1 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            OPEN_SEQUENCE_TASK( ref l_U414 );
                            TASK_CLEAR_LOOK_AT( 0 );
                            if (l_U292)
                            {
                                TASK_PLAY_ANIM( 0, "close_doors", "MISSGUNVAN", 4.00000000, 0, 0, 0, 0, -1 );
                            }
                            TASK_ENTER_CAR_AS_DRIVER( 0, l_U798, -2 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, 0.00000000, 10.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            TASK_CAR_DRIVE_TO_COORD( 0, l_U798, uVar2._fU0, uVar2._fU4, uVar2._fU8, 20.00000000, 0, 0, 0, 3.00000000, 10 );
                            TASK_CAR_DRIVE_WANDER( 0, l_U798, 20.00000000, 2 );
                            TASK_WANDER_STANDARD( 0 );
                            CLOSE_SEQUENCE_TASK( l_U414 );
                            TASK_PERFORM_SEQUENCE( l_U413, l_U414 );
                            CLEAR_SEQUENCE_TASK( l_U414 );
                        }
                    }
                    l_U261 = 0;
                    l_U295 = 0;
                    SETTIMERA( 0 );
                    l_U266 = 1;
                }
                if (TIMERA() > 1000)
                {
                    sub_1268( 3, "E1GV_H01" );
                    if (g_U10476 == 1)
                    {
                        g_U10476 = 0;
                        l_U373 = 9;
                        if ((NOT (IS_CHAR_INJURED( l_U413 ))) AND (IS_PLAYER_PLAYING( sub_702() )))
                        {
                            TASK_LOOK_AT_CHAR( l_U413, sub_751(), 10000, 0 );
                            TASK_LOOK_AT_CHAR( sub_751(), l_U413, 7000, 0 );
                        }
                        SET_MINIGAME_IN_PROGRESS( 0 );
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U798 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U413 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U413, "MISSGUNVAN", "close_doors" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U413, "MISSGUNVAN", "close_doors", ref fVar9 );
                            if (fVar9 < l_U319)
                            {
                                fVar9 = l_U319;
                            }
                            if (fVar9 > l_U320)
                            {
                                fVar9 = l_U320;
                            }
                            fVar9 -= l_U319;
                            l_U324 = 1.00000000 - ((fVar9 / (l_U320 - l_U319)) * l_U321);
                            if (l_U324 < 0.80000000)
                            {
                                sub_38634( 7 );
                                sub_38634( 8 );
                                sub_38634( 10 );
                            }
                            if (l_U324 < 0.30000000)
                            {
                                if (NOT l_U261)
                                {
                                    sub_38764();
                                    l_U261 = 1;
                                }
                            }
                            if (IS_VEH_DRIVEABLE( l_U798 ))
                            {
                                CONTROL_CAR_DOOR( l_U798, 3, 1, l_U324 );
                                CONTROL_CAR_DOOR( l_U798, 2, 1, l_U324 );
                            }
                        }
                    }
                }
                if (NOT l_U298)
                {
                    if (l_U324 < 0.05000000)
                    {
                        l_U298 = 1;
                    }
                }
                else if (IS_VEH_DRIVEABLE( l_U798 ))
                {
                    CONTROL_CAR_DOOR( l_U798, 3, 0, 0.00000000 );
                    CONTROL_CAR_DOOR( l_U798, 2, 0, 0.00000000 );
                    SHUT_CAR_DOOR( l_U798, 3 );
                    SHUT_CAR_DOOR( l_U798, 2 );
                }
                if (NOT l_U295)
                {
                    if (NOT (IS_CHAR_INJURED( l_U413 )))
                    {
                        if ((TIMERA() > 3000) || (IS_CHAR_IN_ANY_CAR( l_U413 )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U413, 0 );
                            BLOCK_CHAR_GESTURE_ANIMS( l_U413, 0 );
                            l_U295 = 1;
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U413 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U413, sub_751(), 100.00000000, 100.00000000, 100.00000000, 0 )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U413 )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U413 ))
                            {
                                if (NOT (IS_CAR_DEAD( l_U798 )))
                                {
                                    if (IS_CHAR_IN_CAR( l_U413, l_U798 ))
                                    {
                                        if (NOT (IS_CAR_ON_SCREEN( l_U798 )))
                                        {
                                            sub_40483();
                                        }
                                    }
                                }
                                else
                                {
                                    DELETE_CHAR( ref l_U413 );
                                }
                            }
                            else
                            {
                                DELETE_CHAR( ref l_U413 );
                            }
                        }
                    }
                }
                break;
            }
            l_U422 = 3;
            switch (l_U373)
            {
                case 0:
                if (sub_40804( "E1BE_23", ref l_U416, l_U422 ))
                {
                    l_U373 = 11;
                }
                break;
                case 1:
                if (sub_40804( "E1BE_24", ref l_U416, l_U422 ))
                {
                    l_U373 = 11;
                }
                break;
                case 2:
                if (NOT sub_42279())
                {
                    if ((NOT (IS_CHAR_INJURED( l_U413 ))) AND (IS_PLAYER_PLAYING( sub_702() )))
                    {
                        if (NOT g_U11221)
                        {
                            if (sub_40804( "E1BE_25", ref l_U416, l_U422 ))
                            {
                                if (NOT (IS_CHAR_INJURED( sub_751() )))
                                {
                                    TASK_LOOK_AT_CHAR( sub_751(), l_U413, 2000, 0 );
                                }
                                l_U373 = 11;
                            }
                        }
                        else if (sub_40804( "E1BE_FREE", ref l_U416, l_U422 ))
                        {
                            if (NOT (IS_CHAR_INJURED( sub_751() )))
                            {
                                TASK_LOOK_AT_CHAR( sub_751(), l_U413, 2000, 0 );
                            }
                            l_U373 = 11;
                        }
                    }
                    else
                    {
                        l_U373 = 11;
                    }
                }
                break;
                case 3:
                if (sub_40804( "E1BE_26", ref l_U416, l_U422 ))
                {
                    l_U373 = 2;
                }
                break;
                case 4:
                if (sub_40804( "E1BE_27", ref l_U416, l_U422 ))
                {
                    l_U373 = 11;
                }
                break;
                case 5:
                if (sub_40804( "E1BE_28", ref l_U416, l_U422 ))
                {
                    l_U373 = 11;
                }
                break;
                case 6:
                if (sub_40804( "E1BE_29", ref l_U416, l_U422 ))
                {
                    l_U373 = 11;
                }
                break;
                case 7:
                if (sub_40804( "E1BE_30", ref l_U416, l_U422 ))
                {
                    l_U373 = 11;
                }
                break;
                case 8:
                if (sub_40804( "E1BE_31", ref l_U416, l_U422 ))
                {
                    l_U373 = 11;
                    if ((NOT (IS_CHAR_INJURED( l_U413 ))) AND (NOT (IS_CHAR_INJURED( sub_751() ))))
                    {
                        TASK_LOOK_AT_CHAR( l_U413, sub_751(), 2000, 0 );
                    }
                }
                break;
                case 9:
                if (sub_40804( "E1BE_32", ref l_U416, l_U422 ))
                {
                    l_U373 = 10;
                }
                break;
                case 10:
                if (NOT sub_42279())
                {
                    if ((NOT (IS_CHAR_INJURED( l_U413 ))) AND (IS_PLAYER_PLAYING( sub_702() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_751(), l_U413, 15.00000000, 15.00000000, 5.00000000, 0 ))
                        {
                            if (sub_40804( "E1BE_33", ref l_U416, l_U422 ))
                            {
                                l_U373 = 11;
                            }
                        }
                        else
                        {
                            l_U373 = 11;
                        }
                    }
                    else
                    {
                        l_U373 = 11;
                    }
                }
                break;
                case 11:
                if (NOT sub_42279())
                {
                    l_U373 = 99;
                }
                break;
                case 99: break;
            }
            if (NOT (IS_CHAR_INJURED( l_U413 )))
            {
                sub_43185( l_U413 );
            }
        }
        else
        {
            PRINTSTRING( "Terry gun van - QUIT_OUT_OF_SCRIPT() - 3 \n" );
            sub_623();
        }
        sub_47069();
        if (g_U11219)
        {
            PRINTSTRING( "Gun van is being dismissed \n" );
            sub_47368();
            PRINTSTRING( "Terry gun van - QUIT_OUT_OF_SCRIPT() - 6 \n" );
            sub_623();
        }
        if (DOES_CHAR_EXIST( l_U413 ))
        {
            if (IS_CHAR_INJURED( l_U413 ))
            {
                bVar11 = false;
                if (NOT (IS_CHAR_DEAD( l_U413 )))
                {
                    if (NOT (IS_CHAR_DEAD( sub_751() )))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U413, sub_751(), 0 ))
                        {
                            bVar11 = true;
                        }
                    }
                }
                sub_47646( 6, l_U413, 6 );
                sub_1268( 3, "E1GV_H01" );
                if (g_U10476 == 1)
                {
                    g_U10476 = 0;
                    SET_MINIGAME_IN_PROGRESS( 0 );
                }
                if (NOT l_U261)
                {
                    sub_38764();
                    l_U261 = 1;
                }
                if (IS_VEH_DRIVEABLE( l_U798 ))
                {
                    FREEZE_CAR_POSITION( l_U798, 0 );
                    LOCK_CAR_DOORS( l_U798, 3 );
                    CONTROL_CAR_DOOR( l_U798, 3, 0, 0.00000000 );
                    CONTROL_CAR_DOOR( l_U798, 2, 0, 0.00000000 );
                    SHUT_CAR_DOOR( l_U798, 3 );
                    SHUT_CAR_DOOR( l_U798, 2 );
                }
                sub_35882( 1 );
                sub_35703();
                PRINTSTRING( "Terry gun van - QUIT_OUT_OF_SCRIPT() - 4 \n" );
                sub_623();
            }
        }
        else
        {
            PRINTSTRING( "Terry gun van - QUIT_OUT_OF_SCRIPT() - 5 \n" );
            sub_623();
        }
        if ((l_U296) AND (NOT l_U297))
        {
            if (NOT (IS_CAR_DEAD( l_U798 )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U798, l_U795._fU0, l_U795._fU4, l_U795._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                DRAW_LIGHT_WITH_RANGE( uVar2._fU0, uVar2._fU4, uVar2._fU8, l_U370, l_U371, l_U372, l_U335, l_U336 );
            }
        }
        if (l_U297)
        {
            l_U297 = 0;
        }
        else
        {
            WAIT( 0 );
        }
    }
    return;
}

void sub_623()
{
    int I;

    if (g_U11221)
    {
        sub_642();
    }
    else
    {
        sub_1268( 3, "E1GV_H01" );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 729783779 );
        for ( I = 0; I < 18; I++ )
        {
            sub_1644( I, ref l_U799 );
            sub_1991( l_U799, ref l_U374[I] );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U374[I] );
        }
        g_U39179 = -1;
        SWITCH_PED_ROADS_BACK_TO_ORIGINAL( l_U789._fU0, l_U789._fU4, l_U789._fU8, l_U792._fU0, l_U792._fU4, l_U792._fU8 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_2128( 6 ) );
        REMOVE_ANIMS( "MISSGUNVAN" );
        g_U11219 = 0;
        if (g_U10476)
        {
            g_U10476 = 0;
            SET_MINIGAME_IN_PROGRESS( 0 );
        }
        sub_830( l_U413, 1 );
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_642()
{
    g_U39179 = -1;
    g_U11219 = 0;
    if (g_U10476)
    {
        g_U10476 = 0;
        SET_MINIGAME_IN_PROGRESS( 0 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U413 ))) AND (IS_PLAYER_PLAYING( sub_702() )))
    {
        TASK_LOOK_AT_CHAR( l_U413, sub_751(), 2000, 0 );
        TASK_LOOK_AT_CHAR( sub_751(), l_U413, 1000, 0 );
    }
    sub_830( l_U413, 1 );
    g_U11221 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_702()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_751()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_830(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_OBJECT_EXIST( l_U207 ))
        {
            DELETE_OBJECT( ref l_U207 );
            l_U207 = nil;
        }
    }
    else if (DOES_OBJECT_EXIST( l_U207 ))
    {
        if (IS_OBJECT_ATTACHED( l_U207 ))
        {
            DETACH_OBJECT( l_U207, 1 );
        }
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U207 );
        l_U207 = nil;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (HAVE_ANIMS_LOADED( l_U209 ))
        {
            if (((IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U210 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U211 ))) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U212 )))
            {
                CLEAR_CHAR_SECONDARY_TASK( uParam0 );
            }
        }
    }
    if (HAVE_ANIMS_LOADED( l_U209 ))
    {
        REMOVE_ANIMS( l_U209 );
    }
    if (HAS_MODEL_LOADED( -268530289 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
    }
    l_U208 = nil;
    l_U202 = 0.00000000;
    if (l_U196)
    {
        sub_1146( ref l_U206 );
        l_U196 = 0;
    }
    return;
}

void sub_1146(unknown uParam0)
{
    if (sub_1158( (uParam0^) ))
    {
        STOP_PTFX( (uParam0^) );
    }
    (uParam0^) = 0;
    return;
}

int sub_1158(int iParam0)
{
    if (iParam0 > 0)
    {
        return 1;
    }
    return 0;
}

void sub_1268(int iParam0, string sParam1)
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
            if ((g_U10468 == iParam0) AND (l_U96))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U96 = 0;
                if (l_U94)
                {
                    sub_1495();
                    l_U94 = 0;
                }
            }
            if (l_U95)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_702(), 1 );
                l_U95 = 0;
            }
            if (l_U93)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U93 = 0;
            }
        }
    }
    return;
}

void sub_1495()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_1644(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 7;
        break;
        case 1:
        (uParam1^) = 10;
        break;
        case 17:
        (uParam1^) = 11;
        break;
        case 2:
        (uParam1^) = 13;
        break;
        case 3:
        (uParam1^) = 12;
        break;
        case 4:
        (uParam1^) = 16;
        break;
        case 5:
        (uParam1^) = 3;
        break;
        case 6:
        (uParam1^) = 4;
        break;
        case 7:
        (uParam1^) = 15;
        break;
        case 8:
        (uParam1^) = 14;
        break;
        case 9:
        (uParam1^) = 5;
        break;
        case 10:
        (uParam1^) = 55;
        break;
        case 11:
        (uParam1^) = 18;
        break;
        case 12:
        (uParam1^) = 21;
        break;
        case 13:
        (uParam1^) = 22;
        break;
        case 14:
        (uParam1^) = 27;
        break;
        case 15:
        (uParam1^) = 28;
        break;
        case 16:
        (uParam1^) = 26;
        break;
    }
    return;
}

void sub_1991(int iParam0, unknown uParam1)
{
    if (iParam0 == 55)
    {
        (uParam1^) = -1758615024;
    }
    else
    {
        GET_WEAPONTYPE_MODEL( iParam0, uParam1 );
    }
    return;
}

int sub_2128(unknown uParam0)
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
    sub_2427( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_2427(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2550()
{
    int I;

    l_U338 = 0;
    l_U786 = {-0.25000000, -3.20000000, 0.00000000};
    l_U328 = 145.00000000;
    l_U774 = {-0.58000000, -3.13000000, 2.00000000};
    l_U777 = {0.54500000, -3.30000000, 2.00000000};
    l_U322 = 330.00000000;
    l_U323 = 40.00000000;
    l_U780 = {-0.45800000, -2.07000000, 0.99100000};
    l_U783 = {3.26600000, -10.00000000, 0.49800000};
    l_U324 = 1.00000000;
    l_U768 = {0.04000000, -4.33200000, 1.29500000};
    l_U771 = {-0.07300000, -1.63300000, 0.47100000};
    l_U753 = {0.00000000, 0.00000000, 0.19500000};
    l_U756 = {0.00000000, 0.00000000, 0.00000000};
    l_U306 = 0.30000000;
    l_U307 = 0.30000000;
    l_U316 = 0.32000000;
    l_U317 = 0.45700000;
    l_U318 = 1.00000000;
    l_U319 = 0.40000000;
    l_U320 = 0.70000000;
    l_U321 = 1.00000000;
    l_U339 = 0;
    l_U308 = 0.38900000;
    l_U309 = 0.47100000;
    l_U310 = 0.50000000;
    l_U311 = 0.92100000;
    l_U312 = 0.38900000;
    l_U313 = 0.47100000;
    l_U314 = 0.50000000;
    l_U315 = 0.83500000;
    l_U262 = 0;
    l_U343 = 0;
    l_U264 = 1;
    l_U759 = {0.00000000, 0.00000000, 0.01000000};
    l_U762 = {0.00000000, 0.00000000, 0.01000000};
    l_U325 = 0.20000000;
    l_U326 = 0.10000000;
    l_U795 = {0.00000000, -2.35300000, 0.79300000};
    l_U423[0] = {-0.36250000, -2.16270000, -0.19670000};
    l_U478[0] = {-1.57000000, 0.00000000, 1.14100000};
    l_U643[0] = {-0.33380000, -2.16300000, -0.08950000};
    l_U698[0] = {-0.59250000, 0.00000000, 0.22400000};
    l_U423[1] = {-0.46200000, -1.50280000, 0.12700000};
    l_U478[1] = {-1.39200000, 0.00000000, 1.17400000};
    l_U643[1] = {-0.36000000, -1.50300000, 0.18200000};
    l_U698[1] = {-0.44050000, 0.00000000, 0.50820000};
    l_U423[2] = {0.55650000, -1.87220000, 0.06800000};
    l_U478[2] = {-1.43100000, 0.00000000, -1.47180000};
    l_U643[2] = {0.29300000, -2.10930000, 0.09250000};
    l_U698[2] = {-0.43750000, 0.00000000, -0.62670000};
    l_U423[3] = {-0.51200000, -2.17670000, -0.18900000};
    l_U478[3] = {-1.57000000, 0.00000000, 0.34500000};
    l_U643[3] = {-0.47330000, -2.17700000, -0.06320000};
    l_U698[3] = {-0.62250000, 0.00000000, 0.27430000};
    l_U423[4] = {-0.07680000, -0.54650000, 0.79200000};
    l_U478[4] = {0.00000000, 0.02450000, 0.00000000};
    l_U643[4] = {-0.07700000, -0.91330000, 0.74200000};
    l_U698[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U423[5] = {-0.15930000, -2.34210000, -0.18900000};
    l_U478[5] = {1.57000000, 0.00000000, 1.57000000};
    l_U643[5] = {-0.11520000, -2.20500000, -0.10130000};
    l_U698[5] = {0.48500000, 0.00000000, 3.14000000};
    l_U423[6] = {-0.35030000, -1.50800000, -0.16140000};
    l_U478[6] = {0.00000000, 0.00000000, 0.51630000};
    l_U643[6] = {-0.32800000, -1.62430000, -0.06700000};
    l_U698[6] = {-0.46630000, 0.20500000, 0.51600000};
    l_U423[7] = {0.00000000, -0.58960000, 0.39300000};
    l_U478[7] = {0.00000000, 0.00000000, 0.00000000};
    l_U643[7] = {0.00000000, -1.08750000, 0.45270000};
    l_U698[7] = {-0.17780000, 0.00000000, 0.00000000};
    l_U423[8] = {0.06200000, -1.02300000, 0.26340000};
    l_U478[8] = {-1.09570000, -0.04870000, 0.17100000};
    l_U643[8] = {0.06200000, -1.13900000, 0.35600000};
    l_U698[8] = {-0.22680000, 0.00000000, 0.00000000};
    l_U423[9] = {-0.56080000, -1.93870000, -0.07540000};
    l_U478[9] = {0.00000000, 0.00000000, 0.48730000};
    l_U643[9] = {-0.52380000, -2.03450000, 0.06300000};
    l_U698[9] = {-0.23480000, 0.00000000, 0.30580000};
    l_U423[10] = {-0.52960000, -1.31150000, 0.13030000};
    l_U478[10] = {-0.18930000, 0.00000000, 1.14800000};
    l_U643[10] = {-0.38870000, -1.38980000, 0.21770000};
    l_U698[10] = {-0.33350000, 0.00000000, 0.29980000};
    l_U423[11] = {0.48390000, -1.72650000, 0.16830000};
    l_U478[11] = {-1.41200000, -0.01660000, -1.43270000};
    l_U643[11] = {0.47200000, -1.84870000, 0.35100000};
    l_U698[11] = {-0.83400000, -0.01700000, -1.19650000};
    l_U423[12] = {-0.00300000, -1.33400000, 0.10330000};
    l_U478[12] = {-0.56020000, 0.00000000, 0.00000000};
    l_U643[12] = {-0.00300000, -1.79930000, 0.25850000};
    l_U698[12] = {-0.40530000, 0.00000000, 0.00000000};
    l_U423[13] = {-0.20370000, -1.60900000, -0.06940000};
    l_U478[13] = {-0.84600000, 0.00000000, 0.00000000};
    l_U643[13] = {-0.24320000, -1.99600000, 0.10630000};
    l_U698[13] = {-0.55250000, 0.00000000, 0.00000000};
    l_U423[14] = {0.28580000, -2.16650000, -0.15670000};
    l_U478[14] = {-1.57500000, 0.00000000, 0.00000000};
    l_U643[14] = {0.25030000, -2.26550000, -0.03200000};
    l_U698[14] = {-0.57950000, 0.00000000, -0.10370000};
    l_U423[15] = {0.07180000, -2.11820000, -0.18480000};
    l_U478[15] = {-1.57000000, -1.40000000, 1.57000000};
    l_U643[15] = {0.05470000, -2.34630000, -0.04080000};
    l_U698[15] = {-2.12000000, -2.08000000, 1.57000000};
    l_U423[16] = {0.17350000, -1.86920000, -0.20860000};
    l_U478[16] = {0.89420000, 0.07720000, -2.72200000};
    l_U643[16] = {0.17400000, -2.10050000, -0.07600000};
    l_U698[16] = {0.89400000, 0.00000000, -3.14000000};
    l_U423[17] = {-0.21220000, -0.52550000, 0.61730000};
    l_U478[17] = {0.00000000, 0.00000000, 0.00000000};
    l_U643[17] = {-0.18550000, -1.13800000, 0.65950000};
    l_U698[17] = {-0.23830000, 0.00000000, 0.00000000};
    g_U11200[0] = 1;
    g_U11200[1] = 1;
    g_U11200[17] = 1;
    g_U11200[2] = 1;
    g_U11200[3] = 1;
    g_U11200[4] = 1;
    g_U11200[5] = 1;
    g_U11200[6] = 1;
    g_U11200[7] = 1;
    g_U11200[8] = 1;
    g_U11200[9] = 1;
    g_U11200[10] = 1;
    g_U11200[11] = g_U15728[52];
    g_U11200[12] = g_U15728[53];
    g_U11200[13] = g_U15728[54];
    g_U11200[14] = g_U15728[41];
    g_U11200[15] = g_U15728[55];
    g_U11200[16] = 1;
    for ( I = 0; I < 18; I++ )
    {
        l_U267[I] = g_U11200[I];
    }
    l_U342 = sub_5161();
    return;
}

int sub_5161()
{
    if (sub_5171( 14 ))
    {
        return 14;
    }
    else if (sub_5171( 0 ))
    {
        return 0;
    }
    else if (sub_5171( 5 ))
    {
        return 5;
    }
    else if (sub_5171( 16 ))
    {
        return 16;
    }
    else if (sub_5171( 1 ))
    {
        return 1;
    }
    else if (sub_5171( 17 ))
    {
        return 17;
    }
    else if (sub_5171( 13 ))
    {
        return 13;
    }
    else if (sub_5171( 2 ))
    {
        return 2;
    }
    else if (sub_5171( 3 ))
    {
        return 3;
    }
    else if (sub_5171( 4 ))
    {
        return 4;
    }
    else if (sub_5171( 7 ))
    {
        return 7;
    }
    else if (sub_5171( 8 ))
    {
        return 8;
    }
    else if (sub_5171( 6 ))
    {
        return 6;
    }
    else if (sub_5171( 15 ))
    {
        return 15;
    }
    else if (sub_5171( 9 ))
    {
        return 9;
    }
    else if (sub_5171( 10 ))
    {
        return 10;
    }
    else if (sub_5171( 11 ))
    {
        return 11;
    }
    else if (sub_5171( 12 ))
    {
        return 12;
    };;;;;;;;;;;;;;;;;;
    return 0;
}

int sub_5171(unknown uParam0)
{
    if ((l_U267[uParam0]) AND (g_U11200[uParam0]))
    {
        return 1;
    }
    return 0;
}

void sub_5595(int iParam0)
{
    if (NOT l_U90)
    {
        sub_5615();
    }
    if (NOT (iParam0 == -1))
    {
        g_U39179 = iParam0;
    }
    else if ((g_U6) || (g_U7))
    {
        g_U39179 = 7;
    }
    else if (NOT sub_6590())
    {
        g_U39179 = 0;
    };;;
    if ((g_U39179 < 0) || (g_U39179 >= 22))
    {
        g_U39179 = 0;
    }
    return l_U1[g_U39179];
}

void sub_5615()
{
    l_U1[0]._fU0 = {981.24620000, 677.71870000, 25.16520000};
    l_U1[0]._fU12 = 87.58470000;
    l_U1[1]._fU0 = {1193.90000000, 403.70000000, 23.67900000};
    l_U1[1]._fU12 = 180.00000000;
    l_U1[2]._fU0 = {1790.69900000, 524.48700000, 28.38270000};
    l_U1[2]._fU12 = 270.00000000;
    l_U1[3]._fU0 = {804.00000000, 301.20000000, 5.69210000};
    l_U1[3]._fU12 = 274.61480000;
    l_U1[4]._fU0 = {1225.97300000, 33.00000000, 35.53100000};
    l_U1[4]._fU12 = 180.67800000;
    l_U1[5]._fU0 = {802.12500000, -292.07300000, 15.00000000};
    l_U1[5]._fU12 = 90.00000000;
    l_U1[6]._fU0 = {1348.87900000, -114.44550000, 22.69970000};
    l_U1[6]._fU12 = 181.00000000;
    l_U1[7]._fU0 = {-399.40000000, 364.40000000, 15.00000000};
    l_U1[7]._fU12 = 0.00000000;
    l_U1[8]._fU0 = {-505.38070000, 912.21570000, 9.47690000};
    l_U1[8]._fU12 = 0.38190000;
    l_U1[9]._fU0 = {-414.51600000, 1400.21400000, 13.00000000};
    l_U1[9]._fU12 = 0.35210000;
    l_U1[10]._fU0 = {58.77590000, 420.75700000, 14.38820000};
    l_U1[10]._fU12 = 89.27000000;
    l_U1[10]._fU0 = {108.03780000, -294.22020000, 14.60940000};
    l_U1[10]._fU12 = 180.32660000;
    l_U1[10]._fU0 = {-423.25230000, -185.48700000, 10.13280000};
    l_U1[10]._fU12 = 3.02340000;
    l_U1[11]._fU0 = {442.95880000, 211.50000000, 8.32940000};
    l_U1[11]._fU12 = 269.28920000;
    l_U1[12]._fU0 = {941.47850000, 1815.17400000, 20.11440000};
    l_U1[12]._fU12 = 315.96110000;
    l_U1[13]._fU0 = {721.89440000, 1421.56900000, 13.28050000};
    l_U1[13]._fU12 = 270.55690000;
    l_U1[14]._fU0 = {661.19930000, 1003.47200000, 2.17850000};
    l_U1[14]._fU12 = 79.74240000;
    l_U1[15]._fU0 = {139.78970000, 989.38050000, 13.81190000};
    l_U1[15]._fU12 = 88.19730000;
    l_U1[16]._fU0 = {180.45650000, -251.98280000, 12.00170000};
    l_U1[16]._fU12 = 359.50900000;
    l_U1[17]._fU0 = {-1457.18400000, -473.49020000, 2.34640000};
    l_U1[17]._fU12 = 0.63190000;
    l_U1[18]._fU0 = {-1307.58700000, 194.70990000, 7.41500000};
    l_U1[18]._fU12 = 271.86490000;
    l_U1[19]._fU0 = {-1604.29800000, 581.67050000, 24.69900000};
    l_U1[19]._fU12 = 269.34070000;
    l_U1[20]._fU0 = {-1054.01000000, 923.32170000, 12.86440000};
    l_U1[20]._fU12 = 268.74620000;
    l_U1[21]._fU0 = {-1008.63300000, 1525.69100000, 22.44340000};
    l_U1[21]._fU12 = 54.87580000;
    l_U90 = 1;
    return;
}

int sub_6590()
{
    int I;
    int iVar3;
    int J;
    int iVar5;
    int[5] iVar6;
    float[5] fVar12;
    int iVar18;
    float fVar19;
    vector vVar20;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    int iVar26;

    if (NOT l_U90)
    {
        sub_5615();
    }
    array(ref iVar6, 5);
    array(ref fVar12, 5);
    if (IS_PLAYER_PLAYING( sub_702() ))
    {
        GET_CHAR_COORDINATES( sub_751(), ref vVar20.x, ref vVar20.y, ref vVar20.z );
        iVar26 = GET_MAP_AREA_FROM_COORDS( vVar20 );
    }
    else
    {
        return 0;
    }
    for ( I = 0; I < 5; I++ )
    {
        iVar6[I] = -1;
        fVar12[I] = 1E8;
    }
    iVar18 = -1;
    fVar19 = 1E8;
    for ( I = 0; I < 22; I++ )
    {
        if ((GET_MAP_AREA_FROM_COORDS( l_U1[I]._fU0 )) == iVar26)
        {
            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( l_U1[I]._fU0._fU0, l_U1[I]._fU0._fU4, l_U1[I]._fU0._fU8, 5.00000000, 5.00000000, 5.00000000 )))
            {
                uVar23 = {l_U1[I]._fU0 - vVar20};
                for ( iVar3 = 0; iVar3 < 5; iVar3++ )
                {
                    if ((VMAG( uVar23 )) < fVar12[iVar3])
                    {
                        for ( J = 0; J < 5; J++ )
                        {
                            iVar5 = 5 - (J + 1);
                            if ((iVar5 > iVar3) AND (iVar5 > 0))
                            {
                                iVar6[iVar5] = iVar6[iVar5 - 1];
                                fVar12[iVar5] = fVar12[iVar5 - 1];
                            }
                        }
                        iVar6[iVar3] = I;
                        fVar12[iVar3] = VMAG( uVar23 );
                        iVar3 = 5;
                    }
                }
            }
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (iVar6[I] == -1))
        {
            if (fVar12[I] > l_U0)
            {
                if (fVar12[I] < fVar19)
                {
                    iVar18 = iVar6[I];
                    fVar19 = fVar12[I];
                }
            }
        }
    }
    if (iVar18 == -1)
    {
        for ( I = 0; I < 5; I++ )
        {
            if (NOT (iVar6[I] == -1))
            {
                iVar18 = iVar6[I];
                fVar19 = fVar12[I];
            }
        }
    }
    if (NOT (iVar18 == -1))
    {
        g_U39179 = iVar18;
        return 1;
        break;
    }
    return 0;
}

void sub_8088()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_VEH_DRIVEABLE( l_U798 ))
    {
        GET_CAR_COORDINATES( l_U798, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (NOT (DOES_OBJECT_EXIST( l_U412 )))
        {
            CREATE_OBJECT( -967822724, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U412, 1 );
        }
        ATTACH_OBJECT_TO_CAR( l_U412, l_U798, l_U339, l_U753, l_U756 );
        for ( I = 0; I < 18; I++ )
        {
            if (sub_5171( I ))
            {
                sub_8242( I );
            }
        }
        for ( I = 0; I < 18; I++ )
        {
            l_U533[I] = {l_U478[I]};
            l_U588[I] = {l_U423[I]};
        }
    }
    sub_8508();
    return;
}

void sub_8242(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_VEH_DRIVEABLE( l_U798 ))
    {
        GET_CAR_COORDINATES( l_U798, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (NOT (DOES_OBJECT_EXIST( l_U393[uParam0] )))
        {
            CREATE_OBJECT( l_U374[uParam0], uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U393[uParam0], 1 );
        }
        SET_OBJECT_COLLISION( l_U393[uParam0], 0 );
        sub_8367( uParam0 );
    }
    return;
}

void sub_8367(unknown uParam0)
{
    ATTACH_OBJECT_TO_OBJECT( l_U393[uParam0], l_U412, 0, l_U423[uParam0], l_U478[uParam0] );
    return;
}

void sub_8508()
{
    int I;

    for ( I = 0; I < 18; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U393[I] ))
        {
            SET_OBJECT_VISIBLE( l_U393[I], 0 );
        }
    }
    return;
}

void sub_8618()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U332 += fVar2;
    l_U333 += fVar2;
    l_U334 += fVar2;
    return;
}

int sub_8771(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (IS_PLAYER_PLAYING( sub_702() ))
    {
        if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_751(), uParam0, uParam1, 100.00000000, 100.00000000, 0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_9801(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_9812( uParam0 ), sub_2128( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_9919( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_10025( uParam0, (uParam1^) );
    return;
}

int sub_9812(unknown uParam0)
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

void sub_9919(unknown uParam0, unknown uParam1)
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

void sub_10025(unknown uParam0, unknown uParam1)
{
    sub_10037( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_10037(unknown uParam0, int iParam1)
{
    sub_10048( uParam0 );
    if (iParam1 == 22)
    {
        sub_10148( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_10807( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_10048(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_10148(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_751()) AND (g_U15728[19]))
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

void sub_10807(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_10148( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_10148( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_11125(int iParam0)
{
    if (NOT (l_U337 == iParam0))
    {
        l_U297 = 1;
        l_U266 = 0;
        l_U337 = iParam0;
    }
    return;
}

int sub_11204()
{
    if (NOT (IS_PLAYER_CONTROL_ON( sub_702() )))
    {
        if ((ARE_WIDESCREEN_BORDERS_ACTIVE()) AND (sub_11238()))
        {
            return 1;
        }
        if (HAS_CUTSCENE_LOADED())
        {
            if (NOT HAS_CUTSCENE_FINISHED())
            {
                return 1;
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            return 1;
        }
    }
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        return 1;
    }
    return 0;
}

int sub_11238()
{
    if ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_12215()
{
    if (NOT (IS_VEH_DRIVEABLE( l_U798 )))
    {
        return 0;
    }
    else if (IS_CHAR_INJURED( l_U413 ))
    {
        return 0;
    }
    else if (IS_PED_RAGDOLL( l_U413 ))
    {
        return 0;
    }
    else if (IS_CHAR_ON_FIRE( l_U413 ))
    {
        return 0;
    }
    else if (NOT (LOCATE_CAR_2D( l_U798, l_U302._fU0._fU0, l_U302._fU0._fU4, 2.00000000, 2.00000000, 0 )))
    {
        return 0;
    }
    else
    {
        return 1;
    };;;;;
    return 1;
}

void sub_12433()
{
    return sub_12444( 0, 0 );
}

int sub_12444(boolean bParam0, unknown uParam1)
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

int sub_12593(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_702() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_702() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_702() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10499)))
                {
                    if (NOT sub_12689())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_751() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_12433())
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

int sub_12689()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_12816(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_12593( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U95)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_702(), 0 );
                l_U95 = 1;
            }
            g_U10468 = uParam0;
            l_U96 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_13097();
                l_U94 = 1;
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
                            l_U93 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U93)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U93 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_13097()
{
    return sub_12444( 1, 1 );
}

void sub_14936()
{
    int I;

    for ( I = 0; I < 18; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U393[I] ))
        {
            SET_OBJECT_VISIBLE( l_U393[I], 1 );
        }
    }
    return;
}

void sub_15064(unknown uParam0, unknown uParam1)
{
    switch (g_U39179)
    {
        case 0:
        (uParam0^) = {970.80210000, 668.16120000, 25.02470000};
        (uParam1^) = 0.99880000;
        break;
        case 1:
        (uParam0^) = {1203.07300000, 392.07280000, 21.71800000};
        (uParam1^) = 90.16410000;
        break;
        case 2:
        (uParam0^) = {1804.00700000, 532.73410000, 27.63010000};
        (uParam1^) = 179.76700000;
        break;
        case 3:
        (uParam0^) = {821.19220000, 312.32260000, 4.76140000};
        (uParam1^) = 183.95940000;
        break;
        case 4:
        (uParam0^) = {1234.01000000, 22.92430000, 34.82580000};
        (uParam1^) = 86.96900000;
        break;
        case 5:
        (uParam0^) = {780.24460000, -298.45810000, 12.67650000};
        (uParam1^) = 330.17000000;
        break;
        case 6:
        (uParam0^) = {1355.16200000, -137.54990000, 21.55410000};
        (uParam1^) = 93.01810000;
        break;
        case 7:
        (uParam0^) = {-393.31010000, 379.70430000, 13.32800000};
        (uParam1^) = 90.86010000;
        break;
        case 8:
        (uParam0^) = {-514.22280000, 928.72960000, 8.82900000};
        (uParam1^) = 269.26660000;
        break;
        case 9:
        (uParam0^) = {-407.46880000, 1414.62900000, 11.36570000};
        (uParam1^) = 89.33140000;
        break;
        case 10:
        (uParam0^) = {-437.43400000, -168.73870000, 9.01730000};
        (uParam1^) = 268.30150000;
        break;
        case 11:
        (uParam0^) = {464.28290000, 204.91090000, 7.59600000};
        (uParam1^) = 357.84070000;
        break;
        case 12:
        (uParam0^) = {963.02530000, 1845.98900000, 20.86240000};
        (uParam1^) = 177.77260000;
        break;
        case 13:
        (uParam0^) = {735.41320000, 1429.20700000, 13.24840000};
        (uParam1^) = 178.10590000;
        break;
        case 14:
        (uParam0^) = {655.25990000, 994.21520000, 1.92710000};
        (uParam1^) = 61.58810000;
        break;
        case 15:
        (uParam0^) = {132.27410000, 978.43620000, 13.56270000};
        (uParam1^) = 15.24320000;
        break;
        case 16:
        (uParam0^) = {186.59590000, -238.89250000, 10.61700000};
        (uParam1^) = 89.48030000;
        break;
        case 17:
        (uParam0^) = {-1466.92200000, -457.71330000, 1.93410000};
        (uParam1^) = 269.45970000;
        break;
        case 18:
        (uParam0^) = {-1292.30600000, 204.24240000, 7.66750000};
        (uParam1^) = 178.56490000;
        break;
        case 19:
        (uParam0^) = {-1589.63100000, 590.20750000, 24.32560000};
        (uParam1^) = 180.34580000;
        break;
        case 20:
        (uParam0^) = {-1034.47700000, 935.03470000, 12.56840000};
        (uParam1^) = 183.54430000;
        break;
        case 21:
        (uParam0^) = {-1033.85600000, 1526.04600000, 23.28970000};
        (uParam1^) = 324.69980000;
        break;
    }
    return;
}

void sub_16003(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;
    boolean bVar11;

    bVar11 = false;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar10 );
    if (DOES_VEHICLE_EXIST( uVar10 ))
    {
        if (NOT (IS_CAR_DEAD( uVar10 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_751(), uVar10 )))
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
                sub_16265( uVar10 );
                SET_CAR_ON_GROUND_PROPERLY( uVar10 );
            }
        }
    }
    if (bVar11)
    {
        if (DOES_VEHICLE_EXIST( uVar10 ))
        {
            sub_16377( uVar10 );
        }
    }
    return;
}

void sub_16265(unknown uParam0)
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

void sub_16377(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_19307()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_751() )))
    {
        sub_1644( l_U342, ref l_U799 );
        GET_CURRENT_CHAR_WEAPON( sub_751(), ref iVar2 );
        if (NOT (iVar2 == l_U799))
        {
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                DISPLAY_AMMO( 1 );
                SET_CURRENT_CHAR_WEAPON( sub_751(), l_U799, 0 );
                PRINTSTRING( "UPDATE_PLAYERS_WEAPON - player set to new weapontype \n" );
                l_U800 = l_U799;
            }
            else if (NOT (iVar2 == 0))
            {
                SET_CURRENT_CHAR_WEAPON( sub_751(), 0, 1 );
                PRINTSTRING( "UPDATE_PLAYERS_WEAPON - player set to unarmed \n" );
            }
        }
        else if (NOT (iVar2 == 0))
        {
            l_U800 = iVar2;
        }
    }
    return;
}

void sub_19724(unknown uParam0)
{
    sub_1644( uParam0, ref l_U799 );
    if (NOT g_U11221)
    {
        switch (uParam0)
        {
            case 0:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T60", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T01", "" );
            }
            break;
            case 1:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T61", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T02", "" );
            }
            break;
            case 17:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T61B", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T02B", "" );
            }
            break;
            case 3:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T62", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T03", "" );
            }
            break;
            case 2:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T65", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T12", "" );
            }
            break;
            case 4:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T63", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T04", "" );
            }
            break;
            case 5:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T05", "" );
            break;
            case 6:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T06", "" );
            break;
            case 8:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T64", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T11", "" );
            }
            break;
            case 7:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T66", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T13", "" );
            }
            break;
            case 9:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T14", "" );
            break;
            case 10:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T68", "" );
            break;
            case 11:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82", "" );
            }
            break;
            case 12:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T83", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T84", "" );
            }
            break;
            case 13:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T85", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T86", "" );
            }
            break;
            case 14:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T87", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T88", "" );
            }
            break;
            case 15:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T89", "" );
            break;
            case 16:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T90", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T91", "" );
            }
            break;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 0:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T60_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T01_L", "" );
            }
            break;
            case 1:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T61_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T02_L", "" );
            }
            break;
            case 17:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T61B_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T02B_L", "" );
            }
            break;
            case 3:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T62_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T03_L", "" );
            }
            break;
            case 2:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T65_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T12_L", "" );
            }
            break;
            case 4:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T63_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T04_L", "" );
            }
            break;
            case 5:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T05_L", "" );
            break;
            case 6:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T06_L", "" );
            break;
            case 8:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T64_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T11_L", "" );
            }
            break;
            case 7:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T66_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T13_L", "" );
            }
            break;
            case 9:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T14_L", "" );
            break;
            case 10:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T68_L", "" );
            break;
            case 11:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T81_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T82_L", "" );
            }
            break;
            case 12:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T83_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T84_L", "" );
            }
            break;
            case 13:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T85_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T86_L", "" );
            }
            break;
            case 14:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T87_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T88_L", "" );
            }
            break;
            case 15:
            PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T89_L", "" );
            break;
            case 16:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U799 ))
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T90_L", "" );
            }
            else
            {
                PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "E1GV_T91_L", "" );
            }
            break;
        }
    }
    return;
}

void sub_22334(unknown uParam0)
{
    int iVar3;

    if (l_U343 >= 9999)
    {
        if (NOT g_U11221)
        {
            PRINT_HELP_FOREVER( "E1GV_T80" );
        }
        else
        {
            PRINT_HELP_FOREVER( "E1GV_T80_L" );
        }
        DISPLAY_AMMO( 1 );
    }
    else
    {
        iVar3 = l_U343 * (sub_22434( l_U799 ));
        sub_1644( uParam0, ref l_U799 );
        if (iVar3 > (sub_22647( l_U799 )))
        {
            iVar3 = sub_22647( l_U799 );
        }
        if (NOT g_U11221)
        {
            switch (uParam0)
            {
                case 0:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T30" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T31", iVar3 );
                }
                break;
                case 1:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T32" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T33", iVar3 );
                }
                break;
                case 17:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T92" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T93", iVar3 );
                }
                break;
                case 2:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T42" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T43", iVar3 );
                }
                break;
                case 3:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T34" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T35", iVar3 );
                }
                break;
                case 4:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T36" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T37", iVar3 );
                }
                break;
                case 5:
                if (l_U343 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T38" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T47" );
                }
                break;
                case 6:
                if (l_U343 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T39" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T49", iVar3 );
                }
                break;
                case 7:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T44" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T45", iVar3 );
                }
                break;
                case 8:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T40" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T41", iVar3 );
                }
                break;
                case 9:
                if (l_U343 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T46" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T48", iVar3 );
                }
                break;
                case 10:
                if (l_U343 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T67" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T69" );
                }
                break;
                case 11:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95", iVar3 );
                }
                break;
                case 12:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T96" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T97", iVar3 );
                }
                break;
                case 13:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T98" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T99", iVar3 );
                }
                break;
                case 14:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T100" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T101", iVar3 );
                }
                break;
                case 15:
                if (l_U343 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T102" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T103", iVar3 );
                }
                break;
                case 16:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T104" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T105", iVar3 );
                }
                break;
            }
        }
        else
        {
            switch (uParam0)
            {
                case 0:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T30_L" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T31_L", iVar3 );
                }
                break;
                case 1:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T32_L" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T33_L", iVar3 );
                }
                break;
                case 17:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T92_L" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T93_L", iVar3 );
                }
                break;
                case 2:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T42_L" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T43_L", iVar3 );
                }
                break;
                case 3:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T34_L" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T35_L", iVar3 );
                }
                break;
                case 4:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T36_L" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T37_L", iVar3 );
                }
                break;
                case 5:
                if (l_U343 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T38_L" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T47_L" );
                }
                break;
                case 6:
                if (l_U343 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T39_L" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T49_L", iVar3 );
                }
                break;
                case 7:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T44_L" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T45_L", iVar3 );
                }
                break;
                case 8:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T40_L" );
                }
                else if (l_U343 > 0)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T41_L", iVar3 );
                }
                break;
                case 9:
                if (l_U343 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T46_L" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T48_L", iVar3 );
                }
                break;
                case 10:
                if (l_U343 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T67_L" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T69_L" );
                }
                break;
                case 11:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T94_L" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T95_L", iVar3 );
                }
                break;
                case 12:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T96_L" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T97_L", iVar3 );
                }
                break;
                case 13:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T98_L" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T99_L", iVar3 );
                }
                break;
                case 14:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T100_L" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T101_L", iVar3 );
                }
                break;
                case 15:
                if (l_U343 == 1)
                {
                    PRINT_HELP_FOREVER( "E1GV_T102_L" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T103_L", iVar3 );
                }
                break;
                case 16:
                if ((l_U343 == 1) AND (NOT l_U288))
                {
                    PRINT_HELP_FOREVER( "E1GV_T104_L" );
                }
                else if (l_U343 > 1)
                {
                    PRINT_HELP_FOREVER_WITH_NUMBER( "E1GV_T105_L", iVar3 );
                }
                break;
            }
        }
    }
    return;
}

void sub_22434(unknown uParam0)
{
    int Result;

    switch (uParam0)
    {
        case 4:
        case 5:
        case 28:
        case 18:
        case 21:
        Result = 1;
        break;
        case 7:
        case 10:
        case 11:
        case 12:
        case 13:
        case 15:
        case 14:
        case 16:
        case 22:
        case 26:
        case 27:
        GET_MAX_AMMO_IN_CLIP( sub_751(), uParam0, ref Result );
        break;
        default:
        Result = 0;
        break;
    }
    return Result;
}

void sub_22647(unknown uParam0)
{
    unknown Result;

    GET_MAX_AMMO( sub_751(), uParam0, ref Result );
    return Result;
}

void sub_26797(unknown uParam0)
{
    vector vVar3;
    vector vVar6;

    if (DOES_OBJECT_EXIST( l_U393[uParam0] ))
    {
        if (IS_OBJECT_ATTACHED( l_U393[uParam0] ))
        {
            vVar3 = {l_U643[uParam0] - l_U588[uParam0]};
            vVar6 = {l_U698[uParam0] - l_U533[uParam0]};
            if ((VMAG( vVar3 )) > 0.00100000)
            {
                vVar3 = {vVar3 * l_U306};
                l_U588[uParam0] = {l_U588[uParam0] + vVar3};
            }
            else
            {
                l_U765 = {0.00000000, 0.00000000, 0.00000000};
                l_U265 = 1;
            }
            if ((VMAG( vVar6 )) > 0.00100000)
            {
                vVar6 = {vVar6 * l_U307};
                l_U533[uParam0] = {l_U533[uParam0] + vVar6};
            }
            DETACH_OBJECT( l_U393[uParam0], 1 );
            if (l_U264)
            {
                sub_27073( uParam0 );
                l_U588[uParam0] = {l_U588[uParam0] + l_U765};
            }
            ATTACH_OBJECT_TO_OBJECT( l_U393[uParam0], l_U412, 0, l_U588[uParam0], l_U533[uParam0] );
        }
    }
    return;
}

void sub_27073(unknown uParam0)
{
    vector vVar3;

    vVar3 = {l_U759};
    if (l_U265)
    {
        l_U327 += (1.00000000 - l_U327) * l_U325;
    }
    else
    {
        l_U327 -= (1.00000000 - l_U327) * l_U325;
    }
    if (l_U327 > (1.00000000 - l_U326))
    {
        l_U327 = 1.00000000 - l_U326;
        l_U265 = 0;
    }
    if (l_U327 < l_U326)
    {
        l_U327 = l_U326;
        l_U265 = 1;
    }
    l_U765 = {vVar3 * l_U327};
    return;
}

void sub_27474(unknown uParam0)
{
    vector vVar3;
    vector vVar6;

    if (DOES_OBJECT_EXIST( l_U393[uParam0] ))
    {
        if (IS_OBJECT_ATTACHED( l_U393[uParam0] ))
        {
            vVar3 = {l_U423[uParam0] - l_U588[uParam0]};
            vVar6 = {l_U478[uParam0] - l_U533[uParam0]};
            if ((VMAG( vVar3 )) > 0.00500000)
            {
                vVar3 = {vVar3 * l_U306};
                l_U588[uParam0] = {l_U588[uParam0] + vVar3};
            }
            if ((VMAG( vVar6 )) > 0.00500000)
            {
                vVar6 = {vVar6 * l_U307};
                l_U533[uParam0] = {l_U533[uParam0] + vVar6};
            }
            DETACH_OBJECT( l_U393[uParam0], 1 );
            ATTACH_OBJECT_TO_OBJECT( l_U393[uParam0], l_U412, 0, l_U588[uParam0], l_U533[uParam0] );
        }
    }
    return;
}

int sub_27853(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    if ((iVar3 > 32) || ((uParam0) AND (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 ))))
    {
        return 1;
    }
    return 0;
}

int sub_27935(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    if ((iVar3 < 65504) || ((uParam0) AND (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 ))))
    {
        return 1;
    }
    return 0;
}

int sub_28018(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    if ((iVar4 < 65504) || ((uParam0) AND (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 ))))
    {
        return 1;
    }
    return 0;
}

int sub_28101(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    if ((iVar4 > 32) || ((uParam0) AND (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 ))))
    {
        return 1;
    }
    return 0;
}

void sub_28363(unknown uParam0)
{
    if (l_U343 > 0)
    {
        if (l_U286)
        {
            l_U267[l_U342] = 0;
        }
        l_U343 = 0;
    }
    l_U291 = 0;
    l_U289 = 0;
    l_U342 = sub_28432( l_U342, uParam0 );
    if (NOT (IS_CHAR_INJURED( sub_751() )))
    {
        GET_SCRIPT_TASK_STATUS( sub_751(), 80, ref l_U415 );
        if (l_U415 == 7)
        {
            ;
        }
    }
    if (DOES_OBJECT_EXIST( l_U393[l_U342] ))
    {
        PLAY_AUDIO_EVENT_FROM_OBJECT( "JACOB_GUN_CAR_SELECT_WEAPON", l_U393[l_U342] );
    }
    return;
}

void sub_28432(unknown uParam0, unknown uParam1)
{
    int Result;

    Result = uParam0;
    switch (uParam0)
    {
        case 0:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 9;
            l_U344[1] = 6;
            l_U344[2] = 16;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 5;
            l_U344[1] = 4;
            l_U344[2] = 17;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 3;
            l_U344[1] = 9;
            l_U344[2] = 2;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 5;
            l_U344[1] = 15;
            l_U344[2] = 16;
            l_U363 = 3;
            break;
        }
        break;
        case 1:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 10;
            l_U344[1] = 8;
            l_U344[2] = 7;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 9;
            l_U344[1] = 3;
            l_U344[2] = 0;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 11;
            l_U344[1] = 12;
            l_U344[2] = 13;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 12;
            l_U344[1] = 6;
            l_U344[2] = 13;
            l_U363 = 3;
            break;
        }
        break;
        case 2:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 11;
            l_U344[1] = 8;
            l_U344[2] = 7;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 14;
            l_U344[1] = 4;
            l_U344[2] = 17;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 14;
            l_U344[1] = 16;
            l_U344[2] = 13;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 9;
            l_U344[1] = 3;
            l_U344[2] = 0;
            l_U363 = 3;
            break;
        }
        break;
        case 3:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 9;
            l_U344[1] = 1;
            l_U344[2] = 10;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 0;
            l_U344[1] = 4;
            l_U344[2] = 17;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 2;
            l_U344[1] = 14;
            l_U344[2] = 16;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 0;
            l_U344[1] = 5;
            l_U344[2] = 16;
            l_U363 = 3;
            break;
        }
        break;
        case 4:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 5;
            l_U344[1] = 15;
            l_U344[2] = 16;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 17;
            l_U344[1] = 7;
            l_U344[2] = 8;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 10;
            l_U344[1] = 1;
            l_U344[2] = 11;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 11;
            l_U344[1] = 10;
            l_U344[2] = 1;
            l_U363 = 3;
            break;
        }
        break;
        case 5:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 15;
            l_U344[1] = 16;
            l_U344[2] = 13;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 4;
            l_U344[1] = 17;
            l_U344[2] = 7;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 0;
            l_U344[1] = 3;
            l_U344[2] = 9;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 14;
            l_U344[1] = 2;
            l_U344[2] = 3;
            l_U363 = 3;
            break;
        }
        break;
        case 6:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 12;
            l_U344[1] = 1;
            l_U344[2] = 10;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 16;
            l_U344[1] = 15;
            l_U344[2] = 0;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 1;
            l_U344[1] = 9;
            l_U344[2] = 10;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 13;
            l_U344[1] = 12;
            l_U344[2] = 16;
            l_U363 = 3;
            break;
        }
        break;
        case 7:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 17;
            l_U344[1] = 4;
            l_U344[2] = 5;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 8;
            l_U344[1] = 12;
            l_U344[2] = 13;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 10;
            l_U344[1] = 1;
            l_U344[2] = 11;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 11;
            l_U344[1] = 2;
            l_U344[2] = 10;
            l_U363 = 3;
            break;
        }
        break;
        case 8:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 7;
            l_U344[1] = 17;
            l_U344[2] = 4;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 12;
            l_U344[1] = 13;
            l_U344[2] = 16;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 10;
            l_U344[1] = 1;
            l_U344[2] = 11;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 11;
            l_U344[1] = 2;
            l_U344[2] = 10;
            l_U363 = 3;
            break;
        }
        break;
        case 9:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 1;
            l_U344[1] = 10;
            l_U344[2] = 6;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 3;
            l_U344[1] = 0;
            l_U344[2] = 5;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 3;
            l_U344[1] = 2;
            l_U344[2] = 14;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 16;
            l_U344[1] = 0;
            l_U344[2] = 6;
            l_U363 = 3;
            break;
        }
        break;
        case 10:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 7;
            l_U344[1] = 17;
            l_U344[2] = 4;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 1;
            l_U344[1] = 6;
            l_U344[2] = 9;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 11;
            l_U344[1] = 12;
            l_U344[2] = 8;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 8;
            l_U344[1] = 12;
            l_U344[2] = 7;
            l_U363 = 3;
            break;
        }
        break;
        case 11:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 8;
            l_U344[1] = 7;
            l_U344[2] = 17;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 2;
            l_U344[1] = 14;
            l_U344[2] = 13;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 12;
            l_U344[1] = 13;
            l_U344[2] = 1;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 1;
            l_U344[1] = 10;
            l_U344[2] = 12;
            l_U363 = 3;
            break;
        }
        break;
        case 12:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 8;
            l_U344[1] = 7;
            l_U344[2] = 17;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 13;
            l_U344[1] = 6;
            l_U344[2] = 16;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 1;
            l_U344[1] = 10;
            l_U344[2] = 6;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 11;
            l_U344[1] = 2;
            l_U344[2] = 1;
            l_U363 = 3;
            break;
        }
        break;
        case 13:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 12;
            l_U344[1] = 8;
            l_U344[2] = 7;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 16;
            l_U344[1] = 15;
            l_U344[2] = 5;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 6;
            l_U344[1] = 9;
            l_U344[2] = 1;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 11;
            l_U344[1] = 14;
            l_U344[2] = 2;
            l_U363 = 3;
            break;
        }
        break;
        case 14:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 2;
            l_U344[1] = 16;
            l_U344[2] = 11;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 5;
            l_U344[1] = 4;
            l_U344[2] = 17;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 15;
            l_U344[1] = 5;
            l_U344[2] = 16;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 2;
            l_U344[1] = 3;
            l_U344[2] = 9;
            l_U363 = 3;
            break;
        }
        break;
        case 15:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 16;
            l_U344[1] = 13;
            l_U344[2] = 6;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 5;
            l_U344[1] = 4;
            l_U344[2] = 17;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 0;
            l_U344[1] = 3;
            l_U344[2] = 9;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 14;
            l_U344[1] = 2;
            l_U344[2] = 11;
            l_U363 = 3;
            break;
        }
        break;
        case 16:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 13;
            l_U344[1] = 6;
            l_U344[2] = 12;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 15;
            l_U344[1] = 5;
            l_U344[2] = 14;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 9;
            l_U344[1] = 0;
            l_U344[2] = 3;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 14;
            l_U344[1] = 2;
            l_U344[2] = 11;
            l_U363 = 3;
            break;
        }
        break;
        case 17:
        switch (uParam1)
        {
            case 0:
            l_U344[0] = 4;
            l_U344[1] = 5;
            l_U344[2] = 15;
            l_U363 = 3;
            break;
            case 1:
            l_U344[0] = 7;
            l_U344[1] = 8;
            l_U344[2] = 12;
            l_U363 = 3;
            break;
            case 2:
            l_U344[0] = 10;
            l_U344[1] = 1;
            l_U344[2] = 9;
            l_U363 = 3;
            break;
            case 3:
            l_U344[0] = 11;
            l_U344[1] = 2;
            l_U344[2] = 10;
            l_U363 = 3;
            break;
        }
        break;
    }
    Result = sub_32162();
    if (Result == -1)
    {
        Result = uParam0;
    }
    return Result;
}

int sub_32162()
{
    int I;

    for ( I = 0; I < 18; I++ )
    {
        if (sub_5171( l_U344[I] ))
        {
            if (NOT l_U293)
            {
                if (I > l_U363)
                {
                    return -1;
                }
            }
            return l_U344[I];
        }
    }
    return -1;
}

void sub_32774(unknown uParam0)
{
    int Result;

    switch (uParam0)
    {
        case 0:
        Result = 25;
        break;
        case 1:
        Result = 70;
        break;
        case 17:
        Result = 100;
        break;
        case 2:
        Result = 20;
        break;
        case 3:
        Result = 20;
        break;
        case 4:
        Result = 500;
        break;
        case 5:
        Result = 100;
        break;
        case 6:
        Result = 700;
        break;
        case 7:
        Result = 70;
        break;
        case 8:
        Result = 55;
        break;
        case 9:
        Result = 350;
        break;
        case 10:
        Result = 300;
        break;
        case 11:
        Result = 3500;
        break;
        case 12:
        Result = 700;
        break;
        case 13:
        Result = 25;
        break;
        case 14:
        Result = 15;
        break;
        case 15:
        Result = 700;
        break;
        case 16:
        Result = 5;
        break;
    }
    return Result;
}

void sub_33129(unknown uParam0)
{
    int Result;

    switch (uParam0)
    {
        case 0:
        Result = 420;
        break;
        case 1:
        Result = 840;
        break;
        case 17:
        Result = 1500;
        break;
        case 2:
        Result = 1750;
        break;
        case 3:
        Result = 840;
        break;
        case 4:
        Result = 5000;
        break;
        case 5:
        Result = 100;
        break;
        case 6:
        Result = 700;
        break;
        case 7:
        Result = 3500;
        break;
        case 8:
        Result = 2450;
        break;
        case 9:
        Result = 350;
        break;
        case 10:
        Result = 300;
        break;
        case 11:
        Result = 10000;
        break;
        case 12:
        Result = 7000;
        break;
        case 13:
        Result = 3500;
        break;
        case 14:
        Result = 500;
        break;
        case 15:
        Result = 700;
        break;
        case 16:
        Result = 600;
        break;
    }
    return Result;
}

int sub_33517(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    sub_1644( uParam0, ref iVar5 );
    if (NOT (iVar5 == 55))
    {
        GET_WEAPONTYPE_SLOT( iVar5, ref uVar3 );
    }
    GET_CHAR_WEAPON_IN_SLOT( sub_751(), uVar3, ref iVar6, ref iVar4, ref uVar7 );
    if ((iVar6 == 0) || (iVar6 == 55))
    {
        iVar4 = 0;
        return 1;
        break;
    }
    if (iVar6 == iVar5)
    {
        return 1;
        break;
    }
    return 0;
}

int sub_33667(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_702() ))
    {
        switch (uParam0)
        {
            case 3:
            if (HAS_CHAR_GOT_WEAPON( sub_751(), uParam0 ))
            {
                return 1;
            }
            break;
            case 55:
            GET_PLAYER_MAX_ARMOUR( sub_702(), ref iVar4 );
            GET_CHAR_ARMOUR( sub_751(), ref iVar3 );
            if (iVar3 >= iVar4)
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_33811(unknown uParam0)
{
    int iVar3;

    if (HAS_CHAR_GOT_WEAPON( sub_751(), uParam0 ))
    {
        GET_AMMO_IN_CHAR_WEAPON( sub_751(), uParam0, ref iVar3 );
        if (iVar3 >= (sub_22647( uParam0 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_34248(unknown uParam0)
{
    if (sub_33811( uParam0 ))
    {
        SET_CHAR_AMMO( sub_751(), uParam0, sub_22647( uParam0 ) );
    }
    return;
}

void sub_34352(unknown uParam0)
{
    switch (uParam0)
    {
        case 7:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_HANDGUN" );
        break;
        case 10:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_SHOTGUN" );
        break;
        case 11:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_BARETTA" );
        break;
        case 13:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_MP5K" );
        break;
        case 12:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_UZI" );
        break;
        case 16:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_SNIPER_RIFLE" );
        break;
        case 3:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_KNIFE" );
        break;
        case 4:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_GRENADE" );
        break;
        case 15:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_M4" );
        break;
        case 14:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_AK47" );
        break;
        case 5:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_MOLOTOV" );
        break;
        case 55:
        PLAY_AUDIO_EVENT( "BODY_ARMOUR_BUY" );
        break;
        case 18:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_RPG" );
        break;
        case 21:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_GRENADE_LAUNCHER" );
        break;
        case 22:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_ASSAULT_SHOTGUN" );
        break;
        case 28:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_PIPE_BOMB" );
        break;
        case 26:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_SAWN_OFF" );
        break;
        case 27:
        PLAY_AUDIO_EVENT( "WEAPON_PICKUP_CZ75" );
        break;
        default: break;
    }
    return;
}

void sub_35703()
{
    DISPLAY_CASH( 0 );
    DISPLAY_RADAR( 1 );
    if (IS_PLAYER_PLAYING( sub_702() ))
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_751(), 0 );
        TASK_CLEAR_LOOK_AT( sub_751() );
        CLEAR_CHAR_TASKS( sub_751() );
        SET_PLAYER_CONTROL( sub_702(), 1 );
    }
    if (IS_PLAYER_PLAYING( sub_702() ))
    {
        GET_CURRENT_CHAR_WEAPON( sub_751(), ref l_U799 );
        if (l_U799 == 0)
        {
            if (HAS_CHAR_GOT_WEAPON( sub_751(), l_U800 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_751(), l_U800, 1 );
            }
        }
    }
    sub_35882( 0 );
    CLEAR_HELP();
    if (NOT g_U11221)
    {
        CLEAR_PRINTS();
    }
    return;
}

void sub_35882(boolean bParam0)
{
    if (l_U262)
    {
        if (bParam0)
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        else
        {
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 2000 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (DOES_CAM_EXIST( l_U299 ))
        {
            DESTROY_CAM( l_U299 );
        }
        if (DOES_CAM_EXIST( l_U300 ))
        {
            DESTROY_CAM( l_U300 );
        }
        if (DOES_CAM_EXIST( l_U301 ))
        {
            DESTROY_CAM( l_U301 );
        }
        END_CAM_COMMANDS( ref l_U341 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (IS_PLAYER_PLAYING( sub_702() ))
        {
            SET_CAM_BEHIND_PED( sub_751() );
        }
        l_U262 = 0;
    }
    return;
}

void sub_36179(unknown uParam0)
{
    if (NOT g_U11221)
    {
        switch (uParam0)
        {
            case 0:
            PRINT_HELP_FOREVER( "E1GV_T70" );
            break;
            case 1:
            PRINT_HELP_FOREVER( "E1GV_T71" );
            break;
            case 17:
            PRINT_HELP_FOREVER( "E1GV_T71B" );
            break;
            case 2:
            PRINT_HELP_FOREVER( "E1GV_T77" );
            break;
            case 3:
            PRINT_HELP_FOREVER( "E1GV_T72" );
            break;
            case 4:
            PRINT_HELP_FOREVER( "E1GV_T73" );
            break;
            case 5:
            PRINT_HELP_FOREVER( "E1GV_T74" );
            break;
            case 6:
            PRINT_HELP_FOREVER( "E1GV_T75" );
            break;
            case 7:
            PRINT_HELP_FOREVER( "E1GV_T78" );
            break;
            case 8:
            PRINT_HELP_FOREVER( "E1GV_T76" );
            break;
            case 9:
            PRINT_HELP_FOREVER( "E1GV_T79" );
            break;
            case 11:
            PRINT_HELP_FOREVER( "E1GV_T106" );
            break;
            case 12:
            PRINT_HELP_FOREVER( "E1GV_T107" );
            break;
            case 13:
            PRINT_HELP_FOREVER( "E1GV_T108" );
            break;
            case 14:
            PRINT_HELP_FOREVER( "E1GV_T109" );
            break;
            case 15:
            PRINT_HELP_FOREVER( "E1GV_T110" );
            break;
            case 16:
            PRINT_HELP_FOREVER( "E1GV_T111" );
            break;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 0:
            PRINT_HELP_FOREVER( "E1GV_T70_L" );
            break;
            case 1:
            PRINT_HELP_FOREVER( "E1GV_T71_L" );
            break;
            case 17:
            PRINT_HELP_FOREVER( "E1GV_T71B_L" );
            break;
            case 2:
            PRINT_HELP_FOREVER( "E1GV_T77_L" );
            break;
            case 3:
            PRINT_HELP_FOREVER( "E1GV_T72_L" );
            break;
            case 4:
            PRINT_HELP_FOREVER( "E1GV_T73_L" );
            break;
            case 5:
            PRINT_HELP_FOREVER( "E1GV_T74_L" );
            break;
            case 6:
            PRINT_HELP_FOREVER( "E1GV_T75_L" );
            break;
            case 7:
            PRINT_HELP_FOREVER( "E1GV_T78_L" );
            break;
            case 8:
            PRINT_HELP_FOREVER( "E1GV_T76_L" );
            break;
            case 9:
            PRINT_HELP_FOREVER( "E1GV_T79_L" );
            break;
            case 11:
            PRINT_HELP_FOREVER( "E1GV_T106_L" );
            break;
            case 12:
            PRINT_HELP_FOREVER( "E1GV_T107_L" );
            break;
            case 13:
            PRINT_HELP_FOREVER( "E1GV_T108_L" );
            break;
            case 14:
            PRINT_HELP_FOREVER( "E1GV_T109_L" );
            break;
            case 15:
            PRINT_HELP_FOREVER( "E1GV_T110_L" );
            break;
            case 16:
            PRINT_HELP_FOREVER( "E1GV_T111_L" );
            break;
        }
    }
    return;
}

void sub_38634(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( l_U393[uParam0] ))
    {
        if (IS_OBJECT_ATTACHED( l_U393[uParam0] ))
        {
            DETACH_OBJECT( l_U393[uParam0], 1 );
        }
        DELETE_OBJECT( ref l_U393[uParam0] );
    }
    return;
}

void sub_38764()
{
    int I;

    for ( I = 0; I < 18; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U393[I] ))
        {
            if (IS_OBJECT_ATTACHED( l_U393[I] ))
            {
                DETACH_OBJECT( l_U393[I], 1 );
            }
            DELETE_OBJECT( ref l_U393[I] );
        }
    }
    if (DOES_OBJECT_EXIST( l_U412 ))
    {
        DELETE_OBJECT( ref l_U412 );
    }
    return;
}

void sub_40483()
{
    PRINTSTRING( "gun van - DELETE_EVERYTHING() \n" );
    if (DOES_BLIP_EXIST( l_U257 ))
    {
        REMOVE_BLIP( l_U257 );
    }
    if (DOES_CHAR_EXIST( l_U413 ))
    {
        DELETE_CHAR( ref l_U413 );
    }
    if (DOES_VEHICLE_EXIST( l_U798 ))
    {
        DELETE_CAR( ref l_U798 );
    }
    return;
}

int sub_40804(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_40822( "E1BEA", 7 ))
    {
        if (sub_41239( uParam0, uParam1, uParam2, 1 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_40822(unknown uParam0, unknown uParam1)
{
    if (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 ))
    {
        sub_40849( uParam0 );
        if (NOT (IS_CHAR_INJURED( sub_751() )))
        {
            sub_40996( 0, sub_751(), "JOHNNY", 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U413 )))
        {
            sub_40996( 1, l_U413, "TERRY", 0 );
        }
        return 1;
    }
    else if (NOT (IS_STREAMING_ADDITIONAL_TEXT( uParam1 )))
    {
        REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
    }
    return 0;
}

void sub_40849(unknown uParam0)
{
    StrCopy( ref l_U97._fU0, uParam0, 16 );
    sub_40868();
    return;
}

void sub_40868()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U97._fU16[I]._fU0 = nil;
        StrCopy( ref l_U97._fU16[I]._fU4, "", 32 );
        l_U97._fU344[I] = 0;
    }
    return;
}

void sub_40996(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U97._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U97._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_41080( "\n PED NUMBER ", uParam0 );
    sub_41120( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_41080(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_41120(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_41239(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_41262( uParam0, ref l_U97._fU0, uParam1, uParam2, uParam3 );
}

void sub_41262(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_41316( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_41316(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_41338( iParam1 )))
    {
        return 0;
    }
    l_U97._fU384 = 0;
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
    sub_42030( ref g_U8947, ref l_U97 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_41338(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_41415( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_41415( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_41415( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_41415(unknown uParam0)
{
    return;
}

void sub_42030(int iParam0, int iParam1)
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

int sub_42279()
{
    unknown uVar2;

    if (NOT (IS_CHAR_INJURED( sub_751() )))
    {
        if (IS_ANY_SPEECH_PLAYING( sub_751() ))
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U413 )))
    {
        if (IS_ANY_SPEECH_PLAYING( l_U413 ))
        {
            return 1;
        }
    }
    if (NOT (sub_42370( ref l_U416 )))
    {
        return 1;
    }
    return 0;
}

int sub_42370(int iParam0)
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

void sub_43185(unknown uParam0)
{
    float fVar3;
    unknown uVar4;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if ((NOT IS_MINIGAME_IN_PROGRESS()) AND (IS_PED_A_MISSION_PED( uParam0 )))
            {
                GET_FRAME_TIME( ref fVar3 );
                l_U201 += fVar3 * 1000.00000000;
                l_U202 += fVar3 * 1000.00000000;
                if (l_U198)
                {
                    if (HAVE_ANIMS_LOADED( l_U209 ))
                    {
                        if ((((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U210 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U211 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U212 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U213 ))))
                        {
                            l_U201 = 0.00000000;
                            sub_43420( uParam0, 0 );
                            l_U198 = 0;
                        }
                    }
                    else
                    {
                        l_U201 = 0.00000000;
                        sub_43420( uParam0, 0 );
                        l_U198 = 0;
                    }
                }
                switch (l_U205)
                {
                    case 0:
                    if (NOT (sub_43539( uParam0 )))
                    {
                        l_U202 = 0.00000000;
                    }
                    if (l_U195)
                    {
                        sub_44517( uParam0 );
                    }
                    if (l_U202 > 5000.00000000)
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U209 )))
                        {
                            REQUEST_ANIMS( l_U209 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -268530289 )))
                        {
                            REQUEST_MODEL( -268530289 );
                        }
                        if (HAVE_ANIMS_LOADED( l_U209 ))
                        {
                            if ((NOT (IS_CHAR_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))))
                            {
                                sub_43420( uParam0, 1 );
                                TASK_CLEAR_LOOK_AT( uParam0 );
                                TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U210, l_U209, 8.00000000, -1, 3328 );
                                l_U200 = 0;
                                l_U198 = 1;
                                l_U201 = 0.00000000;
                                l_U205 = 1;
                            }
                            else
                            {
                                sub_44517( uParam0 );
                                l_U201 = 0.00000000;
                                l_U205 = 1;
                            }
                        }
                    }
                    else if (HAVE_ANIMS_LOADED( l_U209 ))
                    {
                        REMOVE_ANIMS( l_U209 );
                    }
                    if (HAS_MODEL_LOADED( -268530289 ))
                    {
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
                    }
                    break;
                    case 1:
                    if (sub_43550( uParam0 ))
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U209 )))
                        {
                            REQUEST_ANIMS( l_U209 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -268530289 )))
                        {
                            REQUEST_MODEL( -268530289 );
                        }
                        if (DOES_OBJECT_EXIST( l_U207 ))
                        {
                            if (HAVE_ANIMS_LOADED( l_U209 ))
                            {
                                if (((((((((((((NOT (IS_PED_RAGDOLL( uParam0 ))) AND (NOT (IS_CHAR_DUCKING( uParam0 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U210 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U211 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U212 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U213 )))) AND (NOT (IS_CHAR_GESTURING( uParam0 )))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 )))) AND (NOT (sub_45367( uParam0 )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( uParam0 )))) AND (NOT (IS_SCRIPTED_SPEECH_PLAYING( uParam0 )))) AND (NOT (sub_43711( uParam0 )))) AND (NOT l_U200))
                                {
                                    if ((l_U202 > 60000.00000000) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))))
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_43420( uParam0, 1 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U213, l_U209, 8.00000000, -1, 3328 );
                                        l_U202 = 0.00000000;
                                        l_U198 = 1;
                                    }
                                    else if (l_U201 > 10000.00000000)
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_43420( uParam0, 1 );
                                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U211, l_U209, 8.00000000, -1, 3328 );
                                        }
                                        else
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U212, l_U209, 8.00000000, -1, 3328 );
                                        }
                                        l_U198 = 1;
                                        l_U201 = 0.00000000;
                                    }
                                }
                            }
                            if (NOT l_U200)
                            {
                                if (NOT l_U196)
                                {
                                    if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                                    {
                                        if (HAVE_ANIMS_LOADED( l_U209 ))
                                        {
                                            if (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U210 ))
                                            {
                                                GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U209, l_U210, ref fVar3 );
                                                if (fVar3 > l_U204)
                                                {
                                                    l_U206 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U207, l_U220, l_U223, 1065353216 );
                                                    l_U196 = 1;
                                                }
                                            }
                                            else
                                            {
                                                l_U206 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U207, l_U220, l_U223, 1065353216 );
                                                l_U196 = 1;
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
                                                    if (NOT (sub_45993( uParam0 )))
                                                    {
                                                        l_U206 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U207, l_U220, l_U223, 1065353216 );
                                                        l_U196 = 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else if ((sub_46150( uParam0 )) || (sub_45993( uParam0 )))
                                {
                                    sub_1146( ref l_U206 );
                                    l_U196 = 0;
                                }
                            }
                            if (HAVE_ANIMS_LOADED( l_U209 ))
                            {
                                if (NOT l_U200)
                                {
                                    if (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U213 ))
                                    {
                                        GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U209, l_U213, ref fVar3 );
                                        if (fVar3 > 0.84000000)
                                        {
                                            if (DOES_OBJECT_EXIST( l_U207 ))
                                            {
                                                if (IS_OBJECT_ATTACHED( l_U207 ))
                                                {
                                                    APPLY_FORCE_TO_OBJECT( l_U207, 1, l_U226, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                                                    DETACH_OBJECT( l_U207, 1 );
                                                    l_U200 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U213 )))
                                {
                                    sub_830( uParam0, 1 );
                                    l_U205 = 0;
                                    l_U202 = -20000.00000000;
                                }
                            }
                        }
                        else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            if (HAVE_ANIMS_LOADED( l_U209 ))
                            {
                                if (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U210 ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U209, l_U210, ref fVar3 );
                                    if (NOT (DOES_OBJECT_EXIST( l_U207 )))
                                    {
                                        if (fVar3 > l_U203)
                                        {
                                            sub_44517( uParam0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_44517( uParam0 );
                                }
                            }
                        }
                        else
                        {
                            sub_44517( uParam0 );
                        }
                        if (sub_45367( uParam0 ))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( uParam0 );
                        }
                    }
                    else
                    {
                        l_U205 = 0;
                        l_U202 = 0.00000000;
                    }
                    break;
                }
            }
            else
            {
                sub_830( uParam0, 0 );
                if (l_U199)
                {
                    PRINTSTRING( "REMOVE_CIGGY - 4 \n" );
                }
            }
        }
        else
        {
            sub_830( uParam0, 1 );
            if (l_U199)
            {
                PRINTSTRING( "REMOVE_CIGGY - 5 \n" );
            }
        }
    }
    else
    {
        sub_830( uParam0, 0 );
        if (l_U199)
        {
            PRINTSTRING( "REMOVE_CIGGY - 6 \n" );
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_OBJECT_EXIST( l_U207 ))
        {
            if (HAVE_ANIMS_LOADED( l_U209 ))
            {
                if (((IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U210 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U211 ))) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U209, l_U212 )))
                {
                    BLOCK_CHAR_HEAD_IK( uParam0, 1 );
                }
            }
        }
    }
    return;
}

void sub_43420(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( uParam0, uParam1 );
        BLOCK_CHAR_AMBIENT_ANIMS( uParam0, uParam1 );
    }
    return;
}

int sub_43539(unknown uParam0)
{
    float fVar3;

    if (NOT (sub_43550( uParam0 )))
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
        l_U202 = 999999.90000000;
    }
    if (IS_PLAYER_PLAYING( sub_702() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_751(), uParam0, 50.00000000, 50.00000000, 0 )))
        {
            return 0;
        }
    }
    if (sub_43711( uParam0 ))
    {
        return 0;
    }
    return 1;
}

int sub_43550(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (l_U195)
    {
        return 1;
    }
    if (l_U197)
    {
        sub_830( uParam0, 1 );
        l_U197 = 0;
        if (l_U199)
        {
            PRINTSTRING( "REMOVE_CIGGY - 1 \n" );
        }
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            if ((((((IS_PED_IN_COMBAT( uParam0 )) || (IS_CHAR_IN_MELEE_COMBAT( uParam0 ))) || (IS_CHAR_SHOOTING( uParam0 ))) || (IS_CHAR_ARMED( uParam0, 7 ))) || (sub_43711( uParam0 ))) || (IS_CHAR_IN_WATER( uParam0 )))
            {
                sub_830( uParam0, 1 );
                if (l_U199)
                {
                    PRINTSTRING( "REMOVE_CIGGY - 1B \n" );
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
                    sub_830( uParam0, 0 );
                    if (l_U199)
                    {
                        PRINTSTRING( "REMOVE_CIGGY - 2 \n" );
                    }
                    return 0;
                }
            }
            if (sub_43943( uParam0 ))
            {
                sub_830( uParam0, 0 );
                if (l_U199)
                {
                    PRINTSTRING( "REMOVE_CIGGY - 3 \n" );
                }
                return 0;
            }
        }
    }
    else
    {
        sub_830( uParam0, 1 );
        if (l_U199)
        {
            PRINTSTRING( "REMOVE_CIGGY - 3B \n" );
        }
        return 0;
    }
    return 1;
}

int sub_43711(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 83, ref iVar3 );
        if (NOT (iVar3 == 7))
        {
            return 1;
        }
    }
    return 0;
}

int sub_43943(int iParam0)
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
                if (sub_44007( uVar3 ))
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

int sub_44007(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2784))
    {
        return 1;
    }
    return 0;
}

void sub_44517(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U207 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            CREATE_OBJECT( -268530289, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U207, 1 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar6 );
            if (NOT (iVar6 == 0))
            {
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U207, iVar6 );
            }
        }
        if (l_U195)
        {
            if (IS_OBJECT_ATTACHED( l_U207 ))
            {
                DETACH_OBJECT( l_U207, 1 );
            }
        }
        if (sub_44682( uParam0 ))
        {
            if (IS_OBJECT_ATTACHED( l_U207 ))
            {
                DETACH_OBJECT( l_U207, 1 );
            }
        }
        if (NOT (IS_OBJECT_ATTACHED( l_U207 )))
        {
            ATTACH_OBJECT_TO_PED( l_U207, uParam0, 1232, l_U214, l_U217, 0 );
            l_U208 = uParam0;
        }
        if (NOT (l_U205 == 1))
        {
            l_U205 = 1;
            l_U201 = 18000.00000000;
        }
    }
    return;
}

int sub_44682(int iParam0)
{
    if (iParam0 == l_U208)
    {
        return 1;
    }
    return 0;
}

int sub_45367(unknown uParam0)
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

int sub_45993(unknown uParam0)
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

int sub_46150(unknown uParam0)
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

void sub_47069()
{
    if (l_U258)
    {
        if ((((((((((((((((((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 2 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 3 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 23 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 83 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 82 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 84 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )))) AND (NOT (sub_28018( 1 )))) AND (NOT (sub_28101( 1 )))) AND (NOT (sub_27853( 1 )))) AND (NOT (sub_27935( 1 ))))
        {
            l_U258 = 0;
        }
    }
    return;
}

void sub_47368()
{
    if (NOT g_U11221)
    {
        sub_40483();
    }
    if (g_U11221)
    {
        sub_35703();
    }
    if (NOT g_U11221)
    {
        sub_38764();
    }
    sub_35882( 0 );
    SET_PLAYER_CONTROL( sub_702(), 1 );
    sub_2550();
    if (NOT g_U11221)
    {
        CLEAR_HELP();
        CLEAR_PRINTS();
    }
    return;
}

void sub_47646(unknown uParam0, int iParam1, unknown uParam2)
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
