void main()
{
    vector vVar2;
    vector vVar5;
    float fVar8;
    float fVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    char[16] cVar15;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    int iVar26;
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

    l_U177 = 0;
    l_U197 = 0;
    l_U198 = 0;
    l_U199 = 1;
    l_U200 = 3;
    l_U202 = 0;
    l_U204 = 0;
    l_U205 = 1;
    l_U206 = 0;
    l_U234 = 1.00000000;
    l_U247 = 40.00000000;
    l_U256 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        if (l_U213 < 5)
        {
            g_U32928[l_U213] = 5;
        }
        sub_132( ref l_U211 );
    }
    l_U211 = l_U257._fU0;
    l_U213 = l_U257._fU4;
    l_U214 = {l_U257._fU8._fU40};
    l_U217 = l_U257._fU8._fU64;
    l_U218 = l_U257._fU8._fU36;
    l_U222 = {l_U257._fU8._fU92};
    l_U219 = {l_U257._fU8._fU92};
    l_U225 = l_U257._fU128;
    l_U226 = l_U257._fU132;
    while (l_U205)
    {
        WAIT( 0 );
        if (sub_759( ref l_U206, l_U204 ))
        {
            DO_SCREEN_FADE_OUT( 250 );
            l_U204 = 4;
        }
        if ((NOT (IS_CHAR_DEAD( l_U211 ))) AND (NOT (IS_CHAR_DEAD( sub_141() ))))
        {
            switch (l_U204)
            {
                case 0:
                sub_1057( "  * INIT_CAM\n" );
                if (IS_PLAYER_CONTROL_ON( sub_353() ))
                {
                    SET_PLAYER_CONTROL( sub_353(), 0 );
                }
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    if (NOT IS_SCREEN_FADING_OUT())
                    {
                        DO_SCREEN_FADE_OUT( 250 );
                    }
                }
                else
                {
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_141(), 1 );
                    DISPLAY_RADAR( 0 );
                    if (IS_GROUP_MEMBER( l_U211, sub_419() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U211 );
                        l_U207 = 1;
                    }
                    else
                    {
                        l_U207 = 0;
                    }
                    sub_1221( ref l_U209 );
                    CREATE_CAM( 14, ref l_U208 );
                    l_U241 = {l_U257._fU8._fU68};
                    l_U244 = {l_U257._fU8._fU80};
                    SET_CAM_POS( l_U208, l_U241._fU0, l_U241._fU4, l_U241._fU8 );
                    SET_CAM_ROT( l_U208, l_U244._fU0, l_U244._fU4, l_U244._fU8 );
                    SET_CAM_FOV( l_U208, l_U247 );
                    SET_CAM_DOF_FOCUSPOINT( l_U208, l_U214._fU0, l_U214._fU4, l_U214._fU8, 10.00000000 );
                    SET_CAM_ACTIVE( l_U208, 1 );
                    SET_CAM_PROPAGATE( l_U208, 1 );
                    CLEAR_AREA( l_U214._fU0, l_U214._fU4, l_U214._fU8, 25.00000000, 0 );
                    GET_CAR_CHAR_IS_USING( sub_141(), ref l_U210 );
                    vVar2 = {1149.49800000, 738.08480000, 34.39920000};
                    vVar5 = {1149.82800000, 737.20480000, 34.39920000};
                    fVar8 = 84.96000000;
                    fVar9 = 83.16000000;
                    if (l_U226 == 17)
                    {
                        if (NOT (IS_CAR_DEAD( l_U210 )))
                        {
                            CLEAR_AREA( 1178.29000000, 738.52510000, 35.75870000, 10.00000000, 1 );
                            SET_CAR_COORDINATES( l_U210, 1178.29000000, 738.52510000, 35.75870000 );
                            SET_CAR_HEADING( l_U210, 180.71370000 );
                            WARP_CHAR_FROM_CAR_TO_COORD( sub_141(), vVar2.x, vVar2.y, vVar2.z );
                            WARP_CHAR_FROM_CAR_TO_COORD( l_U211, vVar5.x, vVar5.y, vVar5.z );
                            SET_CHAR_HEADING( sub_141(), fVar8 );
                            SET_CHAR_HEADING( l_U211, fVar9 );
                            l_U235 = {vVar2};
                            l_U238 = {vVar5};
                        }
                        else
                        {
                            GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U210 );
                            if (NOT (IS_CAR_DEAD( l_U210 )))
                            {
                                if (IS_CAR_IN_AREA_3D( l_U210, l_U214._fU0, l_U214._fU4, l_U214._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                {
                                    CLEAR_AREA( 1178.29000000, 738.52510000, 35.75870000, 10.00000000, 1 );
                                    SET_CAR_COORDINATES( l_U210, 1178.29000000, 738.52510000, 35.75870000 );
                                    SET_CAR_HEADING( l_U210, 180.71370000 );
                                }
                            }
                        }
                    }
                    if ((NOT (IS_CAR_DEAD( l_U210 ))) AND (l_U226 != 17))
                    {
                        GET_CAR_MODEL( l_U210, ref uVar10 );
                        GET_MODEL_DIMENSIONS( uVar10, ref l_U228, ref l_U231 );
                        SET_CAR_COORDINATES( l_U210, l_U214._fU0, l_U214._fU4, l_U214._fU8 );
                        SET_CAR_HEADING( l_U210, l_U217 );
                        if (IS_THIS_MODEL_A_BOAT( uVar10 ))
                        {
                            SET_CAR_ENGINE_ON( l_U210, 0, 1 );
                            SET_CAR_ENGINE_ON( l_U210, 0, 1 );
                            GET_CLOSEST_CAR_NODE_WITH_HEADING( l_U214._fU0, l_U214._fU4, l_U214._fU8, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8, ref uVar14 );
                            CLEAR_AREA( uVar11._fU0, uVar11._fU4, uVar11._fU8, 10.00000000, 1 );
                            SET_CAR_COORDINATES( l_U210, uVar11._fU0, uVar11._fU4, uVar11._fU8 );
                            SET_CAR_HEADING( l_U210, uVar14 );
                            sub_1057( "SET_BOAT_COORDINATES: " );
                            sub_2269( uVar11 );
                            sub_2306();
                        }
                        if (IS_THIS_MODEL_A_HELI( uVar10 ))
                        {
                            SET_CAR_ENGINE_ON( l_U210, 0, 1 );
                            SET_CAR_ENGINE_ON( l_U210, 0, 1 );
                            GET_CLOSEST_CAR_NODE_WITH_HEADING( l_U214._fU0, l_U214._fU4, l_U214._fU8, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8, ref uVar14 );
                            CLEAR_AREA( uVar11._fU0, uVar11._fU4, uVar11._fU8, 10.00000000, 1 );
                            SET_CAR_COORDINATES( l_U210, uVar11._fU0, uVar11._fU4, uVar11._fU8 );
                            SET_CAR_HEADING( l_U210, uVar14 );
                            l_U256 = 1;
                            sub_1057( "SET_HELI_COORDINATES: " );
                            sub_2269( uVar11 );
                            sub_2306();
                            l_U235 = {uVar11};
                            l_U238 = {uVar11};
                        }
                        else
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U210, l_U228._fU0 - l_U234, 0.00000000, 0.00000000, ref l_U235._fU0, ref l_U235._fU4, ref l_U235._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( l_U235._fU0, l_U235._fU4, l_U235._fU8, ref l_U235._fU8 );
                            WARP_CHAR_FROM_CAR_TO_COORD( sub_141(), l_U235._fU0, l_U235._fU4, l_U235._fU8 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U210, l_U231._fU0 + l_U234, 0.00000000, 0.00000000, ref l_U238._fU0, ref l_U238._fU4, ref l_U238._fU8 );
                            GET_GROUND_Z_FOR_3D_COORD( l_U238._fU0, l_U238._fU4, l_U238._fU8, ref l_U238._fU8 );
                            if (IS_CHAR_IN_ANY_CAR( l_U211 ))
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( l_U211, l_U238._fU0, l_U238._fU4, l_U238._fU8 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( l_U211, l_U238._fU0, l_U238._fU4, l_U238._fU8 );
                            }
                            SET_CAR_HEADING( l_U210, l_U217 );
                            SET_CAR_COORDINATES( l_U210, l_U214._fU0, l_U214._fU4, l_U214._fU8 );
                        }
                        SET_CAR_ON_GROUND_PROPERLY( l_U210 );
                    }
                    else if (l_U226 != 17)
                    {
                        l_U235 = {l_U214};
                        GET_GROUND_Z_FOR_3D_COORD( l_U235._fU0, l_U235._fU4, l_U235._fU8, ref l_U235._fU8 );
                        SET_CHAR_COORDINATES( sub_141(), l_U235._fU0, l_U235._fU4, l_U235._fU8 );
                        l_U238 = {l_U235 + (vector( 1.00000000, 0.50000000, 0.50000000))};
                        GET_GROUND_Z_FOR_3D_COORD( l_U238._fU0, l_U238._fU4, l_U238._fU8, ref l_U238._fU8 );
                        SET_CHAR_COORDINATES( l_U211, l_U238._fU0, l_U238._fU4, l_U238._fU8 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( sub_141(), vVar2.x, vVar2.y, vVar2.z );
                        SET_CHAR_COORDINATES( l_U211, vVar5.x, vVar5.y, vVar5.z );
                        SET_CHAR_HEADING( sub_141(), fVar8 );
                        SET_CHAR_HEADING( l_U211, fVar9 );
                        l_U235 = {vVar2};
                        l_U238 = {vVar5};
                    }
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_141(), 1 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_141() );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U211 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SET_WIDESCREEN_BORDERS( 1 );
                    CLEAR_PRINTS();
                    while (NOT sub_3286())
                    {
                        WAIT( 0 );
                    }
                    switch (l_U257._fU4)
                    {
                        case 0:
                        StrCopy( ref cVar15, "GCMAUD", 16 );
                        break;
                        case 1:
                        StrCopy( ref cVar15, "GCKAUD", 16 );
                        break;
                        case 2:
                        StrCopy( ref cVar15, "GCAAUD", 16 );
                        break;
                        case 3:
                        StrCopy( ref cVar15, "GCKKAUD", 16 );
                        break;
                        case 4:
                        StrCopy( ref cVar15, "GCCAUD", 16 );
                        break;
                    }
                    sub_3531( ref cVar15 );
                    sub_3658( 0, sub_141(), "NIKO", 0 );
                    sub_3658( 1, l_U211, sub_3820( l_U257._fU4 ), 0 );
                    if (l_U257._fU4 != 3)
                    {
                        if (g_U32976 == 2)
                        {
                            sub_4028( l_U226 );
                            g_U32976 = 3;
                        }
                    }
                    WAIT( 0 );
                    if (l_U226 == 17)
                    {
                        GET_GAME_VIEWPORT_ID( ref uVar19 );
                        SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar19, "irbar2rm" );
                        WAIT( 500 );
                    }
                    GET_GAME_TIMER( ref l_U249 );
                    DO_SCREEN_FADE_IN( 250 );
                    l_U204 = 1;
                }
                break;
                case 1:
                switch (l_U218)
                {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    if (sub_10922( 9, ref l_U250, l_U257._fU124, l_U257._fU4, l_U225, 0 ))
                    {
                        l_U204 = 2;
                    }
                    break;
                    case 4:
                    if (sub_10922( 8, ref l_U250, l_U257._fU124, l_U257._fU4, l_U225, 0 ))
                    {
                        l_U204 = 2;
                    }
                    break;
                    default: SCRIPT_ASSERT( "GOTTEN_TO_A_DATE_PLACE.this_date_place_struct.this_type invalid" );
                }
                break;
                case 2:
                iVar26 = 1;
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_141(), l_U222._fU0, l_U222._fU4, l_U222._fU8, 0.75000000, 0.75000000, 2.00000000, 0 )))
                {
                    iVar26 = 0;
                    if (sub_28701( sub_141(), 17 ))
                    {
                        TASK_GO_STRAIGHT_TO_COORD( sub_141(), l_U222._fU0, l_U222._fU4, l_U222._fU8, 2, -1 );
                    }
                }
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U211, l_U219._fU0, l_U219._fU4, l_U219._fU8, 0.75000000, 0.75000000, 2.00000000, 0 )))
                {
                    iVar26 = 0;
                    if (sub_28701( l_U211, 17 ))
                    {
                        TASK_GO_STRAIGHT_TO_COORD( l_U211, l_U219._fU0, l_U219._fU4, l_U219._fU8, 2, -1 );
                    }
                }
                if (DOES_CHAR_EXIST( l_U212 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U212 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U212, "FIGHT_OTHER_GIRLFRIEND", 1, 0, 2 );
                    }
                }
                GET_GAME_TIMER( ref l_U248 );
                if ((iVar26) || (l_U248 >= (l_U249 + 5000)))
                {
                    if (NOT (sub_29010( l_U250 )))
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        l_U204 = 3;
                    }
                }
                break;
                case 3:
                sub_1057( "  * COUPLE_DATE\n" );
                if (IS_SCREEN_FADED_OUT())
                {
                    if (DOES_CHAR_EXIST( l_U212 ))
                    {
                        DELETE_CHAR( ref l_U212 );
                        g_U32976 = 3;
                    }
                    GET_GAME_TIMER( ref l_U249 );
                    l_U204 = 5;
                }
                break;
                case 4:
                if (IS_SCREEN_FADED_OUT())
                {
                    if (DOES_CHAR_EXIST( l_U212 ))
                    {
                        DELETE_CHAR( ref l_U212 );
                        g_U32976 = 3;
                    }
                    sub_29346( ref l_U250, 0 );
                    l_U204 = 5;
                }
                break;
                case 5:
                CLEAR_CHAR_TASKS( sub_141() );
                CLEAR_CHAR_TASKS( l_U211 );
                uVar29 = {l_U214 - l_U222};
                GET_GROUND_Z_FOR_3D_COORD( l_U222._fU0, l_U222._fU4, l_U222._fU8, ref uVar27 );
                SET_CHAR_COORDINATES( sub_141(), l_U222._fU0, l_U222._fU4, uVar27 );
                GET_HEADING_FROM_VECTOR_2D( uVar29._fU0, uVar29._fU4, ref uVar35 );
                SET_CHAR_HEADING( sub_141(), uVar35 );
                SET_CHAR_HEALTH( sub_141(), 200 );
                WAIT( 0 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_141(), 0.00000000, 1.00000000, 0.00000000, ref l_U222._fU0, ref l_U222._fU4, ref l_U222._fU8 );
                GET_GROUND_Z_FOR_3D_COORD( l_U222._fU0, l_U222._fU4, l_U222._fU8, ref uVar27 );
                SET_CHAR_COORDINATES( sub_141(), l_U222._fU0, l_U222._fU4, uVar27 );
                GET_HEADING_FROM_VECTOR_2D( uVar29._fU0, uVar29._fU4, ref uVar35 );
                SET_CHAR_HEADING( sub_141(), uVar35 );
                WAIT( 0 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_141(), 1.50000000, 0.50000000, 0.00000000, ref l_U219._fU0, ref l_U219._fU4, ref l_U219._fU8 );
                GET_GROUND_Z_FOR_3D_COORD( l_U219._fU0, l_U219._fU4, l_U219._fU8, ref uVar28 );
                uVar32 = {l_U222 - l_U219};
                if (NOT (IS_CHAR_DEAD( l_U211 )))
                {
                    SET_CHAR_COORDINATES( l_U211, l_U219._fU0, l_U219._fU4, uVar28 );
                    GET_HEADING_FROM_VECTOR_2D( uVar32._fU0, uVar32._fU4, ref uVar36 );
                    SET_CHAR_HEADING( l_U211, uVar36 );
                    SET_CHAR_HEALTH( l_U211, 200 );
                }
                if (DOES_CHAR_EXIST( l_U212 ))
                {
                    DELETE_CHAR( ref l_U212 );
                    g_U32976 = 3;
                }
                WAIT( 500 );
                DO_SCREEN_FADE_IN( 0 );
                l_U205 = 0;
                break;
            }
        }
    }
    sub_132( ref l_U211 );
    return;
}

void sub_132(unknown uParam0)
{
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_141(), 0 );
    SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 1 );
    SET_CAM_PROPAGATE( l_U208, 0 );
    SET_CAM_ACTIVE( l_U208, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_WIDESCREEN_BORDERS( 0 );
    DESTROY_CAM( l_U208 );
    sub_258( ref l_U209 );
    SET_PLAYER_CONTROL( sub_353(), 1 );
    DISPLAY_RADAR( 1 );
    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT (IS_GROUP_MEMBER( (uParam0^), sub_419() ))) AND (l_U207))
        {
            SET_GROUP_MEMBER( sub_419(), (uParam0^) );
        }
    }
    SET_CAM_BEHIND_PED( sub_141() );
    if (DOES_CHAR_EXIST( l_U212 ))
    {
        REMOVE_CHAR_ELEGANTLY( ref l_U212 );
        g_U32976 = 3;
    }
    sub_542();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_141()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_258(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 0)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

void sub_353()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_419()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_542()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

int sub_759(unknown uParam0, int iParam1)
{
    if ((uParam0^))
    {
        if (((sub_776()) AND (IS_SCREEN_FADED_IN())) AND (iParam1 > 0))
        {
            return 1;
        }
        else
        {
            (uParam0^) = 0;
        }
    }
    if (NOT sub_776())
    {
        (uParam0^) = 1;
    }
    return 0;
}

int sub_776()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_1057(unknown uParam0)
{
    return;
}

void sub_1221(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    if ((uParam0^) != 1)
    {
        PRINTSTRING( "  ## ar_BEGIN_CAM_COMMANDS(" );
        PRINTINT( (uParam0^) );
        PRINTSTRING( ")\n" );
    }
    return;
}

void sub_2269(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U9231)
    {
        PRINTVECTOR( uParam0 );
    }
    return;
}

void sub_2306()
{
    if (g_U9231)
    {
        PRINTNL();
    }
    return;
}

void sub_3286()
{
    return sub_3297( 1, 1 );
}

int sub_3297(boolean bParam0, unknown uParam1)
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

void sub_3531(unknown uParam0)
{
    StrCopy( ref l_U79._fU0, uParam0, 16 );
    sub_3550();
    return;
}

void sub_3550()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U79._fU16[I]._fU0 = nil;
        StrCopy( ref l_U79._fU16[I]._fU4, "", 32 );
        l_U79._fU344[I] = 0;
    }
    return;
}

void sub_3658(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U79._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U79._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3742( "\n PED NUMBER ", uParam0 );
    sub_3782( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3742(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3782(unknown uParam0, unknown uParam1)
{
    return;
}

string sub_3820(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "MICHELLE";
        break;
        case 1:
        return "KATE_MCREARY";
        break;
        case 2:
        return "ALEX";
        break;
        case 3:
        return "KIKI";
        break;
        case 4:
        return "CARMEN";
        break;
    }
    return "DESCRIPTION";
}

void sub_4028(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float fVar9;

    switch (uParam0)
    {
        case 0:
        vVar3 = {1176.61200000, 376.51610000, 24.48900000};
        fVar9 = 281.88000000;
        vVar6 = {1190.41200000, 379.41600000, 24.08900000};
        break;
        case 1:
        vVar3 = {-135.21070000, 51.92670000, 13.76900000};
        fVar9 = 5.04000000;
        vVar6 = {-141.81070000, 69.92670000, 14.66900000};
        break;
        case 2:
        vVar3 = {1634.76000000, 245.23430000, 22.82600000};
        fVar9 = 279.00000000;
        vVar6 = {1647.26000000, 240.53430000, 24.42600000};
        break;
        case 3:
        vVar3 = {1093.82400000, 1587.29900000, 15.72900000};
        fVar9 = 36.36000000;
        vVar6 = {1102.72400000, 1604.39900000, 16.52900000};
        break;
        case 4:
        vVar3 = {434.29080000, 1511.66500000, 15.25100000};
        fVar9 = 339.12000000;
        vVar6 = {436.59080000, 1521.26500000, 16.45100000};
        break;
        case 5:
        vVar3 = {-188.19930000, 281.19130000, 13.84200000};
        fVar9 = 172.08000000;
        vVar6 = {-169.29930000, 277.49130000, 14.64200000};
        break;
        case 6:
        vVar3 = {-443.15010000, 1187.04100000, 11.88300000};
        fVar9 = 180.00000000;
        vVar6 = {-423.65010000, 1181.74100000, 13.28300000};
        break;
        case 7:
        vVar3 = {-616.72090000, 163.87230000, 3.69800000};
        fVar9 = 143.64000000;
        vVar6 = {-627.32090000, 155.47230000, 5.09800000};
        break;
        case 8:
        vVar3 = {-1021.34900000, 1608.67000000, 22.94300000};
        fVar9 = 281.88000000;
        vVar6 = {-1000.34900000, 1602.57000000, 23.74300000};
        break;
        case 9:
        vVar3 = {870.54330000, -484.47530000, 13.67600000};
        fVar9 = 360.00000000;
        vVar6 = {885.64330000, -473.67530000, 14.97600000};
        break;
        case 10:
        vVar3 = {-146.30810000, -270.20060000, 11.77600000};
        fVar9 = 255.60000000;
        vVar6 = {-134.90810000, -274.20060000, 12.87600000};
        break;
        case 11:
        vVar3 = {109.44760000, 651.36170000, 13.71000000};
        fVar9 = 224.28000000;
        vVar6 = {116.14760000, 644.96170000, 14.71000000};
        break;
        case 12:
        vVar3 = {-399.73130000, 231.44500000, 12.86300000};
        fVar9 = 10.44000000;
        vVar6 = {-399.93130000, 249.14500000, 13.76300000};
        break;
        case 13:
        vVar3 = {-1146.56800000, 1398.21500000, 23.56800000};
        fVar9 = 172.08000000;
        vVar6 = {-1152.26800000, 1390.31500000, 24.26800000};
        break;
        case 14:
        vVar3 = {-1246.08300000, 1092.47300000, 18.67300000};
        fVar9 = 177.48000000;
        vVar6 = {-1247.28300000, 1064.87300000, 19.67300000};
        break;
        case 15:
        vVar3 = {32.20470000, 995.59890000, 13.70000000};
        fVar9 = 167.04000000;
        vVar6 = {29.30470000, 973.09880000, 14.60000000};
        break;
        case 16:
        vVar3 = {-464.92320000, 1407.25900000, 14.37100000};
        fVar9 = 357.13140000;
        vVar6 = {-473.72320000, 1413.35900000, 15.27100000};
        break;
        case 17:
        vVar3 = {1134.57600000, 753.51730000, 34.24350000};
        fVar9 = 276.48000000;
        vVar6 = {1149.67600000, 749.81730000, 34.94350000};
        break;
        case 18:
        vVar3 = {-427.43140000, 460.41540000, 9.64300000};
        fVar9 = 81.00000000;
        vVar6 = {-442.63140000, 454.11540000, 9.84300000};
        break;
        case 19:
        vVar3 = {110.94390000, 565.17170000, 13.64000000};
        fVar9 = 273.96000000;
        vVar6 = {113.34390000, 557.07170000, 14.64000000};
        break;
        case 20:
        vVar3 = {925.12400000, -506.67710000, 14.09100000};
        fVar9 = 360.00000000;
        vVar6 = {926.12400000, -489.57710000, 15.29100000};
        break;
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        return;
        break;
        case 27:
        case 28:
        return;
        break;
        default: return;
    }
    while (NOT (sub_5375( 3, vVar3.x, vVar3.y, ref vVar3.z, fVar9, ref l_U212, 12, 1 )))
    {
        WAIT( 0 );
    }
    SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER( l_U212, 0.85000000 );
    if (NOT (IS_CHAR_INJURED( l_U212 )))
    {
        if (IS_PLAYER_PLAYING( sub_353() ))
        {
            TASK_LOOK_AT_CHAR( l_U212, sub_141(), -1, 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U212, vVar6.x, vVar6.y, vVar6.z, 2, -1, 1.00000000 );
        }
    }
    return;
}

int sub_5375(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, boolean bParam7)
{
    unknown uVar10;

    if (NOT (DOES_CHAR_EXIST( (uParam5^) )))
    {
        if (NOT (sub_5516( sub_5402( uParam0 ) )))
        {
            PRINTSTRING( "CREATE_GIRLFRIEND_ON_FOOT.NOT Has_Contact_Model_Loaded\n" );
            sub_6318( sub_5402( uParam0 ) );
            return 0;
        }
        else if (GET_GROUND_Z_FOR_3D_COORD( uParam1, uParam2, (uParam3^), ref uVar10 ))
        {
            sub_6397( sub_5402( uParam0 ), uParam5, uParam1, uParam2, uVar10, uParam4 );
            if (NOT (DOES_DECISION_MAKER_EXIST( g_U33998 )))
            {
                LOAD_COMBAT_DECISION_MAKER( 1, ref g_U33998 );
            }
            if (NOT (DOES_DECISION_MAKER_EXIST( g_U33997 )))
            {
                COPY_GROUP_CHAR_DECISION_MAKER( 65537, ref g_U33997 );
            }
            sub_8125( uParam0, ref uParam6, (uParam5^) );
            SET_CHAR_NEVER_TARGETTED( (uParam5^), 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam5^), 1 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( (uParam5^), 0 );
            SET_CHAR_NAME_DEBUG( (uParam5^), sub_10012( uParam0, 1 ) );
            if (NOT bParam7)
            {
                sub_3658( 1, (uParam5^), sub_3820( uParam0 ), 0 );
                SET_AMBIENT_VOICE_NAME( (uParam5^), sub_3820( uParam0 ) );
                g_U32917 = uParam6;
            }
            SET_CHAR_NAME_DEBUG( (uParam5^), sub_10012( uParam0, 1 ) );
            SET_GROUP_CHAR_DECISION_MAKER( (uParam5^), g_U33997 );
            SET_COMBAT_DECISION_MAKER( (uParam5^), g_U33998 );
            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( (uParam5^), 0 );
            SET_CHAR_HEALTH( (uParam5^), 300 );
            SET_CHAR_MAX_HEALTH( (uParam5^), 300 );
            sub_10405( sub_5402( uParam0 ) );
            return 1;
        }
        else
        {
            (uParam3^) += 0.50000000;
            PRINTSTRING( "CREATE_" );
            PRINTSTRING( sub_10012( uParam0, 1 ) );
            PRINTSTRING( "_ON_FOOT(" );
            PRINTVECTOR( uParam1, uParam2, (uParam3^) );
            PRINTSTRING( ")\n" );
            return 0;
        }
        break;
    }
    PRINTSTRING( "CREATE_GIRLFRIEND_ON_FOOT.DOES_CHAR_EXIST(girl_ped)\n" );
    return 0;
}

int sub_5402(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return 2;
        break;
        case 1:
        return 10;
        break;
        case 2:
        return 28;
        break;
        case 3:
        return 29;
        break;
        case 4:
        return 30;
        break;
    }
    return 57;
}

void sub_5516(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_5527( uParam0 ) );
}

int sub_5527(unknown uParam0)
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
    sub_6190( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_6190(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_6318(unknown uParam0)
{
    REQUEST_MODEL( sub_5527( uParam0 ) );
    return;
}

void sub_6397(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_5527( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_6447( uParam0, (uParam1^) );
    return;
}

void sub_6447(unknown uParam0, unknown uParam1)
{
    sub_6459( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_6459(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_6553( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_7097( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_6553(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_7097(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_6553( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6553( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_6553( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_6553( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_6553( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_6553( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6553( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_6553( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_6553( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6553( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_6553( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6553( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_6553( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

int sub_8125(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        switch ((uParam1^))
        {
            case 0:
            CLEAR_CHAR_PROP( uParam2, 0 );
            CLEAR_CHAR_PROP( uParam2, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 7, 0, 0 );
            return 1;
            break;
            default:
        }
        break;
        case 1:
        CLEAR_CHAR_PROP( uParam2, 0 );
        CLEAR_CHAR_PROP( uParam2, 1 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 7, 0, 0 );
        if ((uParam1^) == 12)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                (uParam1^) = 1;
                break;
                case 1:
                (uParam1^) = 2;
                break;
            }
        }
        switch ((uParam1^))
        {
            case 1:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 0 );
            PRINTSTRING( "KATE_OUTFIT_0, " );
            return 1;
            break;
            case 2:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 1 );
            PRINTSTRING( "KATE_OUTFIT_1, " );
            return 1;
            break;
        }
        break;
        case 2:
        SET_CHAR_COMPONENT_VARIATION( uParam2, 7, 0, 0 );
        if ((uParam1^) == 12)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                (uParam1^) = 3;
                break;
                case 1:
                (uParam1^) = 4;
                break;
                case 2:
                (uParam1^) = 5;
                break;
            }
        }
        switch ((uParam1^))
        {
            case 3:
            CLEAR_CHAR_PROP( uParam2, 0 );
            CLEAR_CHAR_PROP( uParam2, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 2 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
            case 4:
            CLEAR_CHAR_PROP( uParam2, 0 );
            CLEAR_CHAR_PROP( uParam2, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
            case 5:
            CLEAR_CHAR_PROP( uParam2, 0 );
            CLEAR_CHAR_PROP( uParam2, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 2 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 0, 4 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
        }
        break;
        case 3:
        CLEAR_CHAR_PROP( uParam2, 0 );
        CLEAR_CHAR_PROP( uParam2, 1 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 7, 0, 0 );
        if ((uParam1^) == 12)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                (uParam1^) = 6;
                break;
                case 1:
                (uParam1^) = 7;
                break;
                case 2:
                (uParam1^) = 8;
                break;
            }
        }
        switch ((uParam1^))
        {
            case 6:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
            case 7:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
            case 8:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 2 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
        }
        break;
        case 4:
        CLEAR_CHAR_PROP( uParam2, 0 );
        CLEAR_CHAR_PROP( uParam2, 1 );
        SET_CHAR_COMPONENT_VARIATION( uParam2, 7, 0, 0 );
        if ((uParam1^) == 12)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar5 );
            switch (uVar5)
            {
                case 0:
                (uParam1^) = 9;
                break;
                case 1:
                (uParam1^) = 10;
                break;
                case 2:
                (uParam1^) = 11;
                break;
            }
        }
        switch ((uParam1^))
        {
            case 9:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
            case 10:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 1, 3 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 1, 2 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
            case 11:
            SET_CHAR_COMPONENT_VARIATION( uParam2, 0, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 1, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 2, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 3, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 4, 0, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 5, 1, 0 );
            SET_CHAR_COMPONENT_VARIATION( uParam2, 6, 0, 0 );
            return 1;
            break;
        }
        break;
        default:
          case 5:
    }
    return 0;
}

string sub_10012(unknown uParam0, boolean bParam1)
{
    switch (uParam0)
    {
        case 0:
        return "MICHELLE";
        break;
        case 1:
        return "KATE";
        break;
        case 2:
        if (bParam1)
        {
            return "ALEX";
        }
        else
        {
            return "2HOT2HANDLE";
        }
        break;
        case 3:
        if (bParam1)
        {
            return "KIKI";
        }
        else
        {
            return "ECOWARRIOR";
        }
        break;
        case 4:
        if (bParam1)
        {
            return "CARMEN";
        }
        else
        {
            return "LCFINEST";
        }
        break;
    }
    return "[null]";
}

void sub_10405(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_5527( uParam0 ) );
    return;
}

void sub_10922(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, boolean bParam5)
{
    char[16] cVar8;
    unknown[4] uVar12;
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
    char[16] cVar29;
    unknown uVar33;
    string sVar34;

    array(ref uVar12, 4);
    switch (iParam3)
    {
        case 0:
        StrCopy( ref cVar8, "GCM_", 16 );
        break;
        case 1:
        StrCopy( ref cVar8, "GCK_", 16 );
        break;
        case 2:
        StrCopy( ref cVar8, "GCA_", 16 );
        break;
        case 3:
        StrCopy( ref cVar8, "GCKK_", 16 );
        break;
        case 4:
        StrCopy( ref cVar8, "GCC_", 16 );
        break;
    }
    StrCopy( ref cVar29, sub_11070( iParam3, uParam0 ), 16 );
    switch (uParam0)
    {
        case 0:
        switch (uParam4)
        {
            case 1:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "PINTRO", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "INTRO", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (TIME_FIRST_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_14025( iParam3, 2, "TIME_FIRST_opinion" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 2:
            if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_141() )))
            {
                if (IS_CHAR_ON_ANY_BIKE( sub_141() ))
                {
                    ConcatString(ref cVar8, "AMNL", 16);
                    sub_14025( iParam3, 2, "ACT_ARRIVEM_NOTLATE" );
                }
                else if (IS_CHAR_IN_ANY_CAR( sub_141() ))
                {
                    ConcatString(ref cVar8, "ACNL", 16);
                    sub_14025( iParam3, 3, "ACT_ARRIVEC_NOTLATE" );
                }
                else if (IS_CHAR_ON_FOOT( sub_141() ))
                {
                    ConcatString(ref cVar8, "AFNL", 16);
                    sub_14025( iParam3, 1, "ACT_ARRIVEF_NOTLATE" );
                }
                else
                {
                    PRINTSTRING( "PLAY_NEW_DATE_SPEECH.INTRO_date_speech - player on neither bike, car nor foot?" );
                    return 0;
                };;;
            }
            else
            {
                PRINTSTRING( "PLAY_NEW_DATE_SPEECH.INTRO_date_speech - player getting in to a car...\n" );
                return 0;
            }
            break;
            case 3:
            if (IS_CHAR_IN_ANY_CAR( sub_141() ))
            {
                ConcatString(ref cVar8, "AL", 16);
                sub_14025( iParam3, -1, "ACT_ARRIVE_LATE" );
            }
            else if (IS_CHAR_ON_FOOT( sub_141() ))
            {
                ConcatString(ref cVar8, "AFL", 16);
                sub_14025( iParam3, -1, "ACT_ARRIVEF_LATE" );
            }
            else
            {
                SCRIPT_ASSERT( "PLAY_NEW_DATE_SPEECH.INTRO_date_speech - player on neither car nor foot?" );
                return 0;
            }
            break;
            default: return 0;
        }
        break;
        case 5:
        switch (iParam3)
        {
            case 0:
            StrCopy( ref cVar8, "GCMC_", 16 );
            break;
            case 1:
            StrCopy( ref cVar8, "GCKC_", 16 );
            break;
            case 2:
            StrCopy( ref cVar8, "GCAC_", 16 );
            break;
            case 3:
            StrCopy( ref cVar8, "GCKKC_", 16 );
            break;
            case 4:
            StrCopy( ref cVar8, "GCCC_", 16 );
            break;
        }
        ConcatString(ref cVar8, "CON", 16);
        ConcatString(ref cVar8, g_U34005[iParam3], 16);
        g_U34005[iParam3]++;
        break;
        case 6:
        switch (iParam3)
        {
            case 0:
            StrCopy( ref cVar8, "GCMD_", 16 );
            break;
            case 1:
            StrCopy( ref cVar8, "GCKD_", 16 );
            break;
            case 2:
            StrCopy( ref cVar8, "GCAD_", 16 );
            break;
            case 3:
            StrCopy( ref cVar8, "GCKKD_", 16 );
            break;
            case 4:
            StrCopy( ref cVar8, "GCCD_", 16 );
            break;
        }
        ConcatString(ref cVar8, "DRU", 16);
        ConcatString(ref cVar8, g_U33999[iParam3], 16);
        g_U33999[iParam3]++;
        break;
        case 1:
        switch (uParam4)
        {
            case 8:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CG", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCG", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (CAR_GOOD_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_14025( iParam3, 2, "CAR_GOOD_date_opinion" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 9:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CB", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCB", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (CAR_BAD_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_14025( iParam3, -2, "CAR_BAD_date_opinion" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 10:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "COK", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCOK", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (CAR_OK_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_14025( iParam3, 1, "CAR_OK_date_opinion" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 11:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CBK", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCBK", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (CAR_BIKE1_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_14025( iParam3, 1, "CAR_BIKE1_date_opinion" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 12:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CN1", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCN1", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (CAR_NONE1_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_14025( iParam3, 1, "CAR_NONE1_date_opinion" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 16:
            ConcatString(ref cVar8, "CSG", 16);
            sub_14025( iParam3, 1, "CAR_OLD_GOOD_date_opinion" );
            break;
            case 17:
            ConcatString(ref cVar8, "CSB", 16);
            sub_14025( iParam3, -1, "CAR_OLD_BAD_date_opinion" );
            break;
            case 13:
            ConcatString(ref cVar8, "CNG", 16);
            sub_14025( iParam3, 1, "CAR_NEW_GOOD_date_opinion" );
            break;
            case 14:
            ConcatString(ref cVar8, "CNB", 16);
            sub_14025( iParam3, -1, "CAR_NEW_BAD_date_opinion" );
            break;
            case 15:
            sub_1057( "  * text_label_to_play: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref cVar8 );
            sub_1057( "_NULL'' (CAR_NEW_SAME_date_opinion)\n" );
            return 1;
            break;
            case 4:
            ConcatString(ref cVar8, "CN", 16);
            sub_14025( iParam3, 0, "CAR_NONE_date_opinion" );
            break;
            case 5:
            sub_1057( "  * text_label_to_play: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref cVar8 );
            sub_1057( "_NULL'' (CAR_BIKE_date_opinion)\n" );
            return 1;
            break;
            case 6:
            sub_1057( "  * text_label_to_play: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref cVar8 );
            sub_1057( "_NULL'' (CAR_TAXI_date_opinion)\n" );
            return 1;
            break;
            case 7:
            sub_1057( "  * text_label_to_play: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref cVar8 );
            sub_1057( "_NULL'' (CAR_OTHER_date_opinion)\n" );
            return 1;
            break;
            default: return 0;
        }
        break;
        case 2:
        switch (uParam4)
        {
            case 18:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CLG", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCLG", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (CLO_GOOD_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_14025( iParam3, 2, "CLO_GOOD_date_opinion" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 19:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CLOK", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCLOK", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (CLO_OK_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_14025( iParam3, 1, "CLO_OK_date_opinion" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 20:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CLUN", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCLUN", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (CLO_UNUSUAL_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_14025( iParam3, 1, "CLO_UNUSUAL_date_opinion" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 21:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CLB", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCLB", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (CLO_BAD_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_14025( iParam3, -2, "CLO_BAD_date_opinion" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 22:
            ConcatString(ref cVar8, "TORG", 16);
            sub_14025( iParam3, 2, "CLO_TORSO_GOOD_date_opinion" );
            break;
            case 23:
            ConcatString(ref cVar8, "TORB", 16);
            sub_14025( iParam3, -1, "CLO_TORSO_BAD_date_opinion" );
            break;
            case 24:
            ConcatString(ref cVar8, "LG", 16);
            sub_14025( iParam3, 1, "CLO_LEGS_GOOD_date_opinion" );
            break;
            case 25:
            ConcatString(ref cVar8, "LB", 16);
            sub_14025( iParam3, -1, "CLO_LEGS_BAD_date_opinion" );
            break;
            case 26:
            ConcatString(ref cVar8, "FTG", 16);
            sub_14025( iParam3, 1, "CLO_FEET_GOOD_date_opinion" );
            break;
            case 27:
            ConcatString(ref cVar8, "FTB", 16);
            sub_14025( iParam3, -1, "CLO_FEET_BAD_date_opinion" );
            break;
            case 28:
            ConcatString(ref cVar8, "GLSG", 16);
            sub_14025( iParam3, 1, "CLO_GLASSES_GOOD_date_opinion" );
            break;
            case 29:
            ConcatString(ref cVar8, "GLSB", 16);
            sub_14025( iParam3, -1, "CLO_GLASSES_BAD_date_opinion" );
            break;
            case 30:
            ConcatString(ref cVar8, "NOGLSG", 16);
            sub_14025( iParam3, 1, "CLO_NOGLASSES_GOOD_date_opinion" );
            break;
            case 31:
            ConcatString(ref cVar8, "NOGLSB", 16);
            sub_14025( iParam3, -1, "CLO_NOGLASSES_BAD_date_opinion" );
            break;
            case 32:
            ConcatString(ref cVar8, "HATG", 16);
            sub_14025( iParam3, 1, "CLO_HAT_GOOD_date_opinion" );
            break;
            case 33:
            ConcatString(ref cVar8, "HATB", 16);
            sub_14025( iParam3, -1, "CLO_HAT_BAD_date_opinion" );
            break;
            case 34:
            ConcatString(ref cVar8, "NOHATG", 16);
            sub_14025( iParam3, 1, "CLO_NOHAT_GOOD_date_opinion" );
            break;
            case 35:
            ConcatString(ref cVar8, "NOHATB", 16);
            sub_14025( iParam3, -1, "CLO_NOHAT_BAD_date_opinion" );
            break;
            case 36:
            ConcatString(ref cVar8, "SMG", 16);
            sub_14025( iParam3, 3, "CLO_SAME_GOOD_date_opinion" );
            break;
            case 37:
            ConcatString(ref cVar8, "SMB", 16);
            sub_14025( iParam3, -3, "CLO_SAME_BAD_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 3:
        SCRIPT_ASSERT( "RADIO_date_speech" );
        return 1;
        break;
        case 4:
        uVar12[0] = {cVar8};
        ConcatString(ref uVar12[0], "HINT", 16);
        uVar12[1] = {cVar8};
        ConcatString(ref uVar12[1], "HINTR", 16);
        sub_1057( "  * text_labels_to_play[0]: ''" );
        sub_1057( ref cVar29 );
        sub_1057( "'', ''" );
        sub_1057( ref uVar12[0] );
        sub_1057( "'' (HINT_date_speech)\n" );
        sub_1057( "  * text_labels_to_play[1]: ''" );
        sub_1057( ref cVar29 );
        sub_1057( "'', ''" );
        sub_1057( ref uVar12[1] );
        sub_1057( "''\n" );
        return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
        break;
        case 24:
        switch (uParam4)
        {
            case 40:
            ConcatString(ref cVar8, "BTKHM", 16);
            sub_14025( iParam3, -2, "SILENCE_BORED_opinion" );
            break;
            case 41:
            ConcatString(ref cVar8, "BLV", 16);
            sub_14025( iParam3, -5, "SILENCE_LEAVE_opinion" );
            break;
            default: return 0;
        }
        break;
        case 7:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRDN", 16);
            break;
            case 43:
            ConcatString(ref cVar8, "ARRDB", 16);
            break;
            case 44:
            ConcatString(ref cVar8, "ARRDL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 8:
        switch (uParam4)
        {
            case 45:
            ConcatString(ref cVar8, "ARRPF", 16);
            break;
            case 47:
            ConcatString(ref cVar8, "ARRPG", 16);
            break;
            case 48:
            ConcatString(ref cVar8, "ARRCG", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 9:
        switch (uParam4)
        {
            case 49:
            ConcatString(ref cVar8, "ARRFF", 16);
            break;
            case 50:
            ConcatString(ref cVar8, "ARRHI", 16);
            break;
            case 51:
            ConcatString(ref cVar8, "ARRST", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 10:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRPN", 16);
            break;
            case 43:
            ConcatString(ref cVar8, "ARRPB", 16);
            break;
            case 44:
            ConcatString(ref cVar8, "ARRPL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 12:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRBN", 16);
            break;
            case 43:
            ConcatString(ref cVar8, "ARRBB", 16);
            break;
            case 44:
            ConcatString(ref cVar8, "ARRBL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 13:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRSTRN", 16);
            g_U34041 = GET_INT_STAT( 96 );
            break;
            case 43:
            ConcatString(ref cVar8, "ARRSTRB", 16);
            g_U34041 = GET_INT_STAT( 96 );
            break;
            case 44:
            ConcatString(ref cVar8, "ARRSTRL", 16);
            g_U34041 = GET_INT_STAT( 96 );
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 11:
        switch (uParam4)
        {
            case 52:
            if ((iParam3 == 0) || (iParam3 == 1))
            {
                ConcatString(ref cVar8, "ARRSHC", 16);
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar33 );
                g_U32926 = uVar33;
                switch (g_U32926)
                {
                    case 0:
                    ConcatString(ref cVar8, "ARRSR", 16);
                    break;
                    case 1:
                    ConcatString(ref cVar8, "ARRSKW", 16);
                    break;
                    default: return 0;
                }
            }
            break;
            case 53:
            ConcatString(ref cVar8, "ARRSC", 16);
            break;
            case 54:
            ConcatString(ref cVar8, "ARRSHL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 14:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRWN", 16);
            break;
            case 43:
            ConcatString(ref cVar8, "ARRWB", 16);
            break;
            case 44:
            ConcatString(ref cVar8, "ARRWL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 16:
        switch (uParam4)
        {
            case 55:
            ConcatString(ref cVar8, "DLW", 16);
            sub_14025( iParam3, 2, "LEAVE_WON_darts_date_opinion" );
            break;
            case 56:
            ConcatString(ref cVar8, "DLD", 16);
            sub_14025( iParam3, 0, "LEAVE_DREW_darts_date_opinion" );
            break;
            case 57:
            ConcatString(ref cVar8, "DLL", 16);
            sub_14025( iParam3, 1, "LEAVE_LOST_darts_date_opinion" );
            break;
            case 58:
            ConcatString(ref cVar8, "DLA", 16);
            sub_14025( iParam3, -1, "LEAVE_ABANDON_darts_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 15:
        switch (uParam4)
        {
            case 55:
            ConcatString(ref cVar8, "BLW", 16);
            sub_14025( iParam3, 2, "LEAVE_WON_bowl_date_opinion" );
            break;
            case 56:
            ConcatString(ref cVar8, "BLD", 16);
            sub_14025( iParam3, 0, "LEAVE_DREW_bowl_date_opinion" );
            break;
            case 57:
            ConcatString(ref cVar8, "BLL", 16);
            sub_14025( iParam3, 1, "LEAVE_LOST_bowl_date_opinion" );
            break;
            case 58:
            ConcatString(ref cVar8, "BLA", 16);
            sub_14025( iParam3, -1, "LEAVE_ABANDON_bowl_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 17:
        switch (uParam4)
        {
            case 62:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVVLF", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LVPLAY", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (LEAVE_VLADS_FIRST_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            if (sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 ))
            {
                g_U33850 = 1;
                return 1;
            }
            break;
            case 63:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVFAF", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LVFP", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (LEAVE_FAUSTINS_FIRST_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            if (sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 ))
            {
                g_U33849 = 1;
                return 1;
            }
            break;
            case 64:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVIRF", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LVIRD", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (LEAVE_IRISH_FIRST_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            if (sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 ))
            {
                g_U33851 = 1;
                return 1;
            }
            break;
            case 65:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVVLA", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LVDENY", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (LEAVE_VLADS_AGAIN_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 66:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVFA", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LFDENY", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (LEAVE_FAUSTINS_AGAIN_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 67:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "GCM_LVIRA", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "GCM_LIDENY", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (LEAVE_IRISH_AGAIN_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 68:
            ConcatString(ref cVar8, "LPG", 16);
            break;
            case 69:
            ConcatString(ref cVar8, "LPF", 16);
            break;
            case 70:
            ConcatString(ref cVar8, "LCG", 16);
            break;
            default: return 0;
        }
        if (iParam3 == 0)
        {
            sub_1057( "  * text_label_to_play: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref cVar8 );
            sub_1057( "_NULL'' ()\n" );
            return 1;
        }
        break;
        case 18:
        switch (uParam4)
        {
            case 59:
            ConcatString(ref cVar8, "LVFF", 16);
            break;
            case 60:
            if (iParam3 == 0)
            {
                ConcatString(ref cVar8, "LVST", 16);
            }
            else
            {
                ConcatString(ref cVar8, "LVHI", 16);
            }
            break;
            case 61:
            ConcatString(ref cVar8, "LVST", 16);
            break;
            default: return 0;
        }
        break;
        case 19:
        switch (uParam4)
        {
            case 55:
            ConcatString(ref cVar8, "PLW", 16);
            sub_14025( iParam3, 2, "LEAVE_WON_pool_date_opinion" );
            break;
            case 56:
            ConcatString(ref cVar8, "PLD", 16);
            sub_14025( iParam3, 0, "LEAVE_DREW_pool_date_opinion" );
            break;
            case 57:
            ConcatString(ref cVar8, "PLL", 16);
            sub_14025( iParam3, 1, "LEAVE_LOST_pool_date_opinion" );
            break;
            case 58:
            ConcatString(ref cVar8, "PLA", 16);
            sub_14025( iParam3, -1, "LEAVE_ABANDON_pool_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 20:
        switch (uParam4)
        {
            case 72:
            ConcatString(ref cVar8, "LSHC", 16);
            sub_14025( iParam3, 2, "LEAVE_COMEDY_date_opinion" );
            break;
            case 73:
            sub_14025( iParam3, 2, "LEAVE_CABARET_date_opinion" );
            if (iParam3 != 0)
            {
                ConcatString(ref cVar8, "LSHCA", 16);
            }
            else
            {
                uVar12[0] = {cVar8};
                ConcatString(ref uVar12[0], "LSHCA", 16);
                if (NOT g_U33849)
                {
                    uVar12[1] = {cVar8};
                    ConcatString(ref uVar12[1], "LVFAF", 16);
                    uVar12[2] = {cVar8};
                    ConcatString(ref uVar12[2], "LVFP", 16);
                }
                else
                {
                    uVar12[1] = {cVar8};
                    ConcatString(ref uVar12[1], "LVFA", 16);
                    uVar12[2] = {cVar8};
                    ConcatString(ref uVar12[2], "LFDENY", 16);
                }
                sub_1057( "  * text_labels_to_play[0]: ''" );
                sub_1057( ref cVar29 );
                sub_1057( "'', ''" );
                sub_1057( ref uVar12[0] );
                sub_1057( "'' (LEAVE_CABARET_date_opinion - GF_MICHELLE)\n" );
                sub_1057( "  * text_labels_to_play[1]: ''" );
                sub_1057( ref cVar29 );
                sub_1057( "'', ''" );
                sub_1057( ref uVar12[1] );
                sub_1057( "''\n" );
                if (sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 ))
                {
                    g_U33849 = 1;
                    return 1;
                }
            }
            break;
            case 75:
            ConcatString(ref cVar8, "LSHE", 16);
            sub_14025( iParam3, -5, "LEAVE_EARLY_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 21:
        switch (uParam4)
        {
            case 74:
            ConcatString(ref cVar8, "LVSTOK", 16);
            sub_14025( iParam3, 3, "LEAVE_STRIP_date_opinion" );
            break;
            case 75:
            ConcatString(ref cVar8, "LVSTE", 16);
            sub_14025( iParam3, -2, "LEAVE_EARLY_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 22:
        switch (iParam3)
        {
            case 0:
            StrCopy( ref cVar8, "GCMC_", 16 );
            break;
            case 1:
            StrCopy( ref cVar8, "GCKC_", 16 );
            break;
            case 2:
            StrCopy( ref cVar8, "GCKA_", 16 );
            break;
            case 3:
            StrCopy( ref cVar8, "GCKKC_", 16 );
            break;
            case 4:
            StrCopy( ref cVar8, "GCCC_", 16 );
            break;
        }
        ConcatString(ref cVar8, "CON", 16);
        ConcatString(ref cVar8, g_U34005[iParam3], 16);
        g_U34005[iParam3]++;
        break;
        case 23:
        switch (uParam4)
        {
            case 76:
            ConcatString(ref cVar8, "HORN", 16);
            break;
            case 77:
            ConcatString(ref cVar8, "SPOT", 16);
            break;
            case 78:
            ConcatString(ref cVar8, "FUN", 16);
            break;
            case 79:
            ConcatString(ref cVar8, "NMOOD", 16);
            break;
            case 80:
            ConcatString(ref cVar8, "INNU", 16);
            break;
            default: return 0;
        }
        break;
        case 25:
        switch (uParam4)
        {
            case 81:
            ConcatString(ref cVar8, "EG", 16);
            break;
            case 82:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "EB", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "EBR", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (RETURN_BAD_date_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 83:
            ConcatString(ref cVar8, "EGY", 16);
            break;
            case 84:
            ConcatString(ref cVar8, "EGN", 16);
            break;
            case 89:
            ConcatString(ref cVar8, "NORSP", 16);
            break;
            default: return 0;
        }
        break;
        case 26:
        switch (uParam4)
        {
            case 85:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "EY", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "EREJ", 16);
            uVar12[2] = {cVar8};
            ConcatString(ref uVar12[2], "EREJR", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (END_A_PYES_GREJ_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_1057( "  * text_labels_to_play[2]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[2] );
            sub_1057( "''\n" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 86:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "EY", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "KISS", 16);
            uVar12[2] = {cVar8};
            ConcatString(ref uVar12[2], "KISSR", 16);
            uVar12[3] = {cVar8};
            ConcatString(ref uVar12[3], "KISSA", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (END_A_PYES_GKISS_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_1057( "  * text_labels_to_play[2]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[2] );
            sub_1057( "''\n" );
            sub_1057( "  * text_labels_to_play[3]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[3] );
            sub_1057( "''\n" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 87:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "EY", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "BONK", 16);
            uVar12[2] = {cVar8};
            ConcatString(ref uVar12[2], "RSP", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (END_A_PYES_GBONK_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            sub_1057( "  * text_labels_to_play[2]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[2] );
            sub_1057( "''\n" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 88:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "ENO", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "NORSP", 16);
            sub_1057( "  * text_labels_to_play[0]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[0] );
            sub_1057( "'' (END_A_PNO_opinion)\n" );
            sub_1057( "  * text_labels_to_play[1]: ''" );
            sub_1057( ref cVar29 );
            sub_1057( "'', ''" );
            sub_1057( ref uVar12[1] );
            sub_1057( "''\n" );
            return sub_14326( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 89:
            ConcatString(ref cVar8, "NORSP", 16);
            break;
            default: return 0;
        }
        break;
        case 27:
        switch (iParam3)
        {
            case 0:
            sVar34 = "POST_MICHELLE";
            break;
            case 1:
            sVar34 = "POST_KATE";
            return 0;
            break;
            case 2:
            sVar34 = "POST_ALEX";
            break;
            case 3:
            sVar34 = "POST_KIKI";
            break;
            case 4:
            sVar34 = "POST_CARMEN";
            break;
            default: return 0;
        }
        SAY_AMBIENT_SPEECH( sub_141(), sVar34, 1, 1, 3 );
        return 1;
        break;
    }
    if (bParam5)
    {
        sub_1057( "  * unpause text_label_to_play: ''" );
        sub_1057( ref cVar29 );
        sub_1057( "'', ''" );
        sub_1057( ref cVar8 );
        sub_1057( "''\n" );
        return sub_28245( ref cVar8, ref cVar29, uParam1, 6, 1 );
        break;
    }
    sub_1057( "  * text_label_to_play: ''" );
    sub_1057( ref cVar29 );
    sub_1057( "'', ''" );
    sub_1057( ref cVar8 );
    sub_1057( "''\n" );
    return sub_28415( ref cVar8, ref cVar29, uParam1, 6, 1 );
}

string sub_11070(int iParam0, unknown uParam1)
{
    char[16] cVar4;
    char[64] cVar8;
    char[64] cVar24;

    StrCopy( ref cVar4, "GC", 16 );
    switch (iParam0)
    {
        case 0:
        ConcatString(ref cVar4, "M", 16);
        break;
        case 1:
        ConcatString(ref cVar4, "K", 16);
        break;
        case 2:
        ConcatString(ref cVar4, "A", 16);
        break;
        case 3:
        ConcatString(ref cVar4, "KK", 16);
        break;
        case 4:
        ConcatString(ref cVar4, "C", 16);
        break;
    }
    switch (uParam1)
    {
        case 28:
        ConcatString(ref cVar4, "1", 16);
        break;
        case 3:
        PRINTSTRING( "  * get_this_date_speech_audio_block(RADIO_date_speech)\n" );
        break;
        case 0:
        case 1:
        case 2:
        case 4:
        case 7:
        case 8:
        case 9:
        case 10:
        case 12:
        case 13:
        case 11:
        case 14:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 24:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 16:
        case 15:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 25:
        case 26:
        case 23:
        ConcatString(ref cVar4, "3", 16);
        break;
        case 27:
        PRINTSTRING( "  * get_this_date_speech_audio_block(END_POST_COITUS_date_speech)\n" );
        return "";
        break;
        case 5:
        case 22:
        ConcatString(ref cVar4, "C", 16);
        if ((g_U34005[iParam0] <= 0) AND (iParam0 == 0))
        {
            StrCopy( ref cVar8, "invalid conversation_speech_num:", 64 );
            ConcatString(ref cVar8, g_U34005[iParam0], 64);
            SCRIPT_ASSERT( ref cVar8 );
        }
        else if (g_U34005[iParam0] <= 7)
        {
            ConcatString(ref cVar4, "1", 16);
        }
        else
        {
            ConcatString(ref cVar4, "2", 16);
            if (iParam0 == 0)
            {
                return "";
            }
        }
        break;
        case 6:
        ConcatString(ref cVar4, "DC", 16);
        break;
        case 29:
        while (true)
        {
            SCRIPT_ASSERT( "get_this_date_speech_audio_block(''NUMBER_OF_date_speech'')\n" );
            WAIT( 0 );
        }
        break;
        default:
        StrCopy( ref cVar24, "get_this_date_speech_audio_block(''", 64 );
        ConcatString(ref cVar24, sub_11958( uParam1 ), 64);
        ConcatString(ref cVar24, "'')\n", 64);
        while (true)
        {
            SCRIPT_ASSERT( ref cVar24 );
            WAIT( 0 );
        }
    }
    ConcatString(ref cVar4, "AUD", 16);
    if ((GET_LENGTH_OF_LITERAL_STRING( ref cVar4 )) > 0)
    {
        return GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( ref cVar4, 7 );
        break;
    }
    return "null";
}

string sub_11958(unknown uParam0)
{
    char[64] cVar3;

    switch (uParam0)
    {
        case 0:
        return "INTRO_date_speech";
        break;
        case 5:
        return "CONVERSATION_THERE_date_speech";
        break;
        case 6:
        return "CONVERSATION_DRUNK_date_speech";
        break;
        case 1:
        return "CAR_date_speech";
        break;
        case 2:
        return "CLOTHES_date_speech";
        break;
        case 3:
        return "RADIO_date_speech";
        break;
        case 4:
        return " HINT_date_speech";
        break;
        case 7:
        return "ARRIVE_DARTS_date_speech";
        break;
        case 8:
        return "ARRIVE_DRINKING_date_speech";
        break;
        case 9:
        return "ARRIVE_EAT_date_speech";
        break;
        case 10:
        return "ARRIVE_POOL_date_speech";
        break;
        case 12:
        return "ARRIVE_BOWL_date_speech";
        break;
        case 13:
        return "ARRIVE_STRIP_date_speech";
        break;
        case 11:
        return "ARRIVE_SHOW_date_speech";
        break;
        case 14:
        return "ARRIVE_WALK_date_speech";
        break;
        case 16:
        return "LEAVE_DARTS_date_speech";
        break;
        case 15:
        return "LEAVE_BOWL_date_speech";
        break;
        case 17:
        return "LEAVE_DRINKING_date_speech";
        break;
        case 18:
        return "LEAVE_EAT_date_speech";
        break;
        case 19:
        return "LEAVE_POOL_date_speech";
        break;
        case 20:
        return "LEAVE_SHOW_date_speech";
        break;
        case 21:
        return "LEAVE_STRIP_date_speech";
        break;
        case 22:
        return "CONVERSATION_BACK_date_speech";
        break;
        case 23:
        return "SHAG_CARMEN_date_speech";
        break;
        case 24:
        return "SILENCE_date_speech";
        break;
        case 28:
        return "CELLPHONE_date_speech";
        break;
        case 25:
        while (true)
        {
            SCRIPT_ASSERT( "END_FIRST_DATE_good_date_speech - missing\n" );
            WAIT( 0 );
        }
        break;
        case 26:
        return "END_ANOTHER_DATE_bad_date_speech";
        break;
        case 27:
        return "END_POST_COITUS_date_speech";
        break;
        case 29:
        return "NUMBER_OF_date_speech";
        break;
    }
    StrCopy( ref cVar3, "GET_DATE_SPEECH_NAME(", 64 );
    ConcatString(ref cVar3, uParam0, 64);
    ConcatString(ref cVar3, ") not known!!\n", 64);
    SCRIPT_ASSERT( ref cVar3 );
    OPEN_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "ar_dating_speech - " );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar3 );
    CLOSE_DEBUG_FILE();
    return "";
}

void sub_14025(unknown uParam0, unknown uParam1, unknown uParam2)
{
    ProtectedSet(g_U34042[uParam0], ProtectedGet(g_U34042[uParam0]) + uParam1);
    if (ProtectedGet(g_U34042[uParam0]) > 100)
    {
        ProtectedSet(g_U34042[uParam0], 100);
    }
    else if (ProtectedGet(g_U34042[uParam0]) < 0)
    {
        ProtectedSet(g_U34042[uParam0], 0);
    }
    switch (uParam0)
    {
        case 0:
        SET_FLOAT_STAT( 36, ProtectedGet(g_U34042[uParam0]) );
        break;
        case 1:
        SET_FLOAT_STAT( 38, ProtectedGet(g_U34042[uParam0]) );
        break;
        case 2:
        SET_FLOAT_STAT( 32, ProtectedGet(g_U34042[uParam0]) );
        break;
        case 3:
        SET_FLOAT_STAT( 34, ProtectedGet(g_U34042[uParam0]) );
        break;
        case 4:
        SET_FLOAT_STAT( 30, ProtectedGet(g_U34042[uParam0]) );
        break;
    }
    return;
}

void sub_14326(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_14353( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_14353(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_14375( iParam1 )))
    {
        return 0;
    }
    l_U79._fU384 = 0;
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
    sub_15055( ref g_U8395, ref l_U79 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_14375(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_1057( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_1057( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_1057( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_15055(int iParam0, int iParam1)
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

int sub_28245(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_14353( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_28415(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_14353( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_28701(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_29010(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_1057( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_1057( "\n speech is not playing" );
    }
    return 0;
}

void sub_29346(int iParam0, unknown uParam1)
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