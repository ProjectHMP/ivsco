void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U134 = -183203150;
    l_U135 = 2046537925;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_83();
    }
    sub_113( l_U141 );
    while (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
    {
        WAIT( 0 );
        sub_587();
        if (IS_PLAYER_PLAYING( sub_712() ))
        {
            switch (l_U103)
            {
                case 0:
                sub_791();
                break;
                case 1:
                sub_2058();
                break;
                case 3:
                sub_3360();
                break;
            }
        }
    }
    sub_83();
    return;
}

void sub_83()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_113(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    l_U109._fU0 = uParam0._fU4[0]._fU0;
    l_U109._fU4 = uParam0._fU4[0]._fU4;
    l_U109._fU8 = uParam0._fU4[0]._fU8;
    l_U126 = uParam0._fU68[0];
    l_U118._fU0 = uParam0._fU4[1]._fU0;
    l_U118._fU4 = uParam0._fU4[1]._fU4;
    l_U118._fU8 = uParam0._fU4[1]._fU8;
    l_U127 = uParam0._fU68[1];
    REQUEST_ANIMS( "misscopbootsearch" );
    GET_CURRENT_BASIC_COP_MODEL( ref l_U134 );
    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U135 );
    sub_295();
    if (HAS_MODEL_LOADED( 2016857647 ))
    {
        l_U125 = 0;
        l_U136 = 2016857647;
    }
    else if (HAS_MODEL_LOADED( -825837129 ))
    {
        l_U125 = 1;
        l_U136 = -825837129;
    }
    else if (HAS_MODEL_LOADED( 886934177 ))
    {
        l_U125 = 2;
        l_U136 = 886934177;
    }
    else if (HAS_MODEL_LOADED( 1348744438 ))
    {
        l_U125 = 3;
        l_U136 = 1348744438;
    }
    else if (HAS_MODEL_LOADED( -1883869285 ))
    {
        l_U125 = 4;
        l_U136 = -1883869285;
    }
    else if (HAS_MODEL_LOADED( 131140572 ))
    {
        l_U125 = 5;
        l_U136 = 131140572;
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    };;;;;;
    REQUEST_MODEL( l_U136 );
    return;
}

void sub_295()
{
    return;
}

void sub_587()
{
    if (IS_CHAR_SHOOTING_IN_AREA( sub_596(), l_U109._fU0 - 50, l_U109._fU4 - 50, l_U109._fU0 + 50, l_U109._fU4 + 50, 0 ))
    {
        l_U103 = 3;
    }
    return;
}

void sub_596()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_712()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_791()
{
    switch (l_U105)
    {
        case 0:
        if (HAS_MODEL_LOADED( l_U136 ))
        {
            if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
            {
                if (HAS_MODEL_LOADED( l_U134 ))
                {
                    if (HAS_MODEL_LOADED( l_U135 ))
                    {
                        CREATE_CAR( l_U136, l_U118._fU0, l_U118._fU4, l_U118._fU8, ref l_U138, 1 );
                        SET_CAR_HEADING( l_U138, l_U126 );
                        OPEN_CAR_DOOR( l_U138, 5 );
                        l_U105 = 1;
                    }
                }
            }
        }
        break;
        case 1:
        if (NOT (IS_CAR_DEAD( l_U138 )))
        {
            if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
            {
                CREATE_RANDOM_CHAR_AS_DRIVER( l_U138, ref l_U140 );
                if (NOT (IS_CHAR_INJURED( l_U140 )))
                {
                    TASK_CAR_MISSION( l_U140, l_U138, 0, 5, 0.00000000, 0, 5, 5 );
                    SET_CHAR_IN_CUTSCENE( l_U140, 1 );
                }
                if (l_U125 == 0)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U138, 0.00000000, -2.30000000, -1.00000000, ref l_U112._fU0, ref l_U112._fU4, ref l_U112._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U138, -1.60000000, 0.00000000, 0.00000000, ref l_U115._fU0, ref l_U115._fU4, ref l_U115._fU8 );
                }
                else if (l_U125 == 1)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U138, 0.00000000, -2.70000000, -1.00000000, ref l_U112._fU0, ref l_U112._fU4, ref l_U112._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U138, -1.60000000, 0.00000000, 0.00000000, ref l_U115._fU0, ref l_U115._fU4, ref l_U115._fU8 );
                }
                else if (l_U125 == 2)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U138, 0.00000000, -2.70000000, -1.00000000, ref l_U112._fU0, ref l_U112._fU4, ref l_U112._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U138, -1.60000000, 0.00000000, 0.00000000, ref l_U115._fU0, ref l_U115._fU4, ref l_U115._fU8 );
                }
                else if (l_U125 == 3)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U138, 0.00000000, -2.75000000, -1.00000000, ref l_U112._fU0, ref l_U112._fU4, ref l_U112._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U138, -1.60000000, 0.00000000, 0.00000000, ref l_U115._fU0, ref l_U115._fU4, ref l_U115._fU8 );
                }
                else if (l_U125 == 4)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U138, 0.00000000, -2.70000000, -1.00000000, ref l_U112._fU0, ref l_U112._fU4, ref l_U112._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U138, -1.60000000, 0.00000000, 0.00000000, ref l_U115._fU0, ref l_U115._fU4, ref l_U115._fU8 );
                }
                else if (l_U125 == 5)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U138, 0.00000000, -2.70000000, -1.00000000, ref l_U112._fU0, ref l_U112._fU4, ref l_U112._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U138, -1.60000000, 0.00000000, 0.00000000, ref l_U115._fU0, ref l_U115._fU4, ref l_U115._fU8 );
                };;;;;;
                l_U105 = 2;
            }
        }
        break;
        case 2:
        if (HAS_MODEL_LOADED( l_U134 ))
        {
            CREATE_CHAR( 6, l_U134, l_U112._fU0, l_U112._fU4, l_U112._fU8, ref l_U139, 1 );
            if (NOT (IS_CHAR_INJURED( l_U139 )))
            {
                SET_CHAR_IN_CUTSCENE( l_U139, 1 );
            }
            if (NOT (IS_CHAR_INJURED( l_U139 )))
            {
                SET_INFORM_RESPECTED_FRIENDS( l_U139, 999, 999 );
            }
            l_U105 = 3;
        }
        break;
        case 3:
        if (HAS_MODEL_LOADED( l_U135 ))
        {
            CREATE_CAR( l_U135, l_U109._fU0, l_U109._fU4, l_U109._fU8, ref l_U137, 1 );
            l_U105 = 4;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U139 )))
        {
            TASK_START_SCENARIO_AT_POSITION( l_U139, "Vehicle_LookingInBoot", l_U112, l_U127 );
            l_U103 = 1;
        }
        break;
    }
    return;
}

void sub_2058()
{
    int iVar2;

    iVar2 = 0;
    if (IS_VEH_DRIVEABLE( l_U137 ))
    {
        if (IS_VEH_DRIVEABLE( l_U138 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U139 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U140 )))
                {
                    switch (l_U104)
                    {
                        case 0:
                        FORCE_CAR_LIGHTS( l_U137, 2 );
                        SWITCH_CAR_SIREN( l_U137, 1 );
                        GET_GAME_TIMER( ref l_U121 );
                        l_U104 = 17;
                        break;
                        case 17:
                        GET_GAME_TIMER( ref l_U122 );
                        l_U123 = l_U122 - l_U121;
                        if (l_U123 > 20000)
                        {
                            CLEAR_CHAR_TASKS( l_U139 );
                            l_U104 = 18;
                        }
                        break;
                        case 18:
                        TASK_PLAY_ANIM( l_U139, "close_boot", "misscopbootsearch", 8.00000000, 0, 0, 0, 0, -2 );
                        GET_DOOR_ANGLE_RATIO( l_U138, 5, ref l_U130 );
                        l_U104 = 19;
                        break;
                        case 19:
                        if (IS_CHAR_PLAYING_ANIM( l_U139, "misscopbootsearch", "close_boot" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U139, "misscopbootsearch", "close_boot", ref l_U131 );
                            if (l_U131 > 0.30000000)
                            {
                                l_U104 = 20;
                            }
                        }
                        break;
                        case 20:
                        l_U130 -= 0.15000000;
                        if (l_U130 > 0.00000000)
                        {
                            CONTROL_CAR_DOOR( l_U138, 5, 1, l_U130 );
                        }
                        else
                        {
                            CLOSE_ALL_CAR_DOORS( l_U138 );
                            l_U104 = 21;
                        }
                        break;
                        case 21:
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U139, l_U115._fU0, l_U115._fU4, l_U115._fU8, 2, -2, 0.00000000 );
                        l_U132 = 0;
                        l_U104 = 22;
                        break;
                        case 22:
                        GET_SCRIPT_TASK_STATUS( l_U139, 27, ref l_U132 );
                        if (l_U132 == 7)
                        {
                            l_U104 = 23;
                        }
                        break;
                        case 23:
                        TASK_TURN_CHAR_TO_FACE_CHAR( l_U139, l_U140 );
                        l_U132 = 0;
                        l_U104 = 24;
                        break;
                        case 24:
                        GET_SCRIPT_TASK_STATUS( l_U139, 34, ref l_U132 );
                        if (l_U132 == 7)
                        {
                            l_U104 = 25;
                        }
                        break;
                        case 25:
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar2 );
                        if (iVar2 == 0)
                        {
                            SAY_AMBIENT_SPEECH( l_U139, "PULLED_OVER_DAMAGED", 1, 1, 0 );
                        }
                        else if (iVar2 == 1)
                        {
                            SAY_AMBIENT_SPEECH( l_U139, "PULLED_OVER_RECKLESS", 1, 1, 0 );
                        }
                        else
                        {
                            SAY_AMBIENT_SPEECH( l_U139, "PULLED_OVER_SPEEDING", 1, 1, 0 );
                        }
                        TASK_PLAY_ANIM( l_U139, "car_chat_outside_2", "misscopbootsearch", 8.00000000, 0, 0, 0, 0, 5000 );
                        TASK_LOOK_AT_CHAR( l_U140, l_U139, 5000, 0 );
                        l_U104 = 26;
                        break;
                        case 26:
                        GET_SCRIPT_TASK_STATUS( l_U139, 80, ref l_U132 );
                        if (l_U132 == 7)
                        {
                            l_U104 = 27;
                        }
                        break;
                        case 27:
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        TASK_ENTER_CAR_AS_DRIVER( l_U139, l_U137, 20000 );
                        LOCK_CAR_DOORS( l_U137, 1 );
                        l_U104 = 28;
                        break;
                        case 28:
                        if ((NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( l_U139, l_U138, 5.00000000, 5.00000000, 0 ))) || (IS_CHAR_IN_CAR( l_U139, l_U137 )))
                        {
                            TASK_CAR_DRIVE_WANDER( l_U140, l_U138, 10.00000000, 6 );
                            l_U104 = 29;
                        }
                        break;
                        case 29:
                        if (IS_CHAR_IN_CAR( l_U139, l_U137 ))
                        {
                            FORCE_CAR_LIGHTS( l_U137, 1 );
                            SWITCH_CAR_SIREN( l_U137, 0 );
                            TASK_CAR_DRIVE_WANDER( l_U139, l_U137, 10.00000000, 6 );
                            l_U103 = 3;
                        }
                        break;
                    }
                }
            }
        }
    }
    return;
}

void sub_3360()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U139 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U137 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U140 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U138 );
    l_U139 = nil;
    l_U137 = nil;
    l_U140 = nil;
    l_U138 = nil;
    TERMINATE_THIS_SCRIPT();
    return;
}
