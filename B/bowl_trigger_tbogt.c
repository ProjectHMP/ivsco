void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U6 = 0;
    l_U7 = 1;
    l_U23 = 99;
    l_U24 = 0;
    l_U26 = 10;
    l_U178 = {-0.50000000, 3.00000000, -1.00000000};
    l_U181 = {-0.50000000, 0.00000000, 0.00000000};
    l_U205 = {0.00000000, 0.00000000, 0.00000000};
    l_U217 = {0.00000000, 0.00000000, -0.13617400};
    l_U232 = {0.00000000, 0.00000000, 0.00000000};
    l_U235 = 0.00000000;
    l_U238 = 90.00000000;
    l_U239 = 1.00000000;
    l_U241 = 0.00000000;
    l_U242 = 0.50000000;
    l_U244 = 0;
    l_U245 = 0;
    l_U246 = 0;
    l_U247 = 0;
    l_U248 = 0;
    l_U249 = 0;
    l_U250 = 0;
    l_U251 = 0;
    l_U252 = 0;
    l_U253 = 0;
    l_U266 = 0;
    l_U267 = 1;
    l_U268 = 0;
    l_U269 = 0;
    l_U270 = 0;
    l_U271 = 0;
    l_U272 = 0;
    l_U273 = 0;
    l_U274 = 0;
    l_U275 = 0;
    l_U276 = 0;
    l_U277 = 0;
    l_U278 = 0;
    l_U279 = 0;
    l_U281 = 0;
    l_U282 = 0;
    l_U283 = 0;
    l_U284 = 0;
    l_U285 = 0;
    l_U286 = 0;
    l_U287 = 0;
    l_U288 = 0;
    l_U289 = 0;
    l_U290 = 0;
    l_U325 = 10;
    l_U327 = 1;
    l_U328 = 7;
    l_U329 = 3;
    l_U330 = 0;
    l_U331 = 0;
    l_U310[0] = l_U332;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_483();
    }
    while (true)
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U310[0] ))
        {
            if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U310[0] ))
            {
                GET_INTERIOR_AT_COORDS( 1188.08600000, -665.16560000, 15.53800000, ref l_U319 );
                GET_INTERIOR_AT_COORDS( -587.44020000, 66.77700000, 4.91530000, ref l_U320 );
                GET_INTERIOR_FROM_CHAR( sub_1026(), ref l_U321 );
                if (NOT (l_U321 == nil))
                {
                    if ((l_U321 == l_U320) || (l_U321 == l_U319))
                    {
                        if ((IS_CHAR_SHOOTING( sub_1026() )) || (IS_CHAR_IN_ANY_CAR( sub_1026() )))
                        {
                            if (DOES_CHAR_EXIST( l_U292[l_U6] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
                                {
                                    TASK_SMART_FLEE_CHAR( l_U292[l_U6], sub_1026(), 100.00000000, -1 );
                                }
                            }
                            if (sub_1223())
                            {
                                g_U10742 = 0;
                            }
                            l_U325 = 8;
                        }
                    }
                    if (sub_1223())
                    {
                        if (g_U10748 == 1)
                        {
                            g_U10742 = 0;
                            l_U325 = 8;
                        }
                    }
                }
                switch (l_U325)
                {
                    case 10:
                    if (DOES_OBJECT_EXIST( l_U310[0] ))
                    {
                        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BOWL_TRIGGER" )) <= g_U10741)
                        {
                            if ((LOCATE_OBJECT_3D( l_U310[0], 1188.67500000, -674.34700000, 16.04562000, 2.00000000, 2.00000000, 2.00000000, 0 )) || (LOCATE_OBJECT_3D( l_U310[0], -577.89590000, 67.75747000, 4.41782500, 2.00000000, 2.00000000, 2.00000000, 0 )))
                            {
                                l_U325 = 4;
                            }
                            else
                            {
                                l_U325 = 1;
                            }
                        }
                        else
                        {
                            sub_483();
                        }
                    }
                    else
                    {
                        l_U325 = 8;
                    }
                    break;
                    case 4:
                    if (sub_1576())
                    {
                        if (NOT sub_1223())
                        {
                            l_U290 = sub_1643( ref l_U296, 0 );
                            if (NOT l_U290)
                            {
                                if (DOES_OBJECT_EXIST( l_U310[0] ))
                                {
                                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.50000000, -0.30000000, 0.00000000, ref l_U223._fU0, ref l_U223._fU4, ref l_U223._fU8 );
                                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.50000000, -0.30000000, 0.00000000, ref l_U226._fU0, ref l_U226._fU4, ref l_U226._fU8 );
                                }
                                if (g_U10742)
                                {
                                    if (NOT (IS_THREAD_ACTIVE( l_U291 )))
                                    {
                                        if ((LOCATE_CHAR_ON_FOOT_3D( sub_1026(), l_U223._fU0, l_U223._fU4, l_U223._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_1026(), l_U226._fU0, l_U226._fU4, l_U226._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 )))
                                        {
                                            if (LOCATE_CHAR_ON_FOOT_3D( sub_1026(), l_U223._fU0, l_U223._fU4, l_U223._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 ))
                                            {
                                                g_U10746 = 1;
                                            }
                                            else
                                            {
                                                g_U10746 = 0;
                                            }
                                            if (NOT l_U282)
                                            {
                                                l_U282 = 1;
                                                REQUEST_SCRIPT( "TENPINBOWL" );
                                                l_U325 = 5;
                                                SET_PLAYER_CONTROL( sub_2111(), 0 );
                                            }
                                        }
                                        else
                                        {
                                            l_U282 = 0;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                GET_GROUP_SIZE( sub_2166(), ref l_U29, ref l_U30 );
                                if (l_U30 > 0)
                                {
                                    if (DOES_OBJECT_EXIST( l_U310[0] ))
                                    {
                                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.50000000, -0.30000000, 0.00000000, ref l_U223._fU0, ref l_U223._fU4, ref l_U223._fU8 );
                                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.50000000, -0.30000000, 0.00000000, ref l_U226._fU0, ref l_U226._fU4, ref l_U226._fU8 );
                                    }
                                    if (g_U10742)
                                    {
                                        if (NOT (IS_THREAD_ACTIVE( l_U291 )))
                                        {
                                            if ((LOCATE_CHAR_ON_FOOT_3D( sub_1026(), l_U223._fU0, l_U223._fU4, l_U223._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_1026(), l_U226._fU0, l_U226._fU4, l_U226._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 )))
                                            {
                                                if (LOCATE_CHAR_ON_FOOT_3D( sub_1026(), l_U223._fU0, l_U223._fU4, l_U223._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 ))
                                                {
                                                    g_U10746 = 1;
                                                }
                                                else
                                                {
                                                    g_U10746 = 0;
                                                }
                                                if (NOT l_U282)
                                                {
                                                    l_U282 = 1;
                                                    REQUEST_SCRIPT( "TENPINBOWL" );
                                                    l_U325 = 5;
                                                    SET_PLAYER_CONTROL( sub_2111(), 0 );
                                                }
                                            }
                                            else
                                            {
                                                l_U282 = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (g_U42875 == 1)
                        {
                            if (DOES_OBJECT_EXIST( l_U310[0] ))
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.50000000, -0.30000000, 0.00000000, ref l_U223._fU0, ref l_U223._fU4, ref l_U223._fU8 );
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.50000000, -0.30000000, 0.00000000, ref l_U226._fU0, ref l_U226._fU4, ref l_U226._fU8 );
                            }
                            if (g_U10742)
                            {
                                if (NOT (IS_THREAD_ACTIVE( l_U291 )))
                                {
                                    if ((LOCATE_CHAR_ON_FOOT_3D( sub_1026(), l_U223._fU0, l_U223._fU4, l_U223._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_1026(), l_U226._fU0, l_U226._fU4, l_U226._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 )))
                                    {
                                        if (LOCATE_CHAR_ON_FOOT_3D( sub_1026(), l_U223._fU0, l_U223._fU4, l_U223._fU8 + 0.50000000, 1.50000000, 1.00000000, 1.00000000, 1 ))
                                        {
                                            g_U10746 = 1;
                                        }
                                        else
                                        {
                                            g_U10746 = 0;
                                        }
                                        if (NOT l_U282)
                                        {
                                            l_U282 = 1;
                                            REQUEST_SCRIPT( "TENPINBOWL" );
                                            l_U325 = 5;
                                            SET_PLAYER_CONTROL( sub_2111(), 0 );
                                        }
                                    }
                                    else
                                    {
                                        l_U282 = 0;
                                    }
                                }
                            }
                        }
                    }
                    break;
                    case 5:
                    if (HAS_SCRIPT_LOADED( "TENPINBOWL" ))
                    {
                        l_U325 = 6;
                    }
                    break;
                    case 6:
                    if (DOES_OBJECT_EXIST( l_U310[0] ))
                    {
                        l_U326._fU0 = l_U310[0];
                    }
                    l_U291 = START_NEW_SCRIPT_WITH_ARGS( "TENPINBOWL", ref l_U326, 1, 8192 );
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "TENPINBOWL" );
                    l_U325 = 11;
                    g_U10742 = 0;
                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U297 );
                    if (NOT (IS_CAR_DEAD( l_U297 )))
                    {
                        if ((IS_CAR_IN_AREA_3D( l_U297, 1168.07700000, -651.59450000, 15.00000000, 1196.95000000, -677.57710000, 18.00000000, 0 )) || (IS_CAR_IN_AREA_3D( l_U297, -574.80860000, 75.52550000, 3.00000000, -600.64850000, 47.15890000, 7.00000000, 0 )))
                        {
                            if (IS_CHAR_IN_AREA_3D( sub_1026(), 1207.53200000, -682.76390000, 0.00000000, 1155.52700000, -648.43470000, 50.00000000, 0 ))
                            {
                                SET_CAR_COORDINATES( l_U297, 1100.00000000, -683.20610000, 15.44040000 );
                                CLEAR_ANGLED_AREA_OF_CARS( 1196.32500000, -677.57700000, 15.00000000, 1196.25200000, -652.03240000, 19.00000000, 30.00000000 );
                                SET_CAR_COORDINATES( l_U297, 1199.22400000, -684.70870000, 15.44000000 );
                                SET_CAR_HEADING( l_U297, 272.34540000 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U297 );
                                APPLY_FORCE_TO_CAR( l_U297, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                            }
                            if (IS_CHAR_IN_AREA_3D( sub_1026(), -565.69760000, 57.63290000, 0.00000000, -604.69950000, 84.37870000, 50.00000000, 0 ))
                            {
                                SET_CAR_COORDINATES( l_U297, -499.24330000, 89.53830000, 6.86600000 );
                                CLEAR_ANGLED_AREA_OF_CARS( -574.66690000, 75.47580000, 7.00000000, -600.32470000, 75.47580000, 3.00000000, 30.00000000 );
                                GET_CLOSEST_CAR_NODE_WITH_HEADING( l_U223._fU0, l_U223._fU4, l_U223._fU8, ref l_U31._fU0, ref l_U31._fU4, ref l_U31._fU8, ref l_U236 );
                                SET_CAR_COORDINATES( l_U297, l_U31._fU0, l_U31._fU4, l_U31._fU8 );
                                SET_CAR_HEADING( l_U297, l_U236 );
                                SET_CAR_ON_GROUND_PROPERLY( l_U297 );
                                APPLY_FORCE_TO_CAR( l_U297, 0, 0.00000000, 0.00000000, -0.10000000, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                            }
                        }
                        else if (IS_CHAR_IN_AREA_3D( sub_1026(), 1207.53200000, -682.76390000, 0.00000000, 1155.52700000, -648.43470000, 50.00000000, 0 ))
                        {
                            CLEAR_ANGLED_AREA_OF_CARS( 1196.32500000, -677.57700000, 15.00000000, 1196.25200000, -652.03240000, 19.00000000, 30.00000000 );
                        }
                        if (IS_CHAR_IN_AREA_3D( sub_1026(), -565.69760000, 57.63290000, 0.00000000, -604.69950000, 84.37870000, 50.00000000, 0 ))
                        {
                            CLEAR_ANGLED_AREA_OF_CARS( -574.66690000, 75.47580000, 7.00000000, -600.32470000, 75.47580000, 3.00000000, 30.00000000 );
                        }
                    }
                    else if (IS_CHAR_IN_AREA_3D( sub_1026(), 1207.53200000, -682.76390000, 0.00000000, 1155.52700000, -648.43470000, 50.00000000, 0 ))
                    {
                        CLEAR_ANGLED_AREA_OF_CARS( 1196.32500000, -677.57700000, 15.00000000, 1196.25200000, -652.03240000, 19.00000000, 30.00000000 );
                    }
                    if (IS_CHAR_IN_AREA_3D( sub_1026(), -565.69760000, 57.63290000, 0.00000000, -604.69950000, 84.37870000, 50.00000000, 0 ))
                    {
                        CLEAR_ANGLED_AREA_OF_CARS( -574.66690000, 75.47580000, 7.00000000, -600.32470000, 75.47580000, 3.00000000, 30.00000000 );
                    }
                    if (IS_CHAR_IN_AREA_3D( sub_1026(), 1207.53200000, -682.76390000, 0.00000000, 1155.52700000, -648.43470000, 50.00000000, 0 ))
                    {
                        CLEAR_AREA_OF_CHARS( 1175.73000000, -664.71000000, 15.59000000, 15.00000000 );
                    }
                    if (IS_CHAR_IN_AREA_3D( sub_1026(), -565.69760000, 57.63290000, 0.00000000, -604.69950000, 84.37870000, 50.00000000, 0 ))
                    {
                        CLEAR_AREA_OF_CHARS( -587.50000000, 54.80000000, 3.90000000, 15.00000000 );
                    }
                    break;
                    case 11:
                    if (NOT (IS_THREAD_ACTIVE( l_U291 )))
                    {
                        l_U325 = 4;
                    }
                    break;
                    case 1:
                    sub_4403();
                    sub_4618();
                    sub_4671();
                    sub_6455();
                    sub_8290();
                    sub_8559();
                    sub_8854();
                    REGISTER_SCRIPT_WITH_AUDIO( 0 );
                    l_U325 = 2;
                    break;
                    case 2:
                    if (sub_9058())
                    {
                        if (NOT (DOES_CHAR_EXIST( l_U292[l_U6] )))
                        {
                            if (l_U318 == 1586287288)
                            {
                                CREATE_CHAR( 5, l_U318, l_U67._fU0, l_U67._fU4, l_U67._fU8, ref l_U292[l_U6], 1 );
                            }
                            else
                            {
                                CREATE_CHAR( 4, l_U318, l_U67._fU0, l_U67._fU4, l_U67._fU8, ref l_U292[l_U6], 1 );
                            }
                            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U292[l_U6] );
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U292[l_U6], "E2_Bowl_room" );
                            SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U292[l_U6], 1 );
                        }
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -890350484 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -1776787973 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U318 );
                        l_U325 = 3;
                    }
                    break;
                    case 3:
                    if (l_U278)
                    {
                        sub_9674();
                    }
                    sub_11904();
                    sub_14920();
                    if (DOES_CHAR_EXIST( l_U292[l_U6] ))
                    {
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U292[l_U6], sub_1026(), 0 ))
                        {
                            l_U325 = 8;
                        }
                    }
                    break;
                    case 8:
                    if (l_U278)
                    {
                        sub_9674();
                    }
                    sub_11904();
                    if (DOES_CHAR_EXIST( l_U292[l_U6] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
                        {
                            FREEZE_CHAR_POSITION( l_U292[l_U6], 0 );
                            DETACH_PED( l_U292[l_U6], 1 );
                            if (DOES_OBJECT_EXIST( l_U298[0] ))
                            {
                                DETACH_OBJECT( l_U298[0], 1 );
                            }
                            CLEAR_CHAR_TASKS( l_U292[l_U6] );
                        }
                        else if (DOES_OBJECT_EXIST( l_U298[0] ))
                        {
                            DETACH_OBJECT( l_U298[0], 1 );
                        }
                    }
                    if (l_U266)
                    {
                        if (NOT l_U279)
                        {
                            sub_483();
                        }
                    }
                    break;
                }
            }
            else
            {
                sub_483();
            }
        }
        else
        {
            sub_483();
        }
    }
    return;
}

void sub_483()
{
    int I;

    if (DOES_CHAR_EXIST( l_U292[l_U6] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
        {
            CLEAR_CHAR_TASKS( l_U292[l_U6] );
            DETACH_PED( l_U292[l_U6], 1 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U298[0] ))
    {
        DETACH_OBJECT( l_U298[0], 1 );
        DELETE_OBJECT( ref l_U298[0] );
    }
    for ( I = 0; I <= 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U298[I] ))
        {
            if (IS_OBJECT_ATTACHED( l_U298[I] ))
            {
                DETACH_OBJECT( l_U298[I], 1 );
                DELETE_OBJECT( ref l_U298[I] );
            }
            else
            {
                DELETE_OBJECT( ref l_U298[I] );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U317 ))
    {
        DELETE_OBJECT( ref l_U317 );
    }
    if (DOES_OBJECT_EXIST( l_U310[1] ))
    {
        DELETE_OBJECT( ref l_U310[1] );
    }
    if (DOES_OBJECT_EXIST( l_U310[2] ))
    {
        DELETE_OBJECT( ref l_U310[2] );
    }
    if (DOES_OBJECT_EXIST( l_U310[3] ))
    {
        DELETE_OBJECT( ref l_U310[3] );
    }
    if (DOES_OBJECT_EXIST( l_U310[5] ))
    {
        DELETE_OBJECT( ref l_U310[5] );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1026()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1223()
{
    int Result;

    Result = 0;
    return Result;
}

int sub_1576()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

int sub_1643(unknown uParam0, int iParam1)
{
    if (iParam1 >= 2)
    {
        return 0;
    }
    (uParam0^) = g_U28807._fU0[iParam1];
    if (g_U28807._fU0[iParam1] == 34)
    {
        return 0;
    }
    return 1;
}

void sub_2111()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2166()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4403()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar2 );
    if (iVar2 < 15)
    {
        l_U318 = -1746153269;
    }
    else if ((iVar2 >= 15) AND (iVar2 < 30))
    {
        l_U318 = -1420592428;
    }
    else if ((iVar2 >= 30) AND (iVar2 < 45))
    {
        l_U318 = -1927496394;
    }
    else if ((iVar2 >= 45) AND (iVar2 < 60))
    {
        l_U318 = 1586287288;
    }
    else if ((iVar2 >= 60) AND (iVar2 < 75))
    {
        l_U318 = -799229885;
    }
    else if (iVar2 >= 75)
    {
        l_U318 = -434183225;
    }
    else
    {
        l_U318 = -434183225;
    };;;;;;
    return;
}

void sub_4618()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref iVar2 );
    if (iVar2 > 5)
    {
        l_U268 = 1;
    }
    else
    {
        l_U268 = 0;
    }
    return;
}

void sub_4671()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    fVar5 = 11.77329000;
    fVar6 = 0.01501500;
    fVar7 = 0.39075600;
    if (DOES_OBJECT_EXIST( l_U310[0] ))
    {
        GET_OBJECT_COORDINATES( l_U310[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U237 );
        GET_OBJECT_HEADING( l_U310[0], ref l_U238 );
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.10000000 - fVar6, -3.00000000, 0.00000000, ref l_U67._fU0, ref l_U67._fU4, ref l_U67._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 2.80000000, 0.00000000, 0.00000000, ref l_U67._fU0, ref l_U67._fU4, ref l_U67._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.10000000 - fVar6), -3.00000000, 0.00000000, ref l_U67._fU0, ref l_U67._fU4, ref l_U67._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -2.80000000, 0.00000000, 0.00000000, ref l_U67._fU0, ref l_U67._fU4, ref l_U67._fU8 );
        }
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.10000000 - fVar6, -12.28800000 + fVar5, 0.30000000 - fVar7, ref l_U34._fU0, ref l_U34._fU4, ref l_U34._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.20000000 - fVar6), -12.28800000 + fVar5, 0.30000000 - fVar7, ref l_U34._fU0, ref l_U34._fU4, ref l_U34._fU8 );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 0.00000000, 0.40000000, -0.35000000, ref l_U37._fU0, ref l_U37._fU4, ref l_U37._fU8 );
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.56700000, -15.08800000 + fVar5, 2.00000000 - fVar7, ref l_U40._fU0, ref l_U40._fU4, ref l_U40._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.56700000, -15.08800000 + fVar5, 2.00000000 - fVar7, ref l_U40._fU0, ref l_U40._fU4, ref l_U40._fU8 );
        }
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 0.40000000 + fVar6, -12.28800000 + fVar5, 0.00000000 - fVar7, ref l_U43._fU0, ref l_U43._fU4, ref l_U43._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (2.00000000 + fVar6), -12.28800000 + fVar5, 0.00000000 - fVar7, ref l_U43._fU0, ref l_U43._fU4, ref l_U43._fU8 );
        }
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 2.00000000 + fVar6, -12.28800000 + fVar5, 0.00000000 - fVar7, ref l_U46._fU0, ref l_U46._fU4, ref l_U46._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (0.40000000 + fVar6), -12.28800000 + fVar5, 0.00000000 - fVar7, ref l_U46._fU0, ref l_U46._fU4, ref l_U46._fU8 );
        }
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.56700000, 0.00000000, 0.00000000, ref l_U49._fU0, ref l_U49._fU4, ref l_U49._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.56700000, 0.00000000, 0.00000000, ref l_U49._fU0, ref l_U49._fU4, ref l_U49._fU8 );
        }
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.56700000, 9.50200000 + fVar5, 0.79700000 - fVar7, ref l_U52._fU0, ref l_U52._fU4, ref l_U52._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.56700000, 9.50200000 + fVar5, 0.79700000 - fVar7, ref l_U52._fU0, ref l_U52._fU4, ref l_U52._fU8 );
        }
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.56700000, 9.64200000 + fVar5, 0.79700000 - fVar7, ref l_U55._fU0, ref l_U55._fU4, ref l_U55._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.56700000, 9.64200000 + fVar5, 0.79700000 - fVar7, ref l_U55._fU0, ref l_U55._fU4, ref l_U55._fU8 );
        }
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.56700000, 11.34200000 + fVar5, 0.79700000 - fVar7, ref l_U58._fU0, ref l_U58._fU4, ref l_U58._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.56700000, 11.34200000 + fVar5, 0.79700000 - fVar7, ref l_U58._fU0, ref l_U58._fU4, ref l_U58._fU8 );
        }
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.56700000, -12.08800000 + fVar5, 1.50000000 - fVar7, ref l_U61._fU0, ref l_U61._fU4, ref l_U61._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.75000000 + fVar6), -12.08800000 + fVar5, 1.50000000 - fVar7, ref l_U61._fU0, ref l_U61._fU4, ref l_U61._fU8 );
        }
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.56700000, 21.40000000, -0.10000000, ref l_U64._fU0, ref l_U64._fU4, ref l_U64._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.56700000, 21.40000000, -0.10000000, ref l_U64._fU0, ref l_U64._fU4, ref l_U64._fU8 );
        }
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.56700000, -1.00000000, 2.00000000, ref l_U229._fU0, ref l_U229._fU4, ref l_U229._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.56700000, -1.00000000, 2.00000000, ref l_U229._fU0, ref l_U229._fU4, ref l_U229._fU8 );
        }
    }
    return;
}

void sub_6455()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    fVar5 = 0.18288000;
    fVar6 = 0.31670000;
    fVar7 = 11.77329000;
    fVar8 = 0.01501500;
    fVar9 = 0.39075600;
    if (DOES_OBJECT_EXIST( l_U310[0] ))
    {
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.58200000 + fVar8, 9.09800000 + fVar7, 0.00000000 - fVar9, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.58200000 + fVar8), 9.09800000 + fVar7, 0.00000000 - fVar9, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U104 = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.58200000 + fVar8, -12.28800000 + fVar7, 0.00000000 - fVar9, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.58200000 + fVar8), -12.28800000 + fVar7, 0.00000000 - fVar9, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U107[1] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.58200000 - fVar5, -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.58200000 + fVar5), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U107[2] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.58200000 + fVar5, -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.58200000 - fVar5), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U107[3] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.58200000 - (fVar5 * 2.00000000), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.58200000 + (fVar5 * 2.00000000)), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U107[4] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.58200000, -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * 1.58200000, -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U107[5] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.58200000 + (fVar5 * 2.00000000), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.58200000 - (fVar5 * 2.00000000)), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U107[6] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.58200000 - (fVar5 * 3.00000000), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.58200000 + (fVar5 * 3.00000000)), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U107[7] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.58200000 - fVar5, -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.58200000 + fVar5), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U107[8] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.58200000 + fVar5, -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.58200000 - fVar5), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U107[9] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
        if (l_U268)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 1.58200000 + (fVar5 * 3.00000000), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -1.00000000 * (1.58200000 - (fVar5 * 3.00000000)), -12.28800000 + fVar7, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        l_U107[10] = {uVar2._fU0, uVar2._fU4, uVar2._fU8};
    }
    l_U70[1] = {0.00000000, -fVar6, 0.00000000};
    l_U70[2] = {-fVar5, 0.00000000, 0.00000000};
    l_U70[3] = {fVar5, 0.00000000, 0.00000000};
    l_U70[4] = {-2 * fVar5, fVar6, 0.00000000};
    l_U70[5] = {0.00000000, fVar6, 0.00000000};
    l_U70[6] = {2 * fVar5, fVar6, 0.00000000};
    l_U70[7] = {-3 * fVar5, 2 * fVar6, 0.00000000};
    l_U70[8] = {-fVar5, 2 * fVar6, 0.00000000};
    l_U70[9] = {fVar5, 2 * fVar6, 0.00000000};
    l_U70[10] = {3 * fVar5, 2 * fVar6, 0.00000000};
    return;
}

void sub_8290()
{
    CREATE_OBJECT( -890350484, l_U52._fU0, l_U52._fU4, l_U52._fU8, ref l_U310[1], 1 );
    CREATE_OBJECT( -1776787973, l_U55._fU0, l_U55._fU4, l_U55._fU8 - 0.30000000, ref l_U310[2], 1 );
    SET_OBJECT_HEADING( l_U310[1], l_U238 );
    SET_OBJECT_HEADING( l_U310[2], l_U238 );
    SET_OBJECT_COLLISION( l_U310[1], 0 );
    SET_OBJECT_COLLISION( l_U310[2], 1 );
    FREEZE_OBJECT_POSITION( l_U310[1], 1 );
    FREEZE_OBJECT_POSITION( l_U310[2], 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U310[1], "E2_Bowl_room" );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U310[2], "E2_Bowl_room" );
    return;
}

void sub_8559()
{
    CREATE_OBJECT( -190707996, l_U61._fU0, l_U61._fU4, l_U61._fU8, ref l_U310[3], 1 );
    SET_OBJECT_HEADING( l_U310[3], l_U238 );
    SET_OBJECT_COLLISION( l_U310[3], 0 );
    SET_OBJECT_VISIBLE( l_U310[3], 0 );
    FREEZE_OBJECT_POSITION( l_U310[3], 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U310[3], "E2_Bowl_room" );
    CREATE_OBJECT( -190707996, l_U61._fU0, l_U61._fU4, l_U61._fU8, ref l_U310[5], 1 );
    SET_OBJECT_HEADING( l_U310[5], l_U238 );
    SET_OBJECT_COLLISION( l_U310[5], 0 );
    SET_OBJECT_VISIBLE( l_U310[5], 0 );
    FREEZE_OBJECT_POSITION( l_U310[5], 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U310[5], "E2_Bowl_room" );
    return;
}

void sub_8854()
{
    CLEAR_AREA( l_U229._fU0, l_U229._fU4, l_U229._fU8, 0.50000000, 0 );
    CREATE_OBJECT( -190707996, l_U229._fU0, l_U229._fU4, l_U229._fU8, ref l_U317, 1 );
    SET_OBJECT_HEADING( l_U317, l_U238 );
    SET_OBJECT_COLLISION( l_U317, 0 );
    SET_OBJECT_DYNAMIC( l_U317, 0 );
    SET_OBJECT_VISIBLE( l_U317, 0 );
    FREEZE_OBJECT_POSITION( l_U317, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U317, "E2_Bowl_room" );
    return;
}

int sub_9058()
{
    REQUEST_MODEL( -190707996 );
    REQUEST_MODEL( -1862626618 );
    REQUEST_MODEL( -890350484 );
    REQUEST_MODEL( -1776787973 );
    REQUEST_MODEL( l_U318 );
    REQUEST_ANIMS( "MINI_BOWLING" );
    if (((((((HAS_MODEL_LOADED( l_U318 )) AND (HAS_MODEL_LOADED( -1862626618 ))) AND (HAS_MODEL_LOADED( -190707996 ))) AND (HAS_MODEL_LOADED( -890350484 ))) AND (HAS_MODEL_LOADED( -1776787973 ))) AND (HAVE_ANIMS_LOADED( "MINI_BOWLING" ))) AND (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT/BOWLING_ALLEY" )))
    {
        l_U9 = GET_SOUND_ID();
        l_U10 = GET_SOUND_ID();
        l_U11 = GET_SOUND_ID();
        l_U12 = GET_SOUND_ID();
        l_U13 = GET_SOUND_ID();
        l_U14 = GET_SOUND_ID();
        l_U15 = GET_SOUND_ID();
        l_U16 = GET_SOUND_ID();
        l_U17 = GET_SOUND_ID();
        l_U18 = GET_SOUND_ID();
        l_U19 = GET_SOUND_ID();
        l_U20 = GET_SOUND_ID();
        return 1;
    }
    return 0;
}

void sub_9674()
{
    vector vVar2;
    vector vVar5;

    vVar2 = {0.00000000, 0.40000000, -0.03500000};
    vVar5 = {0.00000000, -0.23000000, 0.11000000};
    switch (l_U330)
    {
        case 0:
        sub_9797();
        l_U276 = 0;
        l_U205 = {0.00000000, 0.00000000, -90.00000000};
        if (DOES_OBJECT_EXIST( l_U310[0] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], vVar2.x, vVar2.y, vVar2.z, ref l_U202._fU0, ref l_U202._fU4, ref l_U202._fU8 );
        }
        l_U330 = 2;
        break;
        case 2:
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            l_U279 = 1;
            if (SLIDE_OBJECT( l_U298[0], l_U202._fU0, l_U202._fU4, l_U202._fU8, 0.04000000, 0.04000000, 0.03500000, 0 ))
            {
                if (sub_10203())
                {
                    PLAY_SOUND_FROM_OBJECT( l_U9, "BOWLING_ALLEY_BALL_RETURN", l_U298[0] );
                }
                FREEZE_OBJECT_POSITION( l_U298[0], 1 );
                l_U330 = 3;
            }
        }
        break;
        case 3:
        if (DOES_OBJECT_EXIST( l_U310[0] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], vVar5.x, vVar5.y, vVar5.z, ref l_U202._fU0, ref l_U202._fU4, ref l_U202._fU8 );
        }
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            GET_OBJECT_COORDINATES( l_U298[0], ref l_U211._fU0, ref l_U211._fU4, ref l_U211._fU8 );
        }
        l_U277 = 0;
        l_U330 = 1;
        break;
        case 1:
        sub_10656();
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            if (SLIDE_OBJECT( l_U298[0], l_U202._fU0, l_U202._fU4, l_U202._fU8, 0.03200000, 0.03200000, 0.02300000, 0 ))
            {
                if (DOES_OBJECT_EXIST( l_U310[0] ))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 0.00000000, -0.27000000, 0.10000000, ref l_U202._fU0, ref l_U202._fU4, ref l_U202._fU8 );
                }
                l_U330 = 4;
            }
        }
        break;
        case 4:
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            if (SLIDE_OBJECT( l_U298[0], l_U202._fU0, l_U202._fU4, l_U202._fU8, 0.03200000, 0.03200000, 0.04600000, 0 ))
            {
                if (DOES_OBJECT_EXIST( l_U310[0] ))
                {
                    if (l_U268)
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 0.20000000, -0.27000000, 0.10000000, ref l_U202._fU0, ref l_U202._fU4, ref l_U202._fU8 );
                    }
                    else
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -0.20000000, -0.27000000, 0.10000000, ref l_U202._fU0, ref l_U202._fU4, ref l_U202._fU8 );
                    }
                }
                l_U330 = 5;
                l_U241 = 0.00000000;
                GET_OBJECT_COORDINATES( l_U298[0], ref l_U211._fU0, ref l_U211._fU4, ref l_U211._fU8 );
                l_U277 = 0;
            }
        }
        break;
        case 5:
        sub_10656();
        if (l_U241 < 0.03200000)
        {
            l_U241 += 0.00100000;
        }
        else
        {
            l_U241 = 0.03200000;
        }
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            if (SLIDE_OBJECT( l_U298[0], l_U202._fU0, l_U202._fU4, l_U202._fU8, l_U241, l_U241, 0.00000000, 0 ))
            {
                if (DOES_OBJECT_EXIST( l_U310[0] ))
                {
                    if (l_U268)
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], 0.20000000, -0.55000000, 0.10000000, ref l_U202._fU0, ref l_U202._fU4, ref l_U202._fU8 );
                    }
                    else
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[0], -0.20000000, -0.55000000, 0.10000000, ref l_U202._fU0, ref l_U202._fU4, ref l_U202._fU8 );
                    }
                }
                GET_OBJECT_COORDINATES( l_U298[0], ref l_U211._fU0, ref l_U211._fU4, ref l_U211._fU8 );
                l_U277 = 0;
                l_U330 = 6;
            }
        }
        break;
        case 6:
        sub_10656();
        if (l_U241 > 0.01000000)
        {
            l_U241 -= 0.00100000;
        }
        else
        {
            l_U241 = 0.01000000;
        }
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            if (SLIDE_OBJECT( l_U298[0], l_U202._fU0, l_U202._fU4, l_U202._fU8, l_U241, l_U241, 0.00000000, 0 ))
            {
                l_U330 = 7;
                l_U276 = 1;
                l_U279 = 0;
            }
        }
        break;
        case 7:
        l_U278 = 0;
        l_U330 = 0;
        break;
    }
    return;
}

void sub_9797()
{
    vector vVar2;
    vector vVar5;

    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    vVar5 = {0.00000000, 0.00000000, 0.00000000};
    if (NOT (DOES_OBJECT_EXIST( l_U298[0] )))
    {
        CREATE_OBJECT_NO_OFFSET( -1862626618, l_U37._fU0, l_U37._fU4, l_U37._fU8, ref l_U298[0], 1 );
        SET_OBJECT_PHYSICS_PARAMS( l_U298[0], 7.27000000, -1.00000000, vVar2, vVar5, -1082130432, -1082130432 );
        SET_OBJECT_COLLISION( l_U298[0], 0 );
        FREEZE_OBJECT_POSITION( l_U298[0], 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U298[0], "E2_Bowl_room" );
    }
    return;
}

int sub_10203()
{
    GET_INTERIOR_AT_COORDS( 1188.08600000, -665.16560000, 15.53800000, ref l_U319 );
    GET_INTERIOR_AT_COORDS( -587.44020000, 66.77700000, 4.91530000, ref l_U320 );
    GET_INTERIOR_FROM_CHAR( sub_1026(), ref l_U321 );
    if (NOT (l_U321 == nil))
    {
        if ((l_U321 == l_U320) || (l_U321 == l_U319))
        {
            return 1;
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1026(), 1198.75000000, -678.62000000, 16.45000000, 7.00000000, 7.00000000, 7.00000000, 0 ))
    {
        return 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1026(), -573.66000000, 77.74000000, 4.82000000, 7.00000000, 7.00000000, 7.00000000, 0 ))
    {
        return 1;
    }
    return 0;
}

void sub_10656()
{
    float fVar2;
    float fVar3;
    unknown uVar4;

    if (NOT l_U277)
    {
        l_U208._fU0 = l_U211._fU0 - l_U202._fU0;
        l_U208._fU4 = l_U211._fU4 - l_U202._fU4;
        fVar2 = l_U208._fU0 * l_U208._fU0;
        fVar3 = fVar2 + fVar2;
        uVar4 = SQRT( fVar3 );
        if (l_U208._fU0 != 0.00000000)
        {
            l_U208._fU0 /= uVar4;
        }
        else
        {
            l_U208._fU0 = 0.00000000;
        }
        if (l_U208._fU4 != 0)
        {
            l_U208._fU4 /= uVar4;
        }
        else
        {
            l_U208._fU4 = 0.00000000;
        }
        l_U277 = 1;
    }
    else
    {
        l_U205._fU0 += l_U208._fU0 * 15.60000000;
        l_U205._fU4 += l_U208._fU4 * 15.60000000;
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            SET_OBJECT_ROTATION( l_U298[0], l_U205._fU0, l_U205._fU4, -90.00000000 );
        }
    }
    return;
}

void sub_11904()
{
    int I;
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
    vector vVar13;
    float fVar16;
    float fVar17;
    float fVar18;

    I = 0;
    vVar13 = {0.00000000, 0.00000000, 0.00000000};
    fVar16 = 0.03000000;
    fVar17 = 0.05000000;
    fVar18 = 0.79700000;
    switch (l_U328)
    {
        case 7:
        if (NOT l_U266)
        {
            if (l_U267)
            {
                l_U328 = 8;
                l_U8 = 1;
            }
            else
            {
                l_U8 = 2;
                l_U328 = 0;
            }
        }
        break;
        case 8:
        if (uVar9._fU8 != (l_U55._fU8 - fVar18))
        {
            if (DOES_OBJECT_EXIST( l_U310[2] ))
            {
                GET_OBJECT_COORDINATES( l_U310[2], ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                SET_OBJECT_COORDINATES( l_U310[2], uVar9._fU0, uVar9._fU4, uVar9._fU8 - fVar16 );
                if (uVar9._fU8 < (l_U55._fU8 - fVar18))
                {
                    SET_OBJECT_COORDINATES( l_U310[2], uVar9._fU0, uVar9._fU4, l_U55._fU8 - fVar18 );
                    l_U328 = 2;
                }
                uVar9._fU8 = l_U55._fU8 - fVar18;
            }
        }
        break;
        case 0:
        if (uVar9._fU8 != (l_U55._fU8 - fVar18))
        {
            if (DOES_OBJECT_EXIST( l_U310[2] ))
            {
                GET_OBJECT_COORDINATES( l_U310[2], ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                SET_OBJECT_COORDINATES( l_U310[2], uVar9._fU0, uVar9._fU4, uVar9._fU8 - fVar16 );
                if (uVar9._fU8 < (l_U55._fU8 - fVar18))
                {
                    SET_OBJECT_COORDINATES( l_U310[2], uVar9._fU0, uVar9._fU4, l_U55._fU8 - fVar18 );
                }
                uVar9._fU8 = l_U55._fU8 - fVar18;
                if (sub_10203())
                {
                    PLAY_SOUND_FROM_OBJECT( l_U12, "BOWLING_ALLEY_MACHINE_DESCEND", l_U310[2] );
                }
            }
        }
        if (uVar9._fU8 == (l_U55._fU8 - fVar18))
        {
            if (DOES_OBJECT_EXIST( l_U310[1] ))
            {
                GET_OBJECT_COORDINATES( l_U310[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                SET_OBJECT_COORDINATES( l_U310[1], uVar3._fU0, uVar3._fU4, uVar3._fU8 - fVar16 );
                if (uVar3._fU8 < (l_U52._fU8 - 0.79700000))
                {
                    SET_OBJECT_COORDINATES( l_U310[1], uVar3._fU0, uVar3._fU4, l_U52._fU8 - 0.79700000 );
                    for ( I = 1; I <= 10; I++ )
                    {
                        if (l_U254[I])
                        {
                            if (DOES_OBJECT_EXIST( l_U298[I] ))
                            {
                                ATTACH_OBJECT_TO_OBJECT( l_U298[I], l_U310[1], 0, l_U70[I], vVar13 );
                            }
                        }
                    }
                    l_U328 = 1;
                }
            }
        }
        break;
        case 1:
        if (DOES_OBJECT_EXIST( l_U310[1] ))
        {
            GET_OBJECT_COORDINATES( l_U310[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            SET_OBJECT_COORDINATES( l_U310[1], uVar3._fU0, uVar3._fU4, uVar3._fU8 + fVar16 );
            if (uVar3._fU8 > l_U52._fU8)
            {
                SET_OBJECT_COORDINATES( l_U310[1], uVar3._fU0, uVar3._fU4, l_U52._fU8 );
                l_U328 = 2;
            }
        }
        if (DOES_OBJECT_EXIST( l_U310[2] ))
        {
            if (sub_10203())
            {
                PLAY_SOUND_FROM_OBJECT( l_U13, "BOWLING_ALLEY_MACHINE_RAISE_PINS", l_U310[2] );
            }
        }
        break;
        case 2:
        if (DOES_OBJECT_EXIST( l_U310[2] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[2], 0.00000000, fVar17, 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
            SET_OBJECT_COORDINATES( l_U310[2], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            if (sub_10203())
            {
                PLAY_SOUND_FROM_OBJECT( l_U14, "BOWLING_ALLEY_MACHINE_SWEEP_PINS", l_U310[2] );
            }
        }
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar9._fU0, uVar9._fU4, l_U58._fU0, l_U58._fU4, ref fVar12 );
        for ( I = 1; I <= 10; I++ )
        {
            if (DOES_OBJECT_EXIST( l_U298[I] ))
            {
                SET_OBJECT_DYNAMIC( l_U298[I], 1 );
            }
        }
        if (fVar12 < 0.04000000)
        {
            for ( I = 1; I <= 10; I++ )
            {
                if (DOES_OBJECT_EXIST( l_U298[I] ))
                {
                    SET_OBJECT_DYNAMIC( l_U298[I], 0 );
                }
            }
            l_U328 = 5;
        }
        break;
        case 5:
        if (DOES_OBJECT_EXIST( l_U310[2] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[2], 0.00000000, fVar17 * -1.00000000, 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
            SET_OBJECT_COORDINATES( l_U310[2], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            if (sub_10203())
            {
                PLAY_SOUND_FROM_OBJECT( l_U15, "BOWLING_ALLEY_MACHINE_SWEEP_PINS_RETURN", l_U310[2] );
            }
        }
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar9._fU0, uVar9._fU4, l_U55._fU0, l_U55._fU4, ref fVar12 );
        if (fVar12 < 0.04000000)
        {
            if (DOES_OBJECT_EXIST( l_U310[2] ))
            {
                SET_OBJECT_COORDINATES( l_U310[2], l_U55._fU0, l_U55._fU4, l_U55._fU8 - fVar18 );
            }
            l_U328 = 3;
            for ( I = 1; I <= 10; I++ )
            {
                if (NOT l_U267)
                {
                    if (NOT l_U254[I])
                    {
                        if (DOES_OBJECT_EXIST( l_U298[I] ))
                        {
                            DELETE_OBJECT( ref l_U298[I] );
                        }
                    }
                }
                else if (DOES_OBJECT_EXIST( l_U298[I] ))
                {
                    DELETE_OBJECT( ref l_U298[I] );
                }
            }
        }
        break;
        case 3:
        if (l_U267)
        {
            sub_13753();
            sub_13803();
            l_U8 = 1;
            l_U267 = 0;
        }
        if (DOES_OBJECT_EXIST( l_U310[1] ))
        {
            FREEZE_OBJECT_POSITION( l_U310[1], 0 );
            GET_OBJECT_COORDINATES( l_U310[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            SET_OBJECT_COORDINATES( l_U310[1], uVar3._fU0, uVar3._fU4, uVar3._fU8 - fVar16 );
            if (sub_10203())
            {
                PLAY_SOUND_FROM_OBJECT( l_U12, "BOWLING_ALLEY_MACHINE_DESCEND", l_U310[2] );
            }
            if (uVar3._fU8 < (l_U52._fU8 - 0.79700000))
            {
                SET_OBJECT_COORDINATES( l_U310[1], uVar3._fU0, uVar3._fU4, l_U52._fU8 - 0.79700000 );
                for ( I = 1; I <= 10; I++ )
                {
                    if (l_U254[I])
                    {
                        if (DOES_OBJECT_EXIST( l_U298[I] ))
                        {
                            DETACH_OBJECT( l_U298[I], 1 );
                            GET_OBJECT_COORDINATES( l_U298[I], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                            SET_OBJECT_COORDINATES( l_U298[I], uVar6._fU0, uVar6._fU4, l_U237 + 0.08500000 );
                            l_U141[I] = {uVar6};
                            SET_OBJECT_DYNAMIC( l_U298[I], 0 );
                        }
                    }
                }
                l_U328 = 6;
            }
        }
        break;
        case 6:
        if (DOES_OBJECT_EXIST( l_U310[1] ))
        {
            GET_OBJECT_COORDINATES( l_U310[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            SET_OBJECT_COORDINATES( l_U310[1], uVar3._fU0, uVar3._fU4, uVar3._fU8 + fVar16 );
            if (uVar3._fU8 > l_U52._fU8)
            {
                SET_OBJECT_COORDINATES( l_U310[1], uVar3._fU0, uVar3._fU4, l_U52._fU8 );
                l_U328 = 7;
            }
        }
        if (uVar3._fU8 > (l_U52._fU8 - 0.49700000))
        {
            if (DOES_OBJECT_EXIST( l_U310[2] ))
            {
                GET_OBJECT_COORDINATES( l_U310[2], ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                SET_OBJECT_COORDINATES( l_U310[2], uVar9._fU0, uVar9._fU4, uVar9._fU8 + fVar17 );
                if (uVar9._fU8 > l_U55._fU8)
                {
                    SET_OBJECT_COORDINATES( l_U310[2], l_U55._fU0, l_U55._fU4, l_U55._fU8 );
                }
            }
            l_U266 = 1;
        }
        break;
        case 9: break;
    }
    return;
}

void sub_13753()
{
    int I;

    for ( I = 1; I <= 10; I++ )
    {
        l_U254[I] = 1;
    }
    return;
}

void sub_13803()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    vector vVar12;
    float fVar15;

    vVar6 = {-1.00000000, -1.00000000, -1.00000000};
    vVar9 = {-1.00000000, -1.00000000, -1.00000000};
    vVar12 = {0.00000000, 0.00000000, 0.00000000};
    fVar15 = 0.00000000;
    for ( I = 1; I <= 10; I++ )
    {
        if (l_U254[I])
        {
            CREATE_OBJECT_NO_OFFSET( -190707996, l_U52._fU0 + fVar15, l_U52._fU4, l_U52._fU8, ref l_U298[I], 1 );
            fVar15 += 0.05000000;
            SET_OBJECT_PHYSICS_PARAMS( l_U298[I], 0.30000000, -1.00000000, vVar6, vVar9, -1082130432, -1082130432 );
            if (I == 1)
            {
                if (DOES_OBJECT_EXIST( l_U298[1] ))
                {
                    GET_OBJECT_COORDINATES( l_U298[1], ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                    GET_GROUND_Z_FOR_3D_COORD( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U237 );
                }
            }
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U298[I], "E2_Bowl_room" );
            ATTACH_OBJECT_TO_OBJECT( l_U298[I], l_U310[1], 0, l_U70[I], vVar12 );
            SET_OBJECT_HEADING( l_U298[I], l_U238 );
            SET_OBJECT_COLLISION( l_U298[I], 1 );
        }
    }
    return;
}

void sub_14920()
{
    vector vVar2;
    vector vVar5;
    vector vVar8;

    vVar2 = {0.00000000, 0.00000000, -1.50000000};
    vVar5 = {0.15000000, 0.12000000, -0.02000000};
    vVar8 = {0.00000000, 0.00000000, 0.00000000};
    switch (l_U327)
    {
        case 1:
        if (DOES_CHAR_EXIST( l_U292[l_U6] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
            {
                sub_15147();
                TASK_PERFORM_SEQUENCE( l_U292[l_U6], l_U322 );
                CLEAR_SEQUENCE_TASK( l_U322 );
                l_U278 = 1;
                l_U327 = 0;
            }
        }
        break;
        case 0:
        if (DOES_CHAR_EXIST( l_U292[l_U6] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U292[l_U6], 29, ref l_U324 );
                if (l_U324 == 1)
                {
                    l_U283 = 1;
                }
                if (l_U283)
                {
                    if (l_U324 == 7)
                    {
                        l_U327 = 2;
                        l_U283 = 0;
                    }
                }
            }
        }
        break;
        case 2:
        if (DOES_CHAR_EXIST( l_U292[l_U6] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
        if (NOT l_U244)
        {
            if (DOES_CHAR_EXIST( l_U292[l_U6] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
                {
                    if (l_U276)
                    {
                        if (l_U268)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U323 );
                            TASK_PLAY_ANIM( 0, "PICK_UP_L", "MINI_BOWLING", 8.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM( 0, "IDLE_RELAXED", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U323 );
                            TASK_PERFORM_SEQUENCE( l_U292[l_U6], l_U323 );
                            CLEAR_SEQUENCE_TASK( l_U323 );
                        }
                        else
                        {
                            OPEN_SEQUENCE_TASK( ref l_U323 );
                            TASK_PLAY_ANIM( 0, "PICK_UP_R", "MINI_BOWLING", 8.00000000, 0, 1, 1, 0, -1 );
                            TASK_PLAY_ANIM( 0, "IDLE_RELAXED", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U323 );
                            TASK_PERFORM_SEQUENCE( l_U292[l_U6], l_U323 );
                            CLEAR_SEQUENCE_TASK( l_U323 );
                        }
                        l_U244 = 1;
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U292[l_U6] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
            {
                if ((IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "PICK_UP_L" )) || (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "PICK_UP_R" )))
                {
                    if (l_U268)
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "PICK_UP_L", ref l_U235 );
                        if (l_U235 > 0.46000000)
                        {
                            if (DOES_OBJECT_EXIST( l_U298[0] ))
                            {
                                SET_OBJECT_COLLISION( l_U298[0], 1 );
                                ATTACH_OBJECT_TO_PED( l_U298[0], l_U292[l_U6], 1232, vVar5, vVar8, 0 );
                                FREEZE_OBJECT_POSITION( l_U298[0], 0 );
                                l_U244 = 0;
                                l_U327 = 3;
                            }
                        }
                    }
                    else
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "PICK_UP_R", ref l_U235 );
                        if (l_U235 > 0.65000000)
                        {
                            if (DOES_OBJECT_EXIST( l_U298[0] ))
                            {
                                SET_OBJECT_COLLISION( l_U298[0], 1 );
                                ATTACH_OBJECT_TO_PED( l_U298[0], l_U292[l_U6], 1232, vVar5, vVar8, 0 );
                                FREEZE_OBJECT_POSITION( l_U298[0], 0 );
                                l_U244 = 0;
                                l_U327 = 3;
                            }
                        }
                    }
                }
            }
        }
        break;
        case 3:
        if (DOES_CHAR_EXIST( l_U292[l_U6] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
        {
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "PICK_UP_L" )))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "PICK_UP_R" )))
                {
                    FREEZE_CHAR_POSITION( l_U292[l_U6], 0 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U292[l_U6], 0.00000000, 0.00000000, 1.50000000, ref l_U220._fU0, ref l_U220._fU4, ref l_U220._fU8 );
                    if (DOES_OBJECT_EXIST( l_U310[3] ))
                    {
                        SET_OBJECT_COORDINATES( l_U310[3], l_U220._fU0, l_U220._fU4, l_U220._fU8 );
                        ATTACH_PED_TO_OBJECT( l_U292[l_U6], l_U310[3], 0, vVar2, 0.00000000, 0.00000000, 1, 0 );
                    }
                    l_U327 = 4;
                }
            }
        }
        break;
        case 4:
        if (l_U8 == 1)
        {
            l_U24 = 1;
            sub_16755();
            l_U327 = 6;
        }
        if (l_U8 == 2)
        {
            sub_16852();
            sub_17029();
            l_U327 = 6;
        }
        if ((l_U8 != 1) AND (l_U8 != 2))
        {
            SCRIPT_ASSERT( "iCURRENT_BALL_NUMBER IS INCORRECT: S0_AI_BOWLING " );
            l_U8 = 2;
            l_U327 = 6;
        }
        break;
        case 6:
        sub_17877();
        if (l_U252)
        {
            sub_19702();
            l_U327 = 5;
            SETTIMERA( 0 );
        }
        break;
        case 5:
        if (TIMERA() > 1000)
        {
            if (DOES_CHAR_EXIST( l_U292[l_U6] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref l_U27 );
                    if (l_U27 == 0)
                    {
                        l_U28 = 1;
                    }
                    else
                    {
                        TASK_PLAY_ANIM( l_U292[l_U6], "IDLE_action", "MINI_BOWLING", 6.00000000, 1, 0, 0, 0, -1 );
                    }
                    SETTIMERA( 0 );
                }
            }
            l_U327 = 8;
        }
        break;
        case 8:
        if (TIMERA() > 1000)
        {
            if (l_U28 > 0)
            {
                if (DOES_CHAR_EXIST( l_U292[l_U6] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
                    {
                        sub_20171();
                    }
                }
            }
            else if (l_U266)
            {
                l_U327 = 7;
            }
        }
        break;
        case 7:
        sub_21684();
        break;
        case 11:
        sub_22313();
        l_U273 = 0;
        sub_22565();
        if (sub_23978() < 13.00000000)
        {
            sub_24137();
            sub_24312();
            if (l_U271)
            {
                l_U327 = 10;
            }
        }
        else
        {
            l_U22 = 0;
            l_U239 = 1.00000000;
            l_U178._fU0 = l_U239 * -0.50000000;
            l_U181._fU0 = l_U178._fU0;
            l_U327 = 10;
        }
        break;
        case 10:
        sub_24475();
        sub_24658();
        if (l_U271)
        {
            l_U331 = 1;
        }
        else
        {
            l_U331 = 0;
        }
        switch (l_U331)
        {
            case 0:
            if (NOT l_U273)
            {
                sub_22565();
                sub_24990();
                if ((l_U23 != 99) AND (l_U23 != 0))
                {
                    l_U243 = l_U22 / 10.00000000;
                    if (sub_10203())
                    {
                        PLAY_SOUND_FROM_POSITION( l_U16, "BOWLING_ALLEY_STRIKE", l_U64 );
                        SET_VARIABLE_ON_SOUND( l_U16, "NumberOfPins", l_U243 );
                    }
                }
            }
            if (l_U272)
            {
                if (NOT l_U288)
                {
                    SETTIMERA( 0 );
                    l_U288 = 1;
                }
                if ((sub_25674()) || (TIMERA() > 2000))
                {
                    sub_26089( sub_25908() );
                    sub_26502();
                    l_U288 = 0;
                    l_U266 = 0;
                    l_U327 = 12;
                }
            }
            break;
            case 1:
            if ((l_U272) || (TIMERA() > 5000))
            {
                sub_26089( sub_25908() );
                l_U286 = 1;
                sub_26502();
                l_U288 = 0;
                l_U327 = 12;
                l_U286 = 1;
                l_U266 = 0;
                if (sub_10203())
                {
                    SAY_AMBIENT_SPEECH( l_U292[l_U6], "bowling_gutter", 0, 1, 0 );
                }
                if (DOES_OBJECT_EXIST( l_U317 ))
                {
                    if (sub_10203())
                    {
                        PLAY_SOUND_FROM_OBJECT( l_U20, "BOWLING_ALLEY_JINGLES_GUTTER", l_U317 );
                    }
                }
            }
            break;
        }
        break;
        case 12:
        if (sub_27898())
        {
            l_U327 = 13;
        }
        break;
        case 13:
        if (DOES_CHAR_EXIST( l_U292[l_U6] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
            {
                if (l_U253)
                {
                    l_U253 = 0;
                }
            }
        }
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            DELETE_OBJECT( ref l_U298[0] );
        }
        l_U272 = 0;
        l_U271 = 0;
        l_U270 = 0;
        l_U289 = 0;
        l_U232 = {0.00000000, 0.00000000, 0.00000000};
        l_U23 = 99;
        l_U287 = 0;
        l_U284 = 0;
        l_U285 = 0;
        l_U286 = 0;
        l_U246 = 0;
        l_U247 = 0;
        l_U245 = 0;
        l_U249 = 0;
        l_U248 = 0;
        l_U250 = 0;
        l_U251 = 0;
        l_U252 = 0;
        l_U281 = 0;
        l_U283 = 0;
        l_U327 = 1;
        break;
    }
    return;
}

void sub_15147()
{
    OPEN_SEQUENCE_TASK( ref l_U322 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U34._fU0, l_U34._fU4, l_U34._fU8, 2, -1, 0.25000000 );
    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( 0, l_U34._fU0, l_U34._fU4, l_U34._fU8, l_U238, 2.00000000, 150.00000000 );
    CLOSE_SEQUENCE_TASK( l_U322 );
    return;
}

void sub_16755()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 1, 100, ref iVar2 );
    if (iVar2 <= 33)
    {
        l_U25 = 1;
    }
    if ((iVar2 > 33) AND (iVar2 <= 66))
    {
        l_U25 = 3;
    }
    if (iVar2 > 66)
    {
        l_U25 = 9;
    }
    return;
}

void sub_16852()
{
    int Result;
    int I;

    Result = 0;
    for ( I = 1; I <= 10; I++ )
    {
        if (l_U254[I])
        {
            if ((I != 1) AND (I != 5))
            {
                if ((((I == 2) || (I == 4)) || (I == 7)) || (I == 8))
                {
                    Result--;
                }
                else
                {
                    Result++;
                }
            }
        }
    }
    l_U274 = 0;
    l_U275 = 0;
    if (Result > 0)
    {
        l_U274 = 1;
    }
    else if (Result < 0)
    {
        l_U275 = 1;
    }
    if (Result == 0)
    {
        l_U274 = 1;
    }
    return Result;
}

void sub_17029()
{
    boolean bVar2;

    bVar2 = false;
    if (NOT bVar2)
    {
        if (l_U254[1])
        {
            bVar2 = true;
            l_U24 = 1;
        }
    }
    if (NOT bVar2)
    {
        if (l_U254[2])
        {
            if (l_U254[3])
            {
                l_U24 = 1;
                bVar2 = true;
            }
            else
            {
                bVar2 = true;
                l_U24 = 2;
            }
        }
        else if (l_U254[3])
        {
            bVar2 = true;
            l_U24 = 3;
        }
    }
    if (NOT bVar2)
    {
        if (l_U254[4])
        {
            if (l_U254[5])
            {
                if (l_U254[6])
                {
                    bVar2 = true;
                    l_U24 = 5;
                }
            }
            else if (l_U254[6])
            {
                if (l_U274)
                {
                    l_U24 = 6;
                    bVar2 = true;
                }
                if (l_U275)
                {
                    l_U24 = 4;
                    bVar2 = true;
                }
            }
            else
            {
                l_U24 = 4;
                bVar2 = true;
            }
        }
        else if (l_U254[5])
        {
            if (l_U254[6])
            {
                l_U24 = 5;
                bVar2 = true;
            }
            else
            {
                l_U24 = 5;
                bVar2 = true;
            }
        }
        else if (l_U254[6])
        {
            l_U24 = 6;
            bVar2 = true;
        };;;
    }
    if (NOT bVar2)
    {
        if (l_U254[7])
        {
            if (l_U254[8])
            {
                if (l_U254[9])
                {
                    if (l_U254[10])
                    {
                        l_U24 = 8;
                        bVar2 = true;
                    }
                    else
                    {
                        l_U24 = 8;
                        bVar2 = true;
                    }
                }
                else if (l_U254[10])
                {
                    l_U24 = 7;
                    bVar2 = true;
                }
                else
                {
                    l_U24 = 7;
                    bVar2 = true;
                }
            }
            else if (l_U254[9])
            {
                if (l_U254[10])
                {
                    l_U24 = 9;
                    bVar2 = true;
                }
            }
            else if (l_U254[10])
            {
                l_U24 = 10;
                bVar2 = true;
            }
            else
            {
                l_U24 = 7;
                bVar2 = true;
            };;;
        }
        else if (l_U254[8])
        {
            if (l_U254[9])
            {
                if (l_U254[10])
                {
                    l_U24 = 7;
                    bVar2 = true;
                }
                else
                {
                    l_U24 = 7;
                    bVar2 = true;
                }
            }
            else if (l_U254[10])
            {
                l_U24 = 8;
                bVar2 = true;
            }
            else
            {
                l_U24 = 8;
                bVar2 = true;
            }
        }
        else if (l_U254[9])
        {
            if (l_U254[10])
            {
                l_U24 = 9;
                bVar2 = true;
            }
            else
            {
                l_U24 = 9;
                bVar2 = true;
            }
        }
        else if (l_U254[10])
        {
            l_U24 = 10;
            bVar2 = true;
        };;;;
    }
    if (l_U24 != 0)
    {
        l_U25 = l_U24;
    }
    else
    {
        l_U25 = 0;
    }
    if (l_U24 == 7)
    {
        l_U25 = 4;
    }
    if (l_U24 == 10)
    {
        l_U25 = 6;
    }
    if (l_U24 == 0)
    {
        l_U24 = 1;
    }
    return;
}

void sub_17877()
{
    unknown uVar2;
    unknown uVar3;
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
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;

    if (DOES_OBJECT_EXIST( l_U298[0] ))
    {
        if (DOES_OBJECT_EXIST( l_U310[3] ))
        {
            GET_OBJECT_COORDINATES( l_U310[3], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_OBJECT_COORDINATES( l_U298[0], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        }
    }
    if (NOT l_U245)
    {
        if (DOES_OBJECT_EXIST( l_U310[3] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[3], 0.10000000, 0.00000000, 0.00000000, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[3], -0.10000000, 0.00000000, 0.00000000, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
        }
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar8._fU0, uVar8._fU4, l_U107[l_U25]._fU0, l_U107[l_U25]._fU4, ref fVar24 );
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar11._fU0, uVar11._fU4, l_U107[l_U25]._fU0, l_U107[l_U25]._fU4, ref fVar23 );
        if (fVar24 <= fVar23)
        {
            l_U246 = 1;
        }
        else
        {
            l_U247 = 1;
        }
        l_U245 = 1;
    }
    if (l_U246)
    {
        l_U248 = 0;
        if (NOT l_U249)
        {
            if (NOT l_U250)
            {
                if (DOES_CHAR_EXIST( l_U292[l_U6] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
                    {
                        if (IS_CHAR_MALE( l_U292[l_U6] ))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U292[l_U6], "PED_STRAFE_R", "MINI_BOWLING", 24.00000000, 1, 1, 1, 0, -1 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U292[l_U6], "F_PED_STRAFE_R", "MINI_BOWLING", 8.00000000, 1, 1, 1, 0, -1 );
                        }
                    }
                }
                l_U250 = 1;
            }
            if (l_U250)
            {
                if (DOES_CHAR_EXIST( l_U292[l_U6] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
                    {
                        if ((IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "PED_STRAFE_R" )) || (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "F_PED_STRAFE_R" )))
                        {
                            GET_CHAR_EXTRACTED_DISPLACEMENT( l_U292[l_U6], 1, ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_2D( uVar2._fU0, uVar2._fU4, l_U107[l_U25]._fU0, l_U107[l_U25]._fU4, ref fVar26 );
                            if (DOES_OBJECT_EXIST( l_U310[3] ))
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[3], 0.10000000, 0.00000000, 0.00000000, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
                            }
                            GET_DISTANCE_BETWEEN_COORDS_2D( uVar17._fU0, uVar17._fU4, l_U107[l_U25]._fU0, l_U107[l_U25]._fU4, ref fVar25 );
                            if (fVar26 >= fVar25)
                            {
                                if (DOES_OBJECT_EXIST( l_U310[3] ))
                                {
                                    SET_OBJECT_COORDINATES( l_U310[3], uVar2._fU0 + uVar14._fU0, uVar2._fU4 + uVar14._fU4, uVar2._fU8 );
                                }
                            }
                            else
                            {
                                TASK_PLAY_ANIM( l_U292[l_U6], "IDLE_RELAXED", "MINI_BOWLING", 1000.00000000, 0, 0, 0, 1, -1 );
                                l_U249 = 1;
                                l_U252 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        l_U250 = 0;
    }
    if (l_U247)
    {
        l_U249 = 0;
        if (NOT l_U248)
        {
            if (NOT l_U251)
            {
                if (DOES_CHAR_EXIST( l_U292[l_U6] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
                    {
                        if (IS_CHAR_MALE( l_U292[l_U6] ))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U292[l_U6], "PED_STRAFE_L", "MINI_BOWLING", 24.00000000, 1, 1, 1, 0, -1 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U292[l_U6], "F_PED_STRAFE_L", "MINI_BOWLING", 8.00000000, 1, 1, 1, 0, -1 );
                        }
                    }
                }
                l_U251 = 1;
            }
            if (l_U251)
            {
                if (DOES_CHAR_EXIST( l_U292[l_U6] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
                    {
                        if ((IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "PED_STRAFE_L" )) || (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "F_PED_STRAFE_L" )))
                        {
                            GET_CHAR_EXTRACTED_DISPLACEMENT( l_U292[l_U6], 1, ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
                            GET_CHAR_EXTRACTED_DISPLACEMENT( l_U292[l_U6], 0, ref uVar20._fU0, ref uVar20._fU4, ref uVar20._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_2D( uVar2._fU0, uVar2._fU4, l_U107[l_U25]._fU0, l_U107[l_U25]._fU4, ref fVar26 );
                            if (DOES_OBJECT_EXIST( l_U310[3] ))
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[3], -0.10000000, 0.00000000, 0.00000000, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
                            }
                            GET_DISTANCE_BETWEEN_COORDS_2D( uVar17._fU0, uVar17._fU4, l_U107[l_U25]._fU0, l_U107[l_U25]._fU4, ref fVar25 );
                            if (fVar26 >= fVar25)
                            {
                                if (DOES_OBJECT_EXIST( l_U310[3] ))
                                {
                                    SET_OBJECT_COORDINATES( l_U310[3], uVar2._fU0 + uVar14._fU0, uVar2._fU4 + uVar14._fU4, uVar2._fU8 );
                                }
                            }
                            else
                            {
                                TASK_PLAY_ANIM( l_U292[l_U6], "IDLE_RELAXED", "MINI_BOWLING", 1000.00000000, 0, 0, 0, 1, -1 );
                                l_U248 = 1;
                                l_U252 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        l_U251 = 0;
    }
    return;
}

void sub_19702()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (DOES_OBJECT_EXIST( l_U298[0] ))
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.20000000, 0.20000000, ref uVar8 );
        if (DOES_OBJECT_EXIST( l_U298[l_U24] ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U298[l_U24], uVar8, 0.00000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        }
        else
        {
            uVar2._fU0 = l_U104._fU0;
            uVar2._fU4 = l_U104._fU4;
        }
        GET_OBJECT_COORDINATES( l_U298[0], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        l_U175._fU0 = (uVar2._fU0 - uVar5._fU0) * 0.60000000;
        l_U175._fU4 = (uVar2._fU4 - uVar5._fU4) * 0.60000000;
    }
    return;
}

void sub_20171()
{
    float fVar2;

    if (l_U28 == 1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U27 );
        if (l_U27 == 0)
        {
            TASK_PLAY_ANIM( l_U292[l_U6], "IDLE01", "MINI_BOWLING", 8.00000000, 0, 0, 0, 1, -1 );
        }
        if (l_U27 == 1)
        {
            TASK_PLAY_ANIM( l_U292[l_U6], "IDLE02", "MINI_BOWLING", 8.00000000, 0, 0, 0, 1, -1 );
        }
        if (l_U27 == 2)
        {
            TASK_PLAY_ANIM( l_U292[l_U6], "IDLE03", "MINI_BOWLING", 8.00000000, 0, 0, 0, 1, -1 );
        }
        if (l_U27 == 3)
        {
            TASK_PLAY_ANIM( l_U292[l_U6], "IDLE04", "MINI_BOWLING", 8.00000000, 0, 0, 0, 1, -1 );
        }
        if (l_U27 == 4)
        {
            TASK_PLAY_ANIM( l_U292[l_U6], "IDLE05", "MINI_BOWLING", 8.00000000, 0, 0, 0, 1, -1 );
        }
        l_U28 = 2;
    }
    if (l_U28 == 2)
    {
        if (l_U27 == 0)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "IDLE01" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "IDLE01", ref fVar2 );
                if (fVar2 > 0.10000000)
                {
                    if (fVar2 < 0.50000000)
                    {
                        l_U28 = 3;
                    }
                }
            }
        }
        if (l_U27 == 1)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "IDLE02" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "IDLE02", ref fVar2 );
                if (fVar2 > 0.10000000)
                {
                    if (fVar2 < 0.50000000)
                    {
                        l_U28 = 3;
                    }
                }
            }
        }
        if (l_U27 == 2)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "IDLE03" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "IDLE03", ref fVar2 );
                if (fVar2 > 0.10000000)
                {
                    if (fVar2 < 0.50000000)
                    {
                        l_U28 = 3;
                    }
                }
            }
        }
        if (l_U27 == 3)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "IDLE04" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "IDLE04", ref fVar2 );
                if (fVar2 > 0.10000000)
                {
                    if (fVar2 < 0.50000000)
                    {
                        l_U28 = 3;
                    }
                }
            }
        }
        if (l_U27 == 4)
        {
            if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "IDLE05" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "IDLE05", ref fVar2 );
                if (fVar2 > 0.10000000)
                {
                    if (fVar2 < 0.50000000)
                    {
                        l_U28 = 3;
                    }
                }
            }
        }
    }
    if (l_U28 == 3)
    {
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "IDLE01" ))
        {
            if (HAS_CHAR_ANIM_FINISHED( l_U292[l_U6], "MINI_BOWLING", "IDLE01" ))
            {
                l_U28 = 0;
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "IDLE02" ))
        {
            if (HAS_CHAR_ANIM_FINISHED( l_U292[l_U6], "MINI_BOWLING", "IDLE02" ))
            {
                l_U28 = 0;
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "IDLE03" ))
        {
            if (HAS_CHAR_ANIM_FINISHED( l_U292[l_U6], "MINI_BOWLING", "IDLE03" ))
            {
                l_U28 = 0;
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "IDLE04" ))
        {
            if (HAS_CHAR_ANIM_FINISHED( l_U292[l_U6], "MINI_BOWLING", "IDLE04" ))
            {
                l_U28 = 0;
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "IDLE05" ))
        {
            if (HAS_CHAR_ANIM_FINISHED( l_U292[l_U6], "MINI_BOWLING", "IDLE05" ))
            {
                l_U28 = 0;
            }
        }
    }
    return;
}

void sub_21684()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;

    fVar6 = 0.34500000;
    if (DOES_CHAR_EXIST( l_U292[l_U6] ))
    {
        if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
        {
            if (NOT l_U280)
            {
                DETACH_PED( l_U292[l_U6], 1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U292[l_U6], "shot", "MINI_BOWLING", 8.00000000, 0, 1, 1, 0, -1 );
                l_U280 = 1;
            }
            if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "shot" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "shot", ref fVar5 );
                if (fVar5 > fVar6)
                {
                    if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
                    {
                        if (DOES_OBJECT_EXIST( l_U298[0] ))
                        {
                            DETACH_OBJECT( l_U298[0], 0 );
                            if (NOT (IS_OBJECT_ON_SCREEN( l_U298[0] )))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
                                {
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U292[l_U6], 0.20000000, 1.00000000, -0.40000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                    SET_OBJECT_COORDINATES( l_U298[0], uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                                }
                            }
                            SET_OBJECT_HEADING( l_U298[0], l_U238 );
                            SET_OBJECT_INITIAL_VELOCITY( l_U298[0], l_U175._fU0, l_U175._fU4, 0.00000000 );
                            if ((l_U238 == 90) || (l_U238 == 270))
                            {
                                APPLY_FORCE_TO_OBJECT( l_U298[0], 0, 0.05000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 1 );
                            }
                            else
                            {
                                APPLY_FORCE_TO_OBJECT( l_U298[0], 0, 0.00000000, 0.05000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 1 );
                            }
                        }
                        SETTIMERA( 0 );
                        l_U280 = 0;
                        l_U327 = 11;
                    }
                }
            }
        }
    }
    return;
}

void sub_22313()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    vector vVar5;
    vector vVar8;

    if (DOES_OBJECT_EXIST( l_U298[0] ))
    {
        GET_OBJECT_ROTATION_VELOCITY( l_U298[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        GET_OBJECT_VELOCITY( l_U298[0], ref vVar8.x, ref vVar8.y, ref vVar8.z );
        vVar5 = {sub_22402( uVar2, l_U217 )};
        l_U214 = {(vVar5 - vVar8) * l_U242};
        APPLY_FORCE_TO_OBJECT( l_U298[0], 4, l_U214, l_U217, 0, 0, 0, 1 );
    }
    return;
}

void sub_22402(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown Result;
    unknown uVar9;
    unknown uVar10;

    Result._fU0 = (uParam0._fU4 * uParam3._fU8) - (uParam0._fU8 * uParam3._fU4);
    Result._fU4 = (uParam0._fU8 * uParam3._fU0) - (uParam0._fU0 * uParam3._fU8);
    Result._fU8 = (uParam0._fU0 * uParam3._fU4) - (uParam0._fU4 * uParam3._fU0);
    return Result;
}

void sub_22565()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT l_U273)
    {
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            if (DOES_OBJECT_EXIST( l_U310[5] ))
            {
                GET_OBJECT_COORDINATES( l_U298[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                SET_OBJECT_COORDINATES( l_U310[5], uVar2._fU0, uVar2._fU4, uVar2._fU8 + 0.50000000 );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U310[5] ))
    {
        if (DOES_OBJECT_EXIST( l_U310[0] ))
        {
            GET_OBJECT_COORDINATES( l_U310[0], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[5], l_U178._fU0, l_U178._fU4, l_U178._fU8, ref l_U184._fU0, ref l_U184._fU4, ref l_U184._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U310[5], l_U181._fU0, l_U181._fU4, l_U181._fU8, ref l_U187._fU0, ref l_U187._fU4, ref l_U187._fU8 );
            IS_OBJECT_IN_ANGLED_AREA_3D( l_U310[5], l_U184._fU0, l_U184._fU4, l_U184._fU8, l_U187._fU0, l_U187._fU4, l_U187._fU8, l_U239, 0 );
        }
    }
    switch (l_U329)
    {
        case 3:
        if (DOES_OBJECT_EXIST( l_U310[5] ))
        {
            SET_OBJECT_HEADING( l_U310[5], l_U238 );
            l_U190 = {uVar2};
            l_U329 = 1;
            l_U196._fU0 = ABSF( uVar5._fU0 - uVar2._fU0 );
            l_U196._fU4 = ABSF( uVar5._fU4 - uVar2._fU4 );
        }
        break;
        case 1:
        l_U193 = {uVar2};
        l_U199._fU0 = ABSF( uVar5._fU0 - uVar2._fU0 );
        l_U199._fU4 = ABSF( uVar5._fU4 - uVar2._fU4 );
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            GET_OBJECT_VELOCITY( l_U298[0], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            if ((ABSF( uVar8._fU4 )) > (ABSF( uVar8._fU0 )))
            {
                l_U240 = ATAN( ABSF( (l_U190._fU0 - l_U193._fU0) / (l_U190._fU4 - l_U193._fU4) ) );
            }
            else
            {
                l_U240 = ATAN( ABSF( (l_U190._fU4 - l_U193._fU4) / (l_U190._fU0 - l_U193._fU0) ) );
            }
        }
        if (DOES_OBJECT_EXIST( l_U310[5] ))
        {
            if ((l_U199._fU0 < l_U196._fU0) || (l_U199._fU4 < l_U196._fU4))
            {
                if (l_U268)
                {
                    SET_OBJECT_HEADING( l_U310[5], l_U238 + l_U240 );
                }
                else
                {
                    SET_OBJECT_HEADING( l_U310[5], l_U238 - l_U240 );
                }
            }
            else if (l_U268)
            {
                SET_OBJECT_HEADING( l_U310[5], l_U238 - l_U240 );
            }
            else
            {
                SET_OBJECT_HEADING( l_U310[5], l_U238 + l_U240 );
            }
        }
        l_U190 = {l_U193};
        l_U329 = 0;
        break;
        case 0:
        l_U193 = {uVar2};
        l_U199._fU0 = ABSF( uVar5._fU0 - uVar2._fU0 );
        l_U199._fU4 = ABSF( uVar5._fU4 - uVar2._fU4 );
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            GET_OBJECT_VELOCITY( l_U298[0], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            if ((ABSF( uVar8._fU4 )) > (ABSF( uVar8._fU0 )))
            {
                l_U240 = ATAN( ABSF( (l_U190._fU0 - l_U193._fU0) / (l_U190._fU4 - l_U193._fU4) ) );
            }
            else
            {
                l_U240 = ATAN( ABSF( (l_U190._fU4 - l_U193._fU4) / (l_U190._fU0 - l_U193._fU0) ) );
            }
        }
        if (DOES_OBJECT_EXIST( l_U310[5] ))
        {
            if ((l_U199._fU0 < l_U196._fU0) || (l_U199._fU4 < l_U196._fU4))
            {
                if (l_U268)
                {
                    SET_OBJECT_HEADING( l_U310[5], l_U238 + l_U240 );
                }
                else
                {
                    SET_OBJECT_HEADING( l_U310[5], l_U238 - l_U240 );
                }
            }
            else if (l_U268)
            {
                SET_OBJECT_HEADING( l_U310[5], l_U238 - l_U240 );
            }
            else
            {
                SET_OBJECT_HEADING( l_U310[5], l_U238 + l_U240 );
            }
        }
        l_U190 = {l_U193};
        l_U329 = 1;
        break;
    }
    return;
}

void sub_23978()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown Result;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (DOES_OBJECT_EXIST( l_U298[0] ))
    {
        GET_OBJECT_COORDINATES( l_U298[0], ref uVar2, ref uVar3, ref uVar4 );
    }
    if (DOES_CHAR_EXIST( l_U292[l_U6] ))
    {
        if (NOT (IS_CHAR_DEAD( l_U292[l_U6] )))
        {
            GET_CHAR_COORDINATES( l_U292[l_U6], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        }
    }
    GET_DISTANCE_BETWEEN_COORDS_2D( uVar2, uVar3, uVar6._fU0, uVar6._fU4, ref Result );
    return Result;
}

void sub_24137()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (l_U289 == 0)
    {
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            if (NOT l_U271)
            {
                GET_OBJECT_COORDINATES( l_U298[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if ((uVar2._fU8 < (l_U237 + 0.20000000)) AND (uVar2._fU8 > l_U237))
                {
                    if (sub_10203())
                    {
                        PLAY_SOUND_FROM_OBJECT( l_U17, "BOWLING_ALLEY_BALL_HIT", l_U298[0] );
                    }
                    l_U289 = 1;
                }
            }
        }
    }
    return;
}

void sub_24312()
{
    vector vVar2;

    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    if (DOES_OBJECT_EXIST( l_U298[0] ))
    {
        APPLY_FORCE_TO_OBJECT( l_U298[0], 0, l_U232, vVar2, 0, 0, 0, 1 );
    }
    return;
}

void sub_24475()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT l_U272)
    {
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            GET_OBJECT_COORDINATES( l_U298[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (uVar2._fU8 < (l_U237 - 0.25000000))
            {
                if (sub_10203())
                {
                    PLAY_SOUND_FROM_OBJECT( l_U11, "BOWLING_ALLEY_HIT_BACK_OF_ALLEY", l_U298[0] );
                }
                FREEZE_OBJECT_POSITION( l_U298[0], 1 );
                l_U270 = 0;
                l_U272 = 1;
            }
        }
    }
    return;
}

void sub_24658()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (DOES_OBJECT_EXIST( l_U298[0] ))
    {
        if (NOT l_U271)
        {
            GET_OBJECT_COORDINATES( l_U298[0], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (LOCATE_OBJECT_3D( l_U298[0], l_U64._fU0, l_U64._fU4, l_U64._fU8, 1.44500000, 1.14000000, 0.40000000, 0 ))
            {
                l_U270 = 1;
            }
            if ((uVar2._fU8 < l_U237) AND (uVar2._fU8 > (l_U237 - 0.20000000)))
            {
                if (NOT l_U269)
                {
                    if (sub_10203())
                    {
                        PLAY_SOUND_FROM_OBJECT( l_U10, "BOWLING_ALLEY_GUTTER", l_U298[0] );
                    }
                    l_U269 = 1;
                    GET_GAME_TIMER( ref l_U21 );
                }
                if (NOT l_U270)
                {
                    l_U271 = 1;
                }
            }
        }
    }
    return;
}

void sub_24990()
{
    int I;

    for ( I = 1; I <= 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U298[0] ))
        {
            if (DOES_OBJECT_EXIST( l_U298[I] ))
            {
                if (NOT l_U273)
                {
                    if (LOCATE_OBJECT_3D( l_U298[0], l_U64._fU0, l_U64._fU4, l_U64._fU8, 1.44500000, 1.14000000, 0.40000000, 0 ))
                    {
                        if (LOCATE_OBJECT_3D( l_U298[I], l_U64._fU0, l_U64._fU4, l_U64._fU8, 1.44500000, 1.14000000, 0.40000000, 0 ))
                        {
                            if (NOT (IS_OBJECT_STATIC( l_U298[I] )))
                            {
                                l_U23 = I;
                                l_U273 = 1;
                                sub_25211();
                                I = 10;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_25211()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (DOES_OBJECT_EXIST( l_U298[l_U23] ))
    {
        GET_OBJECT_COORDINATES( l_U298[l_U23], ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    }
    if (DOES_OBJECT_EXIST( l_U298[0] ))
    {
        GET_OBJECT_COORDINATES( l_U298[0], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    }
    if (DOES_OBJECT_EXIST( l_U298[0] ))
    {
        GET_OBJECT_VELOCITY( l_U298[0], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    }
    sub_25359();
    return;
}

void sub_25359()
{
    int I;

    for ( I = 1; I <= 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U298[I] ))
        {
            if (IS_OBJECT_IN_ANGLED_AREA_3D( l_U298[I], l_U184._fU0, l_U184._fU4, l_U184._fU8, l_U187._fU0, l_U187._fU4, l_U187._fU8, l_U239, 0 ))
            {
                l_U22++;
            }
        }
    }
    return;
}

void sub_25674()
{
    int I;
    int iVar3;
    int iVar4;
    int Result;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    iVar3 = 0;
    iVar4 = 10;
    Result = 0;
    for ( I = 1; I <= 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U298[I] ))
        {
            if (LOCATE_OBJECT_3D( l_U298[I], l_U64._fU0, l_U64._fU4, l_U64._fU8, 1.44500000, 1.14000000, 0.40000000, 0 ))
            {
                GET_OBJECT_VELOCITY( l_U298[I], ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                if (IS_OBJECT_STATIC( l_U298[I] ))
                {
                    iVar3++;
                }
            }
            else
            {
                iVar4--;
            }
        }
        else
        {
            iVar4--;
        }
    }
    if (iVar3 == iVar4)
    {
        Result = 1;
    }
    return Result;
}

void sub_25908()
{
    int Result;
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;

    Result = 0;
    for ( I = 1; I <= 10; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U298[I] ))
        {
            GET_OBJECT_COORDINATES( l_U298[I], ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_2D( uVar4._fU0, uVar4._fU4, l_U141[I]._fU0, l_U141[I]._fU4, ref fVar7 );
            if ((NOT (IS_OBJECT_UPRIGHT( l_U298[I], 15.00000000 ))) || (fVar7 > 0.20000000))
            {
                Result++;
                l_U254[I] = 0;
            }
        }
    }
    return Result;
}

void sub_26089(int iParam0)
{
    switch (l_U7)
    {
        case 1:
        if (iParam0 == 10)
        {
            l_U267 = 1;
            l_U285 = 1;
            l_U253 = 1;
            if (NOT l_U281)
            {
                if (sub_10203())
                {
                    SAY_AMBIENT_SPEECH( l_U292[l_U6], "bowling_Strike", 0, 1, 0 );
                }
                l_U281 = 1;
            }
            if (DOES_OBJECT_EXIST( l_U317 ))
            {
                if (sub_10203())
                {
                    PLAY_SOUND_FROM_OBJECT( l_U18, "BOWLING_ALLEY_JINGLES_STRIKE", l_U317 );
                }
            }
            l_U26 = 10;
        }
        else
        {
            l_U7 = 2;
            if (iParam0 >= 8)
            {
                ;
            }
            l_U26 = 10 - iParam0;
        }
        break;
        case 2:
        l_U267 = 1;
        l_U7 = 1;
        if (l_U26 == iParam0)
        {
            l_U284 = 1;
            if (sub_10203())
            {
                SAY_AMBIENT_SPEECH( l_U292[l_U6], "BOWLING_SPARE", 0, 1, 0 );
            }
            l_U26 = 10;
            if (DOES_OBJECT_EXIST( l_U317 ))
            {
                if (sub_10203())
                {
                    PLAY_SOUND_FROM_OBJECT( l_U19, "BOWLING_ALLEY_JINGLES_DOUBLE", l_U317 );
                }
            }
        }
        else
        {
            l_U287 = 1;
        }
        l_U253 = 1;
        break;
    }
    return;
}

void sub_26502()
{
    if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
    {
        if (l_U285)
        {
            if (IS_CHAR_MALE( l_U292[l_U6] ))
            {
                TASK_PLAY_ANIM_WITH_FLAGS( l_U292[l_U6], "CELEB_C", "MINI_BOWLING", 8.00000000, -1, 11 );
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U27 );
                if (l_U27 == 0)
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "F_CELEB_A", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "F_CELEB_B", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
        }
        if (l_U284)
        {
            if (IS_CHAR_MALE( l_U292[l_U6] ))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U27 );
                if (l_U27 == 0)
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "CELEB_A", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "CELEB_B", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U27 );
                if (l_U27 == 0)
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "F_CELEB_A", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "F_CELEB_B", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
        }
        if (l_U286)
        {
            if (IS_CHAR_MALE( l_U292[l_U6] ))
            {
                TASK_PLAY_ANIM( l_U292[l_U6], "CURSE_B", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U27 );
                if (l_U27 == 0)
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "F_CURSE_A", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "F_CURSE_B", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
        }
        if (l_U287)
        {
            if (IS_CHAR_MALE( l_U292[l_U6] ))
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U27 );
                if (l_U27 == 0)
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "CURSE_A", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                if (l_U27 == 1)
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "AVERAGE", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                if (l_U27 == 2)
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "CURSE_C", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U27 );
                if (l_U27 == 0)
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "F_CURSE_A", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
                else
                {
                    TASK_PLAY_ANIM( l_U292[l_U6], "F_CURSE_B", "MINI_BOWLING", 8.00000000, 0, 0, 0, 0, -1 );
                }
            }
        }
    }
    l_U287 = 0;
    l_U284 = 0;
    l_U285 = 0;
    l_U286 = 0;
    return;
}

void sub_27898()
{
    int Result;
    float fVar3;
    boolean bVar4;

    Result = 0;
    bVar4 = true;
    if (NOT (IS_CHAR_INJURED( l_U292[l_U6] )))
    {
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "CELEB_c" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "CELEB_c", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "CELEB_b" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "CELEB_b", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "CELEB_a" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "CELEB_a", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "CURSE_B" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "CURSE_B", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "CURSE_A" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "CURSE_A", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "average" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "average", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "CURSE_C" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "CURSE_C", ref fVar3 );
            if (fVar3 > 0.90000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "F_CURSE_A" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "F_CURSE_A", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "F_CURSE_B" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "F_CURSE_B", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "F_CELEB_A" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "F_CELEB_A", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
        if (IS_CHAR_PLAYING_ANIM( l_U292[l_U6], "MINI_BOWLING", "F_CELEB_B" ))
        {
            bVar4 = false;
            GET_CHAR_ANIM_CURRENT_TIME( l_U292[l_U6], "MINI_BOWLING", "F_CELEB_B", ref fVar3 );
            if (fVar3 > 0.99000000)
            {
                Result = 1;
            }
            else
            {
                BLOCK_CHAR_GESTURE_ANIMS( l_U292[l_U6], 1 );
            }
        }
    }
    if (bVar4)
    {
        Result = 1;
    }
    return Result;
}