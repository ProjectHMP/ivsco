void main()
{
    l_U98 = 0;
    l_U99 = 1;
    l_U100 = 3;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    ProtectedSet(l_U114, 0);
    ProtectedSet(l_U115, 0);
    l_U116 = 0;
    l_U117 = 0;
    ProtectedSet(l_U178, 0.00000000);
    ProtectedSet(l_U179, 0.00000000);
    l_U196 = 0;
    l_U197 = 0;
    l_U198 = 0;
    l_U199 = 0;
    l_U200 = 0;
    l_U201 = 0;
    l_U202 = 0;
    l_U203 = 0;
    l_U204 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U209 = 0;
    l_U210 = 0;
    l_U211 = 0;
    l_U212 = 0;
    l_U213 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U216 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U219 = 0;
    l_U230 = {-220.72230000, 446.84600000, 13.80910000};
    l_U239 = {-218.61750000, 443.18280000, 13.81030000};
    l_U242 = {-218.18490000, 437.36490000, 13.78700000};
    l_U245 = {-216.91530000, 419.52800000, 13.81100000};
    l_U248 = {-219.27860000, 415.43870000, 13.81200000};
    l_U251 = {92.76330000, 143.00740000, 13.66130000};
    l_U254 = 0;
    l_U259 = 2;
    l_U260 = 1000;
    l_U261 = 1;
    l_U263 = 1000;
    l_U264 = 1;
    l_U303 = 50;
    l_U304 = 292.80360000;
    l_U305 = 1;
    l_U306 = 0;
    l_U308 = 0;
    l_U314 = 0;
    l_U315 = 0;
    l_U316 = 0;
    l_U317 = 0;
    l_U318 = 0;
    l_U321 = 0;
    l_U322 = 0;
    l_U323 = 0;
    l_U324 = 0;
    l_U327 = 0;
    l_U328 = 0;
    if (sub_565( l_U303, l_U259 ))
    {
        if (IS_PLAYER_PLAYING( sub_1266() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1266(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1345( ref l_U273, 0 );
                    sub_1469();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U203)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (sub_2283())
                            {
                                WAIT( 0 );
                            }
                            else if (g_U10978)
                            {
                                sub_1469();
                            }
                            if (sub_2434( 50 ))
                            {
                                sub_1469();
                            }
                            if (NOT sub_2499())
                            {
                                sub_1469();
                            }
                            switch (l_U198)
                            {
                                case 0:
                                sub_2584();
                                break;
                                case 1:
                                sub_3543();
                                break;
                            }
                        }
                        else
                        {
                            sub_1469();
                        }
                        sub_9067();
                    }
                    if (l_U203)
                    {
                        switch (l_U199)
                        {
                            case 0:
                            sub_9183();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT g_U65019)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2182() )))
                {
                    if (sub_3719() < 25)
                    {
                        CLEAR_PRINTS();
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 0 );
                }
                g_U65019 = 1;
            }
            sub_1469();;
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

void sub_565(unknown uParam0, unknown uParam1)
{
    if (sub_574())
    {
        return 0;
    }
    return sub_621( uParam0, uParam1 );
}

int sub_574()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_621(unknown uParam0, int iParam1)
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
    uVar4 = sub_665( uParam0 );
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
        if (sub_942( g_U34048[uVar4]._fU8 ))
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

int sub_665(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_676( uParam0 )))
    {
        sub_785( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_676(unknown uParam0)
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

void sub_785(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_942(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1111( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1111(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1266()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1345(int iParam0, unknown uParam1)
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

void sub_1469()
{
    if (sub_1488( l_U303, l_U259 ))
    {
        sub_1584( l_U303, l_U259 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_1266() ))
        {
            SET_PLAYER_CONTROL( sub_1266(), 1 );
        }
        sub_2054();
    }
    CLEAR_NAMED_CUTSCENE( "rppat2" );
    REMOVE_BLIP( l_U226 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U220 );
    l_U220 = nil;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2182(), 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1488(int iParam0, int iParam1)
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

void sub_1584(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1488( uParam0, uParam1 )))
    {
        sub_785( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1680();
    if (g_U813)
    {
        sub_1772();
    }
    else
    {
        sub_1890();
    }
    g_U10978 = 0;
    return;
}

void sub_1680()
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

void sub_1772()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1818();
    return;
}

void sub_1818()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1890()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1936();
    return;
}

void sub_1936()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2054()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_2182()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2283()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2182() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2182(), ref l_U224 );
        if (NOT (l_U224 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U224 ))
            {
                GET_CAR_SPEED( l_U224, ref l_U255 );
                if (l_U255 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_2434(int iParam0)
{
    if (iParam0 == 57)
    {
        return 0;
    }
    if (NOT (g_U64542._fU0 == iParam0))
    {
        return 0;
    }
    return 1;
}

int sub_2499()
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

void sub_2584()
{
    switch (l_U197)
    {
        case 0:
        l_U257 = -165448092;
        REQUEST_MODEL( l_U257 );
        REQUEST_ANIMS( "misspathos2" );
        REQUEST_ANIMS( "MOVE_INJURED_GENERIC" );
        while (NOT (HAS_MODEL_LOADED( l_U257 )))
        {
            WAIT( 0 );
        }
        while ((NOT (HAVE_ANIMS_LOADED( "misspathos2" ))) || (NOT (HAVE_ANIMS_LOADED( "MOVE_INJURED_GENERIC" ))))
        {
            WAIT( 0 );
        }
        OPEN_SEQUENCE_TASK( ref l_U267 );
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "hh_lp_01", "misspathos2", 8.00000000, 1, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U267 );
        l_U197 = 1;
        break;
        case 1:
        if (NOT l_U204)
        {
            CLEAR_AREA( -219.39330000, 447.53860000, 14.79820000, 10.00000000, 1 );
            CREATE_CHAR( 26, l_U257, l_U230._fU0, l_U230._fU4, l_U230._fU8, ref l_U220, 1 );
            SET_CHAR_HEADING( l_U220, l_U304 );
            SET_CHAR_MAX_TIME_IN_WATER( l_U220, 20.00000000 );
            SET_CHAR_MAX_TIME_UNDERWATER( l_U220, 10.00000000 );
            SET_CHAR_NEVER_TARGETTED( l_U220, 1 );
            SET_CHAR_PROP_INDEX( l_U220, 0, 0 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U220, 1 );
            TASK_STAND_GUARD( l_U220, l_U230, 271.42850000, 10.00000000, 1, -1 );
            TASK_PERFORM_SEQUENCE( l_U220, l_U267 );
            CLEAR_SEQUENCE_TASK( l_U267 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U220, 1 );
            l_U204 = 1;
        }
        if (NOT (DOES_BLIP_EXIST( l_U226 )))
        {
            ADD_BLIP_FOR_CHAR( l_U220, ref l_U226 );
            CHANGE_BLIP_SPRITE( l_U226, 63 );
            SET_BLIP_AS_FRIENDLY( l_U226, 1 );
            CHANGE_BLIP_SCALE( l_U226, 1.00000000 );
            CHANGE_BLIP_DISPLAY( l_U226, 2 );
        }
        if (l_U204)
        {
            sub_3234( "PIP2AUD" );
            sub_3353( 0, sub_2182(), "NIKO", 0 );
            sub_3353( 1, l_U220, "PATHOS", 0 );
            l_U198 = 1;
        }
        break;
    }
    return;
}

void sub_3234(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_3251();
    return;
}

void sub_3251()
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

void sub_3353(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3433( "\n PED NUMBER ", uParam0 );
    sub_3473( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3433(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3473(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3543()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2182() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2182(), ref l_U224 );
        if (NOT (l_U224 == l_U223))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U223 );
            l_U223 = l_U224;
        }
    }
    if ((IS_CHAR_INJURED( l_U220 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U220, sub_2182(), 0 )))
    {
        sub_1345( ref l_U273, 0 );
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 0 );
        }
        sub_1469();
    }
    if ((sub_3719() < 25) AND (IS_CHAR_ON_FOOT( sub_2182() )))
    {
        sub_3953( ref l_U220, ref l_U307, ref l_U230, ref l_U304, ref l_U308, 1.10000000, "hh_lp_01", "missPATHOS2", 0, 1 );
    }
    switch (l_U200)
    {
        case 0:
        if ((((IS_CHAR_INJURED( l_U220 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U220, sub_2182(), 0 ))) || (IS_CHAR_ON_FIRE( l_U220 ))) || (IS_WANTED_LEVEL_GREATER( sub_1266(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1266(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2182() )))
                {
                    if (sub_3719() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 0 );
            }
            sub_1469();
        }
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            if ((sub_3719() < 18) AND (IS_CHAR_ON_FOOT( sub_2182() )))
            {
                if ((NOT IS_HINT_RUNNING()) AND (NOT l_U306))
                {
                    HINT_CAM( 0.00000000, 0.00000000, 0.00000000, l_U220, 0, 0, 6000 );
                    TASK_LOOK_AT_CHAR( l_U220, sub_2182(), -2, 0 );
                    l_U306 = 1;
                }
                l_U200 = 1;
            }
        }
        break;
        case 1:
        if ((((IS_CHAR_INJURED( l_U220 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U220, sub_2182(), 0 ))) || (IS_CHAR_ON_FIRE( l_U220 ))) || (IS_WANTED_LEVEL_GREATER( sub_1266(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1266(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2182() )))
                {
                    if (sub_3719() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 0 );
            }
            sub_1469();
        }
        if (l_U305)
        {
            sub_4852( "PIP2_STREET", ref l_U273, 4, 1 );
            SETTIMERA( 0 );
            l_U305 = 0;
        }
        else if (TIMERA() > 4500)
        {
            GENERATE_RANDOM_INT_IN_RANGE( l_U261, l_U260, ref l_U262 );
            if (l_U262 > 970)
            {
                l_U305 = 1;
            }
        }
        if (sub_3719() < 3.50000000)
        {
            if (IS_CHAR_ON_FOOT( sub_2182() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if (sub_5942( 1, 1 ))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U220, sub_2182(), 0 )))
                        {
                            if (NOT (IS_CHAR_ON_FIRE( l_U220 )))
                            {
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1266(), 0 )))
                                {
                                    if (sub_2499())
                                    {
                                        SET_MISSION_FLAG( 1 );
                                        SET_PLAYER_CONTROL( sub_1266(), 0 );
                                        DO_SCREEN_FADE_OUT( 100 );
                                        while (NOT IS_SCREEN_FADED_OUT())
                                        {
                                            WAIT( 0 );
                                        }
                                        l_U200 = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (sub_3719() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, l_U220, 0, 0, 0 );
            }
            sub_1345( ref l_U273, 1 );
            l_U200 = 0;
        }
        break;
        case 2:
        l_U305 = 1;
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 0 );
        }
        CLEAR_WANTED_LEVEL( sub_1266() );
        sub_1345( ref l_U273, 0 );
        CLEAR_PRINTS();
        LOAD_ADDITIONAL_TEXT( "PIPAUD", 6 );
        sub_6539();
        CLEAR_NAMED_CUTSCENE( "rppat2" );
        START_CUTSCENE_NOW( "rppat2" );
        SET_GROUP_SEPARATION_RANGE( sub_6681(), 30.00000000 );
        sub_6744( l_U303, l_U259 );
        l_U203 = 1;
        break;
    }
    return;
}

void sub_3719()
{
    if (NOT (IS_CHAR_DEAD( l_U220 )))
    {
        GET_CHAR_COORDINATES( sub_2182(), ref l_U233._fU0, ref l_U233._fU4, ref l_U233._fU8 );
        GET_CHAR_COORDINATES( l_U220, ref l_U236._fU0, ref l_U236._fU4, ref l_U236._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U233._fU0, l_U233._fU4, l_U233._fU8, l_U236._fU0, l_U236._fU4, l_U236._fU8, ref l_U254 );
        return l_U254;
    }
    return l_U254;
}

void sub_3953(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
{
    int iVar12;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (uParam4^))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( (uParam0^), iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam5, uParam5, 1.80000000, 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 1 );
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
            GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar12 );
            if (iVar12 == 7)
            {
                PRINTSTRING( "fail 1" );
                PRINTNL();
                if (bParam9)
                {
                    TASK_PLAY_ANIM( (uParam0^), uParam6, uParam7, 8.00000000, 1, 0, 0, 0, -2 );
                }
                (uParam4^) = 0;
                if (bParam8)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
                }
            }
        }
    }
    return;
}

void sub_4852(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_4873( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_4873(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_4927( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_4927(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_4949( iParam1 )))
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
    sub_5637( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_4949(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_5026( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_5026( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_5026( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_5026(unknown uParam0)
{
    return;
}

void sub_5637(int iParam0, int iParam1)
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

int sub_5942(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2182() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2182(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2182() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2182(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2182()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2182() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2182() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1266() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1266() )))
    {
        return 0;
    }
    return 1;
}

void sub_6539()
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

void sub_6681()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_6744(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_785( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_665( uParam0 );
    if (g_U34175._fU4)
    {
        sub_785( "Interactions_Started: Another interaction is already taking place" );
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
        sub_785( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_7107();
    sub_7878( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_8022( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_7107()
{
    sub_7116();
    sub_7219( ref g_U9893._fU68 );
    sub_7268();
    return;
}

void sub_7116()
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

void sub_7219(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_7268()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7306( 1, g_U569[I] )) == 0)
        {
            sub_7557( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_7735())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_7306(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_7557(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_7642( g_U569 - 1 );
    return;
}

void sub_7642(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_7735()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_7306( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_7878(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_7912();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_7912()
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

void sub_8022(unknown uParam0, int iParam1)
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
    sub_8868( cVar4 );
    return;
}

void sub_8868(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_9067()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_3719() > 30) || (sub_2283()))
        {
            HINT_CAM( l_U230._fU0, l_U230._fU4, l_U230._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_9183()
{
    if (IS_CHAR_DEAD( l_U220 ))
    {
        if (NOT l_U321)
        {
            sub_1345( ref l_U273, 0 );
            sub_1345( ref l_U279, 0 );
            sub_1345( ref l_U297, 0 );
            PRINT_NOW( "PTS2_PMT3", 7500, 1 );
            sub_9282( 50, l_U220, 28 );
            sub_9332();
        }
        else
        {
            sub_1345( ref l_U273, 0 );
            sub_1345( ref l_U279, 0 );
            sub_1345( ref l_U297, 0 );
            PRINT_NOW( "PTS2_PMT4", 7500, 1 );
            sub_9282( 50, l_U220, 28 );
            sub_9332();
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2182() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2182(), ref l_U224 );
        if (NOT (l_U224 == l_U223))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U223 );
            l_U223 = l_U224;
            SET_CAR_AS_MISSION_CAR( l_U223 );
        }
    }
    if (l_U211)
    {
        if (NOT (IS_CHAR_DEAD( sub_2182() )))
        {
            if (IS_VEH_DRIVEABLE( l_U223 ))
            {
                if (IS_CHAR_IN_CAR( sub_2182(), l_U223 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U220 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U220, l_U223 ))
                        {
                            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                            {
                                if (l_U327)
                                {
                                    GET_CAR_HEALTH( l_U223, ref l_U326 );
                                    if (l_U326 < (l_U325 - 30))
                                    {
                                        if (NOT l_U328)
                                        {
                                            if (sub_9844( l_U297 ))
                                            {
                                                sub_10015( ref l_U297 );
                                                HANDLE_AUDIO_ANIM_EVENT( l_U220, "PAIN_HIGH" );
                                                SETTIMERA( 0 );
                                                l_U328 = 1;
                                            }
                                            else if (sub_9844( l_U279 ))
                                            {
                                                sub_1345( ref l_U279, 0 );
                                                HANDLE_AUDIO_ANIM_EVENT( l_U220, "PAIN_HIGH" );
                                                SETTIMERA( 0 );
                                                l_U328 = 1;
                                            }
                                            else
                                            {
                                                HANDLE_AUDIO_ANIM_EVENT( l_U220, "PAIN_HIGH" );
                                                SETTIMERA( 0 );
                                                l_U328 = 1;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        l_U325 = l_U326;
                                    }
                                }
                                if ((l_U328) AND (TIMERA() > 3000))
                                {
                                    l_U325 = l_U326;
                                    l_U328 = 0;
                                }
                                if (NOT l_U328)
                                {
                                    if (g_U64742 == 0)
                                    {
                                        if (sub_10679( l_U297 ))
                                        {
                                            sub_10724( "PIP2_BANT1", ref l_U297, 6, 1 );
                                        }
                                    }
                                    else if (g_U64742 == 1)
                                    {
                                        if (sub_10679( l_U297 ))
                                        {
                                            sub_10724( "PIP2_BANT2", ref l_U297, 6, 1 );
                                        }
                                    }
                                }
                            }
                            l_U214 = 1;
                        }
                        else
                        {
                            l_U325 = l_U326;
                            l_U328 = 0;
                            if (sub_9844( l_U297 ))
                            {
                                sub_10942( ref l_U297 );
                            }
                        }
                    }
                }
                else
                {
                    l_U325 = l_U326;
                    l_U328 = 0;
                    if (NOT (IS_CHAR_INJURED( l_U220 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U220, l_U223 ))
                        {
                            if (sub_9844( l_U297 ))
                            {
                                sub_10942( ref l_U297 );
                            }
                        }
                        else if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            if (sub_3719() < 10.00000000)
                            {
                                if (g_U64742 == 0)
                                {
                                    if (sub_10679( l_U297 ))
                                    {
                                        sub_10724( "PIP2_BANT1", ref l_U297, 6, 1 );
                                    }
                                }
                                else if (g_U64742 == 1)
                                {
                                    if (sub_10679( l_U297 ))
                                    {
                                        sub_10724( "PIP2_BANT2", ref l_U297, 6, 1 );
                                    }
                                }
                            }
                            else if (sub_9844( l_U297 ))
                            {
                                sub_10942( ref l_U297 );
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U212)
    {
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U220, sub_6681() )))
            {
                l_U211 = 0;
                if (DOES_BLIP_EXIST( l_U226 ))
                {
                    if (sub_3719() < 12.00000000)
                    {
                        REMOVE_BLIP( l_U226 );
                        SET_GROUP_MEMBER( sub_6681(), l_U220 );
                        l_U211 = 1;
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            if ((NOT (IS_CHAR_INJURED( sub_2182() ))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_2182() ))))
                            {
                                if (NOT l_U314)
                                {
                                    PRINT( "PTS2_PMT5", 7500, 1 );
                                    l_U314 = 1;
                                }
                            }
                            l_U314 = 0;
                            if (NOT (DOES_BLIP_EXIST( l_U229 )))
                            {
                                ADD_BLIP_FOR_COORD( l_U251._fU0, l_U251._fU4, l_U251._fU8, ref l_U229 );
                                SET_ROUTE( l_U229, 1 );
                            }
                            CLEAR_PRINTS();
                            PRINT( "PTS2_PMT7", 7500, 1 );
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U229 ))
                {
                    REMOVE_BLIP( l_U229 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U226 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U220, ref l_U226 );
                    SET_ROUTE( l_U226, 1 );
                    SET_BLIP_AS_FRIENDLY( l_U226, 1 );
                }
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PTS2_PMT6" )))
                {
                    CLEAR_PRINTS();
                    PRINT( "PTS2_PMT6", 7500, 1 );
                }
            }
        }
    }
    switch (l_U201)
    {
        case 0:
        CLEAR_HELP();
        if (DOES_VEHICLE_EXIST( l_U223 ))
        {
            if (IS_VEH_DRIVEABLE( l_U223 ))
            {
                SET_CAR_AS_MISSION_CAR( l_U223 );
                SET_CAR_COORDINATES( l_U223, -214.34420000, 437.91870000, 13.70840000 );
                SET_CAR_HEADING( l_U223, 178.44010000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U223 );
                SET_CAR_IN_CUTSCENE( l_U223, 1 );
            }
        }
        CLEAR_AREA( l_U230._fU0, l_U230._fU4, l_U230._fU8, 15.00000000, 1 );
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            TASK_LOOK_AT_CHAR( l_U220, sub_2182(), 0, 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U220 );
        }
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SWITCH_PED_PATHS_OFF( l_U230._fU0 - 5.00000000, l_U230._fU4 - 5.00000000, l_U230._fU8 - 5.00000000, l_U230._fU0 + 5.00000000, l_U230._fU4 + 5.00000000, l_U230._fU8 + 5.00000000 );
        CLEAR_AREA( l_U233._fU0, l_U233._fU4, l_U233._fU8, 100.00000000, 1 );
        REMOVE_BLIP( l_U226 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U266 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "rppat2" );
        if (HAS_CUTSCENE_FINISHED())
        {
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                SET_CHAR_COORDINATES( l_U220, l_U239._fU0, l_U239._fU4, l_U239._fU8 );
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2182(), 0 );
                SET_CHAR_HEADING( l_U220, 196.56360000 );
                SET_CHAR_NEVER_TARGETTED( l_U220, 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( l_U220, 1 );
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U220, 0 );
                SET_CHAR_COORDINATES( sub_2182(), -218.71490000, 448.07410000, 13.79450000 );
                SET_CHAR_HEADING( sub_2182(), 179.62280000 );
                SET_PED_DIES_WHEN_INJURED( l_U220, 1 );
                sub_3353( 1, l_U220, "PATHOS", 0 );
                LOAD_ADDITIONAL_TEXT( "WI_PTS2", 0 );
                l_U201 = 1;
            }
        }
        break;
        case 1:
        SET_WANTED_MULTIPLIER( 0.00000000 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U257 );
        REQUEST_MODEL( -196312163 );
        REQUEST_MODEL( -1143910864 );
        while ((NOT (HAS_MODEL_LOADED( -1143910864 ))) || (NOT (HAS_MODEL_LOADED( -196312163 ))))
        {
            WAIT( 0 );
        }
        OPEN_SEQUENCE_TASK( ref l_U271 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "get_up_injured", "misspathos2", 8.00000000, 0, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U271 );
        OPEN_SEQUENCE_TASK( ref l_U269 );
        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 96.57790000, 149.70090000, 14.77750000, 2, -2, 1.50000000 );
        CLOSE_SEQUENCE_TASK( l_U269 );
        OPEN_SEQUENCE_TASK( ref l_U270 );
        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, l_U242._fU0, l_U242._fU4, l_U242._fU8, 3, -2, 1.00000000 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "back_lower", "misspathos2", 8.00000000, 0, 1, 1, 0, 0 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "inj_front_to_default", "misspathos2", 8.00000000, 0, 1, 1, 0, 0 );
        TASK_PLAY_ANIM_SECONDARY( 0, "default_idle", "misspathos2", 8.00000000, 1, 1, 1, 1, 0 );
        CLOSE_SEQUENCE_TASK( l_U270 );
        l_U201 = 2;
        break;
        case 2:
        if (NOT l_U208)
        {
            CREATE_CHAR( 26, -1143910864, l_U245._fU0, l_U245._fU4, l_U245._fU8, ref l_U221, 1 );
            sub_3353( 2, l_U221, "HOMEBOY", 0 );
            SET_CHAR_HEADING( l_U221, 15.47250000 );
            SET_CHAR_MAX_TIME_IN_WATER( l_U221, 20.00000000 );
            SET_CHAR_MAX_TIME_UNDERWATER( l_U221, 10.00000000 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U221 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U221, 23 );
            SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U221, 1, 0 );
            GIVE_WEAPON_TO_CHAR( l_U221, 7, 30000, 1 );
            if (NOT (DOES_BLIP_EXIST( l_U227 )))
            {
                ADD_BLIP_FOR_CHAR( l_U221, ref l_U227 );
            }
            if (NOT (IS_CHAR_INJURED( l_U221 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U220 )))
                {
                    TASK_AIM_GUN_AT_CHAR( l_U221, l_U220, 10000 );
                }
            }
            CREATE_CHAR( 26, -1143910864, l_U248._fU0, l_U248._fU4, l_U248._fU8, ref l_U222, 1 );
            SET_CHAR_HEADING( l_U222, 353.31920000 );
            SET_CHAR_MAX_TIME_IN_WATER( l_U222, 20.00000000 );
            SET_CHAR_MAX_TIME_UNDERWATER( l_U222, 10.00000000 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U222 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U222, 23 );
            SET_CHAR_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP( l_U222, 1, 0 );
            GIVE_WEAPON_TO_CHAR( l_U222, 7, 30000, 1 );
            if (NOT (DOES_BLIP_EXIST( l_U228 )))
            {
                ADD_BLIP_FOR_CHAR( l_U222, ref l_U228 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1143910864 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -196312163 );
            l_U208 = 1;
        }
        else
        {
            SWITCH_PED_PATHS_ON( l_U233._fU0 - 5.00000000, l_U233._fU4 - 5.00000000, l_U233._fU8 - 5.00000000, l_U233._fU0 + 5.00000000, l_U233._fU4 + 5.00000000, l_U233._fU8 + 5.00000000 );
            if (NOT l_U205)
            {
                BEGIN_CAM_COMMANDS( ref l_U309 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                CREATE_CAM( 14, ref l_U311 );
                SET_CAM_POS( l_U311, -217.77000000, 418.97000000, 15.51000000 );
                SET_CAM_FOV( l_U311, 52.50000000 );
                SET_CAM_ROT( l_U311, -8.83000000, -0.00000000, -26.69000000 );
                SET_CAM_NEAR_DOF( l_U311, 0.10000000 );
                SET_CAM_FAR_DOF( l_U311, 30.00000000 );
                SET_CAM_PROPAGATE( l_U311, 1 );
                SET_CAM_ACTIVE( l_U311, 1 );
                SET_USE_HIGHDOF( 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                CREATE_CAM( 14, ref l_U312 );
                SET_CAM_POS( l_U312, -219.12000000, 449.06000000, 15.39000000 );
                SET_CAM_FOV( l_U312, 39.00000000 );
                SET_CAM_ROT( l_U312, -3.10000000, 0.00000000, -172.41000000 );
                SET_CAM_NEAR_DOF( l_U312, 5.00000000 );
                SET_CAM_FAR_DOF( l_U312, 20.00000000 );
                l_U205 = 1;
            }
            LOAD_SCENE( l_U236._fU0, l_U236._fU4, l_U236._fU8 );
            if (NOT l_U217)
            {
                TASK_PERFORM_SEQUENCE( l_U220, l_U270 );
                CLEAR_SEQUENCE_TASK( l_U270 );
                l_U217 = 1;
            }
            while ((((((NOT (IS_CHAR_INJURED( l_U220 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U220 )))) AND (NOT (IS_CHAR_INJURED( l_U221 )))) AND (NOT (IS_CHAR_ON_SCREEN( l_U221 )))) AND (NOT (IS_CHAR_INJURED( l_U222 )))) AND (NOT (IS_CHAR_ON_SCREEN( l_U222 ))))
            {
                WAIT( 0 );
            }
            CLEAR_AREA( l_U245._fU0, l_U245._fU4, l_U245._fU8, 5.00000000, 1 );
            SET_PED_DENSITY_MULTIPLIER( 0.40000000 );
            SET_CAR_DENSITY_MULTIPLIER( 0.70000000 );
            DO_SCREEN_FADE_IN_UNHACKED( 100 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            SET_WIDESCREEN_BORDERS( 1 );
            l_U201 = 3;
        }
        break;
        case 3:
        if (DOES_BLIP_EXIST( l_U226 ))
        {
            REMOVE_BLIP( l_U226 );
        }
        if (NOT (IS_CHAR_DEAD( l_U220 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U220, l_U242._fU0, l_U242._fU4, l_U242._fU8 + 1.50000000, 1.50000000, 1.00000000, 1.50000000, 0 ))
            {
                l_U201 = 4;
            }
        }
        break;
        case 4:
        switch (l_U196)
        {
            case 0:
            if (NOT (IS_CHAR_DEAD( l_U220 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U220, "misspathos2", "back_lower" ))
                {
                    PLAY_AUDIO_EVENT_FROM_PED( "PATHOS_2_GUNSHOT", l_U220 );
                    if (NOT (IS_CHAR_INJURED( sub_2182() )))
                    {
                        TASK_PLAY_ANIM( sub_2182(), "startled", "misspathos2", 8.00000000, 0, 0, 0, 0, -2 );
                    }
                    TRIGGER_PTFX_ON_PED_BONE( "CS_execution_back_head", l_U220, 0.05000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1203, 0.50000000 );
                    sub_1345( ref l_U273, 0 );
                    CLEAR_PRINTS();
                    SET_CAM_PROPAGATE( l_U312, 1 );
                    SET_CAM_ACTIVE( l_U312, 1 );
                    SET_CAM_PROPAGATE( l_U311, 0 );
                    SET_CAM_ACTIVE( l_U311, 0 );
                    SETTIMERA( 0 );
                    sub_4852( "PIP2_AFTER", ref l_U273, 6, 1 );
                    l_U196 = 1;
                }
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                if (TIMERA() > 2500)
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U220, 1 );
                    FREEZE_CHAR_POSITION( l_U220, 1 );
                    SET_USE_HIGHDOF( 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    END_CAM_COMMANDS( ref l_U310 );
                    l_U196 = 2;
                }
            }
            break;
            case 2:
            CLEAR_CHAR_TASKS( sub_2182() );
            SET_GAME_CAM_HEADING( 0.00000000 );
            CHANGE_BLIP_DISPLAY( l_U226, 2 );
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U220, 0, 0, 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U221 )))
            {
                SET_CHAR_RELATIONSHIP( l_U221, 5, 0 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U221, 1 );
            }
            if (NOT (IS_CHAR_DEAD( l_U222 )))
            {
                SET_CHAR_RELATIONSHIP( l_U222, 5, 0 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U222, 1 );
            }
            SET_WIDESCREEN_BORDERS( 0 );
            SET_PLAYER_CONTROL_ADVANCED( sub_1266(), 1, 1, 1 );
            l_U202 = 0;
            SWITCH_PED_PATHS_ON( l_U230._fU0 - 5.00000000, l_U230._fU4 - 5.00000000, l_U230._fU8 - 5.00000000, l_U230._fU0 + 5.00000000, l_U230._fU4 + 5.00000000, l_U230._fU8 + 5.00000000 );
            l_U201 = 6;
            break;
        }
        break;
        case 6:
        if (NOT l_U218)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_NOW( "PTS2_PMT2", 7500, 1 );
                l_U218 = 1;
            }
        }
        else if (sub_3719() < 20)
        {
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                if (l_U305)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( l_U264, l_U263, ref l_U265 );
                    if (l_U265 > 500)
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            sub_4852( "PIP2_SHOT", ref l_U285, 6, 1 );
                            SETTIMERA( 0 );
                            l_U305 = 0;
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U221 )))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            sub_4852( "PIP2_SHOOTN", ref l_U285, 6, 1 );
                            SETTIMERA( 0 );
                            l_U305 = 0;
                        }
                    }
                }
                else if (TIMERA() > 4500)
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( l_U261, l_U260, ref l_U262 );
                        if (l_U262 > 970)
                        {
                            l_U305 = 1;
                        }
                    }
                }
            }
            else
            {
                sub_1345( ref l_U285, 0 );
            }
        }
        if (NOT l_U207)
        {
            if (NOT (IS_CHAR_DEAD( l_U220 )))
            {
                SET_CHAR_RELATIONSHIP_GROUP( l_U220, 0 );
                SET_GROUP_MEMBER( sub_6681(), l_U220 );
                l_U207 = 1;
            }
        }
        if ((IS_EXPLOSION_IN_SPHERE( -1, l_U242._fU0, l_U242._fU4, l_U242._fU8, 5.00000000 )) AND (NOT (IS_CHAR_INJURED( l_U220 ))))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U220, 0 );
            FREEZE_CHAR_POSITION( l_U220, 0 );
            SET_CHAR_HEALTH( l_U220, 5 );
        }
        if (IS_CHAR_INJURED( l_U221 ))
        {
            REMOVE_BLIP( l_U227 );
        }
        if (IS_CHAR_INJURED( l_U222 ))
        {
            REMOVE_BLIP( l_U228 );
        }
        if (NOT (IS_CHAR_FATALLY_INJURED( l_U220 )))
        {
            SET_CHAR_HEADING( l_U220, 180.00000000 );
        }
        if ((IS_CHAR_INJURED( l_U221 )) AND (IS_CHAR_INJURED( l_U222 )))
        {
            if (IS_THIS_PRINT_BEING_DISPLAYED( "PTS2_PMT2", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
            {
                CLEAR_PRINTS();
            }
            if (NOT (IS_CHAR_DEAD( l_U220 )))
            {
                SET_ANIM_GROUP_FOR_CHAR( l_U220, "MOVE_INJURED_GENERIC" );
                SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U220, 1 );
                SET_CHAR_HEALTH( l_U220, 150 );
            }
            sub_1345( ref l_U285, 0 );
            REMOVE_CHAR_FROM_GROUP( l_U220 );
            sub_4852( "PIP2_THANKS", ref l_U273, 6, 1 );
            WAIT( 250 );
            l_U318 = 0;
            l_U201 = 7;
        }
        break;
        case 7:
        if (NOT l_U209)
        {
            if (NOT (IS_CHAR_DEAD( l_U220 )))
            {
                if (IS_CHAR_INJURED( l_U220 ))
                {
                    SET_CHAR_HEALTH( l_U220, 150 );
                }
                TASK_PERFORM_SEQUENCE( l_U220, l_U271 );
                FREEZE_CHAR_POSITION( l_U220, 0 );
                l_U209 = 1;
            }
        }
        else
        {
            l_U201 = 8;
        }
        break;
        case 8:
        if (NOT l_U318)
        {
            GET_GAME_TIMER( ref l_U319 );
            l_U318 = 1;
        }
        else
        {
            GET_GAME_TIMER( ref l_U320 );
            if ((l_U320 - l_U319) > 50000)
            {
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    SET_CHAR_HEALTH( l_U220, 5 );
                    PRINT_NOW( "PTS2_PMT8", 7500, 1 );
                    sub_9332();
                }
            }
        }
        if (NOT l_U314)
        {
            if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_16414()))
            {
                SET_WANTED_MULTIPLIER( 0.10000000 );
                PRINT( "PTS2_PMT5", 7500, 1 );
                l_U314 = 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( sub_2182() )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2182() ))
            {
                CLEAR_PRINTS();
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U220, 0 );
                l_U212 = 1;
                l_U201 = 9;
            }
            else if (DOES_BLIP_EXIST( l_U226 ))
            {
                REMOVE_BLIP( l_U226 );
            }
            l_U212 = 0;;
        }
        break;
        case 9:
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            MODIFY_CHAR_MOVE_STATE( l_U220, 2 );
        }
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U220 ))
            {
                l_U327 = 1;
                l_U201 = 11;
            }
        }
        break;
        case 11:
        if (NOT (IS_CHAR_DEAD( l_U220 )))
        {
            if (IS_VEH_DRIVEABLE( l_U223 ))
            {
                if (IS_CHAR_IN_CAR( l_U220, l_U223 ))
                {
                    if (NOT (DOES_BLIP_EXIST( l_U229 )))
                    {
                        l_U211 = 1;
                        ADD_BLIP_FOR_COORD( l_U251._fU0, l_U251._fU4, l_U251._fU8, ref l_U229 );
                        SET_ROUTE( l_U229, 1 );
                        REMOVE_BLIP( l_U226 );
                    }
                    l_U318 = 0;
                    l_U201 = 12;
                }
            }
        }
        break;
        case 12:
        l_U205 = 0;
        if (NOT l_U318)
        {
            GET_GAME_TIMER( ref l_U319 );
            l_U318 = 1;
        }
        else if (NOT l_U317)
        {
            PRINT( "PTS2_PMT7", 3000, 1 );
            l_U317 = 1;
        }
        GET_GAME_TIMER( ref l_U320 );
        if ((l_U320 - l_U319) > 90000)
        {
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                SET_CHAR_HEALTH( l_U220, 5 );
                l_U321 = 1;
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U220, 1 );
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U220 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    MODIFY_CHAR_MOVE_STATE( l_U220, 2 );
                }
            }
        }
        if (l_U214)
        {
            if (NOT l_U215)
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (g_U64742 == 0)
                    {
                        if (sub_4852( "PIP2_BANT1", ref l_U297, 6, 1 ))
                        {
                            l_U215 = 1;
                        }
                    }
                    else if (g_U64742 == 1)
                    {
                        if (sub_4852( "PIP2_BANT2", ref l_U297, 6, 1 ))
                        {
                            l_U215 = 1;
                        }
                    }
                    else if (g_U64742 == 2)
                    {
                        SAY_AMBIENT_SPEECH( l_U220, "listen_to_radio", 0, 0, 0 );
                        l_U215 = 1;
                    };;;
                }
            }
        }
        if (l_U215)
        {
            if (sub_17274( ref l_U297 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if (l_U305)
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            sub_4852( "PIP2_PAIN", ref l_U279, 6, 1 );
                            SETTIMERA( 0 );
                            l_U305 = 0;
                        }
                    }
                    else if (TIMERA() > 4500)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( l_U261, l_U260, ref l_U262 );
                        if (l_U262 > 970)
                        {
                            l_U305 = 1;
                        }
                    }
                }
                else
                {
                    sub_1345( ref l_U279, 0 );
                }
            }
        }
        if ((DOES_VEHICLE_EXIST( l_U223 )) AND (NOT (IS_VEH_DRIVEABLE( l_U223 ))))
        {
            SET_CAR_ENGINE_ON( l_U223, 0, 0 );
        }
        if (IS_WANTED_LEVEL_GREATER( sub_1266(), 0 ))
        {
            if (DOES_BLIP_EXIST( l_U229 ))
            {
                REMOVE_BLIP( l_U229 );
                PRINT_HELP( "GLOCK_WL" );
            }
        }
        else if (l_U215)
        {
            if (NOT (DOES_BLIP_EXIST( l_U229 )))
            {
                ADD_BLIP_FOR_COORD( l_U251._fU0, l_U251._fU4, l_U251._fU8, ref l_U229 );
                SET_ROUTE( l_U229, 1 );
                if (IS_THIS_PRINT_BEING_DISPLAYED( "GLOCK_WL", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    CLEAR_PRINTS();
                }
            }
        }
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1266(), 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U220 )))
            {
                if (IS_GROUP_MEMBER( l_U220, sub_6681() ))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2182(), l_U251._fU0, l_U251._fU4, l_U251._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )) AND (sub_5942( 1, 1 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_2182() ))
                        {
                            if ((IS_VEH_DRIVEABLE( l_U223 )) AND (NOT (IS_CAR_UPSIDEDOWN( l_U223 ))))
                            {
                                if (DOES_BLIP_EXIST( l_U229 ))
                                {
                                    REMOVE_BLIP( l_U229 );
                                }
                                SET_WIDESCREEN_BORDERS( 1 );
                                SET_PLAYER_CONTROL( sub_1266(), 0 );
                                GET_CHAR_HEADING( sub_2182(), ref l_U256 );
                                if (l_U256 > 180)
                                {
                                    l_U219 = 1;
                                }
                                if ((IS_VEH_DRIVEABLE( l_U223 )) AND (NOT (IS_CHAR_INJURED( l_U220 ))))
                                {
                                    GET_CAR_MODEL( l_U223, ref l_U258 );
                                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U220 )))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U220, l_U223, 0 );
                                    }
                                }
                                if (IS_THIS_MODEL_A_HELI( l_U258 ))
                                {
                                    if (NOT (IS_CHAR_INJURED( sub_2182() )))
                                    {
                                        if (IS_VEH_DRIVEABLE( l_U223 ))
                                        {
                                            FREEZE_CAR_POSITION( l_U223, 1 );
                                        }
                                    }
                                }
                                l_U211 = 0;
                                l_U216 = 0;
                                l_U212 = 0;
                                sub_1345( ref l_U279, 0 );
                                sub_1345( ref l_U297, 0 );
                                l_U201 = 13;
                            }
                        }
                        else if (IS_CHAR_ON_FOOT( sub_2182() ))
                        {
                            if (DOES_BLIP_EXIST( l_U229 ))
                            {
                                REMOVE_BLIP( l_U229 );
                            }
                            SET_WIDESCREEN_BORDERS( 1 );
                            SET_PLAYER_CONTROL( sub_1266(), 0 );
                            DO_SCREEN_FADE_OUT( 250 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( sub_2182() )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2182() );
                                SET_CHAR_COORDINATES( sub_2182(), 91.69980000, 145.62780000, 13.76520000 );
                                SET_CHAR_HEADING( sub_2182(), 68.01620000 );
                                REMOVE_PED_HELMET( sub_2182(), 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U220 )))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U220 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U220 );
                                SET_CHAR_COORDINATES( l_U220, 90.71170000, 146.87180000, 13.76290000 );
                                SET_CHAR_HEADING( l_U220, 248.00000000 );
                            }
                            l_U211 = 0;
                            l_U216 = 0;
                            l_U212 = 0;
                            sub_1345( ref l_U279, 0 );
                            sub_1345( ref l_U297, 0 );
                            l_U201 = 13;
                        }
                    }
                }
            }
        }
        break;
        case 13:
        if (l_U216 == 0)
        {
            SETTIMERA( 0 );
            l_U216 = 1;
        }
        if ((TIMERA() >= 2000) AND (sub_18534()))
        {
            TASK_LEAVE_CAR( l_U220, l_U223 );
            sub_1345( ref l_U291, 0 );
            CLEAR_PRINTS();
            l_U315 = 1;
            l_U201 = 14;
        }
        if (NOT l_U205)
        {
            BEGIN_CAM_COMMANDS( ref l_U310 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            CREATE_CAM( 14, ref l_U311 );
            if (l_U219)
            {
                SET_CAM_POS( l_U311, 99.81000000, 148.92000000, 15.80000000 );
                SET_CAM_FOV( l_U311, 32.40000000 );
                POINT_CAM_AT_PED( l_U311, sub_2182() );
                SET_CAM_NEAR_DOF( l_U311, 2.00000000 );
                SET_CAM_FAR_DOF( l_U311, 15.00000000 );
            }
            else
            {
                SET_CAM_POS( l_U311, 82.83000000, 148.80000000, 15.42000000 );
                SET_CAM_FOV( l_U311, 44.00000000 );
                POINT_CAM_AT_PED( l_U311, sub_2182() );
                SET_CAM_NEAR_DOF( l_U311, 2.00000000 );
                SET_CAM_FAR_DOF( l_U311, 15.00000000 );
            }
            if ((NOT (IS_CHAR_INJURED( sub_2182() ))) AND (IS_CHAR_ON_FOOT( sub_2182() )))
            {
                SET_CAM_POS( l_U311, 95.49000000, 142.77000000, 15.08000000 );
                SET_CAM_FOV( l_U311, 38.10000000 );
                SET_CAM_ROT( l_U311, -0.53000000, 0.00000000, 94.74000000 );
                SET_CAM_NEAR_DOF( l_U311, 0.10000000 );
                SET_CAM_FAR_DOF( l_U311, 10.00000000 );
            }
            CREATE_CAM( 14, ref l_U312 );
            if (l_U219)
            {
                SET_CAM_POS( l_U312, 92.78000000, 145.40000000, 15.04000000 );
                SET_CAM_FOV( l_U312, 40.80000000 );
                POINT_CAM_AT_PED( l_U312, sub_2182() );
                SET_CAM_NEAR_DOF( l_U312, 0.10000000 );
                SET_CAM_FAR_DOF( l_U312, 6.00000000 );
            }
            else
            {
                SET_CAM_POS( l_U312, 87.57000000, 146.35000000, 15.02000000 );
                SET_CAM_FOV( l_U312, 50.80000000 );
                POINT_CAM_AT_PED( l_U312, sub_2182() );
                SET_CAM_NEAR_DOF( l_U312, 0.10000000 );
                SET_CAM_FAR_DOF( l_U312, 10.00000000 );
            }
            if ((NOT (IS_CHAR_INJURED( sub_2182() ))) AND (IS_CHAR_ON_FOOT( sub_2182() )))
            {
                SET_CAM_POS( l_U312, 101.37000000, 144.44000000, 15.28000000 );
                SET_CAM_FOV( l_U312, 63.30000000 );
                SET_CAM_ROT( l_U312, 7.43000000, 0.00000000, 98.41000000 );
            }
            CREATE_CAM( 14, ref l_U313 );
            SET_CAM_POS( l_U313, 93.56000000, 147.25000000, 14.71000000 );
            SET_CAM_FOV( l_U313, 34.50000000 );
            SET_CAM_ROT( l_U313, 5.55000000, -0.00000000, 114.73000000 );
            SET_CAM_NEAR_DOF( l_U313, 0.10000000 );
            SET_CAM_FAR_DOF( l_U313, 5.00000000 );
            if (NOT (IS_CHAR_INJURED( sub_2182() )))
            {
                if (IS_CHAR_ON_FOOT( sub_2182() ))
                {
                    SET_CAM_PROPAGATE( l_U313, 1 );
                    SET_CAM_ACTIVE( l_U313, 1 );
                    SET_USE_HIGHDOF( 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                }
                else
                {
                    SET_CAM_PROPAGATE( l_U311, 1 );
                    SET_CAM_ACTIVE( l_U311, 1 );
                    SET_USE_HIGHDOF( 1 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                }
            }
            l_U205 = 1;
        }
        if (NOT (IS_CHAR_INJURED( l_U220 )))
        {
            if (NOT l_U210)
            {
                if (NOT l_U213)
                {
                    if (IS_SCREEN_FADED_OUT())
                    {
                        DO_SCREEN_FADE_IN( 250 );
                        while (NOT IS_SCREEN_FADED_IN())
                        {
                            WAIT( 0 );
                        }
                    }
                    SETTIMERB( 0 );
                    if (NOT (IS_CHAR_INJURED( sub_2182() )))
                    {
                        if (IS_CHAR_ON_FOOT( sub_2182() ))
                        {
                            CREATE_CAM( 3, ref l_U225 );
                            SET_CAM_PROPAGATE( l_U225, 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U225, l_U313, l_U312, 25000, 0 );
                        }
                        else
                        {
                            CREATE_CAM( 3, ref l_U225 );
                            SET_CAM_PROPAGATE( l_U225, 1 );
                            SET_CAM_INTERP_STYLE_CORE( l_U225, l_U311, l_U312, 35000, 0 );
                        }
                    }
                    SET_GROUP_FOLLOW_STATUS( sub_6681(), 1 );
                    sub_4852( "PIP2_HOSP", ref l_U291, 6, 1 );
                    WAIT( 250 );
                    l_U213 = 1;
                }
                else if (NOT (IS_CHAR_INJURED( l_U220 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U220 ))
                    {
                        if ((sub_19976( l_U291 )) == 2)
                        {
                            REMOVE_CHAR_FROM_GROUP( l_U220 );
                            TASK_LEAVE_ANY_CAR( l_U220 );
                        }
                        else if ((sub_19976( l_U291 )) == 0)
                        {
                            if (NOT l_U322)
                            {
                                if (NOT (IS_CHAR_INJURED( sub_2182() )))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U220 )))
                                    {
                                        TASK_LOOK_AT_CHAR( l_U220, sub_2182(), -2, 0 );
                                        l_U322 = 1;
                                    }
                                }
                            }
                            if (NOT l_U324)
                            {
                                if (NOT (IS_CHAR_INJURED( sub_2182() )))
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U220 )))
                                    {
                                        TASK_LOOK_AT_CHAR( sub_2182(), l_U220, -2, 0 );
                                        l_U324 = 1;
                                    }
                                }
                            }
                        }
                    }
                    else if (sub_17274( ref l_U291 ))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U220, 1 );
                        TASK_PERFORM_SEQUENCE( l_U220, l_U269 );
                        CLEAR_SEQUENCE_TASK( l_U269 );
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            TASK_LOOK_AT_CHAR( sub_2182(), l_U220, 0, 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U220 )))
                        {
                            TASK_LOOK_AT_CHAR( l_U220, sub_2182(), 0, 0 );
                        }
                        SETTIMERB( 0 );
                        l_U201 = 14;
                    }
                }
            }
        }
        break;
        case 14:
        if ((((LOCATE_CHAR_ANY_MEANS_3D( l_U220, 96.57790000, 149.70090000, 14.27750000, 1.50000000, 1.50000000, 1.50000000, 0 )) || (NOT (IS_CHAR_ON_SCREEN( l_U220 )))) || (l_U315 == 1)) || (TIMERB() > 8000))
        {
            if (DOES_CHAR_EXIST( l_U220 ))
            {
                DELETE_CHAR( ref l_U220 );
            }
            if (IS_VEH_DRIVEABLE( l_U223 ))
            {
                if (IS_THIS_MODEL_A_HELI( l_U258 ))
                {
                    if (NOT (IS_CHAR_INJURED( sub_2182() )))
                    {
                        SET_CHAR_COORDINATES( sub_2182(), 94.93130000, 141.74010000, 13.71170000 );
                        SET_CHAR_HEADING( sub_2182(), 272.36300000 );
                    }
                    FREEZE_CAR_POSITION( l_U223, 0 );
                }
                else
                {
                    FREEZE_CAR_POSITION( l_U223, 0 );
                }
            }
            sub_1345( ref l_U291, 0 );
            if (NOT l_U206)
            {
                SET_WIDESCREEN_BORDERS( 0 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_USE_HIGHDOF( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U310 );
                l_U206 = 1;
            }
            SET_PLAYER_CONTROL( sub_1266(), 1 );
            sub_20732();
        }
        break;
    }
    return;
}

void sub_9282(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_9332()
{
    if (g_U64742 == 0)
    {
        g_U64742 = 1;
    }
    else if (g_U64742 == 1)
    {
        g_U64742 = 2;
    }
    g_U64756++;
    if (g_U64756 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1266(), 150 );
        SAY_AMBIENT_SPEECH( sub_2182(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    else
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1266(), 150 );
    }
    sub_1469();
    return;
}

int sub_9844(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_5026( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_5026( "\n speech is not playing" );
    }
    return 0;
}

int sub_10015(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_5026( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_5026( "\n CONVERSATION PAUSED AT LINE " );
            sub_10171( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_5026( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_5026( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_5026( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_10171(unknown uParam0)
{
    return;
}

void sub_10679(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_10724(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_10745( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

int sub_10745(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_4927( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_10942(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_5026( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_5026( "\n CONVERSATION PAUSED AT LINE " );
            sub_10171( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_5026( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_5026( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_5026( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_16414()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_17274(int iParam0)
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

int sub_18534()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_19976(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_9844( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_20732()
{
    CLEAR_WANTED_LEVEL( sub_1266() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_20764( 0 );
    sub_21424( l_U303 );
    sub_1469();
    return;
}

void sub_20764(unknown uParam0)
{
    if (g_U1764[uParam0] == 0)
    {
        sub_20800( ref g_U1766[uParam0], 4, 0, 0 );
        g_U1764[uParam0] = 1;
    }
    return;
}

void sub_20800(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_20853( iParam0, uParam1, uParam2 );
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
        sub_20985( iParam0 + 0 );
    }
    return;
}

void sub_20853(int iParam0, int iParam1, int iParam2)
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
        sub_20985( iParam0 + 0 );
    }
    return;
}

void sub_20985(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_21016( iParam0->_fU4 )))
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

int sub_21016(unknown uParam0)
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

void sub_21424(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_665( uParam0 );
    sub_21444( uParam0 );
    sub_24822( uParam0 );
    return;
}

void sub_21444(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_21574();
        break;
        case 39:
        sub_21940();
        break;
        case 40:
        sub_22199();
        break;
        case 48:
        sub_22382();
        break;
        case 41:
        sub_22567();
        break;
        case 42:
        sub_22763();
        break;
        case 43:
        sub_22944();
        break;
        case 44:
        sub_23127();
        break;
        case 45:
        sub_23308();
        break;
        case 46:
        sub_23487();
        break;
        case 47:
        sub_23798();
        break;
        case 49:
        sub_23998();
        break;
        case 50:
        sub_24175();
        break;
        case 51:
        sub_24373();
        break;
        default: sub_785( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_24648();
    sub_24721();
    return;
}

void sub_21574()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_665( iVar2 );
    sub_20800( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 500 );
        break;
        default: sub_785( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_21664(unknown uParam0)
{
    sub_21675( uParam0 );
    return;
}

void sub_21675(unknown uParam0)
{
    ADD_SCORE( sub_1266(), uParam0 );
    sub_21700( uParam0 );
    return;
}

void sub_21700(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_785( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_21940()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_665( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 100 );
        sub_20800( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_21664( 200 );
        sub_20800( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_21664( 500 );
        break;
        default: sub_785( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_22199()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_665( iVar2 );
    sub_20800( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 0 );
        break;
        default: sub_785( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_22382()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_665( iVar2 );
    sub_20800( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 0 );
        break;
        default: sub_785( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_22567()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_665( iVar2 );
    sub_20800( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 0 );
        break;
        case 2:
        sub_21664( 0 );
        break;
        default: sub_785( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_22763()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_665( iVar2 );
    sub_20800( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 0 );
        break;
        default: sub_785( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_22944()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_665( iVar2 );
    sub_20800( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 500 );
        break;
        default: sub_785( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_23127()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_665( iVar2 );
    sub_20800( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 0 );
        break;
        default: sub_785( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_23308()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_665( iVar2 );
    sub_20800( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 1000 );
        break;
        default: sub_785( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_23487()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_665( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 1000 );
        sub_23574( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_21664( 5000 );
        sub_20800( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_785( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_23574(int iParam0)
{
    sub_23587( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_23587(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_23798()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_665( iVar2 );
    sub_20800( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 0 );
        break;
        case 2:
        sub_21664( 0 );
        break;
        default: sub_785( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_23998()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_665( iVar2 );
    sub_20800( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 500 );
        break;
        default: sub_785( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_24175()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_665( iVar2 );
    sub_20800( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 0 );
        break;
        case 2:
        sub_21664( 0 );
        break;
        default: sub_785( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_24373()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_665( iVar2 );
    sub_20800( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21664( 0 );
        break;
        case 2:
        sub_21664( 1000 );
        break;
        default: sub_785( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_24648()
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

void sub_24721()
{
    sub_24730();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_24730()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_24822(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_665( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_7219( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_24903( uParam0 );
    return;
}

void sub_24903(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 10;
    switch (uParam0)
    {
        case 38:
        iVar3 = 0;
        break;
        case 39:
        iVar3 = 1;
        break;
        case 41:
        iVar3 = 2;
        break;
        case 42:
        iVar3 = 3;
        break;
        case 43:
        iVar3 = 4;
        break;
        case 44:
        iVar3 = 5;
        break;
        case 47:
        iVar3 = 6;
        break;
        case 49:
        iVar3 = 7;
        break;
        case 50:
        iVar3 = 8;
        break;
        case 51:
        iVar3 = 9;
        break;
        case 40:
        case 45:
        case 48:
        case 46: return;
    }
    return;
    iVar4 = 0;
    if (NOT g_U64848[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U64848[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_25182( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_25182(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_25364( 0 );
    return;
}

void sub_25364(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_25619();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_25619()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}