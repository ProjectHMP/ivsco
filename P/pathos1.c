void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U118 = 0;
    l_U142 = 0;
    l_U145 = 1;
    l_U146 = 1000;
    l_U147 = 1;
    l_U166 = 50;
    l_U167 = 90.70710000;
    l_U168 = 1;
    l_U169 = 0;
    l_U171 = 0;
    if (sub_184( l_U166, l_U145 ))
    {
        if (IS_PLAYER_PLAYING( sub_885() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_885(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_964( ref l_U154, 0 );
                    sub_1088();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U107)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (sub_2211())
                            {
                                WAIT( 0 );
                            }
                            else if (g_U10978)
                            {
                                sub_1088();
                            }
                            if (NOT sub_2395())
                            {
                                sub_1088();
                            }
                            switch (l_U103)
                            {
                                case 0:
                                sub_2480();
                                break;
                                case 1:
                                sub_3367();
                                break;
                            }
                        }
                        else
                        {
                            sub_1088();
                        }
                        sub_8876();
                    }
                    if (l_U107)
                    {
                        switch (l_U104)
                        {
                            case 0:
                            sub_8992();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT g_U65019)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2220() )))
                {
                    if (sub_3616() < 25)
                    {
                        CLEAR_PRINTS();
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 0 );
                }
                g_U65019 = 1;
            }
            sub_1088();;
        }
        else
        {
            TERMINATE_THIS_SCRIPT();
        }
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_184(unknown uParam0, unknown uParam1)
{
    if (sub_193())
    {
        return 0;
    }
    return sub_240( uParam0, uParam1 );
}

int sub_193()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_240(unknown uParam0, int iParam1)
{
    unknown uVar4;

    if (NOT g_U34175._fU0)
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    uVar4 = sub_284( uParam0 );
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U34048[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U34048[uVar4]._fU4)
    {
        return 0;
    }
    if (g_U9893._fU4)
    {
        return 0;
    }
    if (NOT g_U34048[uVar4]._fU24)
    {
        if (sub_561( g_U34048[uVar4]._fU8 ))
        {
            g_U34048[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U34048[uVar4]._fU24)
    {
        return 0;
    }
    return g_U34048[uVar4]._fU28 == iParam1;
}

int sub_284(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_295( uParam0 )))
    {
        sub_404( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_295(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 38))
    {
        return 0;
    }
    iVar4 = 52;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_404(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_561(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar7 == uParam0._fU0._fU4) AND (iVar6 == uParam0._fU0._fU0))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_730( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_730(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_885()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_964(int iParam0, unknown uParam1)
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

void sub_1088()
{
    if (((l_U109) AND (l_U110)) AND (NOT l_U111))
    {
        if (sub_1120())
        {
            sub_1167( 0 );
        }
    }
    if (sub_1389( l_U166, l_U145 ))
    {
        sub_1485( l_U166, l_U145 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_885() ))
        {
            SET_PLAYER_CONTROL( sub_885(), 1 );
        }
        sub_1955();
    }
    CLEAR_NAMED_CUTSCENE( "rppat1" );
    REMOVE_BLIP( l_U124 );
    if (DOES_CHAR_EXIST( l_U119 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            FREEZE_CHAR_POSITION( l_U119, 0 );
            CLEAR_CHAR_TASKS( l_U119 );
        }
        else
        {
            REMOVE_CHAR_ELEGANTLY( ref l_U119 );
        }
    }
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U119 );
    l_U119 = nil;
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1120()
{
    if (g_U9241._fU148[0] == 0)
    {
        return 0;
    }
    return 1;
}

void sub_1167(int iParam0)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_1205( I );
            g_U9241._fU148[I] = 0;
            g_U9241._fU112[I] = -1;
            StrCopy( ref g_U9241._fU28[I], "", 16 );
        }
    }
    return;
}

void sub_1205(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_1257( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_1257(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

int sub_1389(int iParam0, int iParam1)
{
    if (NOT g_U34175._fU4)
    {
        return 0;
    }
    if (NOT (g_U34175._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U34175._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_1485(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1389( uParam0, uParam1 )))
    {
        sub_404( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1581();
    if (g_U813)
    {
        sub_1673();
    }
    else
    {
        sub_1791();
    }
    g_U10978 = 0;
    return;
}

void sub_1581()
{
    if (g_U0)
    {
        g_U34175._fU0 = 0;
    }
    else
    {
        g_U34175._fU0 = 1;
    }
    g_U34175._fU4 = 0;
    g_U34175._fU8 = 54;
    g_U34175._fU12 = 0;
    return;
}

void sub_1673()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1719();
    return;
}

void sub_1719()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1791()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1837();
    return;
}

void sub_1837()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1955()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

int sub_2211()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2220() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2220(), ref l_U122 );
        if (NOT (l_U122 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U122 ))
            {
                GET_CAR_SPEED( l_U122, ref l_U143 );
                if (l_U143 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_2220()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2395()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

void sub_2480()
{
    switch (l_U102)
    {
        case 0:
        l_U130 = {-185.81410000, 342.81330000, 14.30180000};
        l_U144 = -165448092;
        REQUEST_MODEL( l_U144 );
        REQUEST_ANIMS( "misspathos1" );
        while (NOT (HAS_MODEL_LOADED( l_U144 )))
        {
            WAIT( 0 );
        }
        while (NOT (HAVE_ANIMS_LOADED( "misspathos1" )))
        {
            WAIT( 0 );
        }
        OPEN_SEQUENCE_TASK( ref l_U152 );
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "hh_lp_01", "misspathos1", 8.00000000, 1, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U152 );
        l_U102 = 1;
        break;
        case 1:
        if (NOT l_U108)
        {
            CLEAR_AREA( -185.81410000, 342.81330000, 14.79240000, 10.00000000, 1 );
            CREATE_CHAR( 26, l_U144, l_U130._fU0, l_U130._fU4, l_U130._fU8, ref l_U119, 1 );
            SET_CHAR_PROP_INDEX( l_U119, 0, 0 );
            SET_CHAR_HEADING( l_U119, l_U167 );
            SET_CHAR_NEVER_TARGETTED( l_U119, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U119, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U119, 1 );
            TASK_PERFORM_SEQUENCE( l_U119, l_U152 );
            CLEAR_SEQUENCE_TASK( l_U152 );
            SET_CHAR_COORDINATES( l_U119, l_U130._fU0, l_U130._fU4, l_U130._fU8 );
            l_U108 = 1;
        }
        if (NOT (DOES_BLIP_EXIST( l_U124 )))
        {
            ADD_BLIP_FOR_CHAR( l_U119, ref l_U124 );
            CHANGE_BLIP_SPRITE( l_U124, 63 );
            SET_BLIP_AS_FRIENDLY( l_U124, 1 );
            CHANGE_BLIP_SCALE( l_U124, 1.00000000 );
            CHANGE_BLIP_DISPLAY( l_U124, 2 );
        }
        if (l_U108)
        {
            sub_3058( "PIPAUD" );
            sub_3177( 0, sub_2220(), "NIKO", 0 );
            sub_3177( 1, l_U119, "PATHOS", 0 );
            l_U103 = 1;
        }
        break;
    }
    return;
}

void sub_3058(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_3075();
    return;
}

void sub_3075()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_3177(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3257( "\n PED NUMBER ", uParam0 );
    sub_3297( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3257(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3297(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3367()
{
    if ((IS_CHAR_INJURED( l_U119 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U119, sub_2220(), 0 )))
    {
        sub_964( ref l_U154, 0 );
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 0 );
        }
        sub_1088();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2220() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2220(), ref l_U122 );
        if (NOT (l_U122 == l_U123))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U123 );
            l_U123 = l_U122;
        }
    }
    if (DOES_CHAR_EXIST( l_U119 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            if (IS_CHAR_RESPONDING_TO_EVENT( l_U119, 49 ))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U119, 0 );
                sub_1088();
            }
        }
    }
    if ((sub_3616() < 25) AND (IS_CHAR_ON_FOOT( sub_2220() )))
    {
        sub_3848( ref l_U119, ref l_U170, ref l_U130, ref l_U167, ref l_U171, 1.10000000, "hh_lp_01", "missPATHOS1" );
    }
    switch (l_U105)
    {
        case 0:
        if ((((IS_CHAR_INJURED( l_U119 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U119, sub_2220(), 0 ))) || (IS_CHAR_ON_FIRE( l_U119 ))) || (IS_WANTED_LEVEL_GREATER( sub_885(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_885(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2220() )))
                {
                    if (sub_3616() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 0 );
            }
            sub_1088();
        }
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            if ((sub_3616() < 18) AND (IS_CHAR_ON_FOOT( sub_2220() )))
            {
                if ((NOT IS_HINT_RUNNING()) AND (NOT l_U169))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 6000 );
                    TASK_LOOK_AT_CHAR( l_U119, sub_2220(), -2, 0 );
                    l_U169 = 1;
                }
                l_U105 = 1;
            }
        }
        break;
        case 1:
        if ((((IS_CHAR_INJURED( l_U119 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U119, sub_2220(), 0 ))) || (IS_CHAR_ON_FIRE( l_U119 ))) || (IS_WANTED_LEVEL_GREATER( sub_885(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_885(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2220() )))
                {
                    if (sub_3616() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 0 );
            }
            sub_1088();
        }
        if (l_U168)
        {
            sub_4711( "PIP_STREET", ref l_U154, 4, 1 );
            SETTIMERA( 0 );
            l_U168 = 0;
        }
        else if (TIMERA() > 4500)
        {
            GENERATE_RANDOM_INT_IN_RANGE( l_U147, l_U146, ref l_U148 );
            if (l_U148 > 970)
            {
                l_U168 = 1;
            }
        }
        if (sub_3616() < 3.50000000)
        {
            if (IS_CHAR_ON_FOOT( sub_2220() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U119 )))
                {
                    if (sub_5801( 1, 1 ))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U119, sub_2220(), 0 )))
                        {
                            if (NOT (IS_CHAR_ON_FIRE( l_U119 )))
                            {
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_885(), 0 )))
                                {
                                    if (sub_2395())
                                    {
                                        SET_MISSION_FLAG( 1 );
                                        SET_PLAYER_CONTROL( sub_885(), 0 );
                                        DO_SCREEN_FADE_OUT( 100 );
                                        while (NOT IS_SCREEN_FADED_OUT())
                                        {
                                            WAIT( 0 );
                                        }
                                        l_U105 = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (sub_3616() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 0 );
            }
            sub_964( ref l_U154, 1 );
            l_U105 = 0;
        }
        break;
        case 2:
        l_U168 = 1;
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U119, 0, 0, 0 );
        }
        CLEAR_WANTED_LEVEL( sub_885() );
        sub_964( ref l_U154, 0 );
        CLEAR_PRINTS();
        LOAD_ADDITIONAL_TEXT( "PIPAUD", 6 );
        sub_6401();
        CLEAR_NAMED_CUTSCENE( "rppat1" );
        START_CUTSCENE_NOW( "rppat1" );
        sub_6553( l_U166, l_U145 );
        l_U107 = 1;
        break;
    }
    return;
}

void sub_3616()
{
    if (NOT (IS_CHAR_DEAD( l_U119 )))
    {
        GET_CHAR_COORDINATES( sub_2220(), ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
        GET_CHAR_COORDINATES( l_U119, ref l_U136._fU0, ref l_U136._fU4, ref l_U136._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U133._fU0, l_U133._fU4, l_U133._fU8, l_U136._fU0, l_U136._fU4, l_U136._fU8, ref l_U142 );
        return l_U142;
    }
    return l_U142;
}

void sub_3848(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    int iVar10;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (uParam4^))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( (uParam0^), iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam5, uParam5, 1.80000000, 0 )))
            {
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8 );
                OPEN_SEQUENCE_TASK( uParam1 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_ACHIEVE_HEADING( 0, (uParam3^) );
                CLOSE_SEQUENCE_TASK( (uParam1^) );
                TASK_PERFORM_SEQUENCE( (uParam0^), (uParam1^) );
                CLEAR_SEQUENCE_TASK( (uParam1^) );
                (uParam4^) = 1;
            }
        }
        else
        {
            PRINTSTRING( "fail 0" );
            PRINTNL();
            GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar10 );
            if (iVar10 == 7)
            {
                PRINTSTRING( "fail 1" );
                PRINTNL();
                TASK_PLAY_ANIM( (uParam0^), uParam6, uParam7, 8.00000000, 1, 0, 0, 0, -2 );
                (uParam4^) = 0;
            }
        }
    }
    return;
}

void sub_4711(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_4732( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_4732(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_4786( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_4786(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_4808( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    sub_5496( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_4808(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_4885( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_4885( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_4885( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_4885(unknown uParam0)
{
    return;
}

void sub_5496(int iParam0, int iParam1)
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

int sub_5801(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2220() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2220(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2220() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2220(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2220()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2220() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2220() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_885() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_885() )))
    {
        return 0;
    }
    return 1;
}

void sub_6401()
{
    if (g_U64542._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U64542._fU4 )))
    {
        return;
    }
    DELETE_CHAR( ref g_U64542._fU4 );
    g_U64542._fU0 = 57;
    g_U64542._fU4 = nil;
    g_U64542._fU8 = 28;
    return;
}

void sub_6553(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_404( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_284( uParam0 );
    if (g_U34175._fU4)
    {
        sub_404( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U34048[uVar4]._fU0 = 1;
        g_U34048[uVar4]._fU4 = 1;
        g_U34048[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U34048[uVar4]._fU0)
    {
        sub_404( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_6916();
    sub_7687( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_7831( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_6916()
{
    sub_6925();
    sub_7028( ref g_U9893._fU68 );
    sub_7077();
    return;
}

void sub_6925()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_7028(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7077()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7115( 1, g_U569[I] )) == 0)
        {
            sub_7366( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_7544())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_7115(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_7366(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_7451( g_U569 - 1 );
    return;
}

void sub_7451(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_7544()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7115( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_7687(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_7721();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_7721()
{
    if (g_U0)
    {
        return;
    }
    if (g_U34175._fU16._fU4 < g_U34175._fU16._fU0)
    {
        return;
    }
    AWARD_ACHIEVEMENT( 36 );
    return;
}

void sub_7831(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 38:
        StrCopy( ref cVar4, "BADMAN", 16 );
        iVar8 = 1;
        break;
        case 39:
        StrCopy( ref cVar4, "BRIAN", 16 );
        iVar8 = 3;
        break;
        case 40:
        StrCopy( ref cVar4, "CHERISE", 16 );
        iVar8 = 1;
        break;
        case 41:
        StrCopy( ref cVar4, "EDDIE", 16 );
        iVar8 = 2;
        break;
        case 42:
        StrCopy( ref cVar4, "GRACIE", 16 );
        iVar8 = 1;
        break;
        case 43:
        StrCopy( ref cVar4, "HOSSAN", 16 );
        iVar8 = 1;
        break;
        case 44:
        StrCopy( ref cVar4, "ILYENA", 16 );
        iVar8 = 1;
        break;
        case 45:
        StrCopy( ref cVar4, "IVAN", 16 );
        iVar8 = 1;
        break;
        case 46:
        StrCopy( ref cVar4, "JEFF", 16 );
        iVar8 = 3;
        break;
        case 47:
        StrCopy( ref cVar4, "MARNIE", 16 );
        iVar8 = 2;
        break;
        case 48:
        StrCopy( ref cVar4, "CLARENCE", 16 );
        iVar8 = 1;
        break;
        case 49:
        StrCopy( ref cVar4, "MEL", 16 );
        iVar8 = 1;
        break;
        case 50:
        StrCopy( ref cVar4, "PATHOS", 16 );
        iVar8 = 2;
        break;
        case 51:
        StrCopy( ref cVar4, "SARA", 16 );
        iVar8 = 2;
        break;
        default:
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: Unknown Random Character ID" );
        return;
    }
    ConcatString(ref cVar4, "_", 16);
    if (iParam1 <= 0)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence < 0" );
        return;
    }
    if (iParam1 > iVar8)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence > max sequence" );
        return;
    }
    switch (iParam1)
    {
        case 1:
        ConcatString(ref cVar4, "1", 16);
        break;
        case 2:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 3:
        ConcatString(ref cVar4, "3", 16);
        break;
        default: SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: unknown problem with paramSequence" );
    }
    sub_8677( cVar4 );
    return;
}

void sub_8677(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

int sub_8876()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_3616() > 30) || (sub_2211()))
        {
            HINT_CAM( l_U130._fU0, l_U130._fU4, l_U130._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_8992()
{
    if (IS_CHAR_DEAD( l_U119 ))
    {
        PRINT_NOW( "PTS1_PMT3", 7500, 1 );
        sub_964( ref l_U154, 0 );
        sub_9060( 50, l_U119, 28 );
        sub_9110();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2220() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2220(), ref l_U122 );
        if (NOT (l_U122 == l_U123))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U123 );
            l_U123 = l_U122;
        }
    }
    if (l_U116)
    {
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U119, sub_9336() )))
            {
                if (DOES_BLIP_EXIST( l_U124 ))
                {
                    if (sub_3616() < 12.00000000)
                    {
                        REMOVE_BLIP( l_U124 );
                        SET_GROUP_MEMBER( sub_9336(), l_U119 );
                        CLEAR_PRINTS();
                        if (sub_9465( l_U154 ))
                        {
                            sub_9511( "PIMA2_BANT2", ref l_U154, 6, 1 );
                        }
                    }
                }
                else if (sub_9633( l_U154 ))
                {
                    sub_9804( ref l_U154 );
                }
                ADD_BLIP_FOR_CHAR( l_U119, ref l_U124 );
                SET_BLIP_AS_FRIENDLY( l_U124, 1 );
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PTS1_PMT31" )))
                {
                    CLEAR_PRINTS();
                    PRINT( "PTS1_PMT31", 7500, 1 );
                }
            }
        }
    }
    switch (l_U106)
    {
        case 0:
        CLEAR_HELP();
        if (DOES_VEHICLE_EXIST( l_U123 ))
        {
            if (IS_VEH_DRIVEABLE( l_U123 ))
            {
                SET_CAR_AS_MISSION_CAR( l_U123 );
                SET_CAR_COORDINATES( l_U123, -192.92810000, 334.08430000, 13.71170000 );
                SET_CAR_HEADING( l_U123, 179.68690000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U123 );
                SET_CAR_IN_CUTSCENE( l_U123, 1 );
            }
        }
        CLEAR_AREA( l_U130._fU0, l_U130._fU4, l_U130._fU8, 5.00000000, 1 );
        SET_WIDESCREEN_BORDERS( 1 );
        DELETE_CHAR( ref l_U119 );
        GET_CHAR_COORDINATES( sub_2220(), ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SWITCH_PED_PATHS_OFF( l_U136._fU0 - 5.00000000, l_U136._fU4 - 5.00000000, l_U136._fU8 - 5.00000000, l_U136._fU0 + 5.00000000, l_U136._fU4 + 5.00000000, l_U136._fU8 + 5.00000000 );
        CLEAR_AREA( l_U133._fU0, l_U133._fU4, l_U133._fU8, 100.00000000, 1 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U150 );
        LOAD_COMBAT_DECISION_MAKER( 6, ref l_U151 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        REQUEST_MODEL( -301223260 );
        while (NOT (HAS_MODEL_LOADED( -301223260 )))
        {
            WAIT( 0 );
        }
        CREATE_CHAR( 26, -301223260, -224.24010000, 319.08210000, 13.86940000, ref l_U120, 1 );
        SET_CHAR_HEADING( l_U120, 125.25340000 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U120, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U120, 10.00000000 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U120, 23 );
        CLEAR_NAMED_CUTSCENE( "rppat1" );
        CREATE_CHAR( 26, l_U144, -215.09630000, 326.19560000, 13.85910000, ref l_U119, 1 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U119, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U119, 10.00000000 );
        SET_CHAR_PROP_INDEX( l_U119, 0, 0 );
        SET_CHAR_HEALTH( l_U119, 250 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U119, 24 );
        SET_CHAR_HEADING( l_U119, 128.32600000 );
        SET_PED_DIES_WHEN_INJURED( l_U119, 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U119, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U119, 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U144 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U119, 0 );
        SET_CHAR_HEADING( sub_2220(), 200.27020000 );
        SET_CHAR_COORDINATES( sub_2220(), -187.91290000, 343.67210000, 13.79740000 );
        SET_CHAR_HEADING( sub_2220(), 191.21660000 );
        CREATE_CHAR( 26, -301223260, -240.90660000, 315.78810000, 13.68360000, ref l_U121, 1 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U121, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U121, 10.00000000 );
        SET_CHAR_HEADING( l_U121, 322.63440000 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U121 );
        if (NOT (DOES_BLIP_EXIST( l_U126 )))
        {
            ADD_BLIP_FOR_CHAR( l_U121, ref l_U126 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U125 )))
        {
            ADD_BLIP_FOR_CHAR( l_U120, ref l_U125 );
        }
        OPEN_SEQUENCE_TASK( ref l_U153 );
        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, -250.72950000, 313.34140000, 13.77820000, 4, -2, 3.50000000 );
        CLOSE_SEQUENCE_TASK( l_U153 );
        SET_RELATIONSHIP( 5, 23, 0 );
        SET_RELATIONSHIP( 5, 24, 23 );
        sub_3177( 1, l_U119, "PATHOS", 0 );
        LOAD_ADDITIONAL_TEXT( "WI_PTS1", 0 );
        l_U106 = 1;
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U120 )))
        {
            SET_CHAR_COORDINATES( l_U120, -221.24010000, 319.08210000, 13.86940000 );
            SET_CHAR_HEADING( l_U120, 125.25340000 );
        }
        CLEAR_HELP();
        SET_CAM_BEHIND_PED( sub_2220() );
        SET_PED_DENSITY_MULTIPLIER( 0.40000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.70000000 );
        SWITCH_PED_PATHS_ON( l_U136._fU0 - 5.00000000, l_U136._fU4 - 5.00000000, l_U136._fU8 - 5.00000000, l_U136._fU0 + 5.00000000, l_U136._fU4 + 5.00000000, l_U136._fU8 + 5.00000000 );
        CLEAR_AREA_OF_CARS( -220.41000000, 352.23000000, 14.84000000, 15.00000000 );
        SET_GAME_CAM_HEADING( 305.00000000 );
        LOAD_SCENE( l_U130._fU0, l_U130._fU4, l_U130._fU8 );
        DO_SCREEN_FADE_IN_UNHACKED( 100 );
        if (NOT l_U114)
        {
            if (NOT (IS_CHAR_INJURED( l_U120 )))
            {
                SET_CHAR_AS_ENEMY( l_U120, 1 );
                TASK_PERFORM_SEQUENCE( l_U120, l_U153 );
                if (NOT (IS_CHAR_INJURED( l_U119 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U119, 0 );
                    TASK_PERFORM_SEQUENCE( l_U119, l_U153 );
                }
            }
            l_U114 = 1;
        }
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        if (NOT l_U113)
        {
            if (NOT (IS_CHAR_INJURED( l_U120 )))
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PTS1_PMT1" )))
                {
                    SET_PLAYER_CONTROL_ADVANCED( sub_885(), 1, 1, 1 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    PRINT( "PTS1_PMT1", 7500, 1 );
                }
                l_U113 = 1;
            }
        }
        SET_WANTED_MULTIPLIER( 0.00000000 );
        if (IS_SCREEN_FADED_IN())
        {
            if (NOT (IS_CHAR_INJURED( l_U119 )))
            {
                SET_CHAR_RELATIONSHIP( l_U119, 1, 0 );
            }
            l_U111 = 1;
            l_U106 = 2;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U119 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U119, -228.27510000, 315.53590000, 13.57380000, 3.00000000, 3.00000000, 4.00000000, 0 ))
            {
                if (NOT l_U115)
                {
                    if (NOT (IS_CHAR_INJURED( l_U120 )))
                    {
                        SET_CHAR_IS_TARGET_PRIORITY( l_U120, 1 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U120, 1, 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U121 )))
                    {
                        SET_CHAR_AS_ENEMY( l_U121, 1 );
                        SET_CHAR_IS_TARGET_PRIORITY( l_U121, 1 );
                        SET_CHAR_RELATIONSHIP_GROUP( l_U121, 23 );
                        SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U121, 1, 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U119 )))
                    {
                        SET_CHAR_RELATIONSHIP_GROUP( l_U119, 0 );
                    }
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -301223260 );
                    l_U115 = 1;
                }
                else
                {
                    l_U106 = 3;
                }
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U120 )))
        {
            TASK_COMBAT( l_U120, l_U119 );
            SET_COMBAT_DECISION_MAKER( l_U120, l_U150 );
        }
        if (NOT (IS_CHAR_INJURED( l_U121 )))
        {
            TASK_COMBAT( l_U121, l_U119 );
            SET_COMBAT_DECISION_MAKER( l_U121, l_U150 );
        }
        if (NOT (IS_CHAR_INJURED( l_U119 )))
        {
            SET_COMBAT_DECISION_MAKER( l_U119, l_U150 );
            if (NOT (IS_CHAR_INJURED( l_U120 )))
            {
                TASK_COMBAT( l_U119, l_U120 );
            }
        }
        SET_ALL_RANDOM_PEDS_FLEE( sub_885(), 1 );
        l_U106 = 4;
        break;
        case 4:
        if (sub_3616() < 20)
        {
            if (NOT (IS_CHAR_INJURED( l_U119 )))
            {
                if (l_U168)
                {
                    sub_4711( "PIP_FIGHT", ref l_U160, 6, 1 );
                    SETTIMERA( 0 );
                    l_U168 = 0;
                }
                else if (TIMERA() > 4500)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( l_U147, l_U146, ref l_U148 );
                    if (l_U148 > 970)
                    {
                        l_U168 = 1;
                    }
                }
            }
            else
            {
                sub_964( ref l_U160, 0 );
            }
        }
        if ((IS_CHAR_INJURED( l_U120 )) AND (NOT (IS_CHAR_INJURED( l_U121 ))))
        {
            if (NOT (IS_CHAR_INJURED( l_U119 )))
            {
                TASK_COMBAT( l_U119, l_U121 );
            }
        }
        if (NOT l_U112)
        {
            if (sub_3616() < 15)
            {
                SET_CHAR_RELATIONSHIP_GROUP( l_U119, 0 );
                SET_GROUP_MEMBER( sub_9336(), l_U119 );
                l_U116 = 1;
            }
            l_U112 = 1;
        }
        if (IS_CHAR_INJURED( l_U120 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U120 )))
            {
                SET_CHAR_HEALTH( l_U120, 5 );
            }
            if (DOES_BLIP_EXIST( l_U125 ))
            {
                REMOVE_BLIP( l_U125 );
            }
        }
        if (IS_CHAR_INJURED( l_U121 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U121 )))
            {
                SET_CHAR_HEALTH( l_U121, 5 );
            }
            if (DOES_BLIP_EXIST( l_U126 ))
            {
                REMOVE_BLIP( l_U126 );
            }
        }
        if ((sub_3616() > 150) AND (NOT (IS_CHAR_ON_SCREEN( l_U119 ))))
        {
            if (NOT (IS_CHAR_INJURED( l_U119 )))
            {
                DELETE_CHAR( ref l_U119 );
            }
            if (NOT (IS_CHAR_INJURED( l_U120 )))
            {
                DELETE_CHAR( ref l_U120 );
            }
            if (NOT (IS_CHAR_INJURED( l_U121 )))
            {
                DELETE_CHAR( ref l_U121 );
            }
        }
        if (((IS_CHAR_INJURED( l_U120 )) AND (IS_CHAR_INJURED( l_U121 ))) AND (NOT (IS_CHAR_DEAD( l_U119 ))))
        {
            CLEAR_SEQUENCE_TASK( l_U153 );
            SET_PLAYER_CONTROL( sub_885(), 0 );
            DO_SCREEN_FADE_OUT( 250 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U109 = 0;
            l_U106 = 5;
        }
        break;
        case 5:
        if (NOT l_U109)
        {
            if (DOES_VEHICLE_EXIST( l_U123 ))
            {
                if (IS_VEH_DRIVEABLE( l_U123 ))
                {
                    SET_CAR_AS_MISSION_CAR( l_U123 );
                    SET_CAR_COORDINATES( l_U123, -221.93340000, 307.32390000, 13.66810000 );
                    SET_CAR_HEADING( l_U123, 194.48780000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U123 );
                    SET_CAR_IN_CUTSCENE( l_U123, 1 );
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_2220() )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2220() );
                if (IS_CHAR_IN_ANY_CAR( sub_2220() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_2220(), -228.95990000, 313.85050000, 13.56780000 );
                }
                SET_CHAR_COORDINATES( sub_2220(), -228.95990000, 313.85050000, 13.56780000 );
                SET_CHAR_HEADING( sub_2220(), 20.64420000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( sub_2220(), l_U119 );
                TASK_LOOK_AT_CHAR( sub_2220(), l_U119, -2, 0 );
                REMOVE_PED_HELMET( sub_2220(), 0 );
                CLEAR_WANTED_LEVEL( sub_885() );
            }
            if (NOT (IS_CHAR_INJURED( l_U119 )))
            {
                SET_CHAR_COORDINATES( l_U119, -229.21390000, 314.90570000, 13.56590000 );
                SET_CHAR_HEADING( l_U119, 213.68120000 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U119 );
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U119, sub_2220() );
                REMOVE_DECISION_MAKER( l_U151 );
                TASK_LOOK_AT_CHAR( l_U119, sub_2220(), -2, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U119, 1 );
            }
            BEGIN_CAM_COMMANDS( ref l_U149 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            CREATE_CAM( 14, ref l_U127 );
            SET_CAM_POS( l_U127, -233.87000000, 313.33000000, 14.85000000 );
            SET_CAM_FOV( l_U127, 45.00000000 );
            SET_CAM_ROT( l_U127, -4.36000000, 0.00000000, -84.46000000 );
            SET_CAM_NEAR_DOF( l_U127, 0.10000000 );
            SET_CAM_FAR_DOF( l_U127, 30.00000000 );
            CREATE_CAM( 14, ref l_U128 );
            SET_CAM_POS( l_U128, -230.74000000, 313.74000000, 15.00000000 );
            SET_CAM_FOV( l_U128, 59.10000000 );
            SET_CAM_ROT( l_U128, -3.79000000, 0.00000000, -82.75000000 );
            SET_CAM_NEAR_DOF( l_U128, 0.10000000 );
            SET_CAM_FAR_DOF( l_U128, 8.00000000 );
            l_U109 = 1;
        }
        else
        {
            SET_CAM_PROPAGATE( l_U127, 1 );
            SET_CAM_ACTIVE( l_U127, 1 );
            SET_USE_HIGHDOF( 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            if (NOT (IS_CHAR_INJURED( l_U119 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U119 );
            }
            DO_SCREEN_FADE_IN( 250 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            SETTIMERA( 0 );
            l_U106 = 6;
        }
        break;
        case 6:
        if ((TIMERA() >= 2000) AND (sub_14074()))
        {
            sub_964( ref l_U154, 0 );
            CLEAR_PRINTS();
            l_U118 = 1;
            l_U106 = 7;
        }
        if (NOT l_U117)
        {
            sub_964( ref l_U160, 0 );
            l_U116 = 0;
            sub_4711( "PIP_THANKS", ref l_U154, 6, 1 );
            WAIT( 250 );
            CREATE_CAM( 3, ref l_U129 );
            SET_CAM_PROPAGATE( l_U129, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U129, l_U127, l_U128, 20000, 0 );
            l_U117 = 1;
        }
        else if (sub_14334( ref l_U154 ))
        {
            SET_ALL_RANDOM_PEDS_FLEE( sub_885(), 0 );
            REMOVE_CHAR_FROM_GROUP( l_U119 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U119, -229.21390000, 324.90570000, 13.56590000, 2, -2, 1.50000000 );
            SETTIMERB( 0 );
            l_U106 = 7;
        }
        else if (NOT (IS_CHAR_INJURED( sub_2220() )))
        {
            TASK_TURN_CHAR_TO_FACE_CHAR( l_U119, sub_2220() );
        };;;
        break;
        case 7:
        if (((NOT (IS_CHAR_ON_SCREEN( l_U119 ))) || (TIMERB() > 6000)) || (l_U118))
        {
            if (NOT (IS_CHAR_INJURED( sub_2220() )))
            {
                TASK_LOOK_AT_CHAR( sub_2220(), l_U119, 0, 0 );
            }
            DELETE_CHAR( ref l_U119 );
            END_CAM_COMMANDS( ref l_U149 );
            SET_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL( sub_885(), 1 );
            CLEAR_CHAR_TASKS( sub_2220() );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_USE_HIGHDOF( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_14665();
        }
        break;
    }
    return;
}

void sub_9060(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_9110()
{
    g_U64755++;
    if (g_U64755 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_885(), 150 );
        SAY_AMBIENT_SPEECH( sub_2220(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    else
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_885(), 150 );
    }
    sub_1088();
    return;
}

void sub_9336()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_9465(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_9511(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9532( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

int sub_9532(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_4786( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_9633(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_4885( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_4885( "\n speech is not playing" );
    }
    return 0;
}

int sub_9804(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_4885( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_4885( "\n CONVERSATION PAUSED AT LINE " );
            sub_9960( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_4885( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_4885( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_4885( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_9960(unknown uParam0)
{
    return;
}

int sub_14074()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_14334(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            return 0;
        }
    }
    return 1;
}

void sub_14665()
{
    sub_14679( l_U166 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_1088();
    return;
}

void sub_14679(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_284( uParam0 );
    if (NOT g_U34048[uVar3]._fU4)
    {
        sub_404( "Interactions_Move_On_To_Next_Sequence: Character not active - Tell Keith" );
        return;
    }
    sub_14801( uParam0 );
    g_U34048[uVar3]._fU28++;
    return;
}

void sub_14801(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_14931();
        break;
        case 39:
        sub_15893();
        break;
        case 40:
        sub_16152();
        break;
        case 48:
        sub_16335();
        break;
        case 41:
        sub_16520();
        break;
        case 42:
        sub_16716();
        break;
        case 43:
        sub_16897();
        break;
        case 44:
        sub_17080();
        break;
        case 45:
        sub_17261();
        break;
        case 46:
        sub_17440();
        break;
        case 47:
        sub_17751();
        break;
        case 49:
        sub_17951();
        break;
        case 50:
        sub_18128();
        break;
        case 51:
        sub_18326();
        break;
        default: sub_404( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_18601();
    sub_18674();
    return;
}

void sub_14931()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_284( iVar2 );
    sub_14971( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 500 );
        break;
        default: sub_404( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_14971(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_15024( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_15156( iParam0 + 0 );
    }
    return;
}

void sub_15024(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_15156( iParam0 + 0 );
    }
    return;
}

void sub_15156(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_15187( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_15187(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_15617(unknown uParam0)
{
    sub_15628( uParam0 );
    return;
}

void sub_15628(unknown uParam0)
{
    ADD_SCORE( sub_885(), uParam0 );
    sub_15653( uParam0 );
    return;
}

void sub_15653(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_404( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_15893()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_284( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 100 );
        sub_14971( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_15617( 200 );
        sub_14971( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_15617( 500 );
        break;
        default: sub_404( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_16152()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_284( iVar2 );
    sub_14971( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 0 );
        break;
        default: sub_404( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_16335()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_284( iVar2 );
    sub_14971( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 0 );
        break;
        default: sub_404( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_16520()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_284( iVar2 );
    sub_14971( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 0 );
        break;
        case 2:
        sub_15617( 0 );
        break;
        default: sub_404( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_16716()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_284( iVar2 );
    sub_14971( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 0 );
        break;
        default: sub_404( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_16897()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_284( iVar2 );
    sub_14971( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 500 );
        break;
        default: sub_404( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_17080()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_284( iVar2 );
    sub_14971( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 0 );
        break;
        default: sub_404( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_17261()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_284( iVar2 );
    sub_14971( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 1000 );
        break;
        default: sub_404( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_17440()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_284( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 1000 );
        sub_17527( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_15617( 5000 );
        sub_14971( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_404( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_17527(int iParam0)
{
    sub_17540( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_17540(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_17751()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_284( iVar2 );
    sub_14971( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 0 );
        break;
        case 2:
        sub_15617( 0 );
        break;
        default: sub_404( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_17951()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_284( iVar2 );
    sub_14971( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 500 );
        break;
        default: sub_404( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_18128()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_284( iVar2 );
    sub_14971( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 0 );
        break;
        case 2:
        sub_15617( 0 );
        break;
        default: sub_404( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_18326()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_284( iVar2 );
    sub_14971( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_15617( 0 );
        break;
        case 2:
        sub_15617( 1000 );
        break;
        default: sub_404( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_18601()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

void sub_18674()
{
    sub_18683();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_18683()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}