void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    l_U312 = 0;
    l_U322 = {960.39300000, -293.16000000 + 2.00000000, 19.85700000 - 1.00000000};
    l_U325 = {960.39300000, -304.19200000, 18.85000000};
    l_U328 = 1;
    l_U329 = 0;
    l_U344 = 0;
    SUPPRESS_PED_MODEL( -1080673049 );
    SUPPRESS_PED_MODEL( -1827421800 );
    SUPPRESS_PED_MODEL( -142386662 );
    while (true)
    {
        WAIT( 0 );
        switch (l_U344)
        {
            case 0:
            if ((CAN_CREATE_RANDOM_CHAR( 1, 0 )) || (CAN_CREATE_RANDOM_CHAR( 0, 1 )))
            {
                l_U344 = 1;
            }
            break;
            case 1:
            REQUEST_ANIMS( "amb@nightclub_ext" );
            REQUEST_MODEL( 897868981 );
            while ((NOT (HAVE_ANIMS_LOADED( "amb@nightclub_ext" ))) || (NOT (HAS_MODEL_LOADED( 897868981 ))))
            {
                REQUEST_ANIMS( "amb@nightclub_ext" );
                REQUEST_MODEL( 897868981 );
                WAIT( 0 );
            }
            COPY_CHAR_DECISION_MAKER( 65541, ref l_U331 );
            COPY_CHAR_DECISION_MAKER( 65539, ref l_U330 );
            l_U68[0]._fU12 = {l_U325._fU0, l_U325._fU4, l_U325._fU8};
            uVar2._fU0 = l_U325._fU0 - l_U322._fU0;
            uVar2._fU4 = l_U325._fU4 - l_U322._fU4;
            GET_HEADING_FROM_VECTOR_2D( uVar2._fU0, uVar2._fU4, ref l_U332 );
            CREATE_CHAR( 4, 897868981, l_U322._fU0, l_U322._fU4, l_U322._fU8, ref l_U309, 1 );
            SET_CHAR_HEADING( l_U309, l_U332 );
            SET_CHAR_READY_TO_BE_STUNNED( l_U309, 1 );
            TASK_SET_CHAR_DECISION_MAKER( l_U309, l_U331 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, 3.50000000, -1.00000000, -1.40000000, ref l_U313._fU0, ref l_U313._fU4, ref l_U313._fU8 );
            CREATE_CHAR( 7, 897868981, l_U313._fU0, l_U313._fU4, l_U313._fU8, ref l_U310, 1 );
            SET_CHAR_READY_TO_BE_STUNNED( l_U310, 1 );
            SET_CHAR_HEADING( l_U310, l_U332 );
            TASK_SET_CHAR_DECISION_MAKER( l_U310, l_U330 );
            l_U329 = 0;
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -0.00000000, 1.20000000, 0.00000000, ref l_U68[0]._fU12._fU0, ref l_U68[0]._fU12._fU4, ref l_U68[0]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -1.30000000, 1.40000000, -1.00000000, ref l_U68[1]._fU12._fU0, ref l_U68[1]._fU12._fU4, ref l_U68[1]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -2.50000000, 1.00000000, -1.00000000, ref l_U68[2]._fU12._fU0, ref l_U68[2]._fU12._fU4, ref l_U68[2]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -3.90000000, 1.40000000, -1.00000000, ref l_U68[3]._fU12._fU0, ref l_U68[3]._fU12._fU4, ref l_U68[3]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -5.80000000, 1.30000000, -1.00000000, ref l_U68[4]._fU12._fU0, ref l_U68[4]._fU12._fU4, ref l_U68[4]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -6.30000000, 1.40000000, -1.00000000, ref l_U68[5]._fU12._fU0, ref l_U68[5]._fU12._fU4, ref l_U68[5]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -8.00000000, 1.30000000, -1.00000000, ref l_U68[6]._fU12._fU0, ref l_U68[6]._fU12._fU4, ref l_U68[6]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -8.80000000, 1.30000000, -1.00000000, ref l_U68[7]._fU12._fU0, ref l_U68[7]._fU12._fU4, ref l_U68[7]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -9.30000000, 1.70000000, -1.00000000, ref l_U68[8]._fU12._fU0, ref l_U68[8]._fU12._fU4, ref l_U68[8]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -10.50000000, 1.40000000, -1.00000000, ref l_U68[9]._fU12._fU0, ref l_U68[9]._fU12._fU4, ref l_U68[9]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -11.20000000, 2.20000000, -1.00000000, ref l_U68[10]._fU12._fU0, ref l_U68[10]._fU12._fU4, ref l_U68[10]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -13.00000000, 2.50000000, -1.00000000, ref l_U68[11]._fU12._fU0, ref l_U68[11]._fU12._fU4, ref l_U68[11]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -13.80000000, 2.70000000, -1.00000000, ref l_U68[12]._fU12._fU0, ref l_U68[12]._fU12._fU4, ref l_U68[12]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -15.50000000, 2.50000000, -1.00000000, ref l_U68[13]._fU12._fU0, ref l_U68[13]._fU12._fU4, ref l_U68[13]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, -16.20000000, 2.20000000, -1.00000000, ref l_U68[14]._fU12._fU0, ref l_U68[14]._fU12._fU4, ref l_U68[14]._fU12._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, 5.00000000, -10.50000000, 0.00000000, ref l_U313._fU0, ref l_U313._fU4, ref l_U313._fU8 );
            OPEN_SEQUENCE_TASK( ref l_U334 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
            CLOSE_SEQUENCE_TASK( l_U334 );
            OPEN_SEQUENCE_TASK( ref l_U335 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U68[6]._fU12._fU0, l_U68[6]._fU12._fU4, l_U68[6]._fU12._fU8 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_A", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_B", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_A", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_B", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U335 );
            OPEN_SEQUENCE_TASK( ref l_U336 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_f_A", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_f_B", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_f_A", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_f_B", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U336 );
            OPEN_SEQUENCE_TASK( ref l_U337 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_f_A", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_f_B", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_f_A", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_f_B", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U337 );
            OPEN_SEQUENCE_TASK( ref l_U338 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_A", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_B", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_A", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_B", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U338 );
            OPEN_SEQUENCE_TASK( ref l_U339 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Light_up", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Stand_A", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Stub_Out", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U339 );
            OPEN_SEQUENCE_TASK( ref l_U340 );
            TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Light_up", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Stand_B", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Stub_Out", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U340 );
            OPEN_SEQUENCE_TASK( ref l_U342 );
            TASK_GO_STRAIGHT_TO_COORD( 0, l_U322._fU0, l_U322._fU4, l_U322._fU8, 2, 2000 );
            TASK_ACHIEVE_HEADING( 0, l_U332 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "BOUNCER_A_FRISK", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U342 );
            OPEN_SEQUENCE_TASK( ref l_U343 );
            TASK_GO_STRAIGHT_TO_COORD( 0, l_U322._fU0, l_U322._fU4, l_U322._fU8, 2, 2000 );
            TASK_ACHIEVE_HEADING( 0, l_U332 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "BOUNCER_A_CHECKID", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 1, -1 );
            CLOSE_SEQUENCE_TASK( l_U343 );
            for ( l_U312 = 0; l_U312 < 7; l_U312++ )
            {
                if ((CAN_CREATE_RANDOM_CHAR( 1, 0 )) || (CAN_CREATE_RANDOM_CHAR( 0, 1 )))
                {
                    CREATE_RANDOM_CHAR( l_U68[l_U312]._fU12._fU0, l_U68[l_U312]._fU12._fU4, l_U68[l_U312]._fU12._fU8, ref l_U68[l_U312]._fU0 );
                    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U68[l_U312]._fU0 );
                    TASK_SET_CHAR_DECISION_MAKER( l_U68[l_U312]._fU0, l_U331 );
                    switch (l_U312)
                    {
                        case 0:
                        l_U341 = l_U334;
                        break;
                        case 1:
                        l_U341 = l_U335;
                        break;
                        case 2:
                        l_U341 = l_U336;
                        break;
                        case 3:
                        l_U341 = l_U337;
                        break;
                        case 4:
                        l_U341 = l_U338;
                        break;
                        case 5:
                        l_U341 = l_U339;
                        break;
                        case 6:
                        l_U341 = l_U334;
                        break;
                        case 7:
                        l_U341 = l_U335;
                        break;
                        case 8:
                        l_U341 = l_U338;
                        break;
                        case 9:
                        l_U341 = l_U339;
                        break;
                    }
                    if (DOES_CHAR_EXIST( l_U68[l_U312]._fU0 ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U68[l_U312]._fU0 )))
                        {
                            GET_CHAR_MODEL( l_U68[l_U312]._fU0, ref iVar5 );
                            if (((iVar5 == -1080673049) || (iVar5 == -1827421800)) || (iVar5 == -142386662))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U68[l_U312]._fU0 )))
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U68[l_U312]._fU0 );
                                    DELETE_CHAR( ref l_U68[l_U312]._fU0 );
                                    l_U68[l_U312]._fU8 = 0;
                                }
                            }
                            else
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U68[l_U312]._fU0 );
                                TASK_PERFORM_SEQUENCE( l_U68[l_U312]._fU0, l_U341 );
                                l_U68[l_U312]._fU8 = 1;
                                l_U68[l_U312]._fU4 = l_U312;
                                l_U312++;
                            }
                        }
                        else
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U68[l_U312]._fU0 );
                            DELETE_CHAR( ref l_U68[l_U312]._fU0 );
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U309 )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, 7.00000000, -0.50000000, -1.00000000, ref l_U319._fU0, ref l_U319._fU4, ref l_U319._fU8 );
                if ((CAN_CREATE_RANDOM_CHAR( 1, 0 )) || (CAN_CREATE_RANDOM_CHAR( 0, 1 )))
                {
                    CREATE_RANDOM_CHAR( l_U319._fU0, l_U319._fU4, l_U319._fU8, ref l_U311 );
                    SET_CHAR_HEADING( l_U311, l_U332 );
                    TASK_PLAY_ANIM( l_U311, "WastedA", "amb@nightclub_ext", 1.00000000, 1, 0, 0, 0, -1 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, 7.80000000, 1.60000000, -1.00000000, ref l_U319._fU0, ref l_U319._fU4, ref l_U319._fU8 );
                }
            }
            g_U9378 = 1;
            l_U344 = 2;
            break;
            case 2:
            sub_4516();
            sub_5894();
            if ((g_U9211) || (NOT g_U9378))
            {
                sub_7865();
            }
            break;
        }
    }
    return;
}

void sub_4516()
{
    int iVar2;

    if (NOT (IS_CHAR_DEAD( l_U309 )))
    {
        if (NOT l_U328)
        {
            if (sub_4562( l_U309, 83 ))
            {
                FREEZE_CHAR_POSITION( l_U309, 0 );
                iVar2 = 0;
                for ( l_U312 = 0; l_U312 < 7; l_U312++ )
                {
                    if (l_U68[l_U312]._fU4 == 0)
                    {
                        if (((NOT (IS_CHAR_DEAD( l_U68[l_U312]._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U68[l_U312]._fU0 )))) AND (DOES_CHAR_EXIST( l_U68[l_U312]._fU0 )))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U309 )))
                            {
                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, 2.00000000, 0.50000000, -1.00000000, ref l_U316._fU0, ref l_U316._fU4, ref l_U316._fU8 );
                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U309, 2.00000000, -10.50000000, 0.00000000, ref l_U313._fU0, ref l_U313._fU4, ref l_U313._fU8 );
                            }
                            OPEN_SEQUENCE_TASK( ref l_U333 );
                            TASK_GO_STRAIGHT_TO_COORD( 0, l_U316._fU0, l_U316._fU4, l_U316._fU8, 2, -1 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U313._fU0, l_U313._fU4, l_U313._fU8, 2, -2, 1.50000000 );
                            CLOSE_SEQUENCE_TASK( l_U333 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U68[l_U312]._fU0 );
                            TASK_PERFORM_SEQUENCE( l_U68[l_U312]._fU0, l_U333 );
                            CLEAR_SEQUENCE_TASK( l_U333 );
                            l_U68[l_U312]._fU8 = 1;
                        }
                    }
                    else
                    {
                        iVar2 = l_U68[l_U312]._fU4 - 1;
                        if (((NOT (IS_CHAR_DEAD( l_U68[l_U312]._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U68[l_U312]._fU0 )))) AND (DOES_CHAR_EXIST( l_U68[l_U312]._fU0 )))
                        {
                            if (l_U68[l_U312]._fU4 <= 1)
                            {
                                OPEN_SEQUENCE_TASK( ref l_U333 );
                                TASK_GO_STRAIGHT_TO_COORD( 0, l_U68[iVar2]._fU12._fU0, l_U68[iVar2]._fU12._fU4, l_U68[iVar2]._fU12._fU8, 2, 2000 );
                                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
                                CLOSE_SEQUENCE_TASK( l_U333 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U68[l_U312]._fU0 );
                                TASK_PERFORM_SEQUENCE( l_U68[l_U312]._fU0, l_U333 );
                                CLEAR_SEQUENCE_TASK( l_U333 );
                                l_U68[l_U312]._fU8 = 1;
                            }
                            else if (l_U68[l_U312]._fU8 == 0)
                            {
                                if (((NOT (IS_CHAR_DEAD( l_U68[l_U312]._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U68[l_U312]._fU0 )))) AND (DOES_CHAR_EXIST( l_U68[l_U312]._fU0 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U68[l_U312]._fU0 );
                                    OPEN_SEQUENCE_TASK( ref l_U333 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U68[iVar2]._fU12._fU0, l_U68[iVar2]._fU12._fU4, l_U68[iVar2]._fU12._fU8, 2, -1, 0.40000000 );
                                    TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
                                    CLOSE_SEQUENCE_TASK( l_U333 );
                                    TASK_PERFORM_SEQUENCE( l_U68[l_U312]._fU0, l_U333 );
                                    CLEAR_SEQUENCE_TASK( l_U333 );
                                    l_U68[l_U312]._fU8 = 1;
                                }
                            }
                        }
                        else
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U68[l_U312]._fU0 );
                        }
                    }
                    l_U68[l_U312]._fU4--;
                    if (l_U68[l_U312]._fU4 < 0)
                    {
                        l_U68[l_U312]._fU4 = 7;
                        l_U68[l_U312]._fU8 = 100;
                    }
                }
                if (((NOT (IS_CHAR_DEAD( l_U310 ))) AND (NOT (IS_CHAR_INJURED( l_U310 )))) AND (DOES_CHAR_EXIST( l_U310 )))
                {
                    if (l_U329 == 1)
                    {
                        if (sub_4562( l_U310, 83 ))
                        {
                            l_U329 = 0;
                        }
                    }
                    if (l_U329 == 0)
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U310 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U310, "BOUNCER_B_WELCOME", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
                        l_U329 = 1;
                    }
                }
                l_U328 = 1;
            }
        }
    }
    return;
}

int sub_4562(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_5894()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    PRINTSTRING( "  * do_SEARCHING_QUEUE()\n" );
    if (l_U328)
    {
        for ( l_U312 = 0; l_U312 < 7; l_U312++ )
        {
            sub_5971( l_U312 );
            if (NOT (IS_CHAR_DEAD( l_U68[l_U312]._fU0 )))
            {
                GET_CHAR_COORDINATES( l_U68[l_U312]._fU0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                PRINTSTRING( "queuing[" );
                PRINTINT( l_U312 );
                PRINTSTRING( "].current_pos = " );
                PRINTVECTOR( uVar2 );
                PRINTNL();
                if (l_U68[l_U312]._fU4 > 1)
                {
                    if (l_U68[l_U312]._fU8 == 1)
                    {
                        if (sub_4562( l_U68[l_U312]._fU0, 29 ))
                        {
                            switch (l_U312)
                            {
                                case 0:
                                l_U341 = l_U334;
                                break;
                                case 1:
                                l_U341 = l_U335;
                                break;
                                case 2:
                                l_U341 = l_U336;
                                break;
                                case 3:
                                l_U341 = l_U337;
                                break;
                                case 4:
                                l_U341 = l_U338;
                                break;
                                case 5:
                                l_U341 = l_U340;
                                break;
                                case 6:
                                l_U341 = l_U339;
                                break;
                                case 7:
                                l_U341 = l_U339;
                                break;
                                case 8:
                                l_U341 = l_U338;
                                break;
                                case 9:
                                l_U341 = l_U339;
                                break;
                            }
                            CLEAR_CHAR_TASKS( l_U68[l_U312]._fU0 );
                            l_U68[l_U312]._fU8 = 0;
                        }
                    }
                }
                if (l_U68[l_U312]._fU4 == 0)
                {
                    if (l_U68[l_U312]._fU8 == 1)
                    {
                        if (sub_4562( l_U68[l_U312]._fU0, 29 ))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U309 )))
                            {
                                FREEZE_CHAR_POSITION( l_U309, 1 );
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
                                switch (uVar5)
                                {
                                    case 0:
                                    if (DOES_CHAR_EXIST( l_U68[l_U312]._fU0 ))
                                    {
                                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U68[l_U312]._fU0 );
                                        TASK_TURN_CHAR_TO_FACE_COORD( l_U68[l_U312]._fU0, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U68[l_U312]._fU0, "CLUBBER_FRISKED", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 1, -1 );
                                    }
                                    if (DOES_CHAR_EXIST( l_U309 ))
                                    {
                                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U309 );
                                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U309, "BOUNCER_A_FRISK", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
                                    }
                                    break;
                                    case 1:
                                    if (DOES_CHAR_EXIST( l_U309 ))
                                    {
                                        if (DOES_CHAR_EXIST( l_U68[l_U312]._fU0 ))
                                        {
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U68[l_U312]._fU0 );
                                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U309, "BOUNCER_A_CHECKID", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U68[l_U312]._fU0 );
                                            TASK_TURN_CHAR_TO_FACE_COORD( l_U68[l_U312]._fU0, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
                                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U68[l_U312]._fU0, "CLUBBER_ID_CHECK", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 0, -1 );
                                        }
                                    }
                                    break;
                                    case 2:
                                    if (DOES_CHAR_EXIST( l_U309 ))
                                    {
                                        if (DOES_CHAR_EXIST( l_U68[l_U312]._fU0 ))
                                        {
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U309 );
                                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U309, "BOUNCER_A_REFUSE_ENTRY", "amb@nightclub_ext", 1.00000000, 0, 0, 0, 1, 15000 );
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U68[l_U312]._fU0 );
                                            TASK_TURN_CHAR_TO_FACE_COORD( l_U68[l_U312]._fU0, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
                                        }
                                    }
                                    break;
                                }
                                l_U328 = 0;
                            }
                        }
                    }
                }
            }
            else if (DOES_CHAR_EXIST( l_U68[l_U312]._fU0 ))
            {
                N_1363505769( l_U68[l_U312]._fU0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                PRINTSTRING( "queuing[" );
                PRINTINT( l_U312 );
                PRINTSTRING( "].current_pos = " );
                PRINTVECTOR( uVar2 );
                PRINTNL();
            }
            else
            {
                PRINTSTRING( "queuing[" );
                PRINTINT( l_U312 );
                PRINTSTRING( "].current_pos = " );
                PRINTSTRING( "NON-EXISTANT" );
                PRINTNL();
            }
        }
    }
    return;
}

void sub_5971(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( l_U68[uParam0]._fU0 )))
    {
        if (DOES_CHAR_EXIST( l_U68[uParam0]._fU0 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U68[uParam0]._fU0, 957.40000000, -282.32000000, 19.88000000, 3.50000000, 3.50000000, 4.00000000, 0 ))
            {
                if (NOT (IS_CHAR_ON_SCREEN( l_U68[uParam0]._fU0 )))
                {
                    DELETE_CHAR( ref l_U68[uParam0]._fU0 );
                }
            }
            if (l_U68[uParam0]._fU4 == 0)
            {
                if (NOT (IS_CHAR_DEAD( l_U68[uParam0]._fU0 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U68[uParam0]._fU0, 957.40000000, -282.32000000, 19.88000000, 4.50000000, 4.50000000, 4.00000000, 0 ))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U68[uParam0]._fU0 )))
                        {
                            DELETE_CHAR( ref l_U68[uParam0]._fU0 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_7865()
{
    if (DOES_CHAR_EXIST( l_U309 ))
    {
        if ((NOT (IS_CHAR_DEAD( l_U309 ))) AND (NOT (IS_CHAR_INJURED( l_U309 ))))
        {
            FREEZE_CHAR_POSITION( l_U309, 0 );
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 897868981 );
    CLEAR_SEQUENCE_TASK( l_U334 );
    CLEAR_SEQUENCE_TASK( l_U335 );
    CLEAR_SEQUENCE_TASK( l_U336 );
    CLEAR_SEQUENCE_TASK( l_U337 );
    CLEAR_SEQUENCE_TASK( l_U338 );
    CLEAR_SEQUENCE_TASK( l_U339 );
    CLEAR_SEQUENCE_TASK( l_U340 );
    sub_8033( 0 );
    for ( l_U312 = 0; l_U312 < 7; l_U312++ )
    {
        if (((NOT (IS_CHAR_DEAD( l_U68[l_U312]._fU0 ))) AND (NOT (IS_CHAR_INJURED( l_U68[l_U312]._fU0 )))) AND (DOES_CHAR_EXIST( l_U68[l_U312]._fU0 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U68[l_U312]._fU0 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U68[l_U312]._fU0 );
        }
        else
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U68[l_U312]._fU0 );
        }
    }
    if (DOES_CHAR_EXIST( l_U310 ))
    {
        if ((NOT (IS_CHAR_DEAD( l_U310 ))) AND (NOT (IS_CHAR_INJURED( l_U310 ))))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U310 );
        }
    }
    if (DOES_CHAR_EXIST( l_U309 ))
    {
        if ((NOT (IS_CHAR_DEAD( l_U309 ))) AND (NOT (IS_CHAR_INJURED( l_U309 ))))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U309 );
        }
    }
    DONT_SUPPRESS_PED_MODEL( -1080673049 );
    DONT_SUPPRESS_PED_MODEL( -1827421800 );
    DONT_SUPPRESS_PED_MODEL( -142386662 );
    REMOVE_ANIMS( "amb@nightclub_ext" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_8033(unknown uParam0)
{
    if (g_U8600[uParam0]._fU4 <= 1)
    {
        sub_8063( uParam0, 1 );
    }
    return;
}

void sub_8063(unknown uParam0, unknown uParam1)
{
    g_U8600[uParam0]._fU4 = uParam1;
    g_U8600[uParam0]._fU8 = 0;
    return;
}
