void main()
{
    l_U239 = 0;
    l_U241 = 0;
    l_U242 = 0;
    l_U243 = 7;
    l_U246 = 0;
    l_U247 = 0;
    l_U387 = {-936.97000000, -313.16000000, 16.86000000};
    l_U390 = {994.03000000, -267.83000000, 25.24000000};
    l_U393 = 0;
    l_U394 = 0;
    l_U395 = 1;
    l_U396 = 0;
    l_U397 = 0;
    l_U398 = 0;
    l_U399 = 0;
    l_U400 = 0;
    l_U401 = 0;
    l_U437 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_162();
    }
    l_U430 = 897868981;
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U437)
            {
                case 0:
                GET_TIME_OF_DAY( ref l_U245, ref l_U244 );
                if (NOT sub_1455())
                {
                    if ((l_U245 > 20) || (l_U245 < 4))
                    {
                        GET_GAME_VIEWPORT_ID( ref l_U434 );
                        if (NOT (CAM_IS_SPHERE_VISIBLE( l_U434, l_U438._fU4[0]._fU0, l_U438._fU4[0]._fU4, l_U438._fU4[0]._fU8, 10.00000000 )))
                        {
                            if (((CAN_CREATE_RANDOM_CHAR( 1, 0 )) || (CAN_CREATE_RANDOM_CHAR( 0, 1 ))) || ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "FAUSTIN6" )) <= 1))
                            {
                                if (IS_PLAYER_PLAYING( sub_911() ))
                                {
                                    GET_INTERIOR_FROM_CHAR( sub_737(), ref l_U432 );
                                    GET_INTERIOR_AT_COORDS( 959.89310000, -283.16020000, 19.85730000, ref l_U433 );
                                    if (NOT (l_U433 == l_U432))
                                    {
                                        l_U437 = 1;
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
                REQUEST_MODEL( l_U430 );
                REQUEST_MODEL( -1850743775 );
                while ((NOT (HAS_MODEL_LOADED( l_U430 ))) || (NOT (HAS_MODEL_LOADED( -1850743775 ))))
                {
                    WAIT( 0 );
                }
                COPY_CHAR_DECISION_MAKER( 65541, ref l_U403 );
                COPY_CHAR_DECISION_MAKER( 65539, ref l_U402 );
                sub_1912( "" );
                l_U248 = {l_U438._fU4[0]._fU0, l_U438._fU4[0]._fU4, l_U438._fU4[0]._fU8};
                l_U251[0] = {l_U438._fU4[1]._fU0, l_U438._fU4[1]._fU4, l_U438._fU4[1]._fU8};
                l_U384._fU0 = l_U438._fU4[1]._fU0 - l_U438._fU4[0]._fU0;
                l_U384._fU4 = l_U438._fU4[1]._fU4 - l_U438._fU4[0]._fU4;
                GET_HEADING_FROM_VECTOR_2D( l_U384._fU0, l_U384._fU4, ref l_U404 );
                CREATE_CHAR( 4, l_U430, l_U248._fU0, l_U248._fU4, l_U248._fU8, ref l_U154, 1 );
                SET_CHAR_HEADING( l_U154, l_U404 );
                SET_CHAR_READY_TO_BE_STUNNED( l_U154, 1 );
                TASK_SET_CHAR_DECISION_MAKER( l_U154, l_U403 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, 3.50000000, 0.00000000, -1.40000000, ref l_U372._fU0, ref l_U372._fU4, ref l_U372._fU8 );
                CREATE_CHAR( 7, l_U430, l_U372._fU0, l_U372._fU4, l_U372._fU8, ref l_U155, 1 );
                sub_2383( 2, l_U155, "BOUNCER_2", 0 );
                SET_CHAR_READY_TO_BE_STUNNED( l_U155, 1 );
                SET_CHAR_HEADING( l_U155, l_U404 );
                TASK_SET_CHAR_DECISION_MAKER( l_U155, l_U402 );
                l_U396 = 0;
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -0.00000000, 0.90000000, 0.00000000, ref l_U251[0]._fU0, ref l_U251[0]._fU4, ref l_U251[0]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -1.30000000, 1.40000000, -1.00000000, ref l_U251[1]._fU0, ref l_U251[1]._fU4, ref l_U251[1]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -2.50000000, 1.00000000, -1.00000000, ref l_U251[2]._fU0, ref l_U251[2]._fU4, ref l_U251[2]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -3.90000000, 1.40000000, -1.00000000, ref l_U251[3]._fU0, ref l_U251[3]._fU4, ref l_U251[3]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -5.80000000, 1.30000000, -1.00000000, ref l_U251[4]._fU0, ref l_U251[4]._fU4, ref l_U251[4]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -6.30000000, 1.40000000, -1.00000000, ref l_U251[5]._fU0, ref l_U251[5]._fU4, ref l_U251[5]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -8.00000000, 1.30000000, -1.00000000, ref l_U251[6]._fU0, ref l_U251[6]._fU4, ref l_U251[6]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -8.80000000, 1.30000000, -1.00000000, ref l_U251[7]._fU0, ref l_U251[7]._fU4, ref l_U251[7]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -9.30000000, 1.70000000, -1.00000000, ref l_U251[8]._fU0, ref l_U251[8]._fU4, ref l_U251[8]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -10.50000000, 1.40000000, -1.00000000, ref l_U251[9]._fU0, ref l_U251[9]._fU4, ref l_U251[9]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -11.20000000, 2.20000000, -1.00000000, ref l_U251[10]._fU0, ref l_U251[10]._fU4, ref l_U251[10]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -13.00000000, 2.50000000, -1.00000000, ref l_U251[11]._fU0, ref l_U251[11]._fU4, ref l_U251[11]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -13.80000000, 2.70000000, -1.00000000, ref l_U251[12]._fU0, ref l_U251[12]._fU4, ref l_U251[12]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -15.50000000, 2.50000000, -1.00000000, ref l_U251[13]._fU0, ref l_U251[13]._fU4, ref l_U251[13]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, -16.20000000, 2.20000000, -1.00000000, ref l_U251[14]._fU0, ref l_U251[14]._fU4, ref l_U251[14]._fU8 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, 5.00000000, -10.50000000, 0.00000000, ref l_U372._fU0, ref l_U372._fU4, ref l_U372._fU8 );
                l_U239 = 0;
                OPEN_SEQUENCE_TASK( ref l_U407 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U248._fU0, l_U248._fU4, l_U248._fU8 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U248._fU0, l_U248._fU4, l_U248._fU8 );
                CLOSE_SEQUENCE_TASK( l_U407 );
                OPEN_SEQUENCE_TASK( ref l_U408 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U251[l_U243]._fU0, l_U251[l_U243]._fU4, l_U251[l_U243]._fU8 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U408 );
                OPEN_SEQUENCE_TASK( ref l_U409 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U248._fU0, l_U248._fU4, l_U248._fU8 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_f_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_f_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_f_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_f_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U409 );
                OPEN_SEQUENCE_TASK( ref l_U410 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_f_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_f_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_f_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Argue_f_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U410 );
                OPEN_SEQUENCE_TASK( ref l_U411 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U248._fU0, l_U248._fU4, l_U248._fU8 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Street_Chat_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U411 );
                OPEN_SEQUENCE_TASK( ref l_U412 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U248._fU0, l_U248._fU4, l_U248._fU8 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Light_up", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Stand_A", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Stub_Out", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U412 );
                OPEN_SEQUENCE_TASK( ref l_U413 );
                TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U248._fU0, l_U248._fU4, l_U248._fU8 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Light_up", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Stand_B", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Smoke_Stub_Out", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U413 );
                OPEN_SEQUENCE_TASK( ref l_U415 );
                TASK_GO_STRAIGHT_TO_COORD( 0, l_U248._fU0, l_U248._fU4, l_U248._fU8, 2, 2000 );
                TASK_ACHIEVE_HEADING( 0, l_U404 );
                TASK_PLAY_ANIM( 0, "BOUNCER_A_FRISK", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U415 );
                OPEN_SEQUENCE_TASK( ref l_U416 );
                TASK_GO_STRAIGHT_TO_COORD( 0, l_U248._fU0, l_U248._fU4, l_U248._fU8, 2, 2000 );
                TASK_ACHIEVE_HEADING( 0, l_U404 );
                TASK_PLAY_ANIM( 0, "BOUNCER_A_CHECKID", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 1, -1 );
                CLOSE_SEQUENCE_TASK( l_U416 );
                while (l_U239 < l_U243)
                {
                    WAIT( 0 );
                    if ((CAN_CREATE_RANDOM_CHAR( 1, 0 )) || (CAN_CREATE_RANDOM_CHAR( 0, 1 )))
                    {
                        if ((l_U239 == 6) || (l_U239 == 1))
                        {
                            CREATE_CHAR( 5, -1850743775, l_U251[l_U239]._fU0, l_U251[l_U239]._fU4, l_U251[l_U239]._fU8, ref l_U113[l_U239], 1 );
                        }
                        else
                        {
                            CREATE_RANDOM_CHAR( l_U251[l_U239]._fU0, l_U251[l_U239]._fU4, l_U251[l_U239]._fU8, ref l_U113[l_U239] );
                        }
                        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U113[l_U239] );
                        TASK_SET_CHAR_DECISION_MAKER( l_U113[l_U239], l_U403 );
                        GET_CHAR_HEADING( l_U113[l_U239], ref l_U405 );
                        if (l_U239 == 0)
                        {
                            l_U414 = l_U407;
                        }
                        if (l_U239 == 1)
                        {
                            l_U414 = l_U408;
                        }
                        if (l_U239 == 2)
                        {
                            l_U414 = l_U409;
                        }
                        if (l_U239 == 3)
                        {
                            l_U414 = l_U410;
                        }
                        if (l_U239 == 4)
                        {
                            l_U414 = l_U411;
                        }
                        if (l_U239 == 5)
                        {
                            l_U414 = l_U412;
                        }
                        if (l_U239 == 6)
                        {
                            l_U414 = l_U407;
                        }
                        if (l_U239 == 7)
                        {
                            l_U414 = l_U408;
                        }
                        if (l_U239 == 8)
                        {
                            l_U414 = l_U411;
                        }
                        if (l_U239 == 9)
                        {
                            l_U414 = l_U412;
                        }
                        if (DOES_CHAR_EXIST( l_U113[l_U239] ))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U113[l_U239] )))
                            {
                                GET_CHAR_MODEL( l_U113[l_U239], ref l_U431 );
                                if (((l_U431 == -1080673049) || (l_U431 == -1827421800)) || (l_U431 == -142386662))
                                {
                                    if (NOT (IS_CHAR_DEAD( l_U113[l_U239] )))
                                    {
                                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U113[l_U239] );
                                        DELETE_CHAR( ref l_U113[l_U239] );
                                        l_U198[l_U239] = 0;
                                        l_U247++;
                                        if (l_U247 > 10)
                                        {
                                            sub_162();
                                        }
                                    }
                                }
                                else
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U113[l_U239] );
                                    TASK_PERFORM_SEQUENCE( l_U113[l_U239], l_U414 );
                                    l_U198[l_U239] = 1;
                                    l_U157[l_U239] = l_U239;
                                    l_U239++;
                                }
                            }
                            else
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U113[l_U239] );
                                DELETE_CHAR( ref l_U113[l_U239] );
                            }
                        }
                    }
                }
                if (NOT (IS_CHAR_DEAD( l_U154 )))
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, 7.00000000, -0.50000000, -1.20000000, ref l_U378._fU0, ref l_U378._fU4, ref l_U378._fU8 );
                    if ((CAN_CREATE_RANDOM_CHAR( 1, 0 )) || (CAN_CREATE_RANDOM_CHAR( 0, 1 )))
                    {
                        CREATE_RANDOM_CHAR( l_U378._fU0, l_U378._fU4, l_U378._fU8, ref l_U156 );
                        SET_CHAR_HEADING( l_U156, l_U404 );
                        TASK_PLAY_ANIM( l_U156, "WastedA", "AMB@NIGHTCLUB_EXT", 1.00000000, 1, 0, 0, 0, -1 );
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, 7.80000000, 1.60000000, -1.00000000, ref l_U378._fU0, ref l_U378._fU4, ref l_U378._fU8 );
                    }
                }
                l_U437 = 2;
                break;
                case 2:
                if (l_U400 == 0)
                {
                    sub_6421();
                    sub_12470();
                }
                else
                {
                    sub_13598();
                }
                if (g_U9211 == 1)
                {
                    sub_13598();
                    sub_162();
                }
                if (DOES_SCRIPT_EXIST( "francis1" ))
                {
                    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "francis1" )) > 0)
                    {
                        sub_162();
                    }
                }
                break;
            }
        }
        else
        {
            sub_162();
        }
        sub_7259( ref l_U154 );
        sub_7259( ref l_U155 );
        sub_717();
    }
    return;
}

void sub_162()
{
    if (DOES_CHAR_EXIST( l_U154 ))
    {
        if ((NOT (IS_CHAR_DEAD( l_U154 ))) AND (NOT (IS_CHAR_INJURED( l_U154 ))))
        {
            FREEZE_CHAR_POSITION( l_U154, 0 );
        }
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U430 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1850743775 );
    sub_262( ref l_U417, 0 );
    sub_262( ref l_U423, 0 );
    CLEAR_SEQUENCE_TASK( l_U407 );
    CLEAR_SEQUENCE_TASK( l_U408 );
    CLEAR_SEQUENCE_TASK( l_U409 );
    CLEAR_SEQUENCE_TASK( l_U410 );
    CLEAR_SEQUENCE_TASK( l_U411 );
    CLEAR_SEQUENCE_TASK( l_U412 );
    CLEAR_SEQUENCE_TASK( l_U413 );
    sub_481( 0 );
    for ( l_U239 = 0; l_U239 < l_U243; l_U239++ )
    {
        WAIT( 0 );
        if (((NOT (IS_CHAR_DEAD( l_U113[l_U239] ))) AND (NOT (IS_CHAR_INJURED( l_U113[l_U239] )))) AND (DOES_CHAR_EXIST( l_U113[l_U239] )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U113[l_U239] );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U113[l_U239] );
        }
        else
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U113[l_U239] );
        }
        sub_717();
    }
    if (DOES_CHAR_EXIST( l_U155 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U155 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U155 )))
            {
                TASK_SET_CHAR_DECISION_MAKER( l_U155, l_U402 );
            }
            SET_CHAR_READY_TO_BE_STUNNED( l_U155, 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U155 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U155 );
        }
    }
    if (DOES_CHAR_EXIST( l_U154 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U154 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U154 )))
            {
                TASK_SET_CHAR_DECISION_MAKER( l_U154, l_U402 );
            }
            SET_CHAR_READY_TO_BE_STUNNED( l_U154, 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U154 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U154 );
        }
    }
    REMOVE_ANIMS( "AMB@NIGHTCLUB_EXT" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_262(int iParam0, unknown uParam1)
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

void sub_481(unknown uParam0)
{
    if (g_U8600[uParam0]._fU4 <= 1)
    {
        sub_511( uParam0, 1 );
    }
    return;
}

void sub_511(unknown uParam0, unknown uParam1)
{
    g_U8600[uParam0]._fU4 = uParam1;
    g_U8600[uParam0]._fU8 = 0;
    return;
}

void sub_717()
{
    if (NOT l_U401)
    {
        if (NOT (IS_CHAR_INJURED( sub_737() )))
        {
            if (HAVE_ANIMS_LOADED( "melee_unarmed_base" ))
            {
                if (IS_CHAR_PLAYING_ANIM( sub_737(), "melee_unarmed_base", "stun_punch" ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_737() )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U155 )))
                        {
                            if (IS_PLAYER_TARGETTING_CHAR( sub_911(), l_U155 ))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U154 );
                                SET_CHAR_RELATIONSHIP( l_U154, 5, 0 );
                                SET_CHAR_READY_TO_BE_STUNNED( l_U154, 0 );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U154 )))
                        {
                            if (IS_PLAYER_TARGETTING_CHAR( sub_911(), l_U154 ))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U155 );
                                SET_CHAR_RELATIONSHIP( l_U155, 5, 0 );
                                SET_CHAR_READY_TO_BE_STUNNED( l_U155, 0 );
                            }
                        }
                        l_U397 = 1;
                        l_U401 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_737()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_911()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1455()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Michelle1" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_1912(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_1929();
    return;
}

void sub_1929()
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

void sub_2383(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2463( "\n PED NUMBER ", uParam0 );
    sub_2503( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2463(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2503(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6421()
{
    if (NOT (IS_CHAR_DEAD( l_U113[6] )))
    {
        if (TIMERA() > 4000)
        {
            SAY_AMBIENT_SPEECH( l_U113[6], "NIGHTCLUB_CHAT", 0, 0, 0 );
            SETTIMERA( 0 );
        }
    }
    if (l_U395 == 1)
    {
        for ( l_U239 = 0; l_U239 < l_U243; l_U239++ )
        {
            WAIT( 0 );
            if (NOT (IS_CHAR_DEAD( sub_737() )))
            {
                if (IS_CHAR_SHOOTING( sub_737() ))
                {
                    l_U400 = 1;
                }
            }
            if (IS_ANY_CHAR_SHOOTING_IN_AREA( l_U387, l_U390, 0 ))
            {
                l_U400 = 1;
            }
            if (NOT (IS_CHAR_DEAD( l_U113[l_U239] )))
            {
                if (DOES_CHAR_EXIST( l_U113[l_U239] ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U113[l_U239], 957.40000000, -282.32000000, 19.88000000, 3.50000000, 3.50000000, 4.00000000, 0 ))
                    {
                        if (NOT (IS_CHAR_ON_SCREEN( l_U113[l_U239] )))
                        {
                            DELETE_CHAR( ref l_U113[l_U239] );
                        }
                    }
                    if (l_U157[l_U239] == 0)
                    {
                        if (NOT (IS_CHAR_DEAD( l_U113[l_U239] )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( l_U113[l_U239], 957.40000000, -282.32000000, 19.88000000, 4.50000000, 4.50000000, 4.00000000, 0 ))
                            {
                                if (NOT (IS_CHAR_ON_SCREEN( l_U113[l_U239] )))
                                {
                                    DELETE_CHAR( ref l_U113[l_U239] );
                                }
                            }
                        }
                    }
                }
                if (IS_PLAYER_PLAYING( sub_911() ))
                {
                    if (NOT (IS_CHAR_DEAD( sub_737() )))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U113[l_U239] )))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U113[l_U239], sub_737(), 0 ))
                            {
                                l_U400 = 1;
                            }
                            GET_CURRENT_CHAR_WEAPON( sub_737(), ref l_U429 );
                            if (l_U429 == 0)
                            {
                                l_U394 = 1;
                            }
                            else
                            {
                                l_U394 = 0;
                            }
                            if (IS_PLAYER_TARGETTING_CHAR( sub_911(), l_U113[l_U239] ))
                            {
                                if (l_U394 == 0)
                                {
                                    l_U400 = 1;
                                }
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U155 )))
            {
                if (NOT (IS_CHAR_DEAD( sub_737() )))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U155, sub_737(), 0 ))
                    {
                        l_U400 = 1;
                    }
                    GET_CURRENT_CHAR_WEAPON( sub_737(), ref l_U429 );
                    if (l_U429 == 0)
                    {
                        l_U394 = 1;
                    }
                    else
                    {
                        l_U394 = 0;
                    }
                    if (IS_PLAYER_TARGETTING_CHAR( sub_911(), l_U155 ))
                    {
                        if (l_U394 == 0)
                        {
                            l_U400 = 1;
                        }
                    }
                }
                sub_7259( ref l_U155 );
            }
            if (NOT (IS_CHAR_DEAD( l_U154 )))
            {
                if (NOT (IS_CHAR_DEAD( sub_737() )))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U154, sub_737(), 0 ))
                    {
                        l_U400 = 1;
                    }
                    GET_CURRENT_CHAR_WEAPON( sub_737(), ref l_U429 );
                    if (l_U429 == 0)
                    {
                        l_U394 = 1;
                    }
                    else
                    {
                        l_U394 = 0;
                    }
                    if (IS_PLAYER_TARGETTING_CHAR( sub_911(), l_U154 ))
                    {
                        if (l_U394 == 0)
                        {
                            l_U400 = 1;
                        }
                    }
                }
                sub_7259( ref l_U154 );
            }
            if (l_U400 == 0)
            {
                if (NOT (IS_CHAR_DEAD( l_U113[l_U239] )))
                {
                    if (l_U157[l_U239] > 1)
                    {
                        if (l_U198[l_U239] == 1)
                        {
                            GET_SCRIPT_TASK_STATUS( l_U113[l_U239], 29, ref l_U435 );
                            if (l_U435 == 7)
                            {
                                if (l_U239 == 0)
                                {
                                    l_U414 = l_U407;
                                }
                                if (l_U239 == 1)
                                {
                                    l_U414 = l_U408;
                                }
                                if (l_U239 == 2)
                                {
                                    l_U414 = l_U409;
                                }
                                if (l_U239 == 3)
                                {
                                    l_U414 = l_U410;
                                }
                                if (l_U239 == 4)
                                {
                                    l_U414 = l_U411;
                                }
                                if (l_U239 == 5)
                                {
                                    l_U414 = l_U412;
                                }
                                if (l_U239 == 6)
                                {
                                    l_U414 = l_U407;
                                }
                                if (l_U239 == 7)
                                {
                                    l_U414 = l_U408;
                                }
                                if (l_U239 == 8)
                                {
                                    l_U414 = l_U411;
                                }
                                if (l_U239 == 9)
                                {
                                    l_U414 = l_U412;
                                }
                                CLEAR_CHAR_TASKS( l_U113[l_U239] );
                                TASK_PERFORM_SEQUENCE( l_U113[l_U239], l_U414 );
                                l_U198[l_U239] = 0;
                            }
                        }
                    }
                }
                if (l_U157[l_U239] == 0)
                {
                    if (NOT (IS_CHAR_DEAD( l_U113[l_U239] )))
                    {
                        if (l_U198[l_U239] == 1)
                        {
                            GET_SCRIPT_TASK_STATUS( l_U113[l_U239], 29, ref l_U435 );
                            if (l_U435 == 7)
                            {
                                if (NOT (IS_CHAR_DEAD( l_U154 )))
                                {
                                    FREEZE_CHAR_POSITION( l_U154, 1 );
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U240 );
                                    if (l_U240 == 0)
                                    {
                                        if (DOES_CHAR_EXIST( l_U113[l_U239] ))
                                        {
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U113[l_U239] );
                                            TASK_TURN_CHAR_TO_FACE_COORD( l_U113[l_U239], l_U248._fU0, l_U248._fU4, l_U248._fU8 );
                                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U113[l_U239], "CLUBBER_FRISKED", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 1, -1 );
                                        }
                                        if (DOES_CHAR_EXIST( l_U154 ))
                                        {
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U154 );
                                            TASK_PLAY_ANIM( l_U154, "BOUNCER_A_FRISK", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                                            sub_9126( "BO1_POSYES2", ref l_U417, 1, 1 );
                                        }
                                    }
                                    if (l_U240 == 1)
                                    {
                                        if (DOES_CHAR_EXIST( l_U154 ))
                                        {
                                            if (DOES_CHAR_EXIST( l_U113[l_U239] ))
                                            {
                                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U113[l_U239] );
                                                TASK_PLAY_ANIM( l_U154, "BOUNCER_A_CHECKID", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U113[l_U239] );
                                                TASK_TURN_CHAR_TO_FACE_COORD( l_U113[l_U239], l_U248._fU0, l_U248._fU4, l_U248._fU8 );
                                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U113[l_U239], "CLUBBER_ID_CHECK", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                                            }
                                        }
                                    }
                                    if (l_U240 == 2)
                                    {
                                        if (DOES_CHAR_EXIST( l_U154 ))
                                        {
                                            if (DOES_CHAR_EXIST( l_U113[l_U239] ))
                                            {
                                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U154 );
                                                TASK_PLAY_ANIM( l_U154, "BOUNCER_A_REFUSE_ENTRY", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 1, 25000 );
                                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U113[l_U239] );
                                                TASK_TURN_CHAR_TO_FACE_COORD( l_U113[l_U239], l_U248._fU0, l_U248._fU4, l_U248._fU8 );
                                                FREEZE_CHAR_POSITION( l_U154, 0 );
                                            }
                                        }
                                    }
                                    l_U395 = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U400 == 0)
    {
        if (NOT (IS_CHAR_DEAD( l_U154 )))
        {
            if (l_U395 == 0)
            {
                GET_SCRIPT_TASK_STATUS( l_U154, 80, ref l_U436 );
                if (l_U436 == 7)
                {
                    FREEZE_CHAR_POSITION( l_U154, 0 );
                    l_U239 = 0;
                    l_U241 = 0;
                    while (l_U239 < l_U243)
                    {
                        WAIT( 0 );
                        if (NOT (IS_CHAR_DEAD( l_U155 )))
                        {
                            sub_7259( ref l_U155 );
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U155, sub_737(), 0 ))
                            {
                                l_U400 = 1;
                            }
                            GET_CURRENT_CHAR_WEAPON( sub_737(), ref l_U429 );
                            if (l_U429 == 0)
                            {
                                l_U394 = 1;
                            }
                            else
                            {
                                l_U394 = 0;
                            }
                            if (IS_PLAYER_TARGETTING_CHAR( sub_911(), l_U155 ))
                            {
                                if (l_U394 == 0)
                                {
                                    l_U400 = 1;
                                }
                            }
                        }
                        if (NOT (IS_CHAR_DEAD( l_U154 )))
                        {
                            sub_7259( ref l_U154 );
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U154, sub_737(), 0 ))
                            {
                                l_U400 = 1;
                                FREEZE_CHAR_POSITION( l_U154, 0 );
                            }
                            GET_CURRENT_CHAR_WEAPON( sub_737(), ref l_U429 );
                            if (l_U429 == 0)
                            {
                                l_U394 = 1;
                            }
                            else
                            {
                                l_U394 = 0;
                            }
                        }
                        if (l_U397 == 0)
                        {
                            if (((NOT (IS_CHAR_DEAD( l_U155 ))) AND (NOT (IS_CHAR_INJURED( l_U155 )))) AND (DOES_CHAR_EXIST( l_U155 )))
                            {
                                if (l_U396 == 1)
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U155, 80, ref l_U435 );
                                    if (l_U435 == 7)
                                    {
                                        l_U396 = 0;
                                    }
                                }
                                if (l_U396 == 0)
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U155 );
                                    TASK_PLAY_ANIM( l_U155, "BOUNCER_B_WELCOME", "AMB@NIGHTCLUB_EXT", 1.00000000, 0, 0, 0, 0, -1 );
                                    l_U396 = 1;
                                }
                            }
                        }
                        if (NOT (IS_CHAR_DEAD( l_U154 )))
                        {
                            if (IS_PLAYER_TARGETTING_CHAR( sub_911(), l_U154 ))
                            {
                                if (l_U394 == 0)
                                {
                                    l_U400 = 1;
                                }
                            }
                        }
                        if (NOT (IS_CHAR_DEAD( l_U113[l_U239] )))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U113[l_U239], sub_737(), 0 ))
                            {
                                l_U400 = 1;
                            }
                            GET_CURRENT_CHAR_WEAPON( sub_737(), ref l_U429 );
                            if (l_U429 == 0)
                            {
                                l_U394 = 1;
                            }
                            else
                            {
                                l_U394 = 0;
                            }
                            if (IS_PLAYER_TARGETTING_CHAR( sub_911(), l_U113[l_U239] ))
                            {
                                if (l_U394 == 0)
                                {
                                    l_U400 = 1;
                                }
                            }
                        }
                        if (l_U157[l_U239] == 0)
                        {
                            if (((NOT (IS_CHAR_DEAD( l_U113[l_U239] ))) AND (NOT (IS_CHAR_INJURED( l_U113[l_U239] )))) AND (DOES_CHAR_EXIST( l_U113[l_U239] )))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U154 )))
                                {
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, 2.00000000, 0.50000000, -1.00000000, ref l_U375._fU0, ref l_U375._fU4, ref l_U375._fU8 );
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, 2.00000000, -10.50000000, 0.00000000, ref l_U372._fU0, ref l_U372._fU4, ref l_U372._fU8 );
                                }
                                OPEN_SEQUENCE_TASK( ref l_U406 );
                                TASK_GO_STRAIGHT_TO_COORD( 0, l_U375._fU0, l_U375._fU4, l_U375._fU8, 2, -1 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U372._fU0, l_U372._fU4, l_U372._fU8, 2, -2, 1.50000000 );
                                CLOSE_SEQUENCE_TASK( l_U406 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U113[l_U239] );
                                TASK_PERFORM_SEQUENCE( l_U113[l_U239], l_U406 );
                                CLEAR_SEQUENCE_TASK( l_U406 );
                                l_U198[l_U239] = 1;
                            }
                        }
                        else
                        {
                            l_U241 = l_U157[l_U239] - 1;
                            l_U242 = l_U157[l_U239] + 1;
                            if (((NOT (IS_CHAR_DEAD( l_U113[l_U239] ))) AND (NOT (IS_CHAR_INJURED( l_U113[l_U239] )))) AND (DOES_CHAR_EXIST( l_U113[l_U239] )))
                            {
                                if (l_U157[l_U239] <= 1)
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U406 );
                                    TASK_GO_STRAIGHT_TO_COORD( 0, l_U251[l_U241]._fU0, l_U251[l_U241]._fU4, l_U251[l_U241]._fU8, 2, 2000 );
                                    TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U248._fU0, l_U248._fU4, l_U248._fU8 );
                                    CLOSE_SEQUENCE_TASK( l_U406 );
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U113[l_U239] );
                                    TASK_PERFORM_SEQUENCE( l_U113[l_U239], l_U406 );
                                    CLEAR_SEQUENCE_TASK( l_U406 );
                                    l_U198[l_U239] = 1;
                                }
                                else if (l_U198[l_U239] == 0)
                                {
                                    if (((NOT (IS_CHAR_DEAD( l_U113[l_U239] ))) AND (NOT (IS_CHAR_INJURED( l_U113[l_U239] )))) AND (DOES_CHAR_EXIST( l_U113[l_U239] )))
                                    {
                                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U113[l_U239] );
                                        OPEN_SEQUENCE_TASK( ref l_U406 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U251[l_U241]._fU0, l_U251[l_U241]._fU4, l_U251[l_U241]._fU8, 2, -1, 0.40000000 );
                                        TASK_TURN_CHAR_TO_FACE_COORD( 0, l_U248._fU0, l_U248._fU4, l_U248._fU8 );
                                        CLOSE_SEQUENCE_TASK( l_U406 );
                                        TASK_PERFORM_SEQUENCE( l_U113[l_U239], l_U406 );
                                        if (l_U239 == 1)
                                        {
                                            SAY_AMBIENT_SPEECH( l_U113[l_U239], "NIGHTCLUB_CHAT", 0, 0, 0 );
                                        }
                                        CLEAR_SEQUENCE_TASK( l_U406 );
                                        l_U198[l_U239] = 1;
                                    }
                                }
                            }
                            else
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U113[l_U239] );
                            }
                        }
                        l_U157[l_U239]--;
                        if (l_U157[l_U239] < 0)
                        {
                            l_U157[l_U239] = l_U243;
                            l_U198[l_U239] = 100;
                        }
                        l_U239++;
                    }
                    l_U395 = 1;
                }
            }
        }
    }
    return;
}

void sub_7259(unknown uParam0)
{
    int I;
    float fVar4;

    if ((NOT (IS_CHAR_INJURED( (uParam0^) ))) AND (NOT (IS_CHAR_INJURED( sub_737() ))))
    {
        if (GET_CHAR_MELEE_ACTION_FLAG1( (uParam0^) ))
        {
            SET_CHAR_MELEE_ACTION_FLAG1( (uParam0^), 0 );
            SET_CHAR_READY_TO_BE_STUNNED( (uParam0^), 0 );
            for ( I = 0; I <= 1; I++ )
            {
                if (l_U106[I] == nil)
                {
                    l_U106[I] = (uParam0^);
                }
            }
            SETTIMERA( 0 );
        }
        for ( I = 0; I <= 1; I++ )
        {
            if (NOT (l_U106[I] == nil))
            {
                if (NOT (IS_CHAR_INJURED( l_U106[I] )))
                {
                    if (TIMERA() > 200)
                    {
                        TRIGGER_PTFX_ON_PED_BONE( "blood_stun_punch", l_U106[I], 0.00000000, 0.13000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1205, 1 );
                        SET_CHAR_HEALTH( l_U106[I], 99 );
                        l_U106[I] = nil;
                    }
                    if (IS_CHAR_PLAYING_ANIM( l_U106[I], "MELEE_UNARMED_BASE", "Hit_Jab" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U106[I], "MELEE_UNARMED_BASE", "Hit_Jab", ref fVar4 );
                        if (fVar4 > 0.10000000)
                        {
                            TRIGGER_PTFX_ON_PED_BONE( "blood_stun_punch", l_U106[I], 0.00000000, 0.13000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1205, 1 );
                            SET_CHAR_HEALTH( l_U106[I], 99 );
                            l_U106[I] = nil;
                        }
                    }
                }
                else
                {
                    l_U106[I] = nil;
                }
            }
        }
    }
    sub_7807( uParam0 );
    return;
}

int sub_7807(unknown uParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (GET_CHAR_READY_TO_BE_STUNNED( (uParam0^) ))
        {
            if (HAVE_ANIMS_LOADED( "melee_unarmed_base" ))
            {
                if ((IS_PED_IN_COMBAT( (uParam0^) )) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_737(), "melee_unarmed_base", "stun_punch" ))))
                {
                    bVar3 = true;
                }
                if ((IS_CHAR_IN_MELEE_COMBAT( (uParam0^) )) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_737(), "melee_unarmed_base", "stun_punch" ))))
                {
                    bVar3 = true;
                }
            }
            if ((IS_PLAYER_TARGETTING_CHAR( sub_911(), (uParam0^) )) AND (IS_CHAR_ARMED( (uParam0^), 4 )))
            {
                bVar3 = true;
            }
            if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_911(), (uParam0^) )) AND (IS_CHAR_ARMED( (uParam0^), 4 )))
            {
                bVar3 = true;
            }
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_737(), 0 ))
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

void sub_9126(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9147( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_9147(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_9201( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_9201(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9223( iParam1 )))
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
    sub_9911( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_9223(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9300( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_9300( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_9300( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_9300(unknown uParam0)
{
    return;
}

void sub_9911(int iParam0, int iParam1)
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

void sub_12470()
{
    if (IS_ANY_CHAR_SHOOTING_IN_AREA( l_U387, l_U390, 0 ))
    {
        l_U400 = 1;
    }
    if (g_U9210 == 0)
    {
        if ((l_U399 == 0) AND (g_U9209 == 1))
        {
            if (IS_PLAYER_PLAYING( sub_911() ))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_737(), l_U251[25]._fU0, l_U251[25]._fU4, l_U251[25]._fU8, 2.50000000, 2.50000000, 2.50000000, 0 ))
                {
                    l_U399 = 1;
                }
                if (l_U397 == 0)
                {
                    if ((NOT (IS_CHAR_DEAD( l_U154 ))) AND (NOT (IS_CHAR_INJURED( l_U154 ))))
                    {
                        if ((NOT (IS_CHAR_DEAD( l_U155 ))) AND (NOT (IS_CHAR_INJURED( l_U155 ))))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_737(), 957.90000000, -288.65000000, 19.88000000, 3.50000000, 3.50000000, 3.50000000, 0 ))
                            {
                                if (g_U10978 == 1)
                                {
                                    sub_9126( "BO1_AGGNO2", ref l_U417, 5, 1 );
                                }
                                else
                                {
                                    sub_9126( "BO1_AGGNO2", ref l_U417, 6, 1 );
                                }
                                l_U397 = 1;
                                if ((NOT (IS_CHAR_DEAD( l_U155 ))) AND (DOES_CHAR_EXIST( l_U155 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U155 );
                                    SET_CHAR_RELATIONSHIP( l_U155, 5, 0 );
                                    SET_CHAR_READY_TO_BE_STUNNED( l_U155, 0 );
                                }
                            }
                        }
                    }
                }
            }
            if (l_U397 == 1)
            {
                if (IS_PLAYER_PLAYING( sub_911() ))
                {
                    if (((NOT (IS_CHAR_DEAD( l_U154 ))) AND (NOT (IS_CHAR_INJURED( l_U154 )))) AND (DOES_CHAR_EXIST( l_U154 )))
                    {
                        if (((NOT (IS_CHAR_DEAD( l_U155 ))) AND (NOT (IS_CHAR_INJURED( l_U155 )))) AND (DOES_CHAR_EXIST( l_U155 )))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_737(), l_U155, 8.00000000, 8.00000000, 8.00000000, 0 )))
                            {
                                l_U397 = 0;
                                if (NOT (IS_CHAR_DEAD( l_U154 )))
                                {
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U154, 3.50000000, -1.00000000, -1.00000000, ref l_U381._fU0, ref l_U381._fU4, ref l_U381._fU8 );
                                }
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U155 );
                                SET_CHAR_RELATIONSHIP( l_U155, 1, 0 );
                                OPEN_SEQUENCE_TASK( ref l_U406 );
                                TASK_GO_STRAIGHT_TO_COORD( 0, l_U381._fU0, l_U381._fU4, l_U381._fU8, 2, -1 );
                                TASK_ACHIEVE_HEADING( 0, l_U404 );
                                CLOSE_SEQUENCE_TASK( l_U406 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U155 );
                                TASK_PERFORM_SEQUENCE( l_U155, l_U406 );
                                CLEAR_SEQUENCE_TASK( l_U406 );
                            }
                        }
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_DEAD( l_U155 )))
        {
            if (IS_PLAYER_PLAYING( sub_911() ))
            {
                if (NOT l_U398)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_737(), l_U155, 2.00000000, 2.00000000, 2.00000000, 0 ))
                    {
                        if (g_U10978 == 1)
                        {
                            sub_9126( "BO1_NEGYES2", ref l_U417, 5, 1 );
                        }
                        else
                        {
                            sub_9126( "BO1_NEGYES2", ref l_U417, 6, 1 );
                        }
                        l_U398 = 1;
                    }
                }
            }
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U155 )))
    {
        if (IS_PLAYER_PLAYING( sub_911() ))
        {
            if (NOT l_U398)
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_737(), l_U155, 2.00000000, 2.00000000, 2.00000000, 0 ))
                {
                    sub_9126( "BO1_POSYES2", ref l_U417, 6, 1 );
                    l_U398 = 1;
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_737() )))
    {
        if (IS_CHAR_SHOOTING( sub_737() ))
        {
            l_U400 = 1;
        }
    }
    return;
}

void sub_13598()
{
    if (l_U393 == 0)
    {
        for ( l_U239 = 0; l_U239 < l_U243; l_U239++ )
        {
            WAIT( 0 );
            if (((NOT (IS_CHAR_DEAD( l_U113[l_U239] ))) AND (NOT (IS_CHAR_INJURED( l_U113[l_U239] )))) AND (DOES_CHAR_EXIST( l_U113[l_U239] )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U113[l_U239] );
                SET_CHAR_KEEP_TASK( l_U113[l_U239], 1 );
                TASK_SMART_FLEE_POINT( l_U113[l_U239], l_U251[1]._fU0, l_U251[1]._fU4, l_U251[1]._fU8, 30.00000000, 30000 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U113[l_U239] );
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U113[l_U239] );
            }
            if (NOT (IS_CHAR_DEAD( l_U155 )))
            {
                sub_7259( ref l_U155 );
            }
            if (NOT (IS_CHAR_DEAD( l_U154 )))
            {
                sub_7259( ref l_U154 );
            }
            sub_717();
        }
        sub_717();
        if (DOES_CHAR_EXIST( l_U155 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U155 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U155 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U155 );
                    SET_CHAR_RELATIONSHIP( l_U155, 5, 0 );
                }
                SET_CHAR_READY_TO_BE_STUNNED( l_U155, 0 );
            }
        }
        if (DOES_CHAR_EXIST( l_U154 ))
        {
            if ((NOT (IS_CHAR_DEAD( l_U154 ))) AND (NOT (IS_CHAR_INJURED( l_U154 ))))
            {
                FREEZE_CHAR_POSITION( l_U154, 0 );
                TASK_SET_CHAR_DECISION_MAKER( l_U154, l_U402 );
                SET_CHAR_COLLISION( l_U154, 1 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U154 );
                SET_CHAR_RELATIONSHIP( l_U154, 5, 0 );
                SET_CHAR_READY_TO_BE_STUNNED( l_U154, 0 );
            }
        }
        l_U393 = 1;
    }
    return;
}