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
    l_U95 = 0;
    l_U96 = 1;
    l_U97 = 3;
    l_U99 = 0;
    l_U116 = -1;
    l_U120 = 0;
    l_U121 = 1;
    l_U122 = 1;
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
    l_U572 = 1;
    l_U586 = 0;
    l_U587 = 0;
    l_U588 = 0;
    l_U589 = 0;
    l_U590 = 0;
    l_U591 = 0;
    l_U592 = 0;
    l_U593 = 1;
    l_U594 = 0;
    l_U595 = 0;
    l_U627 = 1.00000000;
    l_U628 = 999999.00000000;
    l_U631 = 0;
    l_U632 = 0;
    l_U637 = 0;
    l_U638 = 0;
    l_U652 = -1;
    l_U653 = -1;
    l_U654 = -1;
    l_U655 = -1;
    l_U656 = -1;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_609();
    }
    sub_2213();
    sub_4572( "FCJSAUD" );
    if (IS_PLAYER_PLAYING( sub_909() ))
    {
        sub_4752( 0, sub_4703(), "NIKO", 0 );
    }
    l_U599 = {sub_4908( g_U64918 )};
    REQUEST_MODEL( -498054846 );
    sub_6615( 3 );
    REQUEST_ANIMS( "MISSGUN_CAR" );
    for ( I = 0; I < 11; I++ )
    {
        sub_1031( I, ref l_U942 );
        sub_1284( l_U942, ref l_U657[I] );
        REQUEST_MODEL( l_U657[I] );
    }
    while ((((((((((((((NOT (HAS_MODEL_LOADED( -498054846 ))) || (NOT (sub_6756( 3 )))) || (NOT (HAVE_ANIMS_LOADED( "MISSGUN_CAR" )))) || (NOT (HAS_MODEL_LOADED( l_U657[0] )))) || (NOT (HAS_MODEL_LOADED( l_U657[1] )))) || (NOT (HAS_MODEL_LOADED( l_U657[2] )))) || (NOT (HAS_MODEL_LOADED( l_U657[3] )))) || (NOT (HAS_MODEL_LOADED( l_U657[4] )))) || (NOT (HAS_MODEL_LOADED( l_U657[5] )))) || (NOT (HAS_MODEL_LOADED( l_U657[6] )))) || (NOT (HAS_MODEL_LOADED( l_U657[8] )))) || (NOT (HAS_MODEL_LOADED( l_U657[9] )))) || (NOT (HAS_MODEL_LOADED( l_U657[7] )))) || (NOT (HAS_MODEL_LOADED( l_U657[10] ))))
    {
        WAIT( 0 );
    }
    l_U657[0] = 443141696;
    if (NOT g_U15654[65])
    {
        l_U657[1] = 1015062504;
    }
    else
    {
        l_U657[1] = -259610509;
    }
    l_U657[2] = 1350491501;
    l_U657[3] = -97968031;
    l_U657[4] = 1941123364;
    l_U657[5] = -1658159368;
    l_U657[6] = 1343754678;
    l_U657[8] = -2139514995;
    l_U657[7] = 61597377;
    l_U657[9] = -2049396802;
    l_U657[10] = -1758615024;
    while (true)
    {
        WAIT( 0 );
        sub_7208();
        sub_7287( l_U683 );
        if (NOT (l_U631 == 4))
        {
            if (IS_VEH_DRIVEABLE( l_U941 ))
            {
                GET_CAR_COORDINATES( l_U941, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if (NOT (sub_20701( uVar2._fU0, uVar2._fU4, uVar2._fU8, 15.00000000 )))
                {
                    CLEAR_AREA_OF_CHARS( uVar2._fU0, uVar2._fU4, uVar2._fU8, 15.00000000 );
                }
            }
        }
        if (IS_PLAYER_PLAYING( sub_909() ))
        {
            if ((l_U566) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
            {
                if (IS_VEH_DRIVEABLE( l_U941 ))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, 0.00000000, 5.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    GET_CAR_HEADING( l_U941, ref fVar8 );
                    fVar8 += 180.00000000;
                    SET_CHAR_COORDINATES( sub_4703(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    SET_CHAR_HEADING( sub_4703(), fVar8 );
                    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                    l_U566 = 0;
                }
            }
            switch (l_U631)
            {
                case 0:
                sub_21078( ref l_U941 );
                SET_CAR_HEADING( l_U941, l_U599._fU12 );
                SET_CAR_COORDINATES( l_U941, l_U599._fU0._fU0, l_U599._fU0._fU4, l_U599._fU0._fU8 );
                LOCK_CAR_DOORS( l_U941, 3 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, -1.31800000, -0.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, -15.00000000, -15.00000000, -15.00000000, ref l_U935._fU0, ref l_U935._fU4, ref l_U935._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, 15.00000000, 15.00000000, 15.00000000, ref l_U938._fU0, ref l_U938._fU4, ref l_U938._fU8 );
                if (l_U935._fU0 > l_U938._fU0)
                {
                    fVar9 = l_U938._fU0;
                    l_U938._fU0 = l_U935._fU0;
                    l_U935._fU0 = fVar9;
                }
                if (l_U935._fU4 > l_U938._fU4)
                {
                    fVar9 = l_U938._fU4;
                    l_U938._fU4 = l_U935._fU4;
                    l_U935._fU4 = fVar9;
                }
                if (l_U935._fU8 > l_U938._fU8)
                {
                    fVar9 = l_U938._fU8;
                    l_U938._fU8 = l_U935._fU8;
                    l_U935._fU8 = fVar9;
                }
                SWITCH_PED_PATHS_OFF( l_U935._fU0, l_U935._fU4, l_U935._fU8, l_U938._fU0, l_U938._fU4, l_U938._fU8 );
                sub_21697( 3, ref l_U683, uVar2._fU0, uVar2._fU4, uVar2._fU8, l_U599._fU12 + 25.00000000 );
                SET_PED_DIES_WHEN_INJURED( l_U683, 1 );
                ADD_BLIP_FOR_COORD( l_U599._fU0._fU0, l_U599._fU0._fU4, l_U599._fU0._fU8, ref l_U564 );
                CHANGE_BLIP_SPRITE( l_U564, 26 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U683, 1 );
                sub_4752( 1, l_U683, "JACOB", 0 );
                SET_AMBIENT_VOICE_NAME( l_U683, "JACOB" );
                l_U567 = 1;
                SETTIMERA( 0 );
                sub_23479( 1 );
                break;
                case 1:
                if (l_U567)
                {
                    if (IS_VEH_DRIVEABLE( l_U941 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U683 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, -1.31800000, -0.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U941, ref fVar8 );
                            fVar8 += 25.00000000;
                            SET_CHAR_COORDINATES( l_U683, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( l_U683, fVar8 );
                        }
                    }
                    l_U567 = 0;
                }
                if (IS_VEH_DRIVEABLE( l_U941 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U683 )))
                    {
                        if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U941, sub_4703() ))
                        {
                            if (l_U652 == -1)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U652 );
                            }
                            if (l_U652 == 0)
                            {
                                if (sub_25538( "FCJ_SPCD", ref l_U686, 6, 1 ))
                                {
                                    CLEAR_CHAR_TASKS( l_U683 );
                                    OPEN_SEQUENCE_TASK( ref l_U684 );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4703() );
                                    CLOSE_SEQUENCE_TASK( l_U684 );
                                    TASK_PERFORM_SEQUENCE( l_U683, l_U684 );
                                    CLEAR_SEQUENCE_TASK( l_U684 );
                                    CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U941 );
                                    l_U652 = -1;
                                }
                            }
                            else if (sub_25538( "FCJ_MESS", ref l_U686, 6, 1 ))
                            {
                                CLEAR_CHAR_TASKS( l_U683 );
                                OPEN_SEQUENCE_TASK( ref l_U684 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4703() );
                                CLOSE_SEQUENCE_TASK( l_U684 );
                                TASK_PERFORM_SEQUENCE( l_U683, l_U684 );
                                CLEAR_SEQUENCE_TASK( l_U684 );
                                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U941 );
                                l_U652 = -1;
                            }
                        }
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U683, sub_4703(), 0 ))
                        {
                            if (l_U653 == -1)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                            }
                            if (l_U653 == 0)
                            {
                                if (sub_25538( "FCJ_SPINJ", ref l_U686, 6, 1 ))
                                {
                                    CLEAR_CHAR_TASKS( l_U683 );
                                    OPEN_SEQUENCE_TASK( ref l_U684 );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4703() );
                                    CLOSE_SEQUENCE_TASK( l_U684 );
                                    TASK_PERFORM_SEQUENCE( l_U683, l_U684 );
                                    CLEAR_SEQUENCE_TASK( l_U684 );
                                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U683 );
                                    l_U653 = -1;
                                }
                            }
                            else if (sub_25538( "FCJ_MESS", ref l_U686, 6, 1 ))
                            {
                                CLEAR_CHAR_TASKS( l_U683 );
                                OPEN_SEQUENCE_TASK( ref l_U684 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4703() );
                                CLOSE_SEQUENCE_TASK( l_U684 );
                                TASK_PERFORM_SEQUENCE( l_U683, l_U684 );
                                CLEAR_SEQUENCE_TASK( l_U684 );
                                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U941 );
                                l_U653 = -1;
                            }
                        }
                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U683, sub_4703(), 10.00000000, 10.00000000, 3.00000000, 0 ))
                        {
                            if (l_U628 > 30000.00000000)
                            {
                                if (l_U654 == -1)
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                }
                                if (l_U654 == 0)
                                {
                                    if (sub_25538( "FCJ_SPGR", ref l_U686, 6, 1 ))
                                    {
                                        CLEAR_CHAR_TASKS( l_U683 );
                                        OPEN_SEQUENCE_TASK( ref l_U684 );
                                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4703() );
                                        CLOSE_SEQUENCE_TASK( l_U684 );
                                        TASK_PERFORM_SEQUENCE( l_U683, l_U684 );
                                        CLEAR_SEQUENCE_TASK( l_U684 );
                                        l_U628 = 0.00000000;
                                        l_U654 = -1;
                                    }
                                }
                                else if (sub_25538( "FCJ_GREET", ref l_U686, 6, 1 ))
                                {
                                    CLEAR_CHAR_TASKS( l_U683 );
                                    OPEN_SEQUENCE_TASK( ref l_U684 );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_4703() );
                                    CLOSE_SEQUENCE_TASK( l_U684 );
                                    TASK_PERFORM_SEQUENCE( l_U683, l_U684 );
                                    CLEAR_SEQUENCE_TASK( l_U684 );
                                    l_U628 = 0.00000000;
                                    l_U654 = -1;
                                }
                            }
                        }
                    }
                }
                if (sub_27374())
                {
                    iVar12 = 0;
                    if (((IS_VEH_DRIVEABLE( l_U941 )) AND (NOT (IS_CHAR_INJURED( l_U683 )))) AND (sub_27540()))
                    {
                        GET_CAR_COORDINATES( l_U941, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_4703(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 6.00000000, 6.00000000, 2.00000000, 0 ))
                        {
                            iVar12 = 1;
                        }
                    }
                    if ((iVar12) AND (sub_27700( 3, 0 )))
                    {
                        if (sub_27922( 3, "JGC_H01", 0 ))
                        {
                            fVar9 = 0.00000000;
                            if (NOT (IS_CHAR_INJURED( l_U683 )))
                            {
                                UNLOCK_RAGDOLL( l_U683, 0 );
                            }
                            sub_25538( "FCJ_STUFF", ref l_U686, 6, 1 );
                            sub_23479( 2 );
                            l_U565 = 1;
                            g_U9180 = 1;
                            SET_MINIGAME_IN_PROGRESS( 1 );
                            break;
                        }
                    }
                    else
                    {
                        sub_629( 3, "JGC_H01" );
                    }
                }
                else if (l_U655 == -1)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U655 );
                }
                if (l_U655 == 0)
                {
                    if (sub_25538( "FCJ_SPB", ref l_U686, 6, 1 ))
                    {
                        sub_23479( 4 );
                        l_U655 = -1;
                    }
                }
                else if (sub_25538( "FCJ_GO", ref l_U686, 6, 1 ))
                {
                    sub_23479( 4 );
                    l_U655 = -1;
                };;;
                if (l_U631 == 1)
                {
                    if (IS_PLAYER_PLAYING( sub_909() ))
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_4703(), l_U599._fU0._fU0, l_U599._fU0._fU4, l_U599._fU0._fU8, 15.00000000, 15.00000000, 5.00000000, 0 ))
                        {
                            if (IS_WANTED_LEVEL_GREATER( sub_909(), 0 ))
                            {
                                if (l_U655 == -1)
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U655 );
                                }
                                if (l_U655 == 0)
                                {
                                    if (sub_25538( "FCJ_SPB", ref l_U686, 6, 1 ))
                                    {
                                        sub_23479( 4 );
                                        l_U655 = -1;
                                    }
                                }
                                else if (sub_25538( "FCJ_GO", ref l_U686, 6, 1 ))
                                {
                                    sub_23479( 4 );
                                    l_U655 = -1;
                                }
                            }
                        }
                    }
                }
                if (l_U631 == 1)
                {
                    if (IS_PLAYER_PLAYING( sub_909() ))
                    {
                        if (TIMERA() > 300000)
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_4703(), l_U599._fU0._fU0, l_U599._fU0._fU4, 100.00000000, 100.00000000, 0 )))
                            {
                                PRINT( "JGCGONE", 7500, 1 );
                                sub_23479( 4 );
                            }
                        }
                    }
                }
                break;
                case 2:
                switch (l_U632)
                {
                    case 0:
                    bVar11 = false;
                    if (IS_VEH_DRIVEABLE( l_U941 ))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U920._fU0 - 0.30000000, l_U920._fU4, l_U920._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        if (IS_PLAYER_PLAYING( sub_909() ))
                        {
                            if (LOCATE_CHAR_ON_FOOT_3D( sub_4703(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 3.00000000, 3.00000000, 3.00000000, 0 ))
                            {
                                bVar11 = true;
                            }
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U683 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U683, "MISSGUN_CAR", "open_trunk" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U683, "MISSGUN_CAR", "open_trunk", ref fVar9 );
                            if (fVar9 >= l_U613)
                            {
                                bVar11 = true;
                            }
                        }
                    }
                    if (TIMERA() > 7000)
                    {
                        bVar11 = true;
                    }
                    if (bVar11)
                    {
                        BEGIN_CAM_COMMANDS( ref l_U636 );
                        l_U569 = 1;
                        CREATE_CAM( 14, ref l_U596 );
                        if (IS_VEH_DRIVEABLE( l_U941 ))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, 0.00000000, 10.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            sub_29561( ref uVar5, ref fVar8 );
                            sub_30500( uVar2, 10.00000000, uVar5, fVar8 );
                        }
                        if (IS_VEH_DRIVEABLE( l_U941 ))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, 0.00000000, -7.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000, 0, 1, ref uVar13 );
                            if (DOES_VEHICLE_EXIST( uVar13 ))
                            {
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, 0.00000000, 3.00000000, 0.00000000, ref l_U599._fU0._fU0, ref l_U599._fU0._fU4, ref l_U599._fU0._fU8 );
                                SET_CAR_HEADING( l_U941, l_U599._fU12 );
                                SET_CAR_COORDINATES( l_U941, l_U599._fU0._fU0, l_U599._fU0._fU4, l_U599._fU0._fU8 );
                            }
                        }
                        if (IS_VEH_DRIVEABLE( l_U941 ))
                        {
                            ATTACH_CAM_TO_VEHICLE( l_U596, l_U941 );
                            SET_CAM_ATTACH_OFFSET( l_U596, l_U926._fU0, l_U926._fU4, l_U926._fU8 );
                            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U596, 1 );
                            POINT_CAM_AT_VEHICLE( l_U596, l_U941 );
                            SET_CAM_POINT_OFFSET( l_U596, l_U929._fU0, l_U929._fU4, l_U929._fU8 );
                            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U596, 1 );
                        }
                        SET_CAM_ACTIVE( l_U596, 1 );
                        SET_CAM_PROPAGATE( l_U596, 1 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        l_U573 = 0;
                        l_U632 = 1;
                    }
                    break;
                    case 1:
                    if (IS_VEH_DRIVEABLE( l_U941 ))
                    {
                        SET_CAR_HEADING( l_U941, l_U599._fU12 );
                        SET_CAR_COORDINATES( l_U941, l_U599._fU0._fU0, l_U599._fU0._fU4, l_U599._fU0._fU8 );
                        FREEZE_CAR_POSITION( l_U941, 1 );
                        if (NOT (IS_CHAR_INJURED( l_U683 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U920._fU0, l_U920._fU4, l_U920._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U941, ref fVar8 );
                            fVar8 += l_U619;
                            SET_CHAR_COORDINATES( l_U683, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( l_U683, fVar8 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U926._fU0, l_U926._fU4, l_U926._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            TASK_PLAY_ANIM( l_U683, "open_trunk", "MISSGUN_CAR", 4.00000000, 0, 0, 0, 0, -1 );
                        }
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U923._fU0, l_U923._fU4 - 1.00000000, l_U923._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        GET_CAR_HEADING( l_U941, ref fVar8 );
                        SET_CHAR_COORDINATES_DONT_WARP_GANG( sub_4703(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        SET_CHAR_HEADING( sub_4703(), fVar8 );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U923._fU0, l_U923._fU4 - 0.20000000, l_U923._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        fVar8 += l_U620;
                        OPEN_SEQUENCE_TASK( ref l_U684 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, -1 );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U926._fU0, l_U926._fU4, l_U926._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        TASK_TURN_CHAR_TO_FACE_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        CLOSE_SEQUENCE_TASK( l_U684 );
                        TASK_PERFORM_SEQUENCE( sub_4703(), l_U684 );
                        CLEAR_SEQUENCE_TASK( l_U684 );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U926._fU0, l_U926._fU4, l_U926._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        SETTIMERA( 0 );
                        if (IS_VEH_DRIVEABLE( l_U941 ))
                        {
                            FREEZE_CAR_POSITION( l_U941, 0 );
                        }
                        sub_25538( "FCJ_TRUNK", ref l_U686, 6, 1 );
                        l_U632 = 2;
                        DISPLAY_RADAR( 0 );
                    }
                    break;
                    case 2:
                    if (NOT l_U573)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U683 )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U683, "MISSGUN_CAR", "open_trunk" ))
                            {
                                SET_CHAR_ANIM_CURRENT_TIME( l_U683, "MISSGUN_CAR", "open_trunk", l_U613 );
                                l_U573 = 1;
                            }
                        }
                    }
                    if (TIMERA() < 2000)
                    {
                        if (DOES_CAM_EXIST( l_U596 ))
                        {
                            SET_CAM_ATTACH_OFFSET( l_U596, l_U926._fU0, l_U926._fU4, l_U926._fU8 );
                            SET_CAM_POINT_OFFSET( l_U596, l_U929._fU0, l_U929._fU4, l_U929._fU8 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U683 )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U683, "MISSGUN_CAR", "open_trunk" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U683, "MISSGUN_CAR", "open_trunk", ref fVar9 );
                                if (fVar9 < l_U613)
                                {
                                    fVar9 = l_U613;
                                }
                                if (fVar9 > l_U614)
                                {
                                    fVar9 = l_U614;
                                }
                                fVar9 -= l_U613;
                                l_U621 = (fVar9 / (l_U614 - l_U613)) * l_U615;
                                if (IS_VEH_DRIVEABLE( l_U941 ))
                                {
                                    if (NOT l_U590)
                                    {
                                        POP_CAR_BOOT( l_U941 );
                                        l_U590 = 1;
                                    }
                                    CONTROL_CAR_DOOR( l_U941, 5, 1, l_U621 );
                                }
                            }
                        }
                    }
                    else if (IS_VEH_DRIVEABLE( l_U941 ))
                    {
                        CONTROL_CAR_DOOR( l_U941, 5, 1, 1.00000000 );
                    }
                    SETTIMERA( 0 );
                    l_U632 = 3;;
                    break;
                    case 3:
                    if (IS_VEH_DRIVEABLE( l_U941 ))
                    {
                        CONTROL_CAR_DOOR( l_U941, 5, 1, 1.00000000 );
                    }
                    if (IS_VEH_DRIVEABLE( l_U941 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U683 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U920._fU0, l_U920._fU4, l_U920._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U941, ref fVar8 );
                            fVar8 += l_U619;
                            SET_CHAR_COORDINATES( l_U683, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( l_U683, fVar8 );
                        }
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U923._fU0, l_U923._fU4, l_U923._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        GET_CAR_HEADING( l_U941, ref fVar8 );
                        fVar8 += l_U620;
                        CLEAR_AREA( uVar2._fU0, uVar2._fU4, uVar2._fU8, 4.00000000, 1 );
                        SET_CHAR_COORDINATES_DONT_WARP_GANG( sub_4703(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        SET_CHAR_HEADING( sub_4703(), fVar8 );
                    }
                    l_U926 = {l_U914};
                    l_U929 = {l_U917};
                    if (DOES_CAM_EXIST( l_U596 ))
                    {
                        SET_CAM_ATTACH_OFFSET( l_U596, l_U926._fU0, l_U926._fU4, l_U926._fU8 );
                        SET_CAM_POINT_OFFSET( l_U596, l_U929._fU0, l_U929._fU4, l_U929._fU8 );
                    }
                    SET_CAM_ACTIVE( l_U596, 1 );
                    SET_CAM_PROPAGATE( l_U596, 0 );
                    l_U926 = {l_U914};
                    l_U929 = {l_U917};
                    l_U626 = 33.50000000;
                    CREATE_CAM( 14, ref l_U597 );
                    if (IS_VEH_DRIVEABLE( l_U941 ))
                    {
                        ATTACH_CAM_TO_VEHICLE( l_U597, l_U941 );
                        SET_CAM_ATTACH_OFFSET( l_U597, l_U926._fU0, l_U926._fU4, l_U926._fU8 );
                        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U597, 1 );
                        POINT_CAM_AT_VEHICLE( l_U597, l_U941 );
                        SET_CAM_POINT_OFFSET( l_U597, l_U929._fU0, l_U929._fU4, l_U929._fU8 );
                        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U597, 1 );
                        SET_CAM_FOV( l_U597, l_U626 );
                    }
                    SET_CAM_ACTIVE( l_U597, 1 );
                    SET_CAM_PROPAGATE( l_U597, 0 );
                    CREATE_CAM( 3, ref l_U598 );
                    SET_CAM_INTERP_STYLE_DETAILED( l_U598, 1, 1, 1, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U598, l_U596, l_U597, 2000, 0 );
                    SET_CAM_ACTIVE( l_U598, 1 );
                    SET_CAM_PROPAGATE( l_U598, 1 );
                    if (NOT (IS_CHAR_INJURED( l_U683 )))
                    {
                        CLEAR_CHAR_TASKS( l_U683 );
                    }
                    SETTIMERA( 0 );
                    l_U632 = 4;
                    break;
                    case 4:
                    if (IS_VEH_DRIVEABLE( l_U941 ))
                    {
                        l_U592 = 1;
                        CONTROL_CAR_DOOR( l_U941, 5, 1, 1.00000000 );
                    }
                    if ((NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U598 ))) || (TIMERA() > 2500))
                    {
                        DESTROY_CAM( l_U598 );
                        DESTROY_CAM( l_U597 );
                        l_U926 = {l_U914};
                        l_U929 = {l_U917};
                        l_U626 = 33.50000000;
                        if (DOES_CAM_EXIST( l_U596 ))
                        {
                            SET_CAM_ATTACH_OFFSET( l_U596, l_U926._fU0, l_U926._fU4, l_U926._fU8 );
                            SET_CAM_POINT_OFFSET( l_U596, l_U929._fU0, l_U929._fU4, l_U929._fU8 );
                            SET_CAM_FOV( l_U596, l_U626 );
                        }
                        SET_CAM_ACTIVE( l_U596, 1 );
                        SET_CAM_PROPAGATE( l_U596, 1 );
                        l_U632 = 5;
                    }
                    break;
                    case 5:
                    if (IS_VEH_DRIVEABLE( l_U941 ))
                    {
                        CONTROL_CAR_DOOR( l_U941, 5, 1, 1.00000000 );
                    }
                    sub_23479( 3 );
                    break;
                }
                break;
                case 3:
                DISPLAY_CASH( 1 );
                DISPLAY_RADAR( 1 );
                sub_33795();
                if (NOT l_U574[l_U637])
                {
                    l_U637 = sub_4273();
                }
                if (IS_VEH_DRIVEABLE( l_U941 ))
                {
                    CONTROL_CAR_DOOR( l_U941, 5, 1, 1.00000000 );
                }
                if (NOT l_U591)
                {
                    if (NOT l_U589)
                    {
                        sub_34193( l_U637 );
                    }
                    else
                    {
                        sub_34954( l_U637 );
                    }
                }
                else
                {
                    PRINT_HELP_FOREVER( "JGC_H05" );
                }
                if (l_U591)
                {
                    if (TIMERA() > 5000)
                    {
                        l_U591 = 0;
                    }
                }
                if (l_U589)
                {
                    if (TIMERB() > 5000)
                    {
                        l_U589 = 0;
                        l_U638 = 0;
                    }
                }
                if (l_U567)
                {
                    if (IS_VEH_DRIVEABLE( l_U941 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U683 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U920._fU0, l_U920._fU4, l_U920._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                            GET_CAR_HEADING( l_U941, ref fVar8 );
                            fVar8 += l_U619;
                            SET_CHAR_COORDINATES( l_U683, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( l_U683, fVar8 );
                        }
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U923._fU0, l_U923._fU4, l_U923._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        GET_CAR_HEADING( l_U941, ref fVar8 );
                        fVar8 += l_U620;
                        SET_CHAR_COORDINATES_DONT_WARP_GANG( sub_4703(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        SET_CHAR_HEADING( sub_4703(), fVar8 );
                    }
                    l_U567 = 0;
                }
                else if (IS_VEH_DRIVEABLE( l_U941 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U683 )))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U920._fU0, l_U920._fU4, l_U920._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                        if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U683, uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.10000000, 0.10000000, 2.00000000, 0 )))
                        {
                            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.10000000, 0.10000000, 2.00000000 )))
                            {
                                l_U567 = 1;
                            }
                        }
                    }
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U923._fU0, l_U923._fU4, l_U923._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU8 );
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_4703(), uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.10000000, 0.10000000, 2.00000000, 0 )))
                    {
                        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar2._fU0, uVar2._fU4, uVar2._fU8, 0.10000000, 0.10000000, 2.00000000 )))
                        {
                            l_U567 = 1;
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U941 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U681 ))
                    {
                        DETACH_OBJECT( l_U681, 1 );
                        ATTACH_OBJECT_TO_CAR( l_U681, l_U941, l_U633, l_U896, l_U902 );
                    }
                    if (IS_OBJECT_ATTACHED( l_U682 ))
                    {
                        DETACH_OBJECT( l_U682, 1 );
                        ATTACH_OBJECT_TO_CAR( l_U682, l_U941, l_U634, l_U899, l_U902 );
                    }
                    for ( I = 0; I < 11; I++ )
                    {
                        if (I == l_U637)
                        {
                            if (sub_4283( I ))
                            {
                                if (NOT (DOES_OBJECT_EXIST( l_U669[I] )))
                                {
                                    sub_24381( I );
                                }
                                sub_37454( I );
                            }
                            else if (DOES_OBJECT_EXIST( l_U669[I] ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U669[I] ))
                                {
                                    DETACH_OBJECT( l_U669[I], 1 );
                                }
                                DELETE_OBJECT( ref l_U669[I] );
                            }
                        }
                        else if (sub_4283( I ))
                        {
                            if (NOT (DOES_OBJECT_EXIST( l_U669[I] )))
                            {
                                sub_24381( I );
                            }
                            sub_38396( I );
                        }
                        else if (DOES_OBJECT_EXIST( l_U669[I] ))
                        {
                            if (IS_OBJECT_ATTACHED( l_U669[I] ))
                            {
                                DETACH_OBJECT( l_U669[I], 1 );
                            }
                            DELETE_OBJECT( ref l_U669[I] );
                        };;;
                    }
                }
                if ((((NOT (sub_38924( 1 ))) AND (NOT (sub_39006( 1 )))) AND (NOT (sub_39089( 1 )))) AND (NOT (sub_39172( 1 ))))
                {
                    l_U629 = 0.00000000;
                }
                if (NOT (DOES_CAM_EXIST( l_U598 )))
                {
                    if (DOES_CAM_EXIST( l_U596 ))
                    {
                        SET_CAM_ATTACH_OFFSET( l_U596, l_U914._fU0, l_U914._fU4, l_U914._fU8 );
                        SET_CAM_POINT_OFFSET( l_U596, l_U917._fU0, l_U917._fU4, l_U917._fU8 );
                        SET_CAM_FOV( l_U596, 33.50000000 );
                    }
                }
                if ((NOT l_U565) || (l_U629 > 1000.00000000))
                {
                    if ((sub_38924( 1 )) AND (l_U630 > 400.00000000))
                    {
                        sub_39434( 3 );
                        l_U565 = 1;
                        if (l_U629 > 1000.00000000)
                        {
                            l_U630 = 0.00000000;
                        }
                    }
                }
                if ((NOT l_U565) || (l_U629 > 1000.00000000))
                {
                    if ((sub_39006( 1 )) AND (l_U630 > 400.00000000))
                    {
                        sub_39434( 2 );
                        l_U565 = 1;
                        if (l_U629 > 1000.00000000)
                        {
                            l_U630 = 0.00000000;
                        }
                    }
                }
                if ((NOT l_U565) || (l_U629 > 1000.00000000))
                {
                    if ((sub_39089( 1 )) AND (l_U630 > 400.00000000))
                    {
                        sub_39434( 0 );
                        l_U565 = 1;
                        if (l_U629 > 1000.00000000)
                        {
                            l_U630 = 0.00000000;
                        }
                    }
                }
                if ((NOT l_U565) || (l_U629 > 1000.00000000))
                {
                    if ((sub_39172( 1 )) AND (l_U630 > 400.00000000))
                    {
                        sub_39434( 1 );
                        l_U565 = 1;
                        if (l_U629 > 1000.00000000)
                        {
                            l_U630 = 0.00000000;
                        }
                    }
                }
                if (NOT l_U565)
                {
                    if (IS_CONTROL_PRESSED( 2, 77 ))
                    {
                        sub_1031( l_U637, ref l_U942 );
                        if (HAS_CHAR_GOT_WEAPON( sub_4703(), l_U942 ))
                        {
                            I = (sub_45535( l_U637 )) - 1;
                        }
                        else
                        {
                            I = (sub_45796( l_U637 )) - 1;
                        }
                        if (IS_SCORE_GREATER( sub_909(), I ))
                        {
                            if (sub_46078( l_U637 ))
                            {
                                if ((sub_4283( l_U637 )) || ((sub_35017( l_U942 )) > 0))
                                {
                                    if (NOT (sub_46228( l_U942 )))
                                    {
                                        if (NOT (sub_46372( l_U942 )))
                                        {
                                            if (l_U638 < 0)
                                            {
                                                l_U638 = 0;
                                            }
                                            if (l_U637 == 10)
                                            {
                                                if (IS_PLAYER_PLAYING( sub_909() ))
                                                {
                                                    GET_PLAYER_MAX_ARMOUR( sub_909(), ref iVar14 );
                                                    GET_CHAR_ARMOUR( sub_4703(), ref iVar15 );
                                                    iVar16 = iVar14 - iVar15;
                                                    ADD_ARMOUR_TO_CHAR( sub_4703(), iVar16 );
                                                    ADD_SCORE( sub_909(), (sub_45535( l_U637 )) * -1 );
                                                    INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_45535( l_U637 ) );
                                                }
                                            }
                                            else
                                            {
                                                l_U588 = 0;
                                                if (HAS_CHAR_GOT_WEAPON( sub_4703(), l_U942 ))
                                                {
                                                    ADD_SCORE( sub_909(), (sub_45535( l_U637 )) * -1 );
                                                    INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_45535( l_U637 ) );
                                                    l_U588 = 1;
                                                }
                                                else
                                                {
                                                    ADD_SCORE( sub_909(), (sub_45796( l_U637 )) * -1 );
                                                    INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_45796( l_U637 ) );
                                                }
                                                GIVE_WEAPON_TO_CHAR( sub_4703(), l_U942, sub_35017( l_U942 ), 0 );
                                                SET_CURRENT_CHAR_WEAPON( sub_4703(), l_U942, 1 );
                                                sub_46776( l_U942 );
                                                DISPLAY_AMMO( 1 );
                                            }
                                            if ((NOT (l_U942 == 3)) AND (NOT (l_U942 == 55)))
                                            {
                                                if (NOT l_U594)
                                                {
                                                    sub_25538( "FCJ_GUNS", ref l_U686, 6, 1 );
                                                    l_U594 = 1;
                                                }
                                            }
                                            switch (l_U942)
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
                                                default:
                                                PLAY_AUDIO_EVENT( "JACOB_GUN_CAR_SELECT_WEAPON" );
                                                break;
                                            }
                                            if (l_U586)
                                            {
                                                l_U574[l_U637] = 0;
                                            }
                                            l_U589 = 1;
                                            l_U638++;
                                        }
                                        else
                                        {
                                            l_U589 = 1;
                                            l_U638 = 9999;
                                        }
                                    }
                                    else
                                    {
                                        l_U589 = 1;
                                        l_U638 = 2;
                                    }
                                }
                                else
                                {
                                    l_U638 = 0;
                                }
                            }
                            else
                            {
                                sub_23479( 5 );
                                l_U565 = 1;
                                break;
                            }
                        }
                        else if ((sub_4283( l_U637 )) || ((sub_35017( l_U942 )) > 0))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U683 )))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U683, 80, ref l_U685 );
                                if (l_U685 == 7)
                                {
                                    switch (l_U635)
                                    {
                                        case 0:
                                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U683, "no_way_a", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                        break;
                                        case 1:
                                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U683, "no_way_b", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                        break;
                                        case 2:
                                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U683, "no_way_c", "MISSGUN_CAR", 8.00000000, 0, 0, 0, 0, -1 );
                                        break;
                                    }
                                    l_U635++;
                                    if (l_U635 > 2)
                                    {
                                        l_U635 = 0;
                                    }
                                }
                            }
                            l_U591 = 1;
                            l_U638 = 0;
                        }
                        else
                        {
                            l_U638 = 0;
                        }
                        l_U565 = 1;
                        SETTIMERA( 0 );
                        SETTIMERB( 0 );
                    }
                }
                if (NOT l_U565)
                {
                    if (IS_CONTROL_PRESSED( 2, 23 ))
                    {
                        sub_47946();
                        if (l_U656 == -1)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U656 );
                        }
                        if (l_U656 == 0)
                        {
                            sub_25538( "FCJ_SPGB", ref l_U686, 6, 1 );
                        }
                        else
                        {
                            sub_25538( "FCJ_BYE", ref l_U686, 6, 1 );
                        }
                        l_U565 = 1;
                        sub_23479( 4 );
                    }
                }
                break;
                case 5:
                DISPLAY_CASH( 1 );
                if (IS_VEH_DRIVEABLE( l_U941 ))
                {
                    CONTROL_CAR_DOOR( l_U941, 5, 1, 1.00000000 );
                }
                sub_48491( l_U637 );
                if (NOT l_U565)
                {
                    if (IS_CONTROL_PRESSED( 2, 78 ))
                    {
                        sub_23479( 3 );
                        l_U565 = 1;
                    }
                }
                if (NOT l_U565)
                {
                    if (IS_CONTROL_PRESSED( 2, 77 ))
                    {
                        l_U565 = 1;
                        ADD_SCORE( sub_909(), (sub_45796( l_U637 )) * -1 );
                        INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_45796( l_U637 ) );
                        GIVE_WEAPON_TO_CHAR( sub_4703(), l_U942, sub_35017( l_U942 ), 0 );
                        SET_CURRENT_CHAR_WEAPON( sub_4703(), l_U942, 1 );
                        if (l_U586)
                        {
                            l_U574[l_U637] = 0;
                        }
                        DISPLAY_AMMO( 1 );
                        l_U638 = 0;
                        sub_23479( 3 );
                    }
                }
                if (NOT l_U565)
                {
                    if (IS_CONTROL_PRESSED( 2, 23 ))
                    {
                        sub_47946();
                        if (l_U656 == -1)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U656 );
                        }
                        if (l_U656 == 0)
                        {
                            sub_25538( "FCJ_SPGB", ref l_U686, 6, 1 );
                        }
                        else
                        {
                            sub_25538( "FCJ_BYE", ref l_U686, 6, 1 );
                        }
                        l_U565 = 1;
                        sub_23479( 4 );
                    }
                }
                break;
                case 4:
                if (TIMERA() > 1000)
                {
                    sub_629( 3, "JGC_H01" );
                    if (g_U9180 == 1)
                    {
                        g_U9180 = 0;
                        SET_MINIGAME_IN_PROGRESS( 0 );
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U941 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U683 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U683, "MISSGUN_CAR", "shut_trunk" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U683, "MISSGUN_CAR", "shut_trunk", ref fVar9 );
                            if (fVar9 < l_U616)
                            {
                                fVar9 = l_U616;
                            }
                            if (fVar9 > l_U617)
                            {
                                fVar9 = l_U617;
                            }
                            fVar9 -= l_U616;
                            l_U621 = 1.00000000 - ((fVar9 / (l_U617 - l_U616)) * l_U618);
                            if (l_U621 < 0.80000000)
                            {
                                sub_49477( 7 );
                                sub_49477( 8 );
                                sub_49477( 10 );
                                if (DOES_OBJECT_EXIST( l_U681 ))
                                {
                                    DELETE_OBJECT( ref l_U681 );
                                }
                            }
                            if (l_U621 < 0.30000000)
                            {
                                if (NOT l_U568)
                                {
                                    sub_49635();
                                    l_U568 = 1;
                                }
                            }
                            if (IS_VEH_DRIVEABLE( l_U941 ))
                            {
                                CONTROL_CAR_DOOR( l_U941, 5, 1, l_U621 );
                            }
                        }
                    }
                }
                if (NOT l_U595)
                {
                    if (NOT (IS_CHAR_INJURED( l_U683 )))
                    {
                        if ((TIMERA() > 3000) || (IS_CHAR_IN_ANY_CAR( l_U683 )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U683, 0 );
                            BLOCK_CHAR_GESTURE_ANIMS( l_U683, 0 );
                            l_U595 = 1;
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U683 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U683, sub_4703(), 100.00000000, 100.00000000, 100.00000000, 0 )))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U683 )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( l_U683 ))
                            {
                                if (NOT (IS_CAR_DEAD( l_U941 )))
                                {
                                    if (IS_CHAR_IN_CAR( l_U683, l_U941 ))
                                    {
                                        if (NOT (IS_CAR_ON_SCREEN( l_U941 )))
                                        {
                                            sub_50087();
                                        }
                                    }
                                }
                                else
                                {
                                    DELETE_CHAR( ref l_U683 );
                                }
                            }
                            else
                            {
                                DELETE_CHAR( ref l_U683 );
                            }
                        }
                    }
                }
                break;
            }
        }
        else
        {
            sub_609();
        }
        sub_50236();
        if (DOES_CHAR_EXIST( l_U683 ))
        {
            if (IS_CHAR_INJURED( l_U683 ))
            {
                bVar11 = false;
                if (NOT (IS_CHAR_DEAD( l_U683 )))
                {
                    if (NOT (IS_CHAR_DEAD( sub_4703() )))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U683, sub_4703(), 0 ))
                        {
                            bVar11 = true;
                        }
                    }
                }
                sub_50596( bVar11, l_U683 );
                sub_609();
            }
        }
        else
        {
            sub_609();
        }
        if (g_U64925)
        {
            sub_57541();
            sub_609();
        }
    }
    return;
}

void sub_609()
{
    int I;

    sub_629( 3, "JGC_H01" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -498054846 );
    for ( I = 0; I < 11; I++ )
    {
        sub_1031( I, ref l_U942 );
        sub_1284( l_U942, ref l_U657[I] );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U657[I] );
    }
    g_U64918 = -1;
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( l_U935._fU0, l_U935._fU4, l_U935._fU8, l_U938._fU0, l_U938._fU4, l_U938._fU8 );
    sub_1421( 3 );
    REMOVE_ANIMS( "MISSGUN_CAR" );
    g_U64925 = 0;
    if (g_U9180)
    {
        g_U9180 = 0;
        SET_MINIGAME_IN_PROGRESS( 0 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_629(int iParam0, string sParam1)
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
            if ((g_U9172 == iParam0) AND (l_U94))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U94 = 0;
                if (l_U92)
                {
                    sub_856();
                    l_U92 = 0;
                }
            }
            if (l_U93)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_909(), 1 );
                l_U93 = 0;
            }
            if (l_U91)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U91 = 0;
            }
        }
    }
    return;
}

void sub_856()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_909()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1031(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 7;
        break;
        case 1:
        if (NOT g_U15654[65])
        {
            (uParam1^) = 10;
        }
        else
        {
            (uParam1^) = 11;
        }
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
    }
    return;
}

void sub_1284(int iParam0, unknown uParam1)
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

void sub_1421(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_1432( uParam0 ) );
    return;
}

int sub_1432(unknown uParam0)
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
    sub_2095( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_2095(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2213()
{
    l_U632 = 0;
    l_U932 = {-0.25000000, -3.20000000, 0.00000000};
    l_U625 = 145.00000000;
    l_U920 = {-0.53000000, -3.30000000, 2.00000000};
    l_U923 = {0.65000000, -3.30000000, 2.00000000};
    l_U619 = 330.00000000;
    l_U620 = 40.00000000;
    l_U926 = {-0.47300000, -1.91200000, 0.52600000};
    l_U929 = {4.90500000, -13.57000000, 4.13300000};
    l_U621 = 1.00000000;
    l_U914 = {0.15300000, -4.33200000, 1.88200000};
    l_U917 = {-0.06600000, -1.63300000, 0.39000000};
    l_U896 = {0.09300000, 0.00000000, -0.07500000};
    l_U899 = {0.06100000, -2.00800000, 0.24600000};
    l_U902 = {0.00000000, 0.00000000, 0.00000000};
    l_U603 = 0.30000000;
    l_U604 = 0.30000000;
    l_U613 = 0.21000000;
    l_U614 = 0.44000000;
    l_U615 = 1.00000000;
    l_U616 = 0.30000000;
    l_U617 = 0.50000000;
    l_U618 = 1.00000000;
    l_U633 = 17;
    l_U634 = 0;
    l_U605 = 0.38900000;
    l_U606 = 0.47100000;
    l_U607 = 0.50000000;
    l_U608 = 0.92100000;
    l_U609 = 0.38900000;
    l_U610 = 0.47100000;
    l_U611 = 0.50000000;
    l_U612 = 0.83500000;
    l_U569 = 0;
    l_U638 = 0;
    l_U571 = 1;
    l_U905 = {0.00000000, 0.00000000, 0.01000000};
    l_U908 = {0.00000000, 0.00000000, 0.01000000};
    l_U622 = 0.20000000;
    l_U623 = 0.10000000;
    l_U692[0] = {0.39300000, -0.01270000, 0.14230000};
    l_U726[0] = {-1.48400000, 0.00000000, 0.00000000};
    l_U828[0] = {0.36180000, -0.10220000, 0.29430000};
    l_U862[0] = {-0.48570000, 0.00000000, 0.00000000};
    if (NOT g_U15654[65])
    {
        l_U692[1] = {-0.28500000, 0.21000000, 0.20350000};
        l_U726[1] = {0.53150000, 0.07870000, -3.21600000};
        l_U828[1] = {-0.21250000, -0.09270000, 0.32860000};
        l_U862[1] = {0.60750000, 0.02180000, -3.16420000};
    }
    else
    {
        l_U692[1] = {-0.13300000, 0.21000000, 0.22100000};
        l_U726[1] = {0.33200000, 0.00600000, -3.17000000};
        l_U828[1] = {-0.03700000, -0.09300000, 0.32900000};
        l_U862[1] = {0.60750000, 0.02180000, -3.16420000};
    }
    l_U692[2] = {-0.74070000, -0.13750000, 0.16950000};
    l_U726[2] = {-1.55270000, 0.00000000, 0.12310000};
    l_U828[2] = {-0.66180000, -0.16380000, 0.27150000};
    l_U862[2] = {-0.50200000, 0.00000000, 0.00000000};
    l_U692[3] = {-0.60380000, -0.32160000, 0.12700000};
    l_U726[3] = {-1.58800000, 0.00000000, 0.00000000};
    l_U828[3] = {-0.46900000, -0.46870000, 0.36800000};
    l_U862[3] = {-0.66630000, 0.05100000, 0.07180000};
    l_U692[4] = {0.08670000, -0.30550000, 0.05880000};
    l_U726[4] = {-1.60000000, 0.00000000, 0.00000000};
    l_U828[4] = {0.07000000, -0.37120000, 0.25300000};
    l_U862[4] = {-0.87100000, 0.00000000, 0.00000000};
    l_U692[5] = {0.56300000, -0.24370000, 0.09720000};
    l_U726[5] = {-1.59980000, 0.00000000, 1.54730000};
    l_U828[5] = {0.43500000, -0.23500000, 0.18800000};
    l_U862[5] = {0.00000000, 0.00000000, 0.00000000};
    l_U692[6] = {-0.16450000, 0.03580000, 0.05880000};
    l_U726[6] = {-1.54080000, 0.00000000, 1.51150000};
    l_U828[6] = {-0.08370000, -0.13180000, 0.28500000};
    l_U862[6] = {-0.53680000, 0.00000000, 0.00000000};
    l_U692[7] = {0.13200000, -0.23000000, -0.04420000};
    l_U726[7] = {1.74730000, 0.00000000, 0.00000000};
    l_U828[7] = {0.13200000, -0.29250000, -0.23650000};
    l_U862[7] = {0.70200000, 0.00000000, 0.00000000};
    l_U692[8] = {0.10700000, -0.49880000, -0.06130000};
    l_U726[8] = {1.41730000, 3.12550000, 0.00000000};
    l_U828[8] = {0.10700000, -0.60040000, -0.33590000};
    l_U862[8] = {2.54330000, 3.12500000, 0.00000000};
    l_U692[9] = {0.67040000, 0.12600000, 0.21880000};
    l_U726[9] = {-0.48570000, 0.14470000, 0.00000000};
    l_U828[9] = {0.57130000, -0.22420000, 0.46950000};
    l_U862[9] = {-0.33650000, 0.04250000, 0.00000000};
    l_U692[10] = {-0.58380000, -0.07500000, -0.06850000};
    l_U726[10] = {1.58350000, 0.00000000, 0.00000000};
    l_U828[10] = {-0.48400000, -0.16550000, -0.41930000};
    l_U862[10] = {0.90220000, -0.13350000, 0.00000000};
    g_U64906[0] = g_U15654[62];
    g_U64906[1] = g_U15654[64];
    g_U64906[2] = g_U15654[67];
    g_U64906[3] = g_U15654[66];
    g_U64906[4] = g_U15654[70];
    g_U64906[5] = 1;
    g_U64906[6] = g_U15654[71];
    g_U64906[7] = g_U15654[69];
    g_U64906[8] = g_U15654[68];
    g_U64906[9] = g_U15654[72];
    g_U64906[10] = 1;
    l_U574[0] = 1;
    l_U574[1] = 1;
    l_U574[2] = 1;
    l_U574[3] = 1;
    l_U574[4] = 1;
    l_U574[5] = 1;
    l_U574[6] = 1;
    l_U574[7] = 1;
    l_U574[8] = 1;
    l_U574[9] = 1;
    l_U574[10] = 1;
    l_U637 = sub_4273();
    return;
}

int sub_4273()
{
    if (sub_4283( 0 ))
    {
        return 0;
    }
    else if (sub_4283( 5 ))
    {
        return 5;
    }
    else if (sub_4283( 1 ))
    {
        return 1;
    }
    else if (sub_4283( 2 ))
    {
        return 2;
    }
    else if (sub_4283( 3 ))
    {
        return 3;
    }
    else if (sub_4283( 4 ))
    {
        return 4;
    }
    else if (sub_4283( 7 ))
    {
        return 7;
    }
    else if (sub_4283( 8 ))
    {
        return 8;
    }
    else if (sub_4283( 6 ))
    {
        return 6;
    }
    else if (sub_4283( 9 ))
    {
        return 9;
    }
    else if (sub_4283( 10 ))
    {
        return 10;
    };;;;;;;;;;;
    return 0;
}

int sub_4283(unknown uParam0)
{
    if ((l_U574[uParam0]) AND (g_U64906[uParam0]))
    {
        return 1;
    }
    return 0;
}

void sub_4572(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4591();
    return;
}

void sub_4591()
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

void sub_4703()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4752(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4836( "\n PED NUMBER ", uParam0 );
    sub_4876( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4836(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4876(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4908(int iParam0)
{
    if (NOT l_U90)
    {
        sub_4928();
    }
    if (NOT (iParam0 == -1))
    {
        g_U64918 = iParam0;
    }
    else if ((g_U5) || (g_U6))
    {
        g_U64918 = 7;
    }
    else if (NOT sub_5903())
    {
        g_U64918 = 0;
    };;;
    if ((g_U64918 < 0) || (g_U64918 >= 22))
    {
        g_U64918 = 0;
    }
    return l_U1[g_U64918];
}

void sub_4928()
{
    l_U1[0]._fU0 = {981.24620000, 677.71870000, 25.16520000};
    l_U1[0]._fU12 = 87.58470000;
    l_U1[1]._fU0 = {1193.90000000, 403.70000000, 23.67900000};
    l_U1[1]._fU12 = 180.00000000;
    l_U1[2]._fU0 = {1790.69900000, 524.48700000, 28.38270000};
    l_U1[2]._fU12 = 270.00000000;
    l_U1[3]._fU0 = {804.00000000, 301.20000000, 5.69210000};
    l_U1[3]._fU12 = 274.61480000;
    l_U1[4]._fU0 = {1225.97300000, 38.59800000, 35.53100000};
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

int sub_5903()
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
        sub_4928();
    }
    array(ref iVar6, 5);
    array(ref fVar12, 5);
    if (IS_PLAYER_PLAYING( sub_909() ))
    {
        GET_CHAR_COORDINATES( sub_4703(), ref vVar20.x, ref vVar20.y, ref vVar20.z );
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
        g_U64918 = iVar18;
        return 1;
        break;
    }
    return 0;
}

void sub_6615(unknown uParam0)
{
    REQUEST_MODEL( sub_1432( uParam0 ) );
    return;
}

void sub_6756(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_1432( uParam0 ) );
}

void sub_7208()
{
    float fVar2;

    GET_FRAME_TIME( ref fVar2 );
    fVar2 *= 1000.00000000;
    l_U628 += fVar2;
    l_U629 += fVar2;
    l_U630 += fVar2;
    return;
}

void sub_7287(unknown uParam0)
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
                sub_7411( uParam0 );
                if (l_U484)
                {
                    if (HAVE_ANIMS_LOADED( l_U509 ))
                    {
                        if (((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U510 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U511 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U512 ))))
                        {
                            sub_17383( uParam0, 0 );
                            l_U484 = 0;
                        }
                    }
                    else
                    {
                        sub_17383( uParam0, 0 );
                        l_U484 = 0;
                    }
                }
                switch (l_U497)
                {
                    case 0:
                    if (NOT (sub_17492( uParam0 )))
                    {
                        l_U489 = 0.00000000;
                    }
                    if (l_U481)
                    {
                        sub_18679( uParam0 );
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
                                sub_17383( uParam0, 1 );
                                TASK_CLEAR_LOOK_AT( uParam0 );
                                TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U510, l_U509, 8.00000000, -1, 3328 );
                                l_U484 = 1;
                                l_U488 = 0.00000000;
                                l_U497 = 1;
                            }
                            else
                            {
                                sub_18679( uParam0 );
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
                    if (sub_17503( uParam0 ))
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
                                if ((((((((NOT (IS_PED_RAGDOLL( uParam0 ))) AND (NOT (IS_CHAR_DUCKING( uParam0 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U509, l_U510 )))) AND (NOT (IS_CHAR_GESTURING( uParam0 )))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 )))) AND (NOT (sub_19460( uParam0 )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( uParam0 )))) AND (NOT (IS_SCRIPTED_SPEECH_PLAYING( uParam0 ))))
                                {
                                    if (l_U488 > 20000.00000000)
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_17383( uParam0, 1 );
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
                                                if (NOT (sub_19966( uParam0 )))
                                                {
                                                    l_U498 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U506, l_U519, l_U522, 1065353216 );
                                                    l_U482 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if ((sub_7650( uParam0 )) || (sub_19966( uParam0 )))
                            {
                                sub_7523( ref l_U498 );
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
                                            sub_18679( uParam0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_18679( uParam0 );
                                }
                            }
                        }
                        else
                        {
                            sub_18679( uParam0 );
                        }
                        if (sub_19460( uParam0 ))
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
                sub_17539( uParam0, 0 );
                if (l_U486)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 4 \n" );
                }
            }
        }
        else
        {
            sub_17539( uParam0, 1 );
            if (l_U486)
            {
                PRINTSTRING( "REMOVE_SPLIFF - 5 \n" );
            }
        }
    }
    else
    {
        sub_17539( uParam0, 0 );
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

void sub_7411(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    int I;
    int iVar9;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (IS_PLAYER_PLAYING( sub_909() )))
    {
        switch (l_U499)
        {
            case 0:
            for ( I = 0; I < 4; I++ )
            {
                sub_7523( ref l_U501[I] );
            }
            if (DOES_OBJECT_EXIST( l_U507 ))
            {
                DELETE_OBJECT( ref l_U507 );
            }
            if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
            {
                if (sub_7650( uParam0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref l_U540 );
                    if (DOES_VEHICLE_EXIST( l_U540 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U540 )))
                        {
                            if (NOT (sub_7832( l_U540 )))
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
                        if (sub_8018( l_U540 ))
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
                        if (NOT (sub_8018( l_U540 )))
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
                    if (NOT (sub_7535( l_U501[0] )))
                    {
                        if (sub_8073( l_U540, 0 ))
                        {
                            if (sub_9077( l_U540, 0, ref uVar4 ))
                            {
                                l_U501[0] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_8073( l_U540, 0 )))
                    {
                        sub_7523( ref l_U501[0] );
                    }
                    if (NOT (sub_7535( l_U501[1] )))
                    {
                        if (sub_8073( l_U540, 1 ))
                        {
                            if (sub_9077( l_U540, 1, ref uVar4 ))
                            {
                                l_U501[1] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8 * -1.00000000, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_8073( l_U540, 1 )))
                    {
                        sub_7523( ref l_U501[1] );
                    }
                    if (NOT (sub_7535( l_U501[2] )))
                    {
                        if (sub_8073( l_U540, 2 ))
                        {
                            if (sub_9077( l_U540, 2, ref uVar4 ))
                            {
                                l_U501[2] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_8073( l_U540, 2 )))
                    {
                        sub_7523( ref l_U501[2] );
                    }
                    if (NOT (sub_7535( l_U501[3] )))
                    {
                        if (sub_8073( l_U540, 3 ))
                        {
                            if (sub_9077( l_U540, 3, ref uVar4 ))
                            {
                                l_U501[3] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8 * -1.00000000, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_8073( l_U540, 3 )))
                    {
                        sub_7523( ref l_U501[3] );
                    }
                    l_U495 = l_U492 / (l_U494 * l_U496);
                    if (l_U495 > 1.00000000)
                    {
                        l_U495 = 1.00000000;
                    }
                    for ( I = 0; I < 4; I++ )
                    {
                        if (sub_7535( l_U501[I] ))
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
                            sub_7523( ref l_U501[I] );
                        }
                        l_U499 = 0;
                        l_U492 = 0.00000000;
                    }
                    if ((((NOT (sub_7535( l_U501[0] ))) AND (NOT (sub_7535( l_U501[1] )))) AND (NOT (sub_7535( l_U501[2] )))) AND (NOT (sub_7535( l_U501[3] ))))
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
                        if (NOT (sub_7535( l_U501[0] )))
                        {
                            if (sub_8073( l_U540, 0 ))
                            {
                                if (sub_9077( l_U540, 0, ref uVar4 ))
                                {
                                    l_U501[0] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_8073( l_U540, 0 )))
                        {
                            sub_7523( ref l_U501[0] );
                        }
                        if (NOT (sub_7535( l_U501[1] )))
                        {
                            if (sub_8073( l_U540, 1 ))
                            {
                                if (sub_9077( l_U540, 1, ref uVar4 ))
                                {
                                    l_U501[1] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8 * -1.00000000, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_8073( l_U540, 1 )))
                        {
                            sub_7523( ref l_U501[1] );
                        }
                        if (NOT (sub_7535( l_U501[2] )))
                        {
                            if (sub_8073( l_U540, 2 ))
                            {
                                if (sub_9077( l_U540, 2, ref uVar4 ))
                                {
                                    l_U501[2] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_8073( l_U540, 2 )))
                        {
                            sub_7523( ref l_U501[2] );
                        }
                        if (NOT (sub_7535( l_U501[3] )))
                        {
                            if (sub_8073( l_U540, 3 ))
                            {
                                if (sub_9077( l_U540, 3, ref uVar4 ))
                                {
                                    l_U501[3] = START_PTFX_ON_VEH( "smoke_filled_car", l_U540, uVar4, l_U531._fU0, l_U531._fU4, l_U531._fU8 * -1.00000000, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_8073( l_U540, 3 )))
                        {
                            sub_7523( ref l_U501[3] );
                        }
                        iVar9 = 0;
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_7535( l_U501[I] ))
                            {
                                iVar9++;
                            }
                        }
                        l_U495 = 1.00000000 / (TO_FLOAT( iVar9 ));
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_7535( l_U501[I] ))
                            {
                                EVOLVE_PTFX( l_U501[I], "fade", l_U495 );
                            }
                        }
                        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            for ( I = 0; I < 4; I++ )
                            {
                                sub_7523( ref l_U501[I] );
                            }
                            l_U499 = 0;
                            l_U492 = 0.00000000;
                        }
                        else if ((((NOT (sub_7535( l_U501[0] ))) AND (NOT (sub_7535( l_U501[1] )))) AND (NOT (sub_7535( l_U501[2] )))) AND (NOT (sub_7535( l_U501[3] ))))
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
                        if (sub_9077( uVar3, I, ref uVar4 ))
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

void sub_7523(unknown uParam0)
{
    if (sub_7535( (uParam0^) ))
    {
        STOP_PTFX( (uParam0^) );
    }
    (uParam0^) = 0;
    return;
}

int sub_7535(int iParam0)
{
    if (iParam0 > 0)
    {
        return 1;
    }
    return 0;
}

int sub_7650(unknown uParam0)
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

int sub_7832(unknown uParam0)
{
    unknown uVar3;

    return 0;
}

int sub_8018(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (DOES_CAR_HAVE_ROOF( uParam0 ))
            {
                if ((((NOT (sub_8073( uParam0, 0 ))) AND (NOT (sub_8073( uParam0, 1 )))) AND (NOT (sub_8073( uParam0, 2 )))) AND (NOT (sub_8073( uParam0, 3 ))))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_8073(unknown uParam0, unknown uParam1)
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

int sub_9077(unknown uParam0, unknown uParam1, int iParam2)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            sub_9125( uParam0, ref l_U525, ref l_U528 );
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

void sub_9125(unknown uParam0, unknown uParam1, unknown uParam2)
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

void sub_17383(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( uParam0, uParam1 );
        BLOCK_CHAR_AMBIENT_ANIMS( uParam0, uParam1 );
    }
    return;
}

int sub_17492(unknown uParam0)
{
    float fVar3;

    if (NOT (sub_17503( uParam0 )))
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
    if (IS_PLAYER_PLAYING( sub_909() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_4703(), uParam0, 50.00000000, 50.00000000, 0 )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_17503(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (l_U481)
    {
        return 1;
    }
    if (l_U483)
    {
        sub_17539( uParam0, 1 );
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
                sub_17539( uParam0, 1 );
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
                    sub_17539( uParam0, 0 );
                    if (l_U486)
                    {
                        PRINTSTRING( "REMOVE_SPLIFF - 2 \n" );
                    }
                    return 0;
                }
            }
            if (sub_18119( uParam0 ))
            {
                sub_17539( uParam0, 0 );
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
        sub_17539( uParam0, 1 );
        if (l_U486)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 3B \n" );
        }
        return 0;
    }
    return 1;
}

void sub_17539(unknown uParam0, boolean bParam1)
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
        sub_7523( ref l_U498 );
        l_U482 = 0;
    }
    return;
}

int sub_18119(int iParam0)
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
                if (sub_18183( uVar3 ))
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

int sub_18183(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_18679(unknown uParam0)
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
        if (sub_18844( uParam0 ))
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

int sub_18844(int iParam0)
{
    if (iParam0 == l_U508)
    {
        return 1;
    }
    return 0;
}

int sub_19460(unknown uParam0)
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

int sub_19966(unknown uParam0)
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

int sub_20701(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (IS_PLAYER_PLAYING( sub_909() ))
    {
        if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_4703(), uParam0, uParam1, 100.00000000, 100.00000000, 0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_21078(unknown uParam0)
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

void sub_21697(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_1432( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_21747( uParam0, (uParam1^) );
    return;
}

void sub_21747(unknown uParam0, unknown uParam1)
{
    sub_21759( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_21759(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_21853( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_22397( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_21853(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_22397(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_21853( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_21853( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_21853( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_21853( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_21853( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_21853( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_21853( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_21853( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_21853( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_21853( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_21853( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_21853( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_21853( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_23479(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    float fVar6;

    switch (uParam0)
    {
        case 0: break;
        case 1:
        l_U621 = 0.00000000;
        l_U569 = 0;
        l_U637 = sub_4273();
        l_U638 = 0;
        break;
        case 2:
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_909(), 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        if (IS_VEH_DRIVEABLE( l_U941 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U683 )))
            {
                if (IS_CHAR_DUCKING( l_U683 ))
                {
                    SET_CHAR_DUCKING( l_U683, 0 );
                }
                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, l_U683, 0, 0, 6000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U683, 1 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U920._fU0 - 0.30000000, l_U920._fU4, l_U920._fU8, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                GET_GROUND_Z_FOR_3D_COORD( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref uVar3._fU8 );
                GET_CAR_HEADING( l_U941, ref fVar6 );
                CLEAR_CHAR_TASKS( l_U683 );
                OPEN_SEQUENCE_TASK( ref l_U684 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 2, -1, 0.50000000 );
                TASK_ACHIEVE_HEADING( 0, fVar6 );
                TASK_PLAY_ANIM( 0, "open_trunk", "MISSGUN_CAR", 4.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U684 );
                TASK_PERFORM_SEQUENCE( l_U683, l_U684 );
                CLEAR_SEQUENCE_TASK( l_U684 );
            }
            if (IS_CHAR_DUCKING( sub_4703() ))
            {
                SET_CHAR_DUCKING( sub_4703(), 0 );
            }
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, l_U923._fU0, l_U923._fU4, l_U923._fU8, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref uVar3._fU8 );
            GET_CAR_HEADING( l_U941, ref fVar6 );
            fVar6 += l_U620;
            OPEN_SEQUENCE_TASK( ref l_U684 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 2, -1, 0.50000000 );
            CLOSE_SEQUENCE_TASK( l_U684 );
            TASK_PERFORM_SEQUENCE( sub_4703(), l_U684 );
            CLEAR_SEQUENCE_TASK( l_U684 );
        }
        sub_24146();
        SETTIMERA( 0 );
        break;
        case 3:
        l_U592 = 1;
        SET_WIDESCREEN_BORDERS( 0 );
        SETTIMERA( 0 );
        break;
        case 4:
        if (IS_VEH_DRIVEABLE( l_U941 ))
        {
            FREEZE_CAR_POSITION( l_U941, 0 );
        }
        if (DOES_BLIP_EXIST( l_U564 ))
        {
            REMOVE_BLIP( l_U564 );
        }
        if (IS_VEH_DRIVEABLE( l_U941 ))
        {
            LOCK_CAR_DOORS( l_U941, 3 );
            if (NOT (IS_CHAR_INJURED( l_U683 )))
            {
                CLEAR_CHAR_TASKS( l_U683 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U683, 1 );
                BLOCK_CHAR_GESTURE_ANIMS( l_U683, 1 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                OPEN_SEQUENCE_TASK( ref l_U684 );
                TASK_CLEAR_LOOK_AT( 0 );
                if (l_U592)
                {
                    TASK_PLAY_ANIM( 0, "shut_trunk", "MISSGUN_CAR", 4.00000000, 0, 0, 0, 0, -1 );
                }
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U941, -2 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U941, 0.00000000, 10.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                TASK_CAR_DRIVE_TO_COORD( 0, l_U941, uVar3._fU0, uVar3._fU4, uVar3._fU8, 20.00000000, 0, 0, 0, 3.00000000, 10 );
                TASK_CAR_DRIVE_WANDER( 0, l_U941, 20.00000000, 2 );
                TASK_WANDER_STANDARD( 0 );
                CLOSE_SEQUENCE_TASK( l_U684 );
                TASK_PERFORM_SEQUENCE( l_U683, l_U684 );
                CLEAR_SEQUENCE_TASK( l_U684 );
            }
        }
        l_U568 = 0;
        l_U595 = 0;
        SETTIMERA( 0 );
        break;
    }
    l_U631 = uParam0;
    return;
}

void sub_24146()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_VEH_DRIVEABLE( l_U941 ))
    {
        GET_CAR_COORDINATES( l_U941, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (NOT (DOES_OBJECT_EXIST( l_U681 )))
        {
            CREATE_OBJECT( 466399299, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U681, 1 );
        }
        ATTACH_OBJECT_TO_CAR( l_U681, l_U941, l_U633, l_U896, l_U902 );
        if (NOT (DOES_OBJECT_EXIST( l_U682 )))
        {
            CREATE_OBJECT( -1188894977, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U682, 1 );
        }
        ATTACH_OBJECT_TO_CAR( l_U682, l_U941, l_U634, l_U899, l_U902 );
        for ( I = 0; I < 11; I++ )
        {
            if (sub_4283( I ))
            {
                sub_24381( I );
            }
        }
        for ( I = 0; I < 11; I++ )
        {
            l_U760[I] = {l_U726[I]};
            l_U794[I] = {l_U692[I]};
        }
    }
    return;
}

void sub_24381(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_VEH_DRIVEABLE( l_U941 ))
    {
        GET_CAR_COORDINATES( l_U941, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (NOT (DOES_OBJECT_EXIST( l_U669[uParam0] )))
        {
            CREATE_OBJECT( l_U657[uParam0], uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U669[uParam0], 1 );
        }
        SET_OBJECT_COLLISION( l_U669[uParam0], 0 );
        sub_24506( uParam0 );
    }
    return;
}

void sub_24506(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 9:
        ATTACH_OBJECT_TO_OBJECT( l_U669[uParam0], l_U682, 0, l_U692[uParam0], l_U726[uParam0] );
        break;
        case 7:
        case 8:
        case 10:
        ATTACH_OBJECT_TO_OBJECT( l_U669[uParam0], l_U681, 0, l_U692[uParam0], l_U726[uParam0] );
        break;
    }
    return;
}

void sub_25538(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_25561( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_25561(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_25615( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_25615(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_25637( iParam1 )))
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
    sub_26329( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_25637(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_25714( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_25714( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_25714( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_25714(unknown uParam0)
{
    return;
}

void sub_26329(int iParam0, int iParam1)
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

int sub_27374()
{
    if (NOT (IS_VEH_DRIVEABLE( l_U941 )))
    {
        return 0;
    }
    else if (IS_CHAR_INJURED( l_U683 ))
    {
        return 0;
    }
    else if (NOT (LOCATE_CAR_2D( l_U941, l_U599._fU0._fU0, l_U599._fU0._fU4, 2.00000000, 2.00000000, 0 )))
    {
        return 0;
    }
    else
    {
        return 1;
    };;;
    return 1;
}

void sub_27540()
{
    return sub_27551( 0, 0 );
}

int sub_27551(boolean bParam0, unknown uParam1)
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

int sub_27700(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_909() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_909() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_909() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_27796())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_4703() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_27540())
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

int sub_27796()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_27922(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_27700( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U93)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_909(), 0 );
                l_U93 = 1;
            }
            g_U9172 = uParam0;
            l_U94 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_28203();
                l_U92 = 1;
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
                            l_U91 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U91)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U91 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_28203()
{
    return sub_27551( 1, 1 );
}

void sub_29561(unknown uParam0, unknown uParam1)
{
    switch (g_U64918)
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

void sub_30500(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;
    boolean bVar11;

    bVar11 = false;
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar10 );
    if (DOES_VEHICLE_EXIST( uVar10 ))
    {
        if (NOT (IS_CAR_DEAD( uVar10 )))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_4703(), uVar10 )))
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
                sub_30762( uVar10 );
                SET_CAR_ON_GROUND_PROPERLY( uVar10 );
            }
        }
    }
    if (bVar11)
    {
        if (DOES_VEHICLE_EXIST( uVar10 ))
        {
            sub_30874( uVar10 );
        }
    }
    return;
}

void sub_30762(unknown uParam0)
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

void sub_30874(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_33795()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_4703() )))
    {
        sub_1031( l_U637, ref l_U942 );
        GET_CURRENT_CHAR_WEAPON( sub_4703(), ref iVar2 );
        if (NOT (iVar2 == l_U942))
        {
            if (HAS_CHAR_GOT_WEAPON( sub_4703(), l_U942 ))
            {
                DISPLAY_AMMO( 1 );
                SET_CURRENT_CHAR_WEAPON( sub_4703(), l_U942, 1 );
                PRINTSTRING( "UPDATE_PLAYERS_WEAPON - player set to new weapontype \n" );
                l_U943 = l_U942;
            }
            else if (NOT (iVar2 == 0))
            {
                SET_CURRENT_CHAR_WEAPON( sub_4703(), 0, 1 );
                PRINTSTRING( "UPDATE_PLAYERS_WEAPON - player set to unarmed \n" );
            }
        }
        else if (NOT (iVar2 == 0))
        {
            l_U943 = iVar2;
        }
    }
    return;
}

void sub_34193(unknown uParam0)
{
    sub_1031( uParam0, ref l_U942 );
    switch (uParam0)
    {
        case 0:
        if (HAS_CHAR_GOT_WEAPON( sub_4703(), l_U942 ))
        {
            PRINT_HELP_FOREVER( "JGC_T60" );
        }
        else
        {
            PRINT_HELP_FOREVER( "JGC_T01" );
        }
        break;
        case 1:
        if (HAS_CHAR_GOT_WEAPON( sub_4703(), l_U942 ))
        {
            if (NOT g_U15654[65])
            {
                PRINT_HELP_FOREVER( "JGC_T61" );
            }
            else
            {
                PRINT_HELP_FOREVER( "JGCT61B" );
            }
        }
        else if (NOT g_U15654[65])
        {
            PRINT_HELP_FOREVER( "JGC_T02" );
        }
        else
        {
            PRINT_HELP_FOREVER( "JGCT02B" );
        }
        break;
        case 3:
        if (HAS_CHAR_GOT_WEAPON( sub_4703(), l_U942 ))
        {
            PRINT_HELP_FOREVER( "JGC_T62" );
        }
        else
        {
            PRINT_HELP_FOREVER( "JGC_T03" );
        }
        break;
        case 2:
        if (HAS_CHAR_GOT_WEAPON( sub_4703(), l_U942 ))
        {
            PRINT_HELP_FOREVER( "JGC_T65" );
        }
        else
        {
            PRINT_HELP_FOREVER( "JGC_T12" );
        }
        break;
        case 4:
        if (HAS_CHAR_GOT_WEAPON( sub_4703(), l_U942 ))
        {
            PRINT_HELP_FOREVER( "JGC_T63" );
        }
        else
        {
            PRINT_HELP_FOREVER( "JGC_T04" );
        }
        break;
        case 5:
        PRINT_HELP_FOREVER( "JGC_T05" );
        break;
        case 6:
        PRINT_HELP_FOREVER( "JGC_T06" );
        break;
        case 8:
        if (HAS_CHAR_GOT_WEAPON( sub_4703(), l_U942 ))
        {
            PRINT_HELP_FOREVER( "JGC_T64" );
        }
        else
        {
            PRINT_HELP_FOREVER( "JGC_T11" );
        }
        break;
        case 7:
        if (HAS_CHAR_GOT_WEAPON( sub_4703(), l_U942 ))
        {
            PRINT_HELP_FOREVER( "JGC_T66" );
        }
        else
        {
            PRINT_HELP_FOREVER( "JGC_T13" );
        }
        break;
        case 9:
        PRINT_HELP_FOREVER( "JGC_T14" );
        break;
        case 10:
        PRINT_HELP_FOREVER( "JGC_T68" );
        break;
    }
    return;
}

void sub_34954(unknown uParam0)
{
    int iVar3;

    if (l_U638 >= 9999)
    {
        PRINT_HELP_FOREVER( "JGC_T80" );
        DISPLAY_AMMO( 1 );
    }
    else
    {
        iVar3 = l_U638 * (sub_35017( l_U942 ));
        sub_1031( uParam0, ref l_U942 );
        if (iVar3 > (sub_35182( l_U942 )))
        {
            iVar3 = sub_35182( l_U942 );
        }
        switch (uParam0)
        {
            case 0:
            if ((l_U638 == 1) AND (NOT l_U588))
            {
                PRINT_HELP_FOREVER( "JGC_T30" );
            }
            else if (l_U638 > 0)
            {
                PRINT_HELP_FOREVER_WITH_NUMBER( "JGC_T31", iVar3 );
            }
            break;
            case 1:
            if ((l_U638 == 1) AND (NOT l_U588))
            {
                PRINT_HELP_FOREVER( "JGC_T32" );
            }
            else if (l_U638 > 0)
            {
                PRINT_HELP_FOREVER_WITH_NUMBER( "JGC_T33", iVar3 );
            }
            break;
            case 2:
            if ((l_U638 == 1) AND (NOT l_U588))
            {
                PRINT_HELP_FOREVER( "JGC_T42" );
            }
            else if (l_U638 > 0)
            {
                PRINT_HELP_FOREVER_WITH_NUMBER( "JGC_T43", iVar3 );
            }
            break;
            case 3:
            if ((l_U638 == 1) AND (NOT l_U588))
            {
                PRINT_HELP_FOREVER( "JGC_T34" );
            }
            else if (l_U638 > 0)
            {
                PRINT_HELP_FOREVER_WITH_NUMBER( "JGC_T35", iVar3 );
            }
            break;
            case 4:
            if ((l_U638 == 1) AND (NOT l_U588))
            {
                PRINT_HELP_FOREVER( "JGC_T36" );
            }
            else if (l_U638 > 0)
            {
                PRINT_HELP_FOREVER_WITH_NUMBER( "JGC_T37", iVar3 );
            }
            break;
            case 5:
            if (l_U638 == 1)
            {
                PRINT_HELP_FOREVER( "JGC_T38" );
            }
            else if (l_U638 > 1)
            {
                PRINT_HELP_FOREVER( "JGC_T47" );
            }
            break;
            case 6:
            if (l_U638 == 1)
            {
                PRINT_HELP_FOREVER( "JGC_T39" );
            }
            else if (l_U638 > 1)
            {
                PRINT_HELP_FOREVER_WITH_NUMBER( "JGC_T49", iVar3 );
            }
            break;
            case 7:
            if ((l_U638 == 1) AND (NOT l_U588))
            {
                PRINT_HELP_FOREVER( "JGC_T44" );
            }
            else if (l_U638 > 0)
            {
                PRINT_HELP_FOREVER_WITH_NUMBER( "JGC_T45", iVar3 );
            }
            break;
            case 8:
            if ((l_U638 == 1) AND (NOT l_U588))
            {
                PRINT_HELP_FOREVER( "JGC_T40" );
            }
            else if (l_U638 > 0)
            {
                PRINT_HELP_FOREVER_WITH_NUMBER( "JGC_T41", iVar3 );
            }
            break;
            case 9:
            if (l_U638 == 1)
            {
                PRINT_HELP_FOREVER( "JGC_T46" );
            }
            else if (l_U638 > 1)
            {
                PRINT_HELP_FOREVER_WITH_NUMBER( "JGC_T48", iVar3 );
            }
            break;
            case 10:
            if (l_U638 == 1)
            {
                PRINT_HELP_FOREVER( "JGC_T67" );
            }
            else if (l_U638 > 1)
            {
                PRINT_HELP_FOREVER( "JGC_T69" );
            }
            break;
        }
    }
    return;
}

void sub_35017(unknown uParam0)
{
    int Result;

    switch (uParam0)
    {
        case 4:
        case 5:
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
        GET_MAX_AMMO_IN_CLIP( sub_4703(), uParam0, ref Result );
        break;
        default:
        Result = 0;
        break;
    }
    return Result;
}

int sub_35182(unknown uParam0)
{
    unknown Result;

    switch (uParam0)
    {
        case 7:
        GET_MAX_AMMO( sub_4703(), 7, ref Result );
        return Result;
        break;
        case 10:
        GET_MAX_AMMO( sub_4703(), 10, ref Result );
        return Result;
        break;
        case 11:
        GET_MAX_AMMO( sub_4703(), 11, ref Result );
        return Result;
        break;
        case 13:
        GET_MAX_AMMO( sub_4703(), 13, ref Result );
        return Result;
        break;
        case 12:
        GET_MAX_AMMO( sub_4703(), 12, ref Result );
        return Result;
        break;
        case 16:
        GET_MAX_AMMO( sub_4703(), 16, ref Result );
        return Result;
        break;
        case 4:
        GET_MAX_AMMO( sub_4703(), 4, ref Result );
        return Result;
        break;
        case 5:
        GET_MAX_AMMO( sub_4703(), 5, ref Result );
        return Result;
        break;
        case 15:
        GET_MAX_AMMO( sub_4703(), 15, ref Result );
        return Result;
        break;
        case 14:
        GET_MAX_AMMO( sub_4703(), 14, ref Result );
        return Result;
        break;
    }
    return 0;
}

void sub_37454(unknown uParam0)
{
    vector vVar3;
    vector vVar6;

    if (DOES_OBJECT_EXIST( l_U669[uParam0] ))
    {
        if (IS_OBJECT_ATTACHED( l_U669[uParam0] ))
        {
            vVar3 = {l_U828[uParam0] - l_U794[uParam0]};
            vVar6 = {l_U862[uParam0] - l_U760[uParam0]};
            if ((VMAG( vVar3 )) > 0.00100000)
            {
                vVar3 = {vVar3 * l_U603};
                l_U794[uParam0] = {l_U794[uParam0] + vVar3};
            }
            else
            {
                l_U911 = {0.00000000, 0.00000000, 0.00000000};
                l_U572 = 1;
            }
            if ((VMAG( vVar6 )) > 0.00100000)
            {
                vVar6 = {vVar6 * l_U604};
                l_U760[uParam0] = {l_U760[uParam0] + vVar6};
            }
            DETACH_OBJECT( l_U669[uParam0], 1 );
            if (l_U571)
            {
                sub_37730( uParam0 );
                l_U794[uParam0] = {l_U794[uParam0] + l_U911};
            }
            switch (uParam0)
            {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 9:
                ATTACH_OBJECT_TO_OBJECT( l_U669[uParam0], l_U682, 0, l_U794[uParam0], l_U760[uParam0] );
                break;
                case 7:
                case 8:
                case 10:
                ATTACH_OBJECT_TO_OBJECT( l_U669[uParam0], l_U681, 0, l_U794[uParam0], l_U760[uParam0] );
                break;
            }
        }
    }
    return;
}

void sub_37730(unknown uParam0)
{
    vector vVar3;

    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 9:
        vVar3 = {l_U905};
        break;
        case 7:
        case 8:
        case 10:
        vVar3 = {l_U908};
        break;
    }
    if (l_U572)
    {
        l_U624 += (1.00000000 - l_U624) * l_U622;
    }
    else
    {
        l_U624 -= (1.00000000 - l_U624) * l_U622;
    }
    if (l_U624 > (1.00000000 - l_U623))
    {
        l_U624 = 1.00000000 - l_U623;
        l_U572 = 0;
    }
    if (l_U624 < l_U623)
    {
        l_U624 = l_U623;
        l_U572 = 1;
    }
    l_U911 = {vVar3 * l_U624};
    return;
}

void sub_38396(unknown uParam0)
{
    vector vVar3;
    vector vVar6;

    if (DOES_OBJECT_EXIST( l_U669[uParam0] ))
    {
        if (IS_OBJECT_ATTACHED( l_U669[uParam0] ))
        {
            vVar3 = {l_U692[uParam0] - l_U794[uParam0]};
            vVar6 = {l_U726[uParam0] - l_U760[uParam0]};
            if ((VMAG( vVar3 )) > 0.00500000)
            {
                vVar3 = {vVar3 * l_U603};
                l_U794[uParam0] = {l_U794[uParam0] + vVar3};
            }
            if ((VMAG( vVar6 )) > 0.00500000)
            {
                vVar6 = {vVar6 * l_U604};
                l_U760[uParam0] = {l_U760[uParam0] + vVar6};
            }
            DETACH_OBJECT( l_U669[uParam0], 1 );
            switch (uParam0)
            {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 9:
                ATTACH_OBJECT_TO_OBJECT( l_U669[uParam0], l_U682, 0, l_U794[uParam0], l_U760[uParam0] );
                break;
                case 7:
                case 8:
                case 10:
                ATTACH_OBJECT_TO_OBJECT( l_U669[uParam0], l_U681, 0, l_U794[uParam0], l_U760[uParam0] );
                break;
            }
        }
    }
    return;
}

int sub_38924(unknown uParam0)
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

int sub_39006(unknown uParam0)
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

int sub_39089(unknown uParam0)
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

int sub_39172(unknown uParam0)
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

void sub_39434(unknown uParam0)
{
    if (l_U638 > 0)
    {
        if (l_U586)
        {
            l_U574[l_U637] = 0;
        }
        l_U638 = 0;
    }
    l_U591 = 0;
    l_U589 = 0;
    l_U637 = sub_39503( l_U637, uParam0 );
    if (NOT (IS_CHAR_INJURED( sub_4703() )))
    {
        GET_SCRIPT_TASK_STATUS( sub_4703(), 80, ref l_U685 );
        if (l_U685 == 7)
        {
            ;
        }
    }
    PLAY_AUDIO_EVENT( "JACOB_GUN_CAR_SELECT_WEAPON" );
    return;
}

void sub_39503(unknown uParam0, unknown uParam1)
{
    int Result;

    Result = uParam0;
    switch (uParam0)
    {
        case 0:
        switch (uParam1)
        {
            case 0:
            l_U639[0] = 7;
            l_U639[1] = 8;
            l_U639[2] = 1;
            l_U639[3] = 10;
            l_U639[4] = 4;
            l_U639[5] = 5;
            l_U639[6] = 3;
            l_U639[7] = 6;
            l_U639[8] = 2;
            l_U639[9] = 9;
            l_U639[10] = 0;
            l_U651 = 3;
            break;
            case 1:
            l_U639[0] = 5;
            l_U639[1] = 4;
            l_U639[2] = 3;
            l_U639[3] = 8;
            l_U639[4] = 7;
            l_U639[5] = 10;
            l_U639[6] = 1;
            l_U639[7] = 2;
            l_U639[8] = 3;
            l_U639[9] = 9;
            l_U639[10] = 0;
            l_U651 = 2;
            break;
            case 2:
            l_U639[0] = 1;
            l_U639[1] = 6;
            l_U639[2] = 2;
            l_U639[3] = 3;
            l_U639[4] = 4;
            l_U639[5] = 9;
            l_U639[6] = 10;
            l_U639[7] = 7;
            l_U639[8] = 8;
            l_U639[9] = 5;
            l_U639[10] = 0;
            l_U651 = 4;
            break;
            case 3:
            l_U639[0] = 9;
            l_U639[1] = 2;
            l_U639[2] = 1;
            l_U639[3] = 6;
            l_U639[4] = 3;
            l_U639[5] = 4;
            l_U639[6] = 5;
            l_U639[7] = 10;
            l_U639[8] = 7;
            l_U639[9] = 8;
            l_U639[10] = 0;
            l_U651 = 0;
            break;
        }
        break;
        case 1:
        switch (uParam1)
        {
            case 0:
            l_U639[0] = 7;
            l_U639[1] = 8;
            l_U639[2] = 10;
            l_U639[3] = 4;
            l_U639[4] = 3;
            l_U639[5] = 6;
            l_U639[6] = 2;
            l_U639[7] = 5;
            l_U639[8] = 0;
            l_U639[9] = 9;
            l_U639[10] = 1;
            l_U651 = 3;
            break;
            case 1:
            l_U639[0] = 6;
            l_U639[1] = 4;
            l_U639[2] = 2;
            l_U639[3] = 3;
            l_U639[4] = 0;
            l_U639[5] = 5;
            l_U639[6] = 8;
            l_U639[7] = 7;
            l_U639[8] = 9;
            l_U639[9] = 10;
            l_U639[10] = 1;
            l_U651 = 5;
            break;
            case 2:
            l_U639[0] = 2;
            l_U639[1] = 3;
            l_U639[2] = 10;
            l_U639[3] = 9;
            l_U639[4] = 0;
            l_U639[5] = 5;
            l_U639[6] = 4;
            l_U639[7] = 6;
            l_U639[8] = 7;
            l_U639[9] = 8;
            l_U639[10] = 1;
            l_U651 = 2;
            break;
            case 3:
            l_U639[0] = 0;
            l_U639[1] = 9;
            l_U639[2] = 5;
            l_U639[3] = 2;
            l_U639[4] = 3;
            l_U639[5] = 6;
            l_U639[6] = 4;
            l_U639[7] = 10;
            l_U639[8] = 7;
            l_U639[9] = 8;
            l_U639[10] = 1;
            l_U651 = 2;
            break;
        }
        break;
        case 2:
        switch (uParam1)
        {
            case 0:
            l_U639[0] = 1;
            l_U639[1] = 10;
            l_U639[2] = 7;
            l_U639[3] = 8;
            l_U639[4] = 3;
            l_U639[5] = 4;
            l_U639[6] = 6;
            l_U639[7] = 0;
            l_U639[8] = 5;
            l_U639[9] = 9;
            l_U639[10] = 2;
            l_U651 = 3;
            break;
            case 1:
            l_U639[0] = 3;
            l_U639[1] = 4;
            l_U639[2] = 8;
            l_U639[3] = 7;
            l_U639[4] = 10;
            l_U639[5] = 1;
            l_U639[6] = 6;
            l_U639[7] = 0;
            l_U639[8] = 5;
            l_U639[9] = 9;
            l_U639[10] = 2;
            l_U651 = 1;
            break;
            case 2:
            l_U639[0] = 3;
            l_U639[1] = 9;
            l_U639[2] = 0;
            l_U639[3] = 5;
            l_U639[4] = 4;
            l_U639[5] = 6;
            l_U639[6] = 1;
            l_U639[7] = 8;
            l_U639[8] = 7;
            l_U639[9] = 10;
            l_U639[10] = 2;
            l_U651 = -1;
            break;
            case 3:
            l_U639[0] = 6;
            l_U639[1] = 4;
            l_U639[2] = 0;
            l_U639[3] = 5;
            l_U639[4] = 9;
            l_U639[5] = 1;
            l_U639[6] = 3;
            l_U639[7] = 7;
            l_U639[8] = 8;
            l_U639[9] = 10;
            l_U639[10] = 2;
            l_U651 = 5;
            break;
        }
        break;
        case 3:
        switch (uParam1)
        {
            case 0:
            l_U639[0] = 2;
            l_U639[1] = 1;
            l_U639[2] = 6;
            l_U639[3] = 10;
            l_U639[4] = 7;
            l_U639[5] = 8;
            l_U639[6] = 4;
            l_U639[7] = 5;
            l_U639[8] = 0;
            l_U639[9] = 9;
            l_U639[10] = 3;
            l_U651 = 5;
            break;
            case 1:
            l_U639[0] = 8;
            l_U639[1] = 10;
            l_U639[2] = 7;
            l_U639[3] = 1;
            l_U639[4] = 2;
            l_U639[5] = 6;
            l_U639[6] = 4;
            l_U639[7] = 0;
            l_U639[8] = 5;
            l_U639[9] = 9;
            l_U639[10] = 3;
            l_U651 = -1;
            break;
            case 2:
            l_U639[0] = 5;
            l_U639[1] = 9;
            l_U639[2] = 4;
            l_U639[3] = 0;
            l_U639[4] = 6;
            l_U639[5] = 1;
            l_U639[6] = 2;
            l_U639[7] = 7;
            l_U639[8] = 8;
            l_U639[9] = 10;
            l_U639[10] = 3;
            l_U651 = -1;
            break;
            case 3:
            l_U639[0] = 4;
            l_U639[1] = 6;
            l_U639[2] = 1;
            l_U639[3] = 2;
            l_U639[4] = 5;
            l_U639[5] = 0;
            l_U639[6] = 9;
            l_U639[7] = 7;
            l_U639[8] = 8;
            l_U639[9] = 10;
            l_U639[10] = 3;
            l_U651 = 10;
            break;
        }
        break;
        case 4:
        switch (uParam1)
        {
            case 0:
            l_U639[0] = 6;
            l_U639[1] = 2;
            l_U639[2] = 5;
            l_U639[3] = 0;
            l_U639[4] = 1;
            l_U639[5] = 7;
            l_U639[6] = 8;
            l_U639[7] = 10;
            l_U639[8] = 9;
            l_U639[9] = 3;
            l_U639[10] = 4;
            l_U651 = 8;
            break;
            case 1:
            l_U639[0] = 8;
            l_U639[1] = 7;
            l_U639[2] = 10;
            l_U639[3] = 1;
            l_U639[4] = 2;
            l_U639[5] = 0;
            l_U639[6] = 6;
            l_U639[7] = 5;
            l_U639[8] = 9;
            l_U639[9] = 3;
            l_U639[10] = 4;
            l_U651 = -1;
            break;
            case 2:
            l_U639[0] = 3;
            l_U639[1] = 2;
            l_U639[2] = 10;
            l_U639[3] = 9;
            l_U639[4] = 5;
            l_U639[5] = 0;
            l_U639[6] = 6;
            l_U639[7] = 1;
            l_U639[8] = 7;
            l_U639[9] = 8;
            l_U639[10] = 4;
            l_U651 = 2;
            break;
            case 3:
            l_U639[0] = 5;
            l_U639[1] = 0;
            l_U639[2] = 9;
            l_U639[3] = 3;
            l_U639[4] = 2;
            l_U639[5] = 1;
            l_U639[6] = 6;
            l_U639[7] = 10;
            l_U639[8] = 7;
            l_U639[9] = 8;
            l_U639[10] = 4;
            l_U651 = 2;
            break;
        }
        break;
        case 5:
        switch (uParam1)
        {
            case 0:
            l_U639[0] = 0;
            l_U639[1] = 9;
            l_U639[2] = 1;
            l_U639[3] = 7;
            l_U639[4] = 8;
            l_U639[5] = 10;
            l_U639[6] = 4;
            l_U639[7] = 3;
            l_U639[8] = 2;
            l_U639[9] = 6;
            l_U639[10] = 5;
            l_U651 = 5;
            break;
            case 1:
            l_U639[0] = 4;
            l_U639[1] = 8;
            l_U639[2] = 7;
            l_U639[3] = 10;
            l_U639[4] = 1;
            l_U639[5] = 0;
            l_U639[6] = 9;
            l_U639[7] = 2;
            l_U639[8] = 6;
            l_U639[9] = 3;
            l_U639[10] = 5;
            l_U651 = 0;
            break;
            case 2:
            l_U639[0] = 4;
            l_U639[1] = 6;
            l_U639[2] = 2;
            l_U639[3] = 3;
            l_U639[4] = 1;
            l_U639[5] = 10;
            l_U639[6] = 9;
            l_U639[7] = 0;
            l_U639[8] = 8;
            l_U639[9] = 7;
            l_U639[10] = 5;
            l_U651 = 5;
            break;
            case 3:
            l_U639[0] = 9;
            l_U639[1] = 3;
            l_U639[2] = 2;
            l_U639[3] = 4;
            l_U639[4] = 1;
            l_U639[5] = 6;
            l_U639[6] = 0;
            l_U639[7] = 10;
            l_U639[8] = 7;
            l_U639[9] = 8;
            l_U639[10] = 5;
            l_U651 = 0;
            break;
        }
        break;
        case 6:
        switch (uParam1)
        {
            case 0:
            l_U639[0] = 1;
            l_U639[1] = 7;
            l_U639[2] = 8;
            l_U639[3] = 10;
            l_U639[4] = 4;
            l_U639[5] = 3;
            l_U639[6] = 5;
            l_U639[7] = 0;
            l_U639[8] = 2;
            l_U639[9] = 9;
            l_U639[10] = 6;
            l_U651 = 3;
            break;
            case 1:
            l_U639[0] = 4;
            l_U639[1] = 3;
            l_U639[2] = 5;
            l_U639[3] = 8;
            l_U639[4] = 7;
            l_U639[5] = 10;
            l_U639[6] = 1;
            l_U639[7] = 2;
            l_U639[8] = 0;
            l_U639[9] = 9;
            l_U639[10] = 6;
            l_U651 = 2;
            break;
            case 2:
            l_U639[0] = 2;
            l_U639[1] = 3;
            l_U639[2] = 1;
            l_U639[3] = 10;
            l_U639[4] = 9;
            l_U639[5] = 0;
            l_U639[6] = 5;
            l_U639[7] = 4;
            l_U639[8] = 7;
            l_U639[9] = 8;
            l_U639[10] = 6;
            l_U651 = 3;
            break;
            case 3:
            l_U639[0] = 0;
            l_U639[1] = 9;
            l_U639[2] = 5;
            l_U639[3] = 4;
            l_U639[4] = 2;
            l_U639[5] = 3;
            l_U639[6] = 1;
            l_U639[7] = 10;
            l_U639[8] = 7;
            l_U639[9] = 8;
            l_U639[10] = 6;
            l_U651 = 3;
            break;
        }
        break;
        case 9:
        switch (uParam1)
        {
            case 0:
            l_U639[0] = 7;
            l_U639[1] = 8;
            l_U639[2] = 1;
            l_U639[3] = 10;
            l_U639[4] = 4;
            l_U639[5] = 5;
            l_U639[6] = 0;
            l_U639[7] = 6;
            l_U639[8] = 3;
            l_U639[9] = 2;
            l_U639[10] = 9;
            l_U651 = 3;
            break;
            case 1:
            l_U639[0] = 5;
            l_U639[1] = 4;
            l_U639[2] = 0;
            l_U639[3] = 8;
            l_U639[4] = 7;
            l_U639[5] = 1;
            l_U639[6] = 6;
            l_U639[7] = 10;
            l_U639[8] = 2;
            l_U639[9] = 3;
            l_U639[10] = 9;
            l_U651 = 2;
            break;
            case 2:
            l_U639[0] = 0;
            l_U639[1] = 1;
            l_U639[2] = 6;
            l_U639[3] = 4;
            l_U639[4] = 5;
            l_U639[5] = 2;
            l_U639[6] = 3;
            l_U639[7] = 10;
            l_U639[8] = 7;
            l_U639[9] = 8;
            l_U639[10] = 9;
            l_U651 = 6;
            break;
            case 3:
            l_U639[0] = 2;
            l_U639[1] = 3;
            l_U639[2] = 1;
            l_U639[3] = 6;
            l_U639[4] = 4;
            l_U639[5] = 10;
            l_U639[6] = 7;
            l_U639[7] = 8;
            l_U639[8] = 0;
            l_U639[9] = 5;
            l_U639[10] = 9;
            l_U651 = -1;
            break;
        }
        break;
        case 7:
        switch (uParam1)
        {
            case 0:
            l_U639[0] = 8;
            l_U639[1] = 10;
            l_U639[2] = 4;
            l_U639[3] = 3;
            l_U639[4] = 5;
            l_U639[5] = 6;
            l_U639[6] = 2;
            l_U639[7] = 0;
            l_U639[8] = 1;
            l_U639[9] = 9;
            l_U639[10] = 7;
            l_U651 = 1;
            break;
            case 1:
            l_U639[0] = 1;
            l_U639[1] = 6;
            l_U639[2] = 0;
            l_U639[3] = 2;
            l_U639[4] = 4;
            l_U639[5] = 9;
            l_U639[6] = 3;
            l_U639[7] = 5;
            l_U639[8] = 8;
            l_U639[9] = 10;
            l_U639[10] = 7;
            l_U651 = 7;
            break;
            case 2:
            l_U639[0] = 10;
            l_U639[1] = 2;
            l_U639[2] = 3;
            l_U639[3] = 6;
            l_U639[4] = 1;
            l_U639[5] = 4;
            l_U639[6] = 9;
            l_U639[7] = 5;
            l_U639[8] = 0;
            l_U639[9] = 8;
            l_U639[10] = 7;
            l_U651 = 5;
            break;
            case 3:
            l_U639[0] = 0;
            l_U639[1] = 9;
            l_U639[2] = 5;
            l_U639[3] = 8;
            l_U639[4] = 10;
            l_U639[5] = 2;
            l_U639[6] = 3;
            l_U639[7] = 6;
            l_U639[8] = 1;
            l_U639[9] = 4;
            l_U639[10] = 7;
            l_U651 = 3;
            break;
        }
        break;
        case 8:
        switch (uParam1)
        {
            case 0:
            l_U639[0] = 4;
            l_U639[1] = 3;
            l_U639[2] = 5;
            l_U639[3] = 6;
            l_U639[4] = 2;
            l_U639[5] = 0;
            l_U639[6] = 1;
            l_U639[7] = 9;
            l_U639[8] = 7;
            l_U639[9] = 10;
            l_U639[10] = 8;
            l_U651 = -1;
            break;
            case 1:
            l_U639[0] = 7;
            l_U639[1] = 1;
            l_U639[2] = 0;
            l_U639[3] = 6;
            l_U639[4] = 9;
            l_U639[5] = 2;
            l_U639[6] = 5;
            l_U639[7] = 4;
            l_U639[8] = 3;
            l_U639[9] = 10;
            l_U639[10] = 8;
            l_U651 = 8;
            break;
            case 2:
            l_U639[0] = 10;
            l_U639[1] = 7;
            l_U639[2] = 1;
            l_U639[3] = 2;
            l_U639[4] = 3;
            l_U639[5] = 6;
            l_U639[6] = 4;
            l_U639[7] = 9;
            l_U639[8] = 0;
            l_U639[9] = 5;
            l_U639[10] = 8;
            l_U651 = 6;
            break;
            case 3:
            l_U639[0] = 9;
            l_U639[1] = 0;
            l_U639[2] = 5;
            l_U639[3] = 10;
            l_U639[4] = 7;
            l_U639[5] = 1;
            l_U639[6] = 2;
            l_U639[7] = 3;
            l_U639[8] = 6;
            l_U639[9] = 4;
            l_U639[10] = 8;
            l_U651 = 2;
            break;
        }
        break;
        case 10:
        switch (uParam1)
        {
            case 0:
            l_U639[0] = 8;
            l_U639[1] = 3;
            l_U639[2] = 4;
            l_U639[3] = 2;
            l_U639[4] = 6;
            l_U639[5] = 1;
            l_U639[6] = 7;
            l_U639[7] = 5;
            l_U639[8] = 0;
            l_U639[9] = 9;
            l_U639[10] = 10;
            l_U651 = 0;
            break;
            case 1:
            l_U639[0] = 1;
            l_U639[1] = 2;
            l_U639[2] = 3;
            l_U639[3] = 6;
            l_U639[4] = 4;
            l_U639[5] = 8;
            l_U639[6] = 7;
            l_U639[7] = 0;
            l_U639[8] = 5;
            l_U639[9] = 9;
            l_U639[10] = 10;
            l_U651 = 4;
            break;
            case 2:
            l_U639[0] = 7;
            l_U639[1] = 8;
            l_U639[2] = 2;
            l_U639[3] = 3;
            l_U639[4] = 9;
            l_U639[5] = 0;
            l_U639[6] = 5;
            l_U639[7] = 4;
            l_U639[8] = 1;
            l_U639[9] = 6;
            l_U639[10] = 10;
            l_U651 = 3;
            break;
            case 3:
            l_U639[0] = 7;
            l_U639[1] = 8;
            l_U639[2] = 1;
            l_U639[3] = 6;
            l_U639[4] = 4;
            l_U639[5] = 0;
            l_U639[6] = 5;
            l_U639[7] = 9;
            l_U639[8] = 2;
            l_U639[9] = 3;
            l_U639[10] = 10;
            l_U651 = 7;
            break;
        }
        break;
    }
    Result = sub_44959();
    if (Result == -1)
    {
        Result = uParam0;
    }
    return Result;
}

int sub_44959()
{
    int I;

    for ( I = 0; I < 11; I++ )
    {
        if (sub_4283( l_U639[I] ))
        {
            if (NOT l_U593)
            {
                if (I > l_U651)
                {
                    return -1;
                }
            }
            return l_U639[I];
        }
    }
    return -1;
}

void sub_45535(unknown uParam0)
{
    int Result;

    switch (uParam0)
    {
        case 0:
        Result = 25;
        break;
        case 1:
        if (NOT g_U15654[65])
        {
            Result = 70;
        }
        else
        {
            Result = 100;
        }
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
    }
    return Result;
}

void sub_45796(unknown uParam0)
{
    int Result;

    switch (uParam0)
    {
        case 0:
        Result = 420;
        break;
        case 1:
        if (NOT g_U15654[65])
        {
            Result = 840;
        }
        else
        {
            Result = 1500;
        }
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
    }
    return Result;
}

int sub_46078(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    sub_1031( uParam0, ref iVar5 );
    if (NOT (iVar5 == 55))
    {
        GET_WEAPONTYPE_SLOT( iVar5, ref uVar3 );
    }
    GET_CHAR_WEAPON_IN_SLOT( sub_4703(), uVar3, ref iVar6, ref iVar4, ref uVar7 );
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

int sub_46228(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_909() ))
    {
        switch (uParam0)
        {
            case 3:
            if (HAS_CHAR_GOT_WEAPON( sub_4703(), uParam0 ))
            {
                return 1;
            }
            break;
            case 55:
            GET_PLAYER_MAX_ARMOUR( sub_909(), ref iVar4 );
            GET_CHAR_ARMOUR( sub_4703(), ref iVar3 );
            if (iVar3 >= iVar4)
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_46372(unknown uParam0)
{
    int iVar3;

    if (HAS_CHAR_GOT_WEAPON( sub_4703(), uParam0 ))
    {
        GET_AMMO_IN_CHAR_WEAPON( sub_4703(), uParam0, ref iVar3 );
        if (iVar3 >= (sub_35182( uParam0 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_46776(unknown uParam0)
{
    if (sub_46372( uParam0 ))
    {
        SET_CHAR_AMMO( sub_4703(), uParam0, sub_35182( uParam0 ) );
    }
    return;
}

void sub_47946()
{
    DISPLAY_CASH( 0 );
    DISPLAY_RADAR( 1 );
    if (IS_PLAYER_PLAYING( sub_909() ))
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_4703(), 0 );
        TASK_CLEAR_LOOK_AT( sub_4703() );
        CLEAR_CHAR_TASKS( sub_4703() );
        SET_PLAYER_CONTROL( sub_909(), 1 );
    }
    if (IS_PLAYER_PLAYING( sub_909() ))
    {
        GET_CURRENT_CHAR_WEAPON( sub_4703(), ref l_U942 );
        if (l_U942 == 0)
        {
            if (HAS_CHAR_GOT_WEAPON( sub_4703(), l_U943 ))
            {
                SET_CURRENT_CHAR_WEAPON( sub_4703(), l_U943, 1 );
            }
        }
    }
    sub_48124();
    CLEAR_HELP();
    CLEAR_PRINTS();
    return;
}

void sub_48124()
{
    if (l_U569)
    {
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 2000 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (DOES_CAM_EXIST( l_U596 ))
        {
            DESTROY_CAM( l_U596 );
        }
        if (DOES_CAM_EXIST( l_U597 ))
        {
            DESTROY_CAM( l_U597 );
        }
        if (DOES_CAM_EXIST( l_U598 ))
        {
            DESTROY_CAM( l_U598 );
        }
        END_CAM_COMMANDS( ref l_U636 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        if (IS_PLAYER_PLAYING( sub_909() ))
        {
            SET_CAM_BEHIND_PED( sub_4703() );
        }
        l_U569 = 0;
    }
    return;
}

void sub_48491(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP_FOREVER( "JGC_T70" );
        break;
        case 1:
        if (NOT g_U15654[65])
        {
            PRINT_HELP_FOREVER( "JGC_T71" );
        }
        else
        {
            PRINT_HELP_FOREVER( "JGCT71B" );
        }
        break;
        case 2:
        PRINT_HELP_FOREVER( "JGC_T77" );
        break;
        case 3:
        PRINT_HELP_FOREVER( "JGC_T72" );
        break;
        case 4:
        PRINT_HELP_FOREVER( "JGC_T73" );
        break;
        case 5:
        PRINT_HELP_FOREVER( "JGC_T74" );
        break;
        case 6:
        PRINT_HELP_FOREVER( "JGC_T75" );
        break;
        case 7:
        PRINT_HELP_FOREVER( "JGC_T78" );
        break;
        case 8:
        PRINT_HELP_FOREVER( "JGC_T76" );
        break;
        case 9:
        PRINT_HELP_FOREVER( "JGC_T79" );
        break;
    }
    return;
}

void sub_49477(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( l_U669[uParam0] ))
    {
        if (IS_OBJECT_ATTACHED( l_U669[uParam0] ))
        {
            DETACH_OBJECT( l_U669[uParam0], 1 );
        }
        DELETE_OBJECT( ref l_U669[uParam0] );
    }
    return;
}

void sub_49635()
{
    int I;

    for ( I = 0; I < 11; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U669[I] ))
        {
            if (IS_OBJECT_ATTACHED( l_U669[I] ))
            {
                DETACH_OBJECT( l_U669[I], 1 );
            }
            DELETE_OBJECT( ref l_U669[I] );
        }
    }
    if (DOES_OBJECT_EXIST( l_U681 ))
    {
        DELETE_OBJECT( ref l_U681 );
    }
    if (DOES_OBJECT_EXIST( l_U682 ))
    {
        DELETE_OBJECT( ref l_U682 );
    }
    return;
}

void sub_50087()
{
    if (DOES_BLIP_EXIST( l_U564 ))
    {
        REMOVE_BLIP( l_U564 );
    }
    if (DOES_CHAR_EXIST( l_U683 ))
    {
        DELETE_CHAR( ref l_U683 );
    }
    if (DOES_VEHICLE_EXIST( l_U941 ))
    {
        DELETE_CAR( ref l_U941 );
    }
    return;
}

void sub_50236()
{
    if (l_U565)
    {
        if ((((((((((((((((((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 2 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 3 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 23 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 83 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 82 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 84 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )))) AND (NOT (sub_39089( 1 )))) AND (NOT (sub_39172( 1 )))) AND (NOT (sub_38924( 1 )))) AND (NOT (sub_39006( 1 ))))
        {
            l_U565 = 0;
        }
    }
    return;
}

void sub_50596(unknown uParam0, unknown uParam1)
{
    sub_50609( uParam0, uParam1 );
    return;
}

void sub_50609(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 3;
    iVar5 = 3;
    sub_50628( iVar4, uParam1 );
    if (bParam0)
    {
        sub_56045( iVar5 );
    }
    return;
}

void sub_50628(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    if (NOT g_U22274[uParam0]._fU500._fU0)
    {
        return;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return;
    }
    uVar4 = sub_50690( uParam0 );
    if (g_U13391[uVar4]._fU80._fU0 == 1)
    {
        sub_51087( uVar4 );
    }
    if (g_U13391[uVar4]._fU0._fU0 == 1)
    {
        sub_55505( uVar4 );
    }
    if (g_U13391[uVar4]._fU160._fU0)
    {
        if (g_U13391[uVar4]._fU160._fU8)
        {
            g_U15946[uParam0]._fU8[0]._fU0[3] = 0;
        }
        g_U13391[uVar4]._fU160._fU108._fU0 = 0;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U22274[uParam0]._fU500._fU4 = 1;
    g_U22274[uParam0]._fU500._fU168 = iVar5 + g_U22274[uParam0]._fU500._fU164;
    g_U22274[uParam0]._fU500._fU184 = uParam1;
    sub_56011( "CONTACT HOSPITALISED\n" );
    return;
}

int sub_50690(unknown uParam0)
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
        case 22: return 20;
        case 20: return 21;
        case 21: return 22;
    }
    sub_2095( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

void sub_51087(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU80._fU0 = 0;
        sub_51208( uParam0 );
        sub_53654( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_53942( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU80._fU0 = 6;
        sub_53942( uParam0, iVar4 );
        break;
        case 6:
        sub_53942( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_54391( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_2095( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_51208(unknown uParam0)
{
    if ((NOT (g_U13391[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU80._fU0 == 1)))
    {
        sub_51265( uParam0 );
        sub_51411( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_51265( uParam0 );
        sub_51601( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 0)
    {
        sub_51411( uParam0 );
    }
    if ((NOT (g_U13391[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU0._fU0 == 1)))
    {
        sub_51265( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_52886( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_51265( uParam0 );
    }
    return;
}

void sub_51265(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
    g_U13391[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU0._fU68;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_51411(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
    g_U13391[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU80._fU68;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_51601(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_51411( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU80._fU4;
        iVar8 = sub_51784( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU80._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_2095( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U96 );
        if ((NOT g_U32896._fU4) || (NOT g_U13391[uParam0]._fU80._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U13391[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U97 );
        sub_52441( g_U13391[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

int sub_51784(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_2095( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_52441(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 1:
        sub_52533( ref uParam0, 827.41800000, -288.99640000, 14.75330000, 179.76500000 );
        break;
        case 17:
        sub_52533( ref uParam0, -150.38910000, -795.66570000, 4.20110000, 271.69380000 );
        break;
        case 18:
        sub_52533( ref uParam0, -160.31520000, -796.40800000, 5.20610000, 270.00000000 );
        break;
        case 24:
        sub_52533( ref uParam0, -126.75380000, -263.66190000, 11.56380000, 0.00000000 );
        break;
        case 29:
        sub_52533( ref uParam0, -905.43880000, 908.73140000, 12.59760000, 0.74970000 );
        break;
        case 32:
        sub_52533( ref uParam0, 341.41760000, -454.50700000, 3.60780000, 0.74970000 );
        break;
    }
    return;
}

void sub_52533(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_52886(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_51265( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU0._fU4;
        iVar8 = sub_51784( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU0._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_2095( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U96 );
        if ((NOT g_U32896._fU4) || (NOT g_U13391[uParam0]._fU0._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U97 );
        if (l_U122)
        {
            FLASH_BLIP( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U122 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U122 = 1;
        }
        sub_52441( g_U13391[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_53654(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
        }
    }
    g_U13391[uParam0]._fU80._fU0 = 0;
    g_U13391[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU80._fU24, "", 32 );
    g_U13391[uParam0]._fU80._fU56 = 10;
    g_U13391[uParam0]._fU80._fU60 = nil;
    g_U13391[uParam0]._fU80._fU64 = nil;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U13391[uParam0]._fU80._fU72 = 1;
    g_U13391[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_53942(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU80._fU24 );
        sub_53654( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU0._fU24 );
    sub_54080( uParam0, 0 );;
    sub_51208( uParam0 );
    return;
}

void sub_54080(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
        }
    }
    g_U13391[uParam0]._fU0._fU0 = 0;
    g_U13391[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU0._fU24, "", 32 );
    g_U13391[uParam0]._fU0._fU56 = 10;
    g_U13391[uParam0]._fU0._fU60 = nil;
    g_U13391[uParam0]._fU0._fU64 = nil;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U13391[uParam0]._fU0._fU72 = 1;
    g_U13391[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_54391(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U13391[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U13391[iParam0]._fU80._fU60 );
        }
        sub_53654( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U13391[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U13391[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U13391[iParam0]._fU0._fU56;
    if ((iVar5 == 5) || (iVar5 == 6))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U10981[iParam0]._fU28 = 1;
    }
    sub_54080( iParam0, 0 );
    if (bVar4)
    {
        sub_54600();
    }
    g_U10981[iParam0]._fU12 = 0;;
    if (iParam0 == 23)
    {
        sub_54656();
        return;
    }
    sub_51208( iParam0 );
    if (bVar4)
    {
        g_U10978 = 0;
    }
    if (bVar4)
    {
        sub_55303( iParam0 );
    }
    if (g_U2)
    {
        if (g_U3)
        {
            WAIT( 1500 );
            g_U4 = 1;
        }
    }
    return;
}

void sub_54600()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_54656()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_909() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4703() ))
        {
            if (NOT (g_U15936._fU24 == -1))
            {
                uVar3 = g_U32697[g_U15936._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_4703(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15936._fU24;
    sub_54768();
    if (bVar2)
    {
        g_U15936._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4703(), ref g_U15936._fU32 );
        g_U15936._fU24 = uVar4;
    }
    l_U121 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_909(), 0 );
    sub_54923();
    if (IS_PLAYER_PLAYING( sub_909() ))
    {
        SET_PLAYER_CONTROL( sub_909(), 1 );
    }
    return;
}

void sub_54768()
{
    g_U15936._fU0 = 0;
    g_U15936._fU4 = 0;
    g_U15936._fU8 = 0;
    g_U15936._fU12 = 0;
    g_U15936._fU16 = 0;
    g_U15936._fU20 = 0;
    g_U15936._fU24 = -1;
    g_U15936._fU32 = nil;
    g_U15936._fU28 = 0;
    return;
}

void sub_54923()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_909() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_4703() ))
    {
        l_U121 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_909(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_4703() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4703(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_4703(), 837858166 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_4703(), -488123221 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15936._fU20)
                {
                    bVar4 = true;
                }
                else
                {
                    bVar4 = false;
                }
            }
            else
            {
                bVar4 = true;
            }
        }
        else
        {
            bVar4 = true;
        }
    }
    else
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        if (l_U121)
        {
            return;
        }
        l_U121 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_909(), 1 );
    }
    else if (NOT l_U121)
    {
        return;
    }
    l_U121 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_909(), 0 );;
    return;
}

void sub_55303(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_55505(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU0._fU0 = 0;
        sub_51208( uParam0 );
        sub_54080( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_53942( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_53942( uParam0, iVar4 );
        break;
        case 6:
        sub_53942( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_54391( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_2095( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_56011(unknown uParam0)
{
    return;
}

void sub_56045(unknown uParam0)
{
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
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        sub_56254( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_57351( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_56254(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_56265( uParam1 );
    sub_56439( uParam0, 0, uParam2 );
    sub_56439( uParam0, 1, uParam3 );
    sub_56439( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_57211();
    return;
}

void sub_56265(unknown uParam0)
{
    ADD_SCORE( sub_909(), uParam0 );
    sub_56290( uParam0 );
    return;
}

void sub_56290(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2095( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_56439(unknown uParam0, int iParam1, int iParam2)
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
        sub_56596( uParam0 );
    }
    return;
}

void sub_56596(unknown uParam0)
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

void sub_57211()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_57351(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_57541()
{
    sub_50087();
    sub_49635();
    sub_48124();
    SET_PLAYER_CONTROL( sub_909(), 1 );
    sub_2213();
    CLEAR_HELP();
    CLEAR_PRINTS();
    return;
}