void main()
{
    l_U113 = 0;
    l_U114 = 0;
    l_U127 = {1186.98000000, 1700.00900000, 16.72000000};
    l_U130 = {1159.76000000, 1685.49000000, 16.78000000};
    l_U133 = {1202.73300000, 1713.70300000, 15.66150000};
    l_U136 = {-1575.97400000, 19.67334000, 9.01100000};
    l_U139 = {-1555.46800000, 9.48290000, 9.01100000};
    l_U142 = {-1588.32000000, 27.50130000, 9.04660000};
    l_U146 = 0;
    l_U147 = 0;
    l_U148 = 0;
    l_U149 = 0;
    l_U166 = "clammainroom";
    l_U167 = "clampalbkrm";
    l_U168 = "clamfronrm";
    l_U169 = "clamchangeroom";
    l_U174 = 0;
    l_U175 = 0;
    l_U176 = 0;
    l_U177 = 0;
    l_U178 = 0;
    l_U179 = 0;
    l_U115 = {l_U182._fU4[0]};
    l_U118 = l_U182._fU68[0];
    sub_326( "" );
    sub_481( 0, sub_432(), "Niko", 0 );
    sub_626();
    if (g_U10978)
    {
        l_U180 = 1;
    }
    else
    {
        l_U180 = 2;
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambBouncer" )) < 4)
            {
                if (NOT (IS_CHAR_INJURED( sub_432() )))
                {
                    if (IS_WANTED_LEVEL_GREATER( sub_1853(), 0 ))
                    {
                        l_U180 = 1;
                    }
                }
                switch (l_U113)
                {
                    case 0:
                    if (sub_1939())
                    {
                        if (sub_2019())
                        {
                            l_U113 = 1;
                        }
                    }
                    break;
                    case 1:
                    if (IS_PLAYER_PLAYING( sub_1853() ))
                    {
                        if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_1853() ))
                        {
                            if (l_U175)
                            {
                                sub_2438();
                            }
                            else
                            {
                                sub_4690();
                            }
                        }
                    }
                    break;
                    case 2: break;
                }
            }
            else
            {
                sub_6677();
            }
        }
        else
        {
            sub_6677();
        }
    }
    return;
}

void sub_326(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_343();
    return;
}

void sub_343()
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

void sub_432()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_481(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_561( "\n PED NUMBER ", uParam0 );
    sub_601( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_561(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_601(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_626()
{
    l_U122 = 999.00000000;
    l_U122 = VDIST( l_U115, l_U127 );
    if (l_U122 < 2.00000000)
    {
        l_U124 = 676448572;
        l_U145 = 1;
        sub_701();
        sub_1176();
    }
    l_U122 = VDIST( l_U115, l_U130 );
    if (l_U122 < 2.00000000)
    {
        l_U124 = 676448572;
        l_U145 = 1;
        sub_701();
        sub_1176();
    }
    l_U122 = VDIST( l_U115, l_U133 );
    if (l_U122 < 2.00000000)
    {
        l_U124 = 676448572;
        l_U145 = 1;
        l_U175 = 1;
        sub_701();
        sub_1176();
    }
    l_U122 = VDIST( l_U115, l_U136 );
    if (l_U122 < 2.00000000)
    {
        l_U124 = -1780698891;
        l_U145 = 2;
        l_U179 = 1;
        sub_701();
        sub_1176();
    }
    l_U122 = VDIST( l_U115, l_U139 );
    if (l_U122 < 2.00000000)
    {
        l_U124 = -1780698891;
        l_U145 = 2;
        sub_701();
        sub_1176();
    }
    l_U122 = VDIST( l_U115, l_U142 );
    if (l_U122 < 2.00000000)
    {
        l_U124 = -1780698891;
        l_U145 = 2;
        l_U175 = 1;
        sub_701();
        sub_1176();
    }
    return;
}

void sub_701()
{
    if (l_U124 == -1780698891)
    {
        l_U154 = "BO1_AGGNO";
        l_U155 = "BO1_ARMEJ";
        l_U156 = "BO1_DISNO";
        l_U157 = "BO1_NEGYES";
        l_U158 = "BO1_POLITE";
        l_U159 = "BO1_POSYES";
        StrCopy( ref l_U170, "BOUNCER_1", 16 );
        l_U181 = 1;
    }
    else if (l_U124 == 897868981)
    {
        l_U154 = "BO1_AGGNO2";
        l_U155 = "BO1_ARMEJ2";
        l_U156 = "BO1_DISNO2";
        l_U157 = "BO1_NEGYES2";
        l_U158 = "BO1_POLITE2";
        l_U159 = "BO1_POSYES2";
        StrCopy( ref l_U170, "BOUNCER_2", 16 );
        l_U181 = 2;
    }
    else if (l_U124 == 676448572)
    {
        l_U154 = "BO1_AGGNO3";
        l_U155 = "BO1_ARMEJ3";
        l_U156 = "BO1_DISSNO3";
        l_U157 = "BO1_NEGYES3";
        l_U158 = "BO1_POLITE3";
        l_U159 = "BO1_POSYES3";
        StrCopy( ref l_U170, "BOUNCER_3", 16 );
        l_U181 = 3;
    };;;
    return;
}

void sub_1176()
{
    if (l_U145 == 1)
    {
        l_U166 = "clammainroom";
        l_U167 = "clampalbkrm";
        l_U168 = "clamfronrm";
        l_U169 = "clamchangeroom";
    }
    else if (l_U145 == 2)
    {
        l_U166 = "Bada_room1";
        l_U167 = "Bada-Private";
        l_U168 = "Bada_room2";
        l_U169 = "Bada_room1a";
    }
    else if (l_U145 == 2)
    {
        l_U175 = 1;
    };;;
    return;
}

void sub_1853()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_1939()
{
    if (l_U145 > 0)
    {
        GET_WEAPONTYPE_MODEL( 7, ref l_U126 );
        REQUEST_MODEL( l_U124 );
        if (HAS_MODEL_LOADED( l_U124 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_2019()
{
    if (IS_CHAR_DEAD( l_U123 ))
    {
        COPY_COMBAT_DECISION_MAKER( 65568, ref l_U150 );
        CREATE_CHAR( 4, l_U124, l_U115._fU0, l_U115._fU4, l_U115._fU8, ref l_U123, 1 );
        SET_CHAR_RELATIONSHIP( l_U123, 1, 0 );
        SET_CHAR_RELATIONSHIP( l_U123, 1, 4 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U123, 4 );
        SET_COMBAT_DECISION_MAKER( l_U123, l_U150 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U123 );
        SET_CURRENT_CHAR_WEAPON( l_U123, 0, 0 );
        if (NOT l_U175)
        {
            if (l_U179)
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U123, l_U169 );
            }
            else
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U123, l_U166 );
            }
        }
        SET_CHAR_HEADING( l_U123, l_U118 );
        TASK_START_SCENARIO_IN_PLACE( l_U123, "Scenario_Bouncer", -1082130432 );
        sub_481( l_U181, l_U123, ref l_U170, 0 );
        sub_2321( ref l_U170 );
        sub_2321( "\n" );
        SET_CHAR_ACCURACY( l_U123, 20 );
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_2321(unknown uParam0)
{
    return;
}

void sub_2438()
{
    if (NOT (IS_CHAR_INJURED( l_U123 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_432() )))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1853(), 0 )))
            {
                if (NOT g_U9158)
                {
                    if (IS_CHAR_SHOOTING( sub_432() ))
                    {
                        g_U9158 = 1;
                        sub_2536();
                    }
                    if (NOT l_U178)
                    {
                        if (NOT l_U176)
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U123, sub_432(), 10.00000000, 10.00000000, 3.00000000, 0 ))
                            {
                                if (NOT g_U9159)
                                {
                                    PRINT_HELP_FOREVER( "STR_WEA" );
                                    g_U9159 = 1;
                                }
                            }
                            else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "STR_WEA" ))
                            {
                                CLEAR_HELP();
                            }
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U123, sub_432(), 3.00000000, 3.00000000, 3.00000000, 0 ))
                            {
                                if (((IS_CHAR_ARMED( sub_432(), 7 )) || (IS_CHAR_ON_ANY_BIKE( sub_432() ))) || (IS_WANTED_LEVEL_GREATER( sub_1853(), 0 )))
                                {
                                    if (sub_2719( sub_3897(), ref l_U160, l_U180, 1 ))
                                    {
                                        TASK_LOOK_AT_CHAR( l_U123, sub_432(), -2, 1 );
                                        l_U176 = 1;
                                    }
                                }
                                else if (NOT l_U177)
                                {
                                    if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_1853() ))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( sub_432() ))
                                        {
                                            TASK_LOOK_AT_CHAR( l_U123, sub_432(), -2, 1 );
                                            l_U177 = 1;
                                        }
                                        else if (sub_2719( sub_4104(), ref l_U160, l_U180, 1 ))
                                        {
                                            TASK_LOOK_AT_CHAR( l_U123, sub_432(), -2, 1 );
                                            l_U177 = 1;
                                        }
                                    }
                                    else
                                    {
                                        TASK_LOOK_AT_CHAR( l_U123, sub_432(), -2, 1 );
                                        l_U177 = 1;
                                    }
                                }
                            }
                        }
                        else if (sub_4240())
                        {
                            if (IS_CHAR_ARMED( sub_432(), 7 ))
                            {
                                l_U178 = 1;
                                g_U9158 = 1;
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "STR_WEA" ))
                                {
                                    CLEAR_HELP();
                                }
                                sub_2536();
                            }
                        }
                        else if (NOT (IS_CHAR_ARMED( sub_432(), 7 )))
                        {
                            l_U176 = 0;
                        };;;
                    }
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U123, sub_432(), 20.00000000, 20.00000000, 20.00000000, 0 ))
                    {
                        if ((IS_PLAYER_TARGETTING_CHAR( sub_1853(), l_U123 )) || (IS_CHAR_SHOOTING( sub_432() )))
                        {
                            g_U9158 = 1;
                        }
                    }
                }
                else
                {
                    g_U9158 = 1;
                }
            }
            else if (l_U178)
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U123, sub_432(), 10.00000000, 10.00000000, 3.00000000, 0 ))
                {
                    sub_2536();
                    g_U9158 = 1;
                }
            }
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U123 )))
    {
        g_U9158 = 1;
        SET_CHAR_HEALTH( l_U123, 0 );
    }
    return;
}

void sub_2536()
{
    if (NOT (IS_CHAR_INJURED( l_U123 )))
    {
        if (NOT (IS_CHAR_INJURED( sub_432() )))
        {
            GET_SCRIPT_TASK_STATUS( l_U123, 91, ref l_U152 );
            if (l_U152 == 7)
            {
                SET_CHAR_RELATIONSHIP( l_U123, 5, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U123, 0 );
                if (IS_CHAR_SHOOTING( sub_432() ))
                {
                    GIVE_WEAPON_TO_CHAR( l_U123, 7, 60, 1 );
                    SET_CURRENT_CHAR_WEAPON( l_U123, 7, 0 );
                }
                TASK_COMBAT( l_U123, sub_432() );
                if (sub_2719( l_U155, ref l_U160, l_U180, 1 ))
                {
                    ;
                }
                l_U147 = 1;
            }
        }
    }
    return;
}

void sub_2719(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_2740( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_2740(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_2794( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_2794(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_2816( iParam1 )))
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
    sub_3492( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_2816(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_2321( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_2321( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_2321( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_3492(int iParam0, int iParam1)
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

void sub_3897()
{
    unknown Result;
    int iVar3;

    iVar3 = sub_3908( 0, 2 );
    if (iVar3 == 0)
    {
        Result = l_U156;
    }
    else
    {
        Result = l_U154;
    }
    return Result;
}

void sub_3908(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_4104()
{
    unknown Result;
    int iVar3;

    iVar3 = sub_3908( 0, 2 );
    if (iVar3 == 0)
    {
        Result = l_U159;
    }
    else
    {
        Result = l_U157;
    }
    return Result;
}

int sub_4240()
{
    int iVar2;

    if (l_U145 > 0)
    {
        if (NOT (IS_CHAR_DEAD( sub_432() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_432(), ref iVar2 );
            if ((((iVar2 == (GET_HASH_KEY( l_U166 ))) || (iVar2 == (GET_HASH_KEY( l_U167 )))) || (iVar2 == (GET_HASH_KEY( l_U168 )))) || (iVar2 == (GET_HASH_KEY( l_U169 ))))
            {
                return 1;
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_4690()
{
    if (sub_4240())
    {
        if (g_U9158)
        {
            if (NOT (IS_CHAR_INJURED( l_U123 )))
            {
                if (IS_PLAYER_TARGETTING_CHAR( sub_1853(), l_U123 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U123, 7, ref l_U152 );
                    if (l_U152 == 7)
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U123 );
                        TASK_HANDS_UP( l_U123, 10000 );
                    }
                }
                else
                {
                    sub_4820();
                }
            }
        }
        else if (sub_4940())
        {
            if (NOT (IS_CHAR_INJURED( sub_432() )))
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_432(), 1198.26100000, 1695.99500000, 16.72170000, 3.00000000, 3.00000000, 3.50000000, 0 )))
                {
                    if (IS_CHAR_ARMED( sub_432(), 7 ))
                    {
                        g_U9157 = 1;
                    }
                    if (IS_CHAR_IN_MELEE_COMBAT( sub_432() ))
                    {
                        g_U9157 = 1;
                    }
                }
                if (sub_5169())
                {
                    g_U9157 = 1;
                }
            }
        }
        sub_5261();
        if (NOT (IS_CHAR_INJURED( sub_432() )))
        {
            if (IS_CHAR_SHOOTING( sub_432() ))
            {
                g_U9158 = 1;
                sub_2536();
            }
            if (IS_CHAR_IN_ANY_CAR( sub_432() ))
            {
                g_U9158 = 1;
                sub_2536();
            }
            if (NOT (IS_CHAR_INJURED( l_U123 )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U123, sub_432(), 0 ))
                {
                    g_U9158 = 1;
                    sub_2536();
                }
            }
        }
    }
    else if (g_U9158)
    {
        if (NOT (IS_CHAR_INJURED( l_U123 )))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( l_U123, l_U115._fU0, l_U115._fU4, l_U115._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U123, 114, ref l_U152 );
                if (l_U152 == 7)
                {
                    TASK_START_SCENARIO_IN_PLACE( l_U123, "Scenario_Bouncer", -1082130432 );
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U123, 29, ref l_U152 );
                if (l_U152 == 7)
                {
                    CLEAR_CHAR_TASKS( l_U123 );
                    SET_CHAR_RELATIONSHIP( l_U123, 1, 0 );
                    OPEN_SEQUENCE_TASK( ref l_U153 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8, 2, -2, 2.00000000 );
                    TASK_ACHIEVE_HEADING( 0, l_U118 );
                    CLOSE_SEQUENCE_TASK( l_U153 );
                    TASK_PERFORM_SEQUENCE( l_U123, l_U153 );
                    CLEAR_SEQUENCE_TASK( l_U153 );
                }
            }
        }
    }
    return;
}

void sub_4820()
{
    int iVar2;

    GET_SCRIPT_TASK_STATUS( l_U123, 91, ref l_U152 );
    if (l_U152 == 1)
    {
        GET_CURRENT_CHAR_WEAPON( l_U123, ref iVar2 );
        if (iVar2 == 0)
        {
            if (IS_CHAR_SHOOTING( sub_432() ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U123 );
                sub_2536();
            }
        }
    }
    else
    {
        sub_2536();
    }
    return;
}

int sub_4940()
{
    int iVar2;

    if (l_U145 > 0)
    {
        if (NOT (IS_CHAR_DEAD( sub_432() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_432(), ref iVar2 );
            if ((iVar2 == (GET_HASH_KEY( l_U166 ))) || (iVar2 == (GET_HASH_KEY( l_U169 ))))
            {
                return 1;
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_5169()
{
    switch (g_U91._fU0)
    {
        case 1020:
        case 1021:
        case 1022:
        case 1023:
        case 1024:
        return 1;
        break;
    }
    return 0;
}

void sub_5261()
{
    if (NOT (IS_CHAR_INJURED( l_U123 )))
    {
        if (g_U9157 == 0)
        {
            l_U114 = 0;
        }
        switch (l_U114)
        {
            case 0:
            if (LOCATE_CHAR_ON_FOOT_3D( l_U123, l_U115._fU0, l_U115._fU4, l_U115._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U123, 114, ref l_U152 );
                if (l_U152 == 7)
                {
                    TASK_START_SCENARIO_IN_PLACE( l_U123, "Scenario_Bouncer", -1082130432 );
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U123, 29, ref l_U152 );
                if (l_U152 == 7)
                {
                    OPEN_SEQUENCE_TASK( ref l_U153 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U115._fU0, l_U115._fU4, l_U115._fU8, 2, -2, 2.00000000 );
                    TASK_ACHIEVE_HEADING( 0, l_U118 );
                    CLOSE_SEQUENCE_TASK( l_U153 );
                    TASK_PERFORM_SEQUENCE( l_U123, l_U153 );
                    CLEAR_SEQUENCE_TASK( l_U153 );
                }
            }
            if (g_U9157)
            {
                if (l_U147)
                {
                    g_U9158 = 1;
                }
                else
                {
                    l_U114 = 1;
                }
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( sub_432() )))
            {
                GET_CHAR_COORDINATES( sub_432(), ref l_U119._fU0, ref l_U119._fU4, ref l_U119._fU8 );
                if (LOCATE_CHAR_ON_FOOT_3D( l_U123, l_U119._fU0, l_U119._fU4, l_U119._fU8, 1.50000000, 1.50000000, 1.50000000, 0 ))
                {
                    CLEAR_CHAR_TASKS( l_U123 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U123, sub_432() );
                    if (l_U147)
                    {
                        l_U114 = 2;
                    }
                    else if (sub_2719( l_U158, ref l_U160, l_U180, 1 ))
                    {
                        l_U114 = 2;
                        SETTIMERA( 0 );
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U123, 29, ref l_U152 );
                    if (l_U152 == 7)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U153 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U119._fU0, l_U119._fU4, l_U119._fU8, 2, -2, 2.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_432() );
                        CLOSE_SEQUENCE_TASK( l_U153 );
                        TASK_PERFORM_SEQUENCE( l_U123, l_U153 );
                        CLEAR_SEQUENCE_TASK( l_U153 );
                    }
                }
            }
            break;
            case 2:
            if (NOT (sub_5977( l_U160 )))
            {
                if (TIMERA() > 10000)
                {
                    if (l_U147)
                    {
                        g_U9158 = 1;
                    }
                    else
                    {
                        g_U9157 = 0;
                        l_U147 = 1;
                        l_U114 = 0;
                    }
                }
            }
            break;
        }
    }
    return;
}

int sub_5977(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_2321( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_2321( "\n speech is not playing" );
    }
    return 0;
}

void sub_6677()
{
    if (DOES_DECISION_MAKER_EXIST( l_U125 ))
    {
        REMOVE_DECISION_MAKER( l_U125 );
    }
    if (NOT (IS_CHAR_DEAD( l_U123 )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U123 )))
        {
            DELETE_CHAR( ref l_U123 );
        }
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambBouncer" )) == 1)
    {
        g_U9158 = 0;
        g_U9157 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}
