void main()
{
    vector vVar2;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    int I;
    boolean bVar10;

    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U122 = 50.00000000;
    l_U123 = 20.00000000;
    l_U124 = 0;
    l_U125 = 0;
    sub_69( "DFBKAUD" );
    if (IS_PLAYER_PLAYING( sub_174() ))
    {
        sub_267( 0, sub_218(), "NIKO", 0 );
    }
    while (true)
    {
        if ((IS_PLAYER_PLAYING( sub_174() )) AND (NOT g_U64921))
        {
            if (g_U9189)
            {
                if (DOES_CHAR_EXIST( l_U145[0] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U145[0] )))
                    {
                        CLEAR_ROOM_FOR_CHAR( l_U145[0] );
                    }
                }
                if (DOES_CHAR_EXIST( l_U145[1] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U145[1] )))
                    {
                        CLEAR_ROOM_FOR_CHAR( l_U145[1] );
                    }
                }
                g_U9189 = 0;
            }
            sub_572();
            sub_1282();
            if (l_U113)
            {
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (DOES_BLIP_EXIST( l_U101[I] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U145[I], ref l_U101[I] );
                            CHANGE_BLIP_COLOUR( l_U101[I], 4 );
                        }
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                    {
                        GET_CHAR_COORDINATES( l_U145[I], ref vVar2.x, ref vVar2.y, ref vVar2.z );
                        LINE( vVar2.x, vVar2.y, vVar2.z - 0.50000000, vVar2.x, vVar2.y, vVar2.z + 0.50000000 );
                        LINE( vVar2.x - 0.10000000, vVar2.y, vVar2.z, vVar2.x + 0.10000000, vVar2.y, vVar2.z );
                        LINE( vVar2.x, vVar2.y - 0.10000000, vVar2.z, vVar2.x, vVar2.y + 0.10000000, vVar2.z );
                    }
                }
            }
            else
            {
                for ( I = 0; I < 2; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U101[I] ))
                    {
                        REMOVE_BLIP( l_U101[I] );
                    }
                }
            }
            if (l_U104)
            {
                if (l_U113)
                {
                    PRINTSTRING( "DWAYNE BACKUP - leaving 12 \n" );
                }
                sub_7290();
            }
            if ((NOT (l_U124 == 0)) AND (NOT (l_U124 == 5)))
            {
                if (TIMERA() > 300000)
                {
                    PRINT( "PAK_02", 7500, 1 );
                    if (l_U113)
                    {
                        PRINTSTRING( "DWAYNE BACKUP - leaving 13 \n" );
                    }
                    sub_7290();
                }
            }
            switch (l_U124)
            {
                case 0:
                GET_WEAPONTYPE_MODEL( 12, ref l_U141[0] );
                GET_WEAPONTYPE_MODEL( 7, ref l_U141[1] );
                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref I );
                switch (I)
                {
                    case 0:
                    l_U144 = 1376298265;
                    break;
                    case 1:
                    l_U144 = -1962071130;
                    break;
                    case 2:
                    l_U144 = -808457413;
                    break;
                }
                REQUEST_MODEL( l_U144 );
                REQUEST_MODEL( -301223260 );
                REQUEST_MODEL( l_U141[0] );
                REQUEST_MODEL( l_U141[1] );
                while ((((NOT (HAS_MODEL_LOADED( l_U144 ))) || (NOT (HAS_MODEL_LOADED( -301223260 )))) || (NOT (HAS_MODEL_LOADED( l_U141[0] )))) || (NOT (HAS_MODEL_LOADED( l_U141[1] ))))
                {
                    REQUEST_MODEL( l_U144 );
                    REQUEST_MODEL( -301223260 );
                    REQUEST_MODEL( l_U141[0] );
                    REQUEST_MODEL( l_U141[1] );
                    WAIT( 0 );
                }
                # -sub_C1FFC0-0xc214c8( 2, ref l_U118 );
                LOAD_COMBAT_DECISION_MAKER( 9, ref l_U119 );
                # -sub_C1FFC0-0xc214c8( 3, ref l_U120 );
                LOAD_COMBAT_DECISION_MAKER( 1, ref l_U121 );
                SETTIMERA( 0 );
                l_U139 = 25;
                l_U124 = 1;
                break;
                case 1:
                if (NOT sub_8158())
                {
                    if (sub_8205( ref vVar2, ref fVar8, ref l_U139 ))
                    {
                        bVar10 = true;
                    }
                    else if (l_U139 > 500)
                    {
                        if (l_U172 > 0.00000000)
                        {
                            vVar2 = {l_U168};
                            fVar8 = l_U171;
                            bVar10 = true;
                        }
                        else
                        {
                            PRINT( "PAK_08", 7500, 1 );
                            if (l_U113)
                            {
                                PRINTSTRING( "DWAYNE BACKUP - leaving - couldn't get creation point \n" );
                            }
                            sub_7290();
                        }
                    }
                    if (bVar10)
                    {
                        CREATE_CAR( l_U144, vVar2.x, vVar2.y, vVar2.z, ref l_U166, 1 );
                        SET_CAR_HEADING( l_U166, fVar8 );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U166, 2.00000000, 0.00000000, 0.00000000, ref vVar2.x, ref vVar2.y, ref vVar2.z );
                        SET_CAR_HEADING( l_U166, fVar8 );
                        SET_CAR_COORDINATES( l_U166, vVar2.x, vVar2.y, vVar2.z );
                        CHANGE_CAR_COLOUR( l_U166, 31, 0 );
                        SET_VEHICLE_DIRT_LEVEL( l_U166, 15.90000000 );
                        CREATE_CHAR_INSIDE_CAR( l_U166, 26, -301223260, ref l_U145[0] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U145[0] );
                        GIVE_WEAPON_TO_CHAR( l_U145[0], 12, 30000, 0 );
                        g_U64923 = l_U145[0];
                        CREATE_CHAR_AS_PASSENGER( l_U166, 26, -301223260, 0, ref l_U145[1] );
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U145[1] );
                        GIVE_WEAPON_TO_CHAR( l_U145[1], 7, 30000, 0 );
                        for ( I = 0; I < 2; I++ )
                        {
                            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U145[I], 1 );
                            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U145[I], 0 );
                            SET_CHAR_DECISION_MAKER( l_U145[I], l_U118 );
                            SET_COMBAT_DECISION_MAKER( l_U145[I], l_U119 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U145[I], 1 );
                            SET_CHAR_RELATIONSHIP_GROUP( l_U145[I], 0 );
                            SET_CHAR_RELATIONSHIP( l_U145[I], 0, 0 );
                            SET_CHAR_NEVER_TARGETTED( l_U145[I], 1 );
                            SET_CHAR_WILL_USE_COVER( l_U145[I], 1 );
                            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U145[I], 0 );
                            SET_CHAR_MAX_HEALTH( l_U145[I], 600 );
                            SET_CHAR_HEALTH( l_U145[I], 600 );
                            SET_CHAR_ACCURACY( l_U145[I], 75 );
                            SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U145[I], 0 );
                            SET_PED_DIES_WHEN_INJURED( l_U145[I], 1 );
                            ADD_BLIP_FOR_CHAR( l_U145[I], ref l_U98[I] );
                            SET_BLIP_AS_FRIENDLY( l_U98[I], 1 );
                            CHANGE_BLIP_PRIORITY( l_U98[I], 0 );
                        }
                        PRINTSTRING( "DWAYNE BACKUP - mark_car_as_no_longer_needed 2 \n" );
                        sub_3047( l_U166 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U144 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -301223260 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U141[0] );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U141[1] );
                        l_U139 = 1;
                        l_U124 = 2;
                        SETTIMERA( 0 );
                    }
                }
                break;
                case 2:
                if (IS_VEH_DRIVEABLE( l_U166 ))
                {
                    if ((((CHECK_STUCK_TIMER( l_U166, 3, 5000 )) || (CHECK_STUCK_TIMER( l_U166, 2, 5000 ))) || (CHECK_STUCK_TIMER( l_U166, 1, 5000 ))) || (CHECK_STUCK_TIMER( l_U166, 0, 5000 )))
                    {
                        l_U124 = 3;
                    }
                    else if (sub_10081())
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[0] )))
                        {
                            if (NOT (sub_10250( l_U166 )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U149 );
                                TASK_CAR_MISSION( 0, l_U166, 0, 21, 12.00000000, 0, 3, 3 );
                                TASK_CAR_TEMP_ACTION( 0, l_U166, 6, 1000 );
                                CLOSE_SEQUENCE_TASK( l_U149 );
                                TASK_PERFORM_SEQUENCE( l_U145[0], l_U149 );
                                CLEAR_SEQUENCE_TASK( l_U149 );
                                SETTIMERA( 0 );
                            }
                            l_U124 = 3;
                        }
                        else
                        {
                            l_U124 = 3;
                        }
                    }
                }
                else
                {
                    l_U124 = 3;
                }
                break;
                case 3:
                bVar10 = false;
                if (IS_VEH_DRIVEABLE( l_U166 ))
                {
                    if (sub_10250( l_U166 ))
                    {
                        bVar10 = true;
                    }
                }
                else
                {
                    bVar10 = true;
                }
                if (bVar10)
                {
                    SETTIMERA( 0 );
                    if (IS_PLAYER_PLAYING( sub_174() ))
                    {
                        GET_CHAR_COORDINATES( sub_218(), ref l_U163._fU0, ref l_U163._fU4, ref l_U163._fU8 );
                    }
                    if (IS_CHAR_IN_WATER( sub_218() ))
                    {
                        l_U163._fU8 = 1.00000000;
                    }
                    for ( I = 0; I < 2; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                        {
                            CLEAR_CHAR_TASKS( l_U145[I] );
                        }
                    }
                    l_U124 = 4;
                }
                else if (NOT l_U117)
                {
                    if (TIMERA() > 3000)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[0] )))
                        {
                            CLEAR_CHAR_TASKS( l_U145[0] );
                            OPEN_SEQUENCE_TASK( ref l_U149 );
                            TASK_CAR_TEMP_ACTION( 0, l_U166, 6, 1000 );
                            CLOSE_SEQUENCE_TASK( l_U149 );
                            TASK_PERFORM_SEQUENCE( l_U145[0], l_U149 );
                            CLEAR_SEQUENCE_TASK( l_U149 );
                            l_U117 = 1;
                        }
                    }
                }
                break;
                case 4:
                bVar10 = false;
                if (IS_PLAYER_PLAYING( sub_174() ))
                {
                    GET_CHAR_COORDINATES( sub_218(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
                    if (IS_CHAR_IN_WATER( sub_218() ))
                    {
                        vVar2.z = 1.00000000;
                    }
                }
                uVar5 = {l_U163 - vVar2};
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U145[I], sub_218(), 20.00000000, 20.00000000, 3.00000000, 0 )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U145[I], 29, ref l_U150 );
                            if ((l_U150 == 7) || ((VMAG( uVar5 )) > 5.00000000))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U149 );
                                if (IS_CHAR_IN_ANY_CAR( l_U145[I] ))
                                {
                                    TASK_LEAVE_ANY_CAR( 0 );
                                }
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar2.x, vVar2.y, vVar2.z, 4, -2, 3.00000000 );
                                CLOSE_SEQUENCE_TASK( l_U149 );
                                TASK_PERFORM_SEQUENCE( l_U145[I], l_U149 );
                                CLEAR_SEQUENCE_TASK( l_U149 );
                                l_U163 = {vVar2};
                            }
                        }
                        else
                        {
                            bVar10 = true;
                        }
                    }
                }
                if (bVar10)
                {
                    if ((IS_SCREEN_FADED_IN()) AND (IS_PLAYER_CONTROL_ON( sub_174() )))
                    {
                        SETTIMERA( 0 );
                        SET_GROUP_SEPARATION_RANGE( sub_640(), 9999.00000000 );
                        for ( I = 0; I < 2; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                            {
                                SET_GROUP_MEMBER( sub_640(), l_U145[I] );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U145[I], 0 );
                                SET_CHAR_NEVER_LEAVES_GROUP( l_U145[I], 1 );
                            }
                        }
                        l_U114 = 0;
                        SETTIMERA( 0 );
                        l_U125 = 0;
                        l_U124 = 5;
                    }
                }
                break;
                case 5:
                if (NOT l_U114)
                {
                    if (IS_PLAYER_PLAYING( sub_174() ))
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U145[0] ))) AND (NOT (IS_CHAR_INJURED( l_U145[1] ))))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_218(), l_U145[0], 10.00000000, 10.00000000, 2.00000000, 0 ))
                            {
                                l_U148 = l_U145[0];
                                l_U114 = 1;
                            }
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_218(), l_U145[1], 10.00000000, 10.00000000, 2.00000000, 0 ))
                            {
                                l_U148 = l_U145[1];
                                l_U114 = 1;
                            }
                        }
                        else if ((NOT (IS_CHAR_INJURED( l_U145[0] ))) AND (IS_CHAR_INJURED( l_U145[1] )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_218(), l_U145[0], 10.00000000, 10.00000000, 2.00000000, 0 ))
                            {
                                l_U148 = l_U145[0];
                                l_U114 = 1;
                            }
                        }
                        else if ((IS_CHAR_INJURED( l_U145[0] )) AND (NOT (IS_CHAR_INJURED( l_U145[1] ))))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_218(), l_U145[1], 10.00000000, 10.00000000, 2.00000000, 0 ))
                            {
                                l_U148 = l_U145[1];
                                l_U114 = 1;
                            }
                        };;;
                    }
                    if (l_U114)
                    {
                        for ( I = 0; I < 2; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                            {
                                SET_CHAR_NEVER_LEAVES_GROUP( l_U145[I], 0 );
                            }
                            if (DOES_BLIP_EXIST( l_U98[I] ))
                            {
                                REMOVE_BLIP( l_U98[I] );
                            }
                        }
                        SET_GROUP_SEPARATION_RANGE( sub_640(), 75.00000000 );
                        if (NOT ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U145[0] )))
                            {
                                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, l_U145[0], 0, 0, 3000 );
                            }
                            else if (NOT (IS_CHAR_INJURED( l_U145[1] )))
                            {
                                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, l_U145[1], 0, 0, 3000 );
                            }
                        }
                    }
                }
                else if (l_U125 == 0)
                {
                    bVar10 = true;
                    if ((sub_12819( l_U151 )) || (IS_SCREEN_FADED_OUT()))
                    {
                        bVar10 = false;
                    }
                    for ( I = 0; I < 2; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                        {
                            if (IS_AMBIENT_SPEECH_PLAYING( l_U145[I] ))
                            {
                                bVar10 = false;
                            }
                        }
                    }
                    if (bVar10)
                    {
                        if (IS_PLAYER_PLAYING( sub_174() ))
                        {
                            if (IS_CHAR_INJURED( l_U148 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U145[0] )))
                                {
                                    l_U148 = l_U145[0];
                                }
                                else if (NOT (IS_CHAR_INJURED( l_U145[1] )))
                                {
                                    l_U148 = l_U145[1];
                                }
                            }
                            if (NOT (IS_CHAR_INJURED( l_U148 )))
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( l_U148 )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_218(), l_U148, 5.00000000, 5.00000000, 5.00000000, 0 ))
                                    {
                                        SAY_AMBIENT_SPEECH( l_U148, "GENERIC_HI", 1, 1, 2 );
                                        l_U125++;
                                    }
                                }
                            }
                        }
                    }
                }
                if (l_U125 == 1)
                {
                    bVar10 = true;
                    if (((IS_MESSAGE_BEING_DISPLAYED()) || (sub_12819( l_U151 ))) || (IS_SCREEN_FADED_OUT()))
                    {
                        bVar10 = false;
                    }
                    if (IS_PLAYER_PLAYING( sub_174() ))
                    {
                        if (IS_AMBIENT_SPEECH_PLAYING( sub_218() ))
                        {
                            bVar10 = false;
                        }
                    }
                    for ( I = 0; I < 2; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                        {
                            if (IS_AMBIENT_SPEECH_PLAYING( l_U145[I] ))
                            {
                                bVar10 = false;
                            }
                        }
                    }
                    if (bVar10)
                    {
                        if (IS_PLAYER_PLAYING( sub_174() ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U148 )))
                            {
                                TASK_LOOK_AT_CHAR( sub_218(), l_U148, 4000, 0 );
                            }
                        }
                        if ((NOT (IS_CHAR_INJURED( l_U145[0] ))) AND (NOT (IS_CHAR_INJURED( l_U145[1] ))))
                        {
                            if (sub_13602( "DFBK_HELLO", ref l_U151, 6, 1 ))
                            {
                                l_U125++;
                            }
                        }
                        else if ((NOT (IS_CHAR_INJURED( l_U145[0] ))) || (NOT (IS_CHAR_INJURED( l_U145[1] ))))
                        {
                            if (sub_14631( "DFBK_HELLO", 2, 1, ref l_U151, 6, 1 ))
                            {
                                l_U125++;
                            }
                        }
                    }
                }
                sub_3545();
                if (NOT l_U115)
                {
                    if (DOES_VEHICLE_EXIST( l_U166 ))
                    {
                        PRINTSTRING( "DWAYNE BACKUP - mark_car_as_no_longer_needed 3 \n" );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U166 );
                    }
                }
                if (NOT l_U116)
                {
                    if (IS_PLAYER_PLAYING( sub_174() ))
                    {
                        if (DOES_CHAR_EXIST( g_U64922 ))
                        {
                            if (NOT (IS_CHAR_DEAD( g_U64922 )))
                            {
                                bVar10 = false;
                                if (IS_PLAYER_TARGETTING_CHAR( sub_174(), g_U64922 ))
                                {
                                    bVar10 = true;
                                }
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_218(), g_U64922, 5.00000000, 5.00000000, 5.00000000, 0 ))
                                {
                                    bVar10 = bVar10;
                                }
                                if (bVar10)
                                {
                                    for ( I = 0; I < 2; I++ )
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                                        {
                                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U145[I], 1 );
                                            CLEAR_CHAR_TASKS( l_U145[I] );
                                        }
                                    }
                                    l_U116 = 1;
                                }
                            }
                        }
                    }
                }
                else
                {
                    bVar10 = false;
                    if (IS_PLAYER_PLAYING( sub_174() ))
                    {
                        if (DOES_CHAR_EXIST( g_U64922 ))
                        {
                            if (NOT (IS_CHAR_DEAD( g_U64922 )))
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_218(), g_U64922, 25.00000000, 25.00000000, 25.00000000, 0 )))
                                {
                                    bVar10 = false;
                                }
                            }
                            else
                            {
                                bVar10 = true;
                            }
                        }
                        else
                        {
                            bVar10 = true;
                        }
                    }
                    if (bVar10)
                    {
                        for ( I = 0; I < 2; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U145[I], 0 );
                            }
                        }
                        l_U116 = 0;
                    }
                }
                if (g_U9181)
                {
                    if (NOT (IS_CHAR_INJURED( l_U145[0] )))
                    {
                        SET_CHAR_COORDINATES( l_U145[0], g_U9182[0]._fU0, g_U9182[0]._fU4, g_U9182[0]._fU8 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U145[1] )))
                    {
                        SET_CHAR_COORDINATES( l_U145[1], g_U9182[1]._fU0, g_U9182[1]._fU4, g_U9182[1]._fU8 );
                    }
                    g_U9181 = 0;
                }
                bVar10 = false;
                if (TIMERA() > 720000)
                {
                    if ((NOT (IS_CHAR_INJURED( l_U145[0] ))) AND (NOT (IS_CHAR_INJURED( l_U145[1] ))))
                    {
                        if ((NOT (IS_PED_IN_COMBAT( l_U145[0] ))) AND (NOT (IS_PED_IN_COMBAT( l_U145[1] ))))
                        {
                            if (l_U113)
                            {
                                PRINTSTRING( "DWAYNE BACKUP - leaving 1 \n" );
                            }
                            bVar10 = true;
                        }
                    }
                    else if ((IS_CHAR_INJURED( l_U145[0] )) AND (NOT (IS_CHAR_INJURED( l_U145[1] ))))
                    {
                        if (NOT (IS_PED_IN_COMBAT( l_U145[1] )))
                        {
                            if (l_U113)
                            {
                                PRINTSTRING( "DWAYNE BACKUP - leaving 2 \n" );
                            }
                            bVar10 = true;
                        }
                    }
                    else if ((NOT (IS_CHAR_INJURED( l_U145[0] ))) AND (IS_CHAR_INJURED( l_U145[1] )))
                    {
                        if (NOT (IS_PED_IN_COMBAT( l_U145[0] )))
                        {
                            if (l_U113)
                            {
                                PRINTSTRING( "DWAYNE BACKUP - leaving 3 \n" );
                            }
                            bVar10 = true;
                        }
                    };;;
                }
                if (bVar10)
                {
                    g_U64921 = 1;
                }
                if (((IS_PLAYER_PLAYING( sub_174() )) AND (NOT l_U105)) AND (l_U114))
                {
                    GET_CHAR_COORDINATES( sub_218(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
                    for ( I = 0; I < 2; I++ )
                    {
                        if (NOT l_U109[I])
                        {
                            if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                            {
                                GET_CHAR_COORDINATES( l_U145[I], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                                fVar8 = uVar5._fU8 - vVar2.z;
                                if (fVar8 < 0.00000000)
                                {
                                    fVar8 *= -1.00000000;
                                }
                                if (fVar8 > 15.00000000)
                                {
                                    if (l_U113)
                                    {
                                        PRINTSTRING( "dwayne backup - pos = " );
                                        PRINTFLOAT( vVar2.x );
                                        PRINTSTRING( ", " );
                                        PRINTFLOAT( vVar2.y );
                                        PRINTSTRING( ", " );
                                        PRINTFLOAT( vVar2.z );
                                        PRINTSTRING( " pos2 = " );
                                        PRINTFLOAT( uVar5._fU0 );
                                        PRINTSTRING( ", " );
                                        PRINTFLOAT( uVar5._fU4 );
                                        PRINTSTRING( ", " );
                                        PRINTFLOAT( uVar5._fU8 );
                                        PRINTSTRING( "\n" );
                                    }
                                    if (DOES_BLIP_EXIST( l_U101[I] ))
                                    {
                                        REMOVE_BLIP( l_U101[I] );
                                    }
                                    REMOVE_CHAR_FROM_GROUP( l_U145[I] );
                                    if (l_U113)
                                    {
                                        PRINTSTRING( "DWAYNE BACKUP - leaving 8 \n" );
                                    }
                                }
                            }
                        }
                    }
                    for ( I = 0; I < 2; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                        {
                            if (NOT (IS_GROUP_MEMBER( l_U145[I], sub_640() )))
                            {
                                if (DOES_BLIP_EXIST( l_U98[I] ))
                                {
                                    REMOVE_BLIP( l_U98[I] );
                                }
                                if (l_U113)
                                {
                                    PRINTSTRING( "DWAYNE BACKUP - Dude " );
                                    PRINTINT( I );
                                    PRINTSTRING( " is no longer part of the group, marking as no longer needed\n" );
                                }
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U145[I] );
                                l_U145[I] = nil;
                            }
                        }
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U145[I] ))
                    {
                        if (IS_CHAR_INJURED( l_U145[I] ))
                        {
                            if (DOES_BLIP_EXIST( l_U98[I] ))
                            {
                                REMOVE_BLIP( l_U98[I] );
                            }
                            if (l_U113)
                            {
                                PRINTSTRING( "DWAYNE BACKUP - Dude " );
                                PRINTINT( I );
                                PRINTSTRING( " is injured, marking as no longer needed\n" );
                            }
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U145[I] );
                            l_U145[I] = nil;
                        }
                    }
                }
                if ((IS_CHAR_INJURED( l_U145[0] )) AND (IS_CHAR_INJURED( l_U145[1] )))
                {
                    if (l_U113)
                    {
                        PRINTSTRING( "DWAYNE BACKUP - leaving 10 \n" );
                    }
                    sub_7290();
                }
                break;
            }
        }
        else if (g_U64921)
        {
            if ((l_U124 == 5) || (l_U124 == 3))
            {
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    sub_13602( "DFBK_DISS", ref l_U151, 6, 1 );
                }
            }
            if (l_U113)
            {
                PRINTSTRING( "DWAYNE BACKUP - leaving 11 \n" );
            }
        }
        sub_7290();;
        sub_17061();
        WAIT( 0 );
    }
    return;
}

void sub_69(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_86();
    return;
}

void sub_86()
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

void sub_174()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_218()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_267(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_347( "\n PED NUMBER ", uParam0 );
    sub_387( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_347(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_387(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_572()
{
    unknown uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int I;
    int iVar10;
    int iVar11;
    int iVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    l_U140 = 0;
    if ((IS_PLAYER_PLAYING( sub_174() )) AND (NOT l_U105))
    {
        GET_CAR_CHAR_IS_USING( sub_218(), ref iVar11 );
        if (IS_VEH_DRIVEABLE( iVar11 ))
        {
            if (DOES_GROUP_EXIST( sub_640() ))
            {
                GET_GROUP_SIZE( sub_640(), ref uVar2, ref iVar3 );
                GET_MAXIMUM_NUMBER_OF_PASSENGERS( iVar11, ref iVar4 );
                if (iVar3 > iVar4)
                {
                    iVar5 = 0;
                    iVar6 = 0;
                    iVar7 = 0;
                    iVar8 = 0;
                    for ( I = 0; I < 7; I++ )
                    {
                        GET_GROUP_MEMBER( sub_640(), I, ref iVar10 );
                        if (NOT (IS_CHAR_INJURED( iVar10 )))
                        {
                            if ((iVar10 == l_U145[0]) || (iVar10 == l_U145[1]))
                            {
                                GET_CAR_CHAR_IS_USING( iVar10, ref iVar12 );
                                if (iVar12 == iVar11)
                                {
                                    iVar8++;
                                }
                                iVar5++;
                            }
                            else if (NOT (IS_CHAR_INJURED( iVar10 )))
                            {
                                GET_CAR_CHAR_IS_USING( iVar10, ref iVar12 );
                                if (iVar12 == iVar11)
                                {
                                    iVar7++;
                                }
                                iVar6++;
                            }
                        }
                    }
                    l_U140 = iVar6 - iVar7;
                    if (iVar6 > 0)
                    {
                        if (l_U140 > 0)
                        {
                            if (iVar5 > 0)
                            {
                                if (iVar8 > 0)
                                {
                                    for ( I = 0; I < 7; I++ )
                                    {
                                        GET_GROUP_MEMBER( sub_640(), I, ref iVar10 );
                                        if (NOT (IS_CHAR_INJURED( iVar10 )))
                                        {
                                            if ((iVar10 == l_U145[0]) || (iVar10 == l_U145[1]))
                                            {
                                                GET_CAR_CHAR_IS_USING( iVar10, ref iVar12 );
                                                if (iVar12 == iVar11)
                                                {
                                                    if (NOT (IS_CAR_DEAD( iVar11 )))
                                                    {
                                                        CLEAR_CHAR_TASKS( iVar10 );
                                                        if (IS_CHAR_IN_CAR( iVar10, iVar11 ))
                                                        {
                                                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( iVar10, 0.00000000, -5.00000000, 0.00000000, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
                                                            OPEN_SEQUENCE_TASK( ref l_U149 );
                                                            TASK_LEAVE_ANY_CAR( 0 );
                                                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar13._fU0, uVar13._fU4, uVar13._fU8, 2, -2, 2.00000000 );
                                                            TASK_PAUSE( 0, 5000 );
                                                            CLOSE_SEQUENCE_TASK( l_U149 );
                                                            TASK_PERFORM_SEQUENCE( iVar10, l_U149 );
                                                            CLEAR_SEQUENCE_TASK( l_U149 );
                                                        }
                                                        return;
                                                    }
                                                }
                                            }
                                        }
                                    }
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

void sub_640()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1282()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;
    int I;
    int iVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;

    if (IS_PLAYER_PLAYING( sub_174() ))
    {
        if ((sub_1308()) AND (NOT (g_U9890 == 4)))
        {
            if (NOT l_U105)
            {
                iVar8 = nil;
                if (IS_PLAYER_PLAYING( sub_174() ))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_218() ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_218(), ref iVar8 );
                    }
                }
                l_U112 = 0;
                if (IS_VEH_DRIVEABLE( l_U166 ))
                {
                    if (IS_PLAYER_PLAYING( sub_174() ))
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_218(), l_U166 )))
                        {
                            if (NOT (l_U166 == iVar8))
                            {
                                if (NOT (IS_CAR_A_MISSION_CAR( l_U166 )))
                                {
                                    SET_CAR_AS_MISSION_CAR( l_U166 );
                                    l_U115 = 1;
                                }
                            }
                            FREEZE_CAR_POSITION( l_U166, 1 );
                            SET_CAR_COLLISION( l_U166, 0 );
                            SET_CAR_VISIBLE( l_U166, 0 );
                            l_U112 = 1;
                        }
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    l_U106[I] = 0;
                    l_U109[I] = 0;
                    if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U166 ))
                        {
                            if (IS_CHAR_IN_CAR( l_U145[I], l_U166 ))
                            {
                                l_U106[I] = 1;
                            }
                        }
                        if (IS_VEH_DRIVEABLE( iVar8 ))
                        {
                            if (IS_CHAR_IN_CAR( l_U145[I], iVar8 ))
                            {
                                l_U109[I] = 1;
                            }
                        }
                        if (IS_GROUP_MEMBER( l_U145[I], sub_640() ))
                        {
                            SET_GROUP_SEPARATION_RANGE( sub_640(), 9999.00000000 );
                            SET_CHAR_NEVER_LEAVES_GROUP( l_U145[I], 1 );
                        }
                        SET_CHAR_PROOFS( l_U145[I], 1, 1, 1, 1, 1 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U145[I] );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U145[I], 1 );
                        SET_CHAR_COLLISION( l_U145[I], 0 );
                        SET_CHAR_VISIBLE( l_U145[I], 0 );
                        SET_CHAR_GRAVITY( l_U145[I], 0 );
                    }
                }
                l_U105 = 1;
            }
            else
            {
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                    {
                        GET_CAR_CHAR_IS_USING( l_U145[I], ref iVar8 );
                        if (DOES_VEHICLE_EXIST( iVar8 ))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U145[I] );
                            FREEZE_CHAR_POSITION( l_U145[I], 1 );
                        }
                        else
                        {
                            FREEZE_CHAR_POSITION( l_U145[I], 0 );
                        }
                    }
                }
            }
        }
        else if (l_U105)
        {
            if (l_U112)
            {
                if (IS_VEH_DRIVEABLE( l_U166 ))
                {
                    SET_CAR_COLLISION( l_U166, 1 );
                    FREEZE_CAR_POSITION( l_U166, 0 );
                    SET_CAR_VISIBLE( l_U166, 1 );
                    GET_CAR_COORDINATES( l_U166, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar2._fU0, uVar2._fU4, uVar2._fU8, 5.00000000, 5.00000000, 5.00000000 )))
                    {
                        SET_CAR_COORDINATES( l_U166, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        SET_CAR_ON_GROUND_PROPERLY( l_U166 );
                        if (l_U113)
                        {
                            PRINTSTRING( "DWAYNE BACKUP - car set on ground 1 \n" );
                        }
                    }
                    else
                    {
                        for ( I = 1; I < 40; I++ )
                        {
                            GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uVar2._fU0, uVar2._fU4, uVar2._fU8, I, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8, ref uVar12 );
                            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar5._fU0, uVar5._fU4, uVar5._fU8, 5.00000000, 5.00000000, 5.00000000 )))
                            {
                                SET_CAR_HEADING( l_U166, uVar12 );
                                SET_CAR_COORDINATES( l_U166, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U166 );
                                if (l_U113)
                                {
                                    PRINTSTRING( "DWAYNE BACKUP - car set on ground 2 \n" );
                                }
                                I = 40;
                            }
                        }
                    }
                    if (l_U115)
                    {
                        PRINTSTRING( "DWAYNE BACKUP - mark_car_as_no_longer_needed 1 \n" );
                        sub_3047( l_U166 );
                        l_U115 = 0;
                    }
                }
            }
            for ( I = 0; I < 2; I++ )
            {
                if (l_U113)
                {
                    PRINTSTRING( "DWAYNE BACKUP - start of repeat - switching back on ped " );
                    PRINTINT( I );
                    PRINTSTRING( "\n" );
                }
                if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                {
                    GET_CHAR_COORDINATES( l_U145[I], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    if (GET_SAFE_POSITION_FOR_CHAR( uVar2._fU0, uVar2._fU4, uVar2._fU8, 0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 ))
                    {
                        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar2._fU0, uVar2._fU4, uVar2._fU8, 1.00000000, 1.00000000, 1.00000000 )))
                        {
                            SET_CHAR_COORDINATES( l_U145[I], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        }
                    }
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U145[I] );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U145[I], 0 );
                    SET_CHAR_COLLISION( l_U145[I], 1 );
                    SET_CHAR_VISIBLE( l_U145[I], 1 );
                    SET_CHAR_GRAVITY( l_U145[I], 1 );
                    SET_CHAR_PROOFS( l_U145[I], 0, 0, 0, 0, 0 );
                    FREEZE_CHAR_POSITION( l_U145[I], 0 );
                    if (IS_PLAYER_PLAYING( sub_174() ))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_218() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_218(), ref iVar8 );
                            if (IS_VEH_DRIVEABLE( iVar8 ))
                            {
                                iVar13 = sub_3536( I );
                                if (l_U113)
                                {
                                    PRINTSTRING( "DWAYNE BACKUP - ped no " );
                                    PRINTINT( I );
                                    PRINTSTRING( " - iSeatNumber = " );
                                    PRINTINT( iVar13 );
                                    PRINTSTRING( "\n" );
                                }
                                if (iVar13 > -1)
                                {
                                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( iVar8, ref iVar10 );
                                    if (l_U113)
                                    {
                                        PRINTSTRING( "DWAYNE BACKUP - iNoOfSeats = " );
                                        PRINTINT( iVar10 );
                                        PRINTSTRING( "\n" );
                                    }
                                    if (iVar10 > iVar13)
                                    {
                                        if (IS_CAR_PASSENGER_SEAT_FREE( iVar8, iVar13 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U145[I], iVar8, iVar13 );
                                            if (l_U113)
                                            {
                                                PRINTSTRING( "DWAYNE BACKUP - buddy warped into players car \n" );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (l_U106[I])
                    {
                        if (IS_VEH_DRIVEABLE( l_U166 ))
                        {
                            GET_DRIVER_OF_CAR( l_U166, ref uVar11 );
                            if (NOT (DOES_CHAR_EXIST( uVar11 )))
                            {
                                WARP_CHAR_INTO_CAR( l_U145[I], l_U166 );
                                if (l_U113)
                                {
                                    PRINTSTRING( "DWAYNE BACKUP - buddy warped into dwayne car as driver \n" );
                                }
                            }
                            else if (IS_CAR_PASSENGER_SEAT_FREE( l_U166, 0 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U145[I], l_U166, 0 );
                                if (l_U113)
                                {
                                    PRINTSTRING( "DWAYNE BACKUP - buddy warped into dwayne car 0 \n" );
                                }
                            }
                            else
                            {
                                GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U166, ref iVar10 );
                                if (iVar10 > 1)
                                {
                                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U166, 1 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U145[I], l_U166, 1 );
                                        if (l_U113)
                                        {
                                            PRINTSTRING( "DWAYNE BACKUP - buddy warped into dwayne car 1 \n" );
                                        }
                                    }
                                    else if (IS_CAR_PASSENGER_SEAT_FREE( l_U166, 2 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U145[I], l_U166, 2 );
                                        if (l_U113)
                                        {
                                            PRINTSTRING( "DWAYNE BACKUP - buddy warped into dwayne car 2 \n" );
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (l_U114)
                    {
                        if (IS_GROUP_MEMBER( l_U145[I], sub_640() ))
                        {
                            SET_GROUP_SEPARATION_RANGE( sub_640(), 75.00000000 );
                            SET_CHAR_NEVER_LEAVES_GROUP( l_U145[I], 0 );
                        }
                    }
                }
                if (l_U113)
                {
                    PRINTSTRING( "DWAYNE BACKUP - end of repeat - switching back on ped " );
                    PRINTINT( I );
                    PRINTSTRING( "\n" );
                }
            }
            l_U105 = 0;
        }
    }
    return;
}

int sub_1308()
{
    if (NOT (IS_PLAYER_CONTROL_ON( sub_174() )))
    {
        if ((ARE_WIDESCREEN_BORDERS_ACTIVE()) AND (sub_1342()))
        {
            return 1;
        }
        else if (l_U113)
        {
            if (NOT ARE_WIDESCREEN_BORDERS_ACTIVE())
            {
                PRINTSTRING( "IS_PLAYER_CONTROL_OFF - NOT ARE_WIDESCREEN_BORDERS_ACTIVE()\n" );
            }
            if (NOT sub_1342())
            {
                PRINTSTRING( "IS_PLAYER_CONTROL_OFF - NOT HAVE_SCRIPT_CAMS_BEEN_ACTIVATED()\n" );
            }
        }
        if (HAS_CUTSCENE_LOADED())
        {
            if (NOT HAS_CUTSCENE_FINISHED())
            {
                return 1;
            }
            else if (l_U113)
            {
                PRINTSTRING( "IS_PLAYER_CONTROL_OFF - HAS_CUTSCENE_FINISHED()\n" );
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            return 1;
        }
        else if (l_U113)
        {
            PRINTSTRING( "IS_PLAYER_CONTROL_OFF - NOT IS_SCREEN_FADED_OUT()\n" );
        }
    }
    return 0;
}

int sub_1342()
{
    if ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_3047(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_3536(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int I;
    int iVar6;

    sub_3545();
    if (NOT (IS_CHAR_INJURED( l_U145[uParam0] )))
    {
        if (DOES_GROUP_EXIST( sub_640() ))
        {
            GET_GROUP_SIZE( sub_640(), ref uVar3, ref uVar4 );
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_640(), I, ref iVar6 );
                if (iVar6 == l_U145[uParam0])
                {
                    return l_U126[I];
                }
            }
        }
    }
    return -1;
}

void sub_3545()
{
    int I;
    int J;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;

    if (IS_PLAYER_PLAYING( sub_174() ))
    {
        if (DOES_GROUP_EXIST( sub_640() ))
        {
            for ( I = 0; I < 7; I++ )
            {
                l_U126[I] = -1;
            }
            GET_GROUP_SIZE( sub_640(), ref uVar4, ref uVar5 );
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_640(), I, ref iVar8 );
                if (IS_CHAR_INJURED( iVar8 ))
                {
                    if (NOT (IS_CHAR_DEAD( iVar8 )))
                    {
                        REMOVE_CHAR_FROM_GROUP( iVar8 );
                    }
                }
            }
            GET_GROUP_SIZE( sub_640(), ref uVar4, ref uVar5 );
            GET_CAR_CHAR_IS_USING( sub_218(), ref uVar7 );
            if (IS_VEH_DRIVEABLE( uVar7 ))
            {
                for ( I = 0; I < 7; I++ )
                {
                    GET_GROUP_MEMBER( sub_640(), I, ref iVar8 );
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar7, ref iVar6 );
                        for ( J = 0; J < iVar6; J++ )
                        {
                            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar7, J )))
                            {
                                GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar7, J, ref iVar9 );
                                if (IS_CHAR_SITTING_IN_CAR( iVar9, uVar7 ))
                                {
                                    if (iVar9 == iVar8)
                                    {
                                        l_U126[I] = J;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_640(), I, ref iVar8 );
                if ((NOT (iVar8 == l_U145[0])) AND (NOT (iVar8 == l_U145[1])))
                {
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        if (l_U126[I] == -1)
                        {
                            l_U126[I] = sub_4008( -1 );
                        }
                    }
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_640(), I, ref iVar8 );
                if ((iVar8 == l_U145[0]) || (iVar8 == l_U145[1]))
                {
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        if (l_U126[I] == -1)
                        {
                            l_U126[I] = sub_4008( -1 );
                        }
                    }
                }
            }
            GET_CAR_CHAR_IS_USING( sub_218(), ref uVar7 );
            if (IS_VEH_DRIVEABLE( uVar7 ))
            {
                for ( I = 0; I < 7; I++ )
                {
                    GET_GROUP_MEMBER( sub_640(), I, ref iVar8 );
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        if (l_U113)
                        {
                            PRINTSTRING( "DWAYNE_BACKUP - UPDATE_GROUP_SEATING_PRIORITY - group member " );
                            PRINTINT( I );
                            PRINTSTRING( "\n" );
                        }
                        if (NOT (sub_4403( ref iVar8, uVar7, l_U126[I] )))
                        {
                            if (l_U113)
                            {
                                PRINTSTRING( "DWAYNE_BACKUP - UPDATE_GROUP_SEATING_PRIORITY - char not got valid priority - " );
                                PRINTSTRING( "old iSeatPriority[" );
                                PRINTINT( I );
                                PRINTSTRING( "] = " );
                                PRINTINT( l_U126[I] );
                                PRINTSTRING( ", new iSeatPriority[" );
                                PRINTINT( I );
                                PRINTSTRING( "] = " );
                            }
                            l_U126[I] = sub_4008( l_U126[I] );
                            if (l_U113)
                            {
                                PRINTINT( l_U126[I] );
                                PRINTSTRING( "\n" );
                            }
                        }
                    }
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                if (l_U126[I] > 2)
                {
                    l_U126[I] = -1;
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_640(), I, ref iVar8 );
                if (NOT (IS_CHAR_INJURED( iVar8 )))
                {
                    SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( iVar8, l_U126[I] );
                }
            }
        }
    }
    return;
}

void sub_4008(int iParam0)
{
    int I;
    int Result;

    Result = iParam0 + 1;
    for ( I = 0; I < 7; I++ )
    {
        if (l_U126[I] == Result)
        {
            Result++;
            I = 0;
        }
    }
    return Result;
}

int sub_4403(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;

    if (l_U113)
    {
        iVar7 = -1;
        if ((uParam0^) == l_U145[0])
        {
            iVar7 = 0;
        }
        if ((uParam0^) == l_U145[1])
        {
            iVar7 = 1;
        }
        if (iVar7 > -1)
        {
            PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - dwayne backup member - " );
            PRINTINT( iVar7 );
            PRINTSTRING( "inSeatPriority = " );
            PRINTINT( iParam2 );
            PRINTSTRING( "\n" );
        }
    }
    if (DOES_VEHICLE_EXIST( uParam1 ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam1, ref iVar6 );
            if (iVar6 > iParam2)
            {
                if (IS_CAR_PASSENGER_SEAT_FREE( uParam1, iParam2 ))
                {
                    return 1;
                }
                else
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam1, iParam2, ref iVar5 );
                    if (iVar5 == (uParam0^))
                    {
                        return 1;
                    }
                    else if (l_U113)
                    {
                        PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - return false, GET_CHAR_IN_CAR_PASSENGER_SEAT \n" );
                    }
                }
            }
            else if (l_U113)
            {
                PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - return false, iNoOfSeats = " );
                PRINTINT( iVar6 );
                PRINTSTRING( " inSeatPriority = " );
                PRINTINT( iParam2 );
                PRINTSTRING( "\n" );
            }
        }
        else if (l_U113)
        {
            PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - return false, char is injured \n" );
        }
    }
    else if (l_U113)
    {
        PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - return false, car doesn't exist \n" );
    }
    return 0;
}

void sub_7290()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U144 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -301223260 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U141[0] );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U141[1] );
    if (DOES_CHAR_EXIST( l_U145[0] ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U145[0] );
    }
    if (DOES_BLIP_EXIST( l_U101[0] ))
    {
        REMOVE_BLIP( l_U101[0] );
    }
    if (DOES_CHAR_EXIST( l_U145[1] ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U145[1] );
    }
    if (DOES_BLIP_EXIST( l_U101[1] ))
    {
        REMOVE_BLIP( l_U101[1] );
    }
    if (DOES_BLIP_EXIST( l_U98[0] ))
    {
        REMOVE_BLIP( l_U98[0] );
    }
    if (DOES_BLIP_EXIST( l_U98[1] ))
    {
        REMOVE_BLIP( l_U98[1] );
    }
    g_U64923 = nil;
    g_U64921 = 0;
    DELETE_WIDGET_GROUP( l_U167 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_8158()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_8205(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if ((uParam2^) == 25)
        {
            if (sub_8243( uParam0, uParam1, (uParam2^) ))
            {
                return 1;
            }
        }
        else if (sub_8243( uParam0, uParam1, -1 ))
        {
            return 1;
        }
        (uParam2^)++;
    }
    return 0;
}

int sub_8243(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    unknown uVar15;
    unknown uVar16;

    if (IS_PLAYER_PLAYING( sub_174() ))
    {
        GET_CHAR_COORDINATES( sub_218(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if (IS_CHAR_IN_WATER( sub_218() ))
        {
            uVar5._fU8 = 1.00000000;
        }
    }
    uVar16 = GET_MAP_AREA_FROM_COORDS( uVar5 );
    if (NOT (iParam2 == -1))
    {
        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, iParam2, uVar16, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11, ref uVar15 );
    }
    else
    {
        GET_NEXT_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar16, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11 );
    }
    GET_DISTANCE_BETWEEN_COORDS_2D( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar12 );
    fVar14 = 1.00000000;
    if (NOT (sub_8464( uVar5, uVar8 )))
    {
        fVar14 *= 0.00000000;
    }
    fVar13 = uVar5._fU8 - uVar8._fU8;
    if (fVar13 < 0.00000000)
    {
        fVar13 *= -1.00000000;
    }
    if (NOT (fVar13 < 4.00000000))
    {
        if (fVar13 > 20.00000000)
        {
            fVar13 = 20.00000000;
        }
        fVar14 *= (20.00000000 - fVar13) / 20.00000000;
    }
    if (fVar12 < 100.00000000)
    {
        fVar14 *= fVar12 / 100.00000000;
    }
    if (sub_8696( uVar8._fU0, uVar8._fU4, uVar8._fU8, 5.00000000, 1128792064 ))
    {
        fVar14 *= 0.00000000;
    }
    if (fVar14 >= 1.00000000)
    {
        (uParam0^) = {uVar8};
        (uParam1^) = uVar11;
        return 1;
    }
    if (fVar14 > 0.00000000)
    {
        if (fVar14 > l_U172)
        {
            l_U168 = {uVar8};
            l_U171 = uVar11;
            l_U172 = fVar14;
        }
    }
    return 0;
}

int sub_8464(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    iVar9 = GET_MAP_AREA_FROM_COORDS( uParam3 );
    if (iVar8 == iVar9)
    {
        return 1;
    }
    return 0;
}

int sub_8696(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    GET_GAME_VIEWPORT_ID( ref uVar7 );
    if (CAM_IS_SPHERE_VISIBLE( uVar7, uParam0, uParam1, uParam2, uParam3 ))
    {
        if (IS_PLAYER_PLAYING( sub_174() ))
        {
            GET_CHAR_COORDINATES( sub_218(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {(vector( uParam2, uParam1, uParam0)) - vVar8};
            if ((VMAG( uVar11 )) < fParam4)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_10081()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    boolean bVar9;
    unknown uVar10;
    unknown uVar11;

    if (NOT (IS_CHAR_DEAD( l_U145[0] )))
    {
        if (IS_VEH_DRIVEABLE( l_U166 ))
        {
            if (IS_PLAYER_PLAYING( sub_174() ))
            {
                bVar9 = true;
                if (IS_CHAR_IN_ANY_CAR( sub_218() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_218(), ref uVar8 );
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        GET_CAR_MODEL( uVar8, ref uVar10 );
                        if (((NOT (IS_THIS_MODEL_A_BOAT( uVar10 ))) AND (NOT (IS_THIS_MODEL_A_PLANE( uVar10 )))) AND (NOT (IS_THIS_MODEL_A_HELI( uVar10 ))))
                        {
                            if (NOT (sub_10250( uVar8 )))
                            {
                                bVar9 = false;
                            }
                        }
                        if (NOT ((sub_10331( uVar8 )) >= 2))
                        {
                            bVar9 = false;
                        }
                    }
                }
                if (bVar9)
                {
                    GET_CHAR_COORDINATES( sub_218(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                    l_U157 = {sub_10479()};
                    uVar5 = {l_U160 - l_U157};
                    if ((VMAG( uVar5 )) > 1.00000000)
                    {
                        l_U160 = {l_U157};
                        OPEN_SEQUENCE_TASK( ref l_U149 );
                        TASK_CAR_DRIVE_TO_COORD( 0, l_U166, l_U160._fU0, l_U160._fU4, l_U160._fU8, 15.00000000, 0, 0, 2, 10.00000000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U149 );
                        CLEAR_CHAR_TASKS( l_U145[0] );
                        TASK_PERFORM_SEQUENCE( l_U145[0], l_U149 );
                        CLEAR_SEQUENCE_TASK( l_U149 );
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U145[0], 29, ref l_U150 );
                        if (l_U150 == 7)
                        {
                            return 1;
                        }
                        else
                        {
                            GET_CHAR_COORDINATES( sub_218(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            if ((LOCATE_CAR_3D( l_U166, l_U160._fU0, l_U160._fU4, l_U160._fU8, 15.00000000, 15.00000000, 4.00000000, 0 )) || (LOCATE_CAR_3D( l_U166, uVar2._fU0, uVar2._fU4, uVar2._fU8, 15.00000000, 15.00000000, 2.00000000, 0 )))
                            {
                                CLEAR_CHAR_TASKS( l_U145[0] );
                                return 1;
                            }
                        }
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U145[0], 49, ref l_U150 );
                    if (l_U150 == 7)
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_218(), ref uVar11 );
                        TASK_CAR_MISSION( l_U145[0], l_U166, uVar11, 12, 15.00000000, 2, 10, 5 );
                    }
                }
            }
        }
    }
    return 0;
}

int sub_10250(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 < 0.30000000)
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

void sub_10331(unknown uParam0)
{
    int iVar3;
    int Result;
    int I;

    Result = 0;
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar3 );
            for ( I = 0; I < iVar3; I++ )
            {
                if (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I ))
                {
                    Result++;
                }
            }
        }
    }
    return Result;
}

void sub_10479()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown Result;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (IS_PLAYER_PLAYING( sub_174() ))
    {
        GET_CHAR_COORDINATES( sub_218(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        uVar10 = GET_MAP_AREA_FROM_COORDS( uVar2 );
    }
    GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar2._fU0, uVar2._fU4, uVar2._fU8, 1, uVar10, ref Result._fU0, ref Result._fU4, ref Result._fU8, ref uVar8, ref uVar9 );
    return Result;
}

int sub_12819(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_12931( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_12931( "\n speech is not playing" );
    }
    return 0;
}

void sub_12931(unknown uParam0)
{
    return;
}

void sub_13602(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_13623( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_13623(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_13677( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_13677(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_13699( iParam1 )))
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
    sub_14375( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_13699(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_12931( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_12931( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_12931( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_14375(int iParam0, int iParam1)
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

void sub_14631(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_14656( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_14656(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_13677( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_17061()
{
    unknown uVar2;
    unknown uVar3;
    int I;
    int iVar5;

    l_U134[0] = -1;
    l_U134[1] = -1;
    l_U137 = -1;
    l_U138 = -1;
    if (DOES_GROUP_EXIST( sub_640() ))
    {
        for ( I = 0; I < 7; I++ )
        {
            GET_GROUP_MEMBER( sub_640(), I, ref iVar5 );
            if (iVar5 == l_U145[0])
            {
                l_U134[0] = I;
            }
            else if (iVar5 == l_U145[1])
            {
                l_U134[1] = I;
            }
            else if (NOT (IS_CHAR_INJURED( iVar5 )))
            {
                l_U137 = I;
            };;;
        }
    }
    return;
}