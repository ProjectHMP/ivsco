void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U241 = 0;
    l_U243 = 0;
    l_U244 = 0;
    l_U245 = 7;
    l_U248 = 0;
    l_U249 = 0;
    l_U389 = {-936.97000000, -313.16000000, 16.86000000};
    l_U392 = {994.03000000, -267.83000000, 25.24000000};
    l_U395 = 0;
    l_U396 = 0;
    l_U397 = 1;
    l_U398 = 0;
    l_U399 = 0;
    l_U400 = 0;
    l_U401 = 0;
    l_U402 = 0;
    l_U403 = 0;
    l_U439 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_178();
    }
    l_U432 = 897868981;
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U439)
            {
                case 0:
                GET_TIME_OF_DAY( ref l_U247, ref l_U246 );
                if (NOT sub_1471())
                {
                    if ((l_U247 > 20) || (l_U247 < 4))
                    {
                        GET_GAME_VIEWPORT_ID( ref l_U436 );
                        if (NOT (CAM_IS_SPHERE_VISIBLE( l_U436, l_U440._fU4[0]._fU0, l_U440._fU4[0]._fU4, l_U440._fU4[0]._fU8, 10.00000000 )))
                        {
                            if ((CAN_CREATE_RANDOM_CHAR( 1, 0 )) || (CAN_CREATE_RANDOM_CHAR( 0, 1 )))
                            {
                                if (IS_PLAYER_PLAYING( sub_927() ))
                                {
                                    GET_INTERIOR_FROM_CHAR( sub_753(), ref l_U434 );
                                    GET_INTERIOR_AT_COORDS( 959.89310000, -283.16020000, 19.85730000, ref l_U435 );
                                    if (NOT (l_U435 == l_U434))
                                    {
                                        l_U439 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
                break;
                case 1:
                REQUEST_ANIMS( "AMB@NIGHTCLUB_EXT" );
                while (NOT (HAVE_ANIMS_LOADED( "AMB@NIGHTCLUB_EXT" )))
                {
                    WAIT( 0 );
                }
                REQUEST_MODEL( l_U432 );
                REQUEST_MODEL( -1850743775 );
                while ((NOT (HAS_MODEL_LOADED( l_U432 ))) || (NOT (HAS_MODEL_LOADED( -1850743775 ))))
                {
                    WAIT( 0 );
                }
                COPY_CHAR_DECISION_MAKER( 65541, ref l_U405 );
                COPY_CHAR_DECISION_MAKER( 65539, ref l_U404 );
                sub_1878( "" );
                l_U250 = {l_U440._fU4[0]._fU0, l_U440._fU4[0]._fU4, l_U440._fU4[0]._fU8};
                l_U253[0] = {l_U440._fU4[1]._fU0, l_U440._fU4[1]._fU4, l_U440._fU4[1]._fU8};
                l_U386._fU0 = l_U440._fU4[1]._fU0 - l_U440._fU4[0]._fU0;
                l_U386._fU4 = l_U440._fU4[1]._fU4 - l_U440._fU4[0]._fU4;
                GET_HEADING_FROM_VECTOR_2D( l_U386._fU0, l_U386._fU4, ref l_U406 );
                CREATE_CHAR( 4, l_U432, l_U250._fU0, l_U250._fU4, l_U250._fU8, ref l_U156, 1 );
                SET_CHAR_HEADING( l_U156, l_U406 );
                SET_CHAR_READY_TO_BE_STUNNED( l_U156, 1 );
                TASK_SET_CHAR_DECISION_MAKER( l_U156, l_U405 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, 3.50000000, 0.00000000, -1.40000000, ref l_U374._fU0, ref l_U374._fU4, ref l_U374._fU8 );
                CREATE_CHAR( 7, l_U432, l_U374._fU0, l_U374._fU4, l_U374._fU8, ref l_U157, 1 );
                sub_2349( 2, l_U157, "BOUNCER_2", 0 );
                SET_CHAR_READY_TO_BE_STUNNED( l_U157, 1 );
                SET_CHAR_HEADING( l_U157, l_U406 );
                TASK_SET_CHAR_DECISION_MAKER( l_U157, l_U404 );
                l_U398 = 0;
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -0.00000000, 0.90000000, 0.00000000, ref l_U253[0]._fU0, ref l_U253[0]._fU4, ref l_U253[0]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -1.30000000, 1.40000000, -1.00000000, ref l_U253[1]._fU0, ref l_U253[1]._fU4, ref l_U253[1]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -2.50000000, 1.00000000, -1.00000000, ref l_U253[2]._fU0, ref l_U253[2]._fU4, ref l_U253[2]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -3.90000000, 1.40000000, -1.00000000, ref l_U253[3]._fU0, ref l_U253[3]._fU4, ref l_U253[3]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -5.80000000, 1.30000000, -1.00000000, ref l_U253[4]._fU0, ref l_U253[4]._fU4, ref l_U253[4]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -6.30000000, 1.40000000, -1.00000000, ref l_U253[5]._fU0, ref l_U253[5]._fU4, ref l_U253[5]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -8.00000000, 1.30000000, -1.00000000, ref l_U253[6]._fU0, ref l_U253[6]._fU4, ref l_U253[6]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -8.80000000, 1.30000000, -1.00000000, ref l_U253[7]._fU0, ref l_U253[7]._fU4, ref l_U253[7]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -9.30000000, 1.70000000, -1.00000000, ref l_U253[8]._fU0, ref l_U253[8]._fU4, ref l_U253[8]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -10.50000000, 1.40000000, -1.00000000, ref l_U253[9]._fU0, ref l_U253[9]._fU4, ref l_U253[9]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -11.20000000, 2.20000000, -1.00000000, ref l_U253[10]._fU0, ref l_U253[10]._fU4, ref l_U253[10]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -13.00000000, 2.50000000, -1.00000000, ref l_U253[11]._fU0, ref l_U253[11]._fU4, ref l_U253[11]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -13.80000000, 2.70000000, -1.00000000, ref l_U253[12]._fU0, ref l_U253[12]._fU4, ref l_U253[12]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -15.50000000, 2.50000000, -1.00000000, ref l_U253[13]._fU0, ref l_U253[13]._fU4, ref l_U253[13]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, -16.20000000, 2.20000000, -1.00000000, ref l_U253[14]._fU0, ref l_U253[14]._fU4, ref l_U253[14]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, 5.00000000, -10.50000000, 0.00000000, ref l_U374._fU0, ref l_U374._fU4, ref l_U374._fU8 );
                l_U241 = 0;
                OPEN_SEQUENCE_TASK( ref l_U409 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U250._fU0, l_U250._fU4, l_U250._fU8 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U250._fU0, l_U250._fU4, l_U250._fU8 );
                CLOSE_SEQUENCE_TASK( l_U409 );
                OPEN_SEQUENCE_TASK( ref l_U410 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U253[l_U245]._fU0, l_U253[l_U245]._fU4, l_U253[l_U245]._fU8 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U410 );
                OPEN_SEQUENCE_TASK( ref l_U411 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U250._fU0, l_U250._fU4, l_U250._fU8 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_f_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_f_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_f_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_f_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U411 );
                OPEN_SEQUENCE_TASK( ref l_U412 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_f_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_f_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_f_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_f_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U412 );
                OPEN_SEQUENCE_TASK( ref l_U413 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U250._fU0, l_U250._fU4, l_U250._fU8 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U413 );
                OPEN_SEQUENCE_TASK( ref l_U414 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U250._fU0, l_U250._fU4, l_U250._fU8 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Light_up", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Stand_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Stub_Out", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U414 );
                OPEN_SEQUENCE_TASK( ref l_U415 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U250._fU0, l_U250._fU4, l_U250._fU8 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Light_up", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Stand_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Stub_Out", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U415 );
                OPEN_SEQUENCE_TASK( ref l_U417 );
                TASK_GO_STRAIGHT_TO_COORD( 0, l_U250._fU0, l_U250._fU4, l_U250._fU8, 2, 2000 );
                TASK_ACHIEVE_HEADING( 0, l_U406 );
                TASK_PLAY_ANIM( 0, "BOUNCER_A_FRISK", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U417 );
                OPEN_SEQUENCE_TASK( ref l_U418 );
                TASK_GO_STRAIGHT_TO_COORD( 0, l_U250._fU0, l_U250._fU4, l_U250._fU8, 2, 2000 );
                TASK_ACHIEVE_HEADING( 0, l_U406 );
                TASK_PLAY_ANIM( 0, "BOUNCER_A_CHECKID", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 1, -1 );
                CLOSE_SEQUENCE_TASK( l_U418 );
                while (l_U241 < l_U245)
                {
                    WAIT( 0 );
                    if ((CAN_CREATE_RANDOM_CHAR( 1, 0 )) || (CAN_CREATE_RANDOM_CHAR( 0, 1 )))
                    {
                        if ((l_U241 == 6) || (l_U241 == 1))
                        {
                            CREATE_CHAR( 5, -1850743775, l_U253[l_U241]._fU0, l_U253[l_U241]._fU4, l_U253[l_U241]._fU8, ref l_U115[l_U241], 1 );
                        }
                        else
                        {
                            CREATE_RANDOM_CHAR( l_U253[l_U241]._fU0, l_U253[l_U241]._fU4, l_U253[l_U241]._fU8, ref l_U115[l_U241] );
                        }
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U115[l_U241] );
                        TASK_SET_CHAR_DECISION_MAKER( l_U115[l_U241], l_U405 );
                        GET_CHAR_HEADING( l_U115[l_U241], ref l_U407 );
                        if (l_U241 == 0)
                        {
                            l_U416 = l_U409;
                        }
                        if (l_U241 == 1)
                        {
                            l_U416 = l_U410;
                        }
                        if (l_U241 == 2)
                        {
                            l_U416 = l_U411;
                        }
                        if (l_U241 == 3)
                        {
                            l_U416 = l_U412;
                        }
                        if (l_U241 == 4)
                        {
                            l_U416 = l_U413;
                        }
                        if (l_U241 == 5)
                        {
                            l_U416 = l_U414;
                        }
                        if (l_U241 == 6)
                        {
                            l_U416 = l_U409;
                        }
                        if (l_U241 == 7)
                        {
                            l_U416 = l_U410;
                        }
                        if (l_U241 == 8)
                        {
                            l_U416 = l_U413;
                        }
                        if (l_U241 == 9)
                        {
                            l_U416 = l_U414;
                        }
                        if (DOES_CHAR_EXIST( l_U115[l_U241] ))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U115[l_U241] )))
                            {
                                GET_CHAR_MODEL( l_U115[l_U241], ref l_U433 );
                                if (((l_U433 == -1080673049) || (l_U433 == -1827421800)) || (l_U433 == -142386662))
                                {
                                    if (NOT (IS_CHAR_DEAD( l_U115[l_U241] )))
                                    {
                                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U115[l_U241] );
                                        DELETE_CHAR( ref l_U115[l_U241] );
                                        l_U200[l_U241] = 0;
                                        l_U249++;
                                        if (l_U249 > 10)
                                        {
                                            sub_178();
                                        }
                                    }
                                }
                                else
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U115[l_U241] );
                                    TASK_PERFORM_SEQUENCE( l_U115[l_U241], l_U416 );
                                    l_U200[l_U241] = 1;
                                    l_U159[l_U241] = l_U241;
                                    l_U241++;
                                }
                            }
                            else
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U115[l_U241] );
                                DELETE_CHAR( ref l_U115[l_U241] );
                            }
                        }
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U156 )))
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, 7.00000000, -0.50000000, -1.20000000, ref l_U380._fU0, ref l_U380._fU4, ref l_U380._fU8 );
                    if ((CAN_CREATE_RANDOM_CHAR( 1, 0 )) || (CAN_CREATE_RANDOM_CHAR( 0, 1 )))
                    {
                        CREATE_RANDOM_CHAR( l_U380._fU0, l_U380._fU4, l_U380._fU8, ref l_U158 );
                        SET_CHAR_HEADING( l_U158, l_U406 );
                        TASK_PLAY_ANIM( l_U158, "WastedA", "AMB@NIGHTCLUB_EXT", 1.00000000, 1, 0, 0, 0, -1 );
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, 7.80000000, 1.60000000, -1.00000000, ref l_U380._fU0, ref l_U380._fU4, ref l_U380._fU8 );
                    }
                }
                l_U439 = 2;
                break;
                case 2:
                if (l_U402 == 0)
                {
                    sub_6387();
                    sub_12436();
                }
                else
                {
                    sub_13564();
                }
                if (g_U10574 == 1)
                {
                    sub_13564();
                    sub_178();
                }
                if (DOES_SCRIPT_EXIST( "francis1" ))
                {
                    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "francis1" )) > 0)
                    {
                        sub_178();
                    }
                }
                break;
            }
        }
        else
        {
            sub_178();
        }
        sub_7225( ref l_U156 );
        sub_7225( ref l_U157 );
        sub_733();
    }
    return;
}

void sub_178()
{
    if (DOES_CHAR_EXIST( l_U156 ))
    {
        if ((NOT (IS_CHAR_DEAD( l_U156 ))) AND (NOT (IS_CHAR_INJURED( l_U156 ))))
        {
            FREEZE_CHAR_POSITION( l_U156, 0 );
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U432 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1850743775 );
    sub_278( ref l_U419, 0 );
    sub_278( ref l_U425, 0 );
    CLEAR_SEQUENCE_TASK( l_U409 );
    CLEAR_SEQUENCE_TASK( l_U410 );
    CLEAR_SEQUENCE_TASK( l_U411 );
    CLEAR_SEQUENCE_TASK( l_U412 );
    CLEAR_SEQUENCE_TASK( l_U413 );
    CLEAR_SEQUENCE_TASK( l_U414 );
    CLEAR_SEQUENCE_TASK( l_U415 );
    sub_497( 0 );
    for ( l_U241 = 0; l_U241 < l_U245; l_U241++ )
    {
        WAIT( 0 );
        if (((NOT (IS_CHAR_DEAD( l_U115[l_U241] ))) AND (NOT (IS_CHAR_INJURED( l_U115[l_U241] )))) AND (DOES_CHAR_EXIST( l_U115[l_U241] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U115[l_U241] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U115[l_U241] );
        }
        else
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U115[l_U241] );
        }
        sub_733();
    }
    if (DOES_CHAR_EXIST( l_U157 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U157 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U157 )))
            {
                TASK_SET_CHAR_DECISION_MAKER( l_U157, l_U404 );
            }
            SET_CHAR_READY_TO_BE_STUNNED( l_U157, 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U157 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U157 );
        }
    }
    if (DOES_CHAR_EXIST( l_U156 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U156 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U156 )))
            {
                TASK_SET_CHAR_DECISION_MAKER( l_U156, l_U404 );
            }
            SET_CHAR_READY_TO_BE_STUNNED( l_U156, 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U156 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U156 );
        }
    }
    REMOVE_ANIMS( "AMB@NIGHTCLUB_EXT" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_278(int iParam0, unknown uParam1)
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

void sub_497(unknown uParam0)
{
    if (g_U9201[uParam0]._fU4 <= 1)
    {
        sub_527( uParam0, 1 );
    }
    return;
}

void sub_527(unknown uParam0, unknown uParam1)
{
    g_U9201[uParam0]._fU4 = uParam1;
    g_U9201[uParam0]._fU8 = 0;
    return;
}

void sub_733()
{
    if (NOT l_U403)
    {
        if (NOT (IS_CHAR_INJURED( sub_753() )))
        {
            if (HAVE_ANIMS_LOADED( "melee_unarmed_base" ))
            {
                if (IS_CHAR_PLAYING_ANIM( sub_753(), "melee_unarmed_base", "stun_punch" ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_753() )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U157 )))
                        {
                            if (IS_PLAYER_TARGETTING_CHAR( sub_927(), l_U157 ))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U156 );
                                SET_CHAR_RELATIONSHIP( l_U156, 5, 0 );
                                SET_CHAR_READY_TO_BE_STUNNED( l_U156, 0 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U156 )))
                        {
                            if (IS_PLAYER_TARGETTING_CHAR( sub_927(), l_U156 ))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U157 );
                                SET_CHAR_RELATIONSHIP( l_U157, 5, 0 );
                                SET_CHAR_READY_TO_BE_STUNNED( l_U157, 0 );
                            }
                        }
                        l_U399 = 1;
                        l_U403 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_753()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_927()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1471()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_1878(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_1895();
    return;
}

void sub_1895()
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

void sub_2349(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2429( "\n PED NUMBER ", uParam0 );
    sub_2469( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2429(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2469(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6387()
{
    if (NOT (IS_CHAR_DEAD( l_U115[6] )))
    {
        if (TIMERA() > 4000)
        {
            SAY_AMBIENT_SPEECH( l_U115[6], "NIGHTCLUB_CHAT", 0, 0, 0 );
            SETTIMERA( 0 );
        }
    }
    if (l_U397 == 1)
    {
        for ( l_U241 = 0; l_U241 < l_U245; l_U241++ )
        {
            WAIT( 0 );
            if (NOT (IS_CHAR_DEAD( sub_753() )))
            {
                if (IS_CHAR_SHOOTING( sub_753() ))
                {
                    l_U402 = 1;
                }
            }
            if (IS_ANY_CHAR_SHOOTING_IN_AREA( l_U389, l_U392, 0 ))
            {
                l_U402 = 1;
            }
            if (NOT (IS_CHAR_DEAD( l_U115[l_U241] )))
            {
                if (DOES_CHAR_EXIST( l_U115[l_U241] ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U115[l_U241], 957.40000000, -282.32000000, 19.88000000, 3.50000000, 3.50000000, 4.00000000, 0 ))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U115[l_U241] )))
                        {
                            DELETE_CHAR( ref l_U115[l_U241] );
                        }
                    }
                    if (l_U159[l_U241] == 0)
                    {
                        if (NOT (IS_CHAR_DEAD( l_U115[l_U241] )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( l_U115[l_U241], 957.40000000, -282.32000000, 19.88000000, 4.50000000, 4.50000000, 4.00000000, 0 ))
                            {
                                if (NOT (IS_CHAR_ON_SCREEN( l_U115[l_U241] )))
                                {
                                    DELETE_CHAR( ref l_U115[l_U241] );
                                }
                            }
                        }
                    }
                }
                if (IS_PLAYER_PLAYING( sub_927() ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_753() )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U115[l_U241] )))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U115[l_U241], sub_753(), 0 ))
                            {
                                l_U402 = 1;
                            }
                            GET_CURRENT_CHAR_WEAPON( sub_753(), ref l_U431 );
                            if (l_U431 == 0)
                            {
                                l_U396 = 1;
                            }
                            else
                            {
                                l_U396 = 0;
                            }
                            if (IS_PLAYER_TARGETTING_CHAR( sub_927(), l_U115[l_U241] ))
                            {
                                if (l_U396 == 0)
                                {
                                    l_U402 = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U157 )))
            {
                if (NOT (IS_CHAR_DEAD( sub_753() )))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U157, sub_753(), 0 ))
                    {
                        l_U402 = 1;
                    }
                    GET_CURRENT_CHAR_WEAPON( sub_753(), ref l_U431 );
                    if (l_U431 == 0)
                    {
                        l_U396 = 1;
                    }
                    else
                    {
                        l_U396 = 0;
                    }
                    if (IS_PLAYER_TARGETTING_CHAR( sub_927(), l_U157 ))
                    {
                        if (l_U396 == 0)
                        {
                            l_U402 = 1;
                        }
                    }
                }
                sub_7225( ref l_U157 );
            }
            if (NOT (IS_CHAR_DEAD( l_U156 )))
            {
                if (NOT (IS_CHAR_DEAD( sub_753() )))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U156, sub_753(), 0 ))
                    {
                        l_U402 = 1;
                    }
                    GET_CURRENT_CHAR_WEAPON( sub_753(), ref l_U431 );
                    if (l_U431 == 0)
                    {
                        l_U396 = 1;
                    }
                    else
                    {
                        l_U396 = 0;
                    }
                    if (IS_PLAYER_TARGETTING_CHAR( sub_927(), l_U156 ))
                    {
                        if (l_U396 == 0)
                        {
                            l_U402 = 1;
                        }
                    }
                }
                sub_7225( ref l_U156 );
            }
            if (l_U402 == 0)
            {
                if (NOT (IS_CHAR_DEAD( l_U115[l_U241] )))
                {
                    if (l_U159[l_U241] > 1)
                    {
                        if (l_U200[l_U241] == 1)
                        {
                            GET_SCRIPT_TASK_STATUS( l_U115[l_U241], 29, ref l_U437 );
                            if (l_U437 == 7)
                            {
                                if (l_U241 == 0)
                                {
                                    l_U416 = l_U409;
                                }
                                if (l_U241 == 1)
                                {
                                    l_U416 = l_U410;
                                }
                                if (l_U241 == 2)
                                {
                                    l_U416 = l_U411;
                                }
                                if (l_U241 == 3)
                                {
                                    l_U416 = l_U412;
                                }
                                if (l_U241 == 4)
                                {
                                    l_U416 = l_U413;
                                }
                                if (l_U241 == 5)
                                {
                                    l_U416 = l_U414;
                                }
                                if (l_U241 == 6)
                                {
                                    l_U416 = l_U409;
                                }
                                if (l_U241 == 7)
                                {
                                    l_U416 = l_U410;
                                }
                                if (l_U241 == 8)
                                {
                                    l_U416 = l_U413;
                                }
                                if (l_U241 == 9)
                                {
                                    l_U416 = l_U414;
                                }
                                CLEAR_CHAR_TASKS( l_U115[l_U241] );
                                TASK_PERFORM_SEQUENCE( l_U115[l_U241], l_U416 );
                                l_U200[l_U241] = 0;
                            }
                        }
                    }
                }
                if (l_U159[l_U241] == 0)
                {
                    if (NOT (IS_CHAR_DEAD( l_U115[l_U241] )))
                    {
                        if (l_U200[l_U241] == 1)
                        {
                            GET_SCRIPT_TASK_STATUS( l_U115[l_U241], 29, ref l_U437 );
                            if (l_U437 == 7)
                            {
                                if (NOT (IS_CHAR_DEAD( l_U156 )))
                                {
                                    FREEZE_CHAR_POSITION( l_U156, 1 );
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U242 );
                                    if (l_U242 == 0)
                                    {
                                        if (DOES_CHAR_EXIST( l_U115[l_U241] ))
                                        {
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U115[l_U241] );
                                            TASK_TURN_CHAR_TO_FACE_COORD( l_U115[l_U241], l_U250._fU0, l_U250._fU4, l_U250._fU8 );
                                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U115[l_U241], "CLUBBER_FRISKED", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 1, -1 );
                                        }
                                        if (DOES_CHAR_EXIST( l_U156 ))
                                        {
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U156 );
                                            TASK_PLAY_ANIM( l_U156, "BOUNCER_A_FRISK", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                                            sub_9092( "BO1_POSYES2", ref l_U419, 1, 1 );
                                        }
                                    }
                                    if (l_U242 == 1)
                                    {
                                        if (DOES_CHAR_EXIST( l_U156 ))
                                        {
                                            if (DOES_CHAR_EXIST( l_U115[l_U241] ))
                                            {
                                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U115[l_U241] );
                                                TASK_PLAY_ANIM( l_U156, "BOUNCER_A_CHECKID", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U115[l_U241] );
                                                TASK_TURN_CHAR_TO_FACE_COORD( l_U115[l_U241], l_U250._fU0, l_U250._fU4, l_U250._fU8 );
                                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U115[l_U241], "CLUBBER_ID_CHECK", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                                            }
                                        }
                                    }
                                    if (l_U242 == 2)
                                    {
                                        if (DOES_CHAR_EXIST( l_U156 ))
                                        {
                                            if (DOES_CHAR_EXIST( l_U115[l_U241] ))
                                            {
                                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U156 );
                                                TASK_PLAY_ANIM( l_U156, "BOUNCER_A_REFUSE_ENTRY", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 1, 25000 );
                                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U115[l_U241] );
                                                TASK_TURN_CHAR_TO_FACE_COORD( l_U115[l_U241], l_U250._fU0, l_U250._fU4, l_U250._fU8 );
                                                FREEZE_CHAR_POSITION( l_U156, 0 );
                                            }
                                        }
                                    }
                                    l_U397 = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U402 == 0)
    {
        if (NOT (IS_CHAR_DEAD( l_U156 )))
        {
            if (l_U397 == 0)
            {
                GET_SCRIPT_TASK_STATUS( l_U156, 80, ref l_U438 );
                if (l_U438 == 7)
                {
                    FREEZE_CHAR_POSITION( l_U156, 0 );
                    l_U241 = 0;
                    l_U243 = 0;
                    while (l_U241 < l_U245)
                    {
                        WAIT( 0 );
                        if (NOT (IS_CHAR_DEAD( l_U157 )))
                        {
                            sub_7225( ref l_U157 );
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U157, sub_753(), 0 ))
                            {
                                l_U402 = 1;
                            }
                            GET_CURRENT_CHAR_WEAPON( sub_753(), ref l_U431 );
                            if (l_U431 == 0)
                            {
                                l_U396 = 1;
                            }
                            else
                            {
                                l_U396 = 0;
                            }
                            if (IS_PLAYER_TARGETTING_CHAR( sub_927(), l_U157 ))
                            {
                                if (l_U396 == 0)
                                {
                                    l_U402 = 1;
                                }
                            }
                        }
                        if (NOT (IS_CHAR_DEAD( l_U156 )))
                        {
                            sub_7225( ref l_U156 );
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U156, sub_753(), 0 ))
                            {
                                l_U402 = 1;
                                FREEZE_CHAR_POSITION( l_U156, 0 );
                            }
                            GET_CURRENT_CHAR_WEAPON( sub_753(), ref l_U431 );
                            if (l_U431 == 0)
                            {
                                l_U396 = 1;
                            }
                            else
                            {
                                l_U396 = 0;
                            }
                        }
                        if (l_U399 == 0)
                        {
                            if (((NOT (IS_CHAR_DEAD( l_U157 ))) AND (NOT (IS_CHAR_INJURED( l_U157 )))) AND (DOES_CHAR_EXIST( l_U157 )))
                            {
                                if (l_U398 == 1)
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U157, 80, ref l_U437 );
                                    if (l_U437 == 7)
                                    {
                                        l_U398 = 0;
                                    }
                                }
                                if (l_U398 == 0)
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U157 );
                                    TASK_PLAY_ANIM( l_U157, "BOUNCER_B_WELCOME", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                                    l_U398 = 1;
                                }
                            }
                        }
                        if (NOT (IS_CHAR_DEAD( l_U156 )))
                        {
                            if (IS_PLAYER_TARGETTING_CHAR( sub_927(), l_U156 ))
                            {
                                if (l_U396 == 0)
                                {
                                    l_U402 = 1;
                                }
                            }
                        }
                        if (NOT (IS_CHAR_DEAD( l_U115[l_U241] )))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U115[l_U241], sub_753(), 0 ))
                            {
                                l_U402 = 1;
                            }
                            GET_CURRENT_CHAR_WEAPON( sub_753(), ref l_U431 );
                            if (l_U431 == 0)
                            {
                                l_U396 = 1;
                            }
                            else
                            {
                                l_U396 = 0;
                            }
                            if (IS_PLAYER_TARGETTING_CHAR( sub_927(), l_U115[l_U241] ))
                            {
                                if (l_U396 == 0)
                                {
                                    l_U402 = 1;
                                }
                            }
                        }
                        if (l_U159[l_U241] == 0)
                        {
                            if (((NOT (IS_CHAR_DEAD( l_U115[l_U241] ))) AND (NOT (IS_CHAR_INJURED( l_U115[l_U241] )))) AND (DOES_CHAR_EXIST( l_U115[l_U241] )))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U156 )))
                                {
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, 2.00000000, 0.50000000, -1.00000000, ref l_U377._fU0, ref l_U377._fU4, ref l_U377._fU8 );
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, 2.00000000, -10.50000000, 0.00000000, ref l_U374._fU0, ref l_U374._fU4, ref l_U374._fU8 );
                                }
                                OPEN_SEQUENCE_TASK( ref l_U408 );
                                TASK_GO_STRAIGHT_TO_COORD( 0, l_U377._fU0, l_U377._fU4, l_U377._fU8, 2, -1 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U374._fU0, l_U374._fU4, l_U374._fU8, 2, -2, 1.50000000 );
                                CLOSE_SEQUENCE_TASK( l_U408 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U115[l_U241] );
                                TASK_PERFORM_SEQUENCE( l_U115[l_U241], l_U408 );
                                CLEAR_SEQUENCE_TASK( l_U408 );
                                l_U200[l_U241] = 1;
                            }
                        }
                        else
                        {
                            l_U243 = l_U159[l_U241] - 1;
                            l_U244 = l_U159[l_U241] + 1;
                            if (((NOT (IS_CHAR_DEAD( l_U115[l_U241] ))) AND (NOT (IS_CHAR_INJURED( l_U115[l_U241] )))) AND (DOES_CHAR_EXIST( l_U115[l_U241] )))
                            {
                                if (l_U159[l_U241] <= 1)
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U408 );
                                    TASK_GO_STRAIGHT_TO_COORD( 0, l_U253[l_U243]._fU0, l_U253[l_U243]._fU4, l_U253[l_U243]._fU8, 2, 2000 );
                                    TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U250._fU0, l_U250._fU4, l_U250._fU8 );
                                    CLOSE_SEQUENCE_TASK( l_U408 );
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U115[l_U241] );
                                    TASK_PERFORM_SEQUENCE( l_U115[l_U241], l_U408 );
                                    CLEAR_SEQUENCE_TASK( l_U408 );
                                    l_U200[l_U241] = 1;
                                }
                                else if (l_U200[l_U241] == 0)
                                {
                                    if (((NOT (IS_CHAR_DEAD( l_U115[l_U241] ))) AND (NOT (IS_CHAR_INJURED( l_U115[l_U241] )))) AND (DOES_CHAR_EXIST( l_U115[l_U241] )))
                                    {
                                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U115[l_U241] );
                                        OPEN_SEQUENCE_TASK( ref l_U408 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U253[l_U243]._fU0, l_U253[l_U243]._fU4, l_U253[l_U243]._fU8, 2, -1, 0.40000000 );
                                        TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U250._fU0, l_U250._fU4, l_U250._fU8 );
                                        CLOSE_SEQUENCE_TASK( l_U408 );
                                        TASK_PERFORM_SEQUENCE( l_U115[l_U241], l_U408 );
                                        if (l_U241 == 1)
                                        {
                                            SAY_AMBIENT_SPEECH( l_U115[l_U241], "NIGHTCLUB_CHAT", 0, 0, 0 );
                                        }
                                        CLEAR_SEQUENCE_TASK( l_U408 );
                                        l_U200[l_U241] = 1;
                                    }
                                }
                            }
                            else
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U115[l_U241] );
                            }
                        }
                        l_U159[l_U241]--;
                        if (l_U159[l_U241] < 0)
                        {
                            l_U159[l_U241] = l_U245;
                            l_U200[l_U241] = 100;
                        }
                        l_U241++;
                    }
                    l_U397 = 1;
                }
            }
        }
    }
    return;
}

void sub_7225(unknown uParam0)
{
    int I;
    float fVar4;

    if ((NOT (IS_CHAR_INJURED( (uParam0^) ))) AND (NOT (IS_CHAR_INJURED( sub_753() ))))
    {
        if (GET_CHAR_MELEE_ACTION_FLAG1( (uParam0^) ))
        {
            SET_CHAR_MELEE_ACTION_FLAG1( (uParam0^), 0 );
            SET_CHAR_READY_TO_BE_STUNNED( (uParam0^), 0 );
            for ( I = 0; I <= 1; I++ )
            {
                if (l_U108[I] == nil)
                {
                    l_U108[I] = (uParam0^);
                }
            }
            SETTIMERA( 0 );
        }
        for ( I = 0; I <= 1; I++ )
        {
            if (NOT (l_U108[I] == nil))
            {
                if (NOT (IS_CHAR_INJURED( l_U108[I] )))
                {
                    if (TIMERA() > 200)
                    {
                        TRIGGER_PTFX_ON_PED_BONE( "blood_stun_punch", l_U108[I], 0.00000000, 0.13000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1205, 1 );
                        SET_CHAR_HEALTH( l_U108[I], 99 );
                        l_U108[I] = nil;
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U108[I], "MELEE_UNARMED_BASE", "Hit_Jab" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U108[I], "MELEE_UNARMED_BASE", "Hit_Jab", ref fVar4 );
                        if (fVar4 > 0.10000000)
                        {
                            TRIGGER_PTFX_ON_PED_BONE( "blood_stun_punch", l_U108[I], 0.00000000, 0.13000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1205, 1 );
                            SET_CHAR_HEALTH( l_U108[I], 99 );
                            l_U108[I] = nil;
                        }
                    }
                }
                else
                {
                    l_U108[I] = nil;
                }
            }
        }
    }
    sub_7773( uParam0 );
    return;
}

int sub_7773(unknown uParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (GET_CHAR_READY_TO_BE_STUNNED( (uParam0^) ))
        {
            if (HAVE_ANIMS_LOADED( "melee_unarmed_base" ))
            {
                if ((IS_PED_IN_COMBAT( (uParam0^) )) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_753(), "melee_unarmed_base", "stun_punch" ))))
                {
                    bVar3 = true;
                }
                if ((IS_CHAR_IN_MELEE_COMBAT( (uParam0^) )) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_753(), "melee_unarmed_base", "stun_punch" ))))
                {
                    bVar3 = true;
                }
            }
            if ((IS_PLAYER_TARGETTING_CHAR( sub_927(), (uParam0^) )) AND (IS_CHAR_ARMED( (uParam0^), 4 )))
            {
                bVar3 = true;
            }
            if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_927(), (uParam0^) )) AND (IS_CHAR_ARMED( (uParam0^), 4 )))
            {
                bVar3 = true;
            }
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_753(), 0 ))
            {
                bVar3 = true;
            }
        }
    }
    if (bVar3)
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_READY_TO_BE_STUNNED( (uParam0^), 0 );
            return 1;
        }
    }
    return 0;
}

void sub_9092(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9113( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_9113(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_9167( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_9167(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9189( iParam1 )))
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_9877( ref g_U8868, ref l_U2 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_9189(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9266( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_9266( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_9266( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_9266(unknown uParam0)
{
    return;
}

void sub_9877(int iParam0, int iParam1)
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

void sub_12436()
{
    if (IS_ANY_CHAR_SHOOTING_IN_AREA( l_U389, l_U392, 0 ))
    {
        l_U402 = 1;
    }
    if (g_U10573 == 0)
    {
        if ((l_U401 == 0) AND (g_U10572 == 1))
        {
            if (IS_PLAYER_PLAYING( sub_927() ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_753(), l_U253[25]._fU0, l_U253[25]._fU4, l_U253[25]._fU8, 2.50000000, 2.50000000, 2.50000000, 0 ))
                {
                    l_U401 = 1;
                }
                if (l_U399 == 0)
                {
                    if ((NOT (IS_CHAR_DEAD( l_U156 ))) AND (NOT (IS_CHAR_INJURED( l_U156 ))))
                    {
                        if ((NOT (IS_CHAR_DEAD( l_U157 ))) AND (NOT (IS_CHAR_INJURED( l_U157 ))))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_753(), 957.90000000, -288.65000000, 19.88000000, 3.50000000, 3.50000000, 3.50000000, 0 ))
                            {
                                if (g_U12379 == 1)
                                {
                                    sub_9092( "BO1_AGGNO2", ref l_U419, 5, 1 );
                                }
                                else
                                {
                                    sub_9092( "BO1_AGGNO2", ref l_U419, 6, 1 );
                                }
                                l_U399 = 1;
                                if ((NOT (IS_CHAR_DEAD( l_U157 ))) AND (DOES_CHAR_EXIST( l_U157 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U157 );
                                    SET_CHAR_RELATIONSHIP( l_U157, 5, 0 );
                                    SET_CHAR_READY_TO_BE_STUNNED( l_U157, 0 );
                                }
                            }
                        }
                    }
                }
            }
            if (l_U399 == 1)
            {
                if (IS_PLAYER_PLAYING( sub_927() ))
                {
                    if (((NOT (IS_CHAR_DEAD( l_U156 ))) AND (NOT (IS_CHAR_INJURED( l_U156 )))) AND (DOES_CHAR_EXIST( l_U156 )))
                    {
                        if (((NOT (IS_CHAR_DEAD( l_U157 ))) AND (NOT (IS_CHAR_INJURED( l_U157 )))) AND (DOES_CHAR_EXIST( l_U157 )))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_753(), l_U157, 8.00000000, 8.00000000, 8.00000000, 0 )))
                            {
                                l_U399 = 0;
                                if (NOT (IS_CHAR_DEAD( l_U156 )))
                                {
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U156, 3.50000000, -1.00000000, -1.00000000, ref l_U383._fU0, ref l_U383._fU4, ref l_U383._fU8 );
                                }
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U157 );
                                SET_CHAR_RELATIONSHIP( l_U157, 1, 0 );
                                OPEN_SEQUENCE_TASK( ref l_U408 );
                                TASK_GO_STRAIGHT_TO_COORD( 0, l_U383._fU0, l_U383._fU4, l_U383._fU8, 2, -1 );
                                TASK_ACHIEVE_HEADING( 0, l_U406 );
                                CLOSE_SEQUENCE_TASK( l_U408 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U157 );
                                TASK_PERFORM_SEQUENCE( l_U157, l_U408 );
                                CLEAR_SEQUENCE_TASK( l_U408 );
                            }
                        }
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U157 )))
        {
            if (IS_PLAYER_PLAYING( sub_927() ))
            {
                if (NOT l_U400)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_753(), l_U157, 2.00000000, 2.00000000, 2.00000000, 0 ))
                    {
                        if (g_U12379 == 1)
                        {
                            sub_9092( "BO1_NEGYES2", ref l_U419, 5, 1 );
                        }
                        else
                        {
                            sub_9092( "BO1_NEGYES2", ref l_U419, 6, 1 );
                        }
                        l_U400 = 1;
                    }
                }
            }
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U157 )))
    {
        if (IS_PLAYER_PLAYING( sub_927() ))
        {
            if (NOT l_U400)
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_753(), l_U157, 2.00000000, 2.00000000, 2.00000000, 0 ))
                {
                    sub_9092( "BO1_POSYES2", ref l_U419, 6, 1 );
                    l_U400 = 1;
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_753() )))
    {
        if (IS_CHAR_SHOOTING( sub_753() ))
        {
            l_U402 = 1;
        }
    }
    return;
}

void sub_13564()
{
    if (l_U395 == 0)
    {
        for ( l_U241 = 0; l_U241 < l_U245; l_U241++ )
        {
            WAIT( 0 );
            if (((NOT (IS_CHAR_DEAD( l_U115[l_U241] ))) AND (NOT (IS_CHAR_INJURED( l_U115[l_U241] )))) AND (DOES_CHAR_EXIST( l_U115[l_U241] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U115[l_U241] );
                SET_CHAR_KEEP_TASK( l_U115[l_U241], 1 );
                TASK_SMART_FLEE_POINT( l_U115[l_U241], l_U253[1]._fU0, l_U253[1]._fU4, l_U253[1]._fU8, 30.00000000, 30000 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U115[l_U241] );
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U115[l_U241] );
            }
            if (NOT (IS_CHAR_DEAD( l_U157 )))
            {
                sub_7225( ref l_U157 );
            }
            if (NOT (IS_CHAR_DEAD( l_U156 )))
            {
                sub_7225( ref l_U156 );
            }
            sub_733();
        }
        sub_733();
        if (DOES_CHAR_EXIST( l_U157 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U157 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U157 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U157 );
                    SET_CHAR_RELATIONSHIP( l_U157, 5, 0 );
                }
                SET_CHAR_READY_TO_BE_STUNNED( l_U157, 0 );
            }
        }
        if (DOES_CHAR_EXIST( l_U156 ))
        {
            if ((NOT (IS_CHAR_DEAD( l_U156 ))) AND (NOT (IS_CHAR_INJURED( l_U156 ))))
            {
                FREEZE_CHAR_POSITION( l_U156, 0 );
                TASK_SET_CHAR_DECISION_MAKER( l_U156, l_U404 );
                SET_CHAR_COLLISION( l_U156, 1 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U156 );
                SET_CHAR_RELATIONSHIP( l_U156, 5, 0 );
                SET_CHAR_READY_TO_BE_STUNNED( l_U156, 0 );
            }
        }
        l_U395 = 1;
    }
    return;
}