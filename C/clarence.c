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
    l_U122 = 0;
    l_U125 = 1;
    l_U126 = 1000;
    l_U127 = 1;
    l_U143 = 48;
    l_U144 = 20.54400000;
    l_U146 = 0;
    l_U147 = 1;
    l_U148 = 0;
    if (sub_142( l_U143, l_U125 ))
    {
        if (IS_PLAYER_PLAYING( sub_843() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_843(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_917();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U107)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (sub_1937())
                            {
                                WAIT( 0 );
                            }
                            else if (g_U10978)
                            {
                                sub_917();
                            }
                            if (NOT sub_2121())
                            {
                                sub_917();
                            }
                            switch (l_U103)
                            {
                                case 0:
                                sub_2206();
                                break;
                                case 1:
                                sub_3018();
                                break;
                            }
                        }
                        else
                        {
                            sub_917();
                        }
                        sub_8631();
                    }
                    if (l_U107)
                    {
                        switch (l_U104)
                        {
                            case 0:
                            sub_8747();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT g_U65019)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1946() )))
                {
                    if (sub_3313() < 25)
                    {
                        CLEAR_PRINTS();
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U109, 0, 0, 0 );
                }
                g_U65019 = 1;
            }
            sub_917();;
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

void sub_142(unknown uParam0, unknown uParam1)
{
    if (sub_151())
    {
        return 0;
    }
    return sub_198( uParam0, uParam1 );
}

int sub_151()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_198(unknown uParam0, int iParam1)
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
    uVar4 = sub_242( uParam0 );
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
        if (sub_519( g_U34048[uVar4]._fU8 ))
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

int sub_242(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_253( uParam0 )))
    {
        sub_362( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_253(unknown uParam0)
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

void sub_362(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_519(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_688( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_688(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_843()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_917()
{
    if (sub_926())
    {
        sub_973( 0 );
    }
    if (sub_1195( l_U143, l_U125 ))
    {
        sub_1291( l_U143, l_U125 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_843() ))
        {
            SET_PLAYER_CONTROL( sub_843(), 1 );
        }
        sub_1761();
    }
    CLEAR_NAMED_CUTSCENE( "rpghn1" );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U109 );
    l_U109 = nil;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_926()
{
    if (g_U9241._fU148[0] == 0)
    {
        return 0;
    }
    return 1;
}

void sub_973(int iParam0)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_1011( I );
            g_U9241._fU148[I] = 0;
            g_U9241._fU112[I] = -1;
            StrCopy( ref g_U9241._fU28[I], "", 16 );
        }
    }
    return;
}

void sub_1011(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_1063( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_1063(unknown uParam0)
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

int sub_1195(int iParam0, int iParam1)
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

void sub_1291(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1195( uParam0, uParam1 )))
    {
        sub_362( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1387();
    if (g_U813)
    {
        sub_1479();
    }
    else
    {
        sub_1597();
    }
    g_U10978 = 0;
    return;
}

void sub_1387()
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

void sub_1479()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1525();
    return;
}

void sub_1525()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1597()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1643();
    return;
}

void sub_1643()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1761()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

int sub_1937()
{
    if (IS_CHAR_IN_ANY_CAR( sub_1946() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1946(), ref l_U110 );
        if (NOT (l_U110 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U110 ))
            {
                GET_CAR_SPEED( l_U110, ref l_U124 );
                if (l_U124 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_1946()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2121()
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

void sub_2206()
{
    switch (l_U102)
    {
        case 0:
        l_U113 = {-65.27840000, 1329.82500000, 19.41410000};
        l_U129 = 1343144208;
        REQUEST_MODEL( l_U129 );
        while (NOT (HAS_MODEL_LOADED( l_U129 )))
        {
            WAIT( 0 );
        }
        REQUEST_ANIMS( "MISSPASS" );
        while (NOT (HAVE_ANIMS_LOADED( "MISSPASS" )))
        {
            WAIT( 0 );
        }
        l_U102 = 1;
        break;
        case 1:
        if (NOT l_U108)
        {
            CLEAR_AREA( -65.27840000, 1329.82500000, 20.41450000, 15.00000000, 1 );
            CREATE_CHAR( 26, l_U129, l_U113._fU0, l_U113._fU4, l_U113._fU8, ref l_U109, 1 );
            SET_CHAR_HEADING( l_U109, l_U144 );
            SET_CHAR_NEVER_TARGETTED( l_U109, 0 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U109, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U109, 1 );
            TASK_STAND_GUARD( l_U109, l_U113, 32.39960000, 15.00000000, 0, -1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U109, 1 );
            l_U108 = 1;
        }
        if (NOT (DOES_BLIP_EXIST( l_U112 )))
        {
            ADD_BLIP_FOR_CHAR( l_U109, ref l_U112 );
            CHANGE_BLIP_SPRITE( l_U112, 63 );
            SET_BLIP_AS_FRIENDLY( l_U112, 1 );
            CHANGE_BLIP_SCALE( l_U112, 1.00000000 );
            CHANGE_BLIP_DISPLAY( l_U112, 2 );
        }
        if (l_U108)
        {
            sub_2680( "PICLAUD" );
            CLEAR_ADDITIONAL_TEXT( 6, 0 );
            LOAD_ADDITIONAL_TEXT( "PICLAUD", 6 );
            sub_2826( 0, sub_1946(), "NIKO", 0 );
            sub_2826( 1, l_U109, "CLARENCE", 0 );
            l_U103 = 1;
        }
        break;
    }
    return;
}

void sub_2680(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_2697();
    return;
}

void sub_2697()
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

void sub_2826(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2906( "\n PED NUMBER ", uParam0 );
    sub_2946( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2906(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2946(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3018()
{
    if ((IS_CHAR_INJURED( l_U109 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U109, sub_1946(), 0 )))
    {
        sub_3068( ref l_U131, 0 );
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U109, 0, 0, 0 );
        }
        sub_917();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1946() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1946(), ref l_U110 );
        if (NOT (l_U110 == l_U111))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U111 );
            l_U111 = l_U110;
        }
    }
    if ((sub_3313() < 25) AND (IS_CHAR_ON_FOOT( sub_1946() )))
    {
        sub_3520( ref l_U109, ref l_U145, ref l_U113, ref l_U144, ref l_U146, 1.10000000 );
    }
    switch (l_U105)
    {
        case 0:
        if ((((IS_CHAR_INJURED( l_U109 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U109, sub_1946(), 0 ))) || (IS_CHAR_ON_FIRE( l_U109 ))) || (IS_WANTED_LEVEL_GREATER( sub_843(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_843(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1946() )))
                {
                    if (sub_3313() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U109, 0, 0, 0 );
            }
            sub_917();
        }
        if (NOT (IS_CHAR_INJURED( l_U109 )))
        {
            if ((sub_3313() < 18) AND (IS_CHAR_ON_FOOT( sub_1946() )))
            {
                if ((NOT IS_HINT_RUNNING()) AND (NOT l_U148))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U109, 0, 0, 6000 );
                    TASK_LOOK_AT_CHAR( l_U109, sub_1946(), -2, 0 );
                    l_U148 = 1;
                }
                l_U105 = 1;
            }
        }
        break;
        case 1:
        if ((((IS_CHAR_INJURED( l_U109 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U109, sub_1946(), 0 ))) || (IS_CHAR_ON_FIRE( l_U109 ))) || (IS_WANTED_LEVEL_GREATER( sub_843(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_843(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1946() )))
                {
                    if (sub_3313() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U109, 0, 0, 0 );
            }
            sub_917();
        }
        if (((l_U147) AND (NOT (sub_4318( l_U131 )))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
        {
            sub_4527( "PICL_ATTEN", ref l_U131, 4, 1 );
            if (NOT (IS_CHAR_DEAD( l_U109 )))
            {
                TASK_PLAY_ANIM_UPPER_BODY( l_U109, "partial_wave_a", "MISSPASS", 8.00000000, 0, 0, 0, 0, -1 );
            }
            SETTIMERA( 0 );
            l_U147 = 0;
        }
        else if (TIMERA() > 9500)
        {
            GENERATE_RANDOM_INT_IN_RANGE( l_U127, l_U126, ref l_U128 );
            if (l_U128 > 970)
            {
                l_U147 = 1;
            }
        }
        if (sub_3313() < 4.50000000)
        {
            if (IS_CHAR_ON_FOOT( sub_1946() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U109 )))
                {
                    if (sub_5673( 1, 1 ))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U109, sub_1946(), 0 )))
                        {
                            if (NOT (IS_CHAR_ON_FIRE( l_U109 )))
                            {
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_843(), 0 )))
                                {
                                    if (sub_2121())
                                    {
                                        SET_MISSION_FLAG( 1 );
                                        SET_PLAYER_CONTROL( sub_843(), 0 );
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
        if (sub_3313() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U109, 0, 0, 0 );
            }
            sub_3068( ref l_U131, 1 );
            l_U105 = 0;
        }
        break;
        case 2:
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U109, 0, 0, 0 );
        }
        CLEAR_WANTED_LEVEL( sub_843() );
        CLEAR_PRINTS();
        CLEAR_ADDITIONAL_TEXT( 6, 0 );
        LOAD_ADDITIONAL_TEXT( "PIMAUD", 6 );
        CLEAR_NAMED_CUTSCENE( "rpghn1" );
        START_CUTSCENE_NOW( "rpghn1" );
        sub_6308( l_U143, l_U125 );
        l_U107 = 1;
        break;
    }
    return;
}

void sub_3068(int iParam0, unknown uParam1)
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

void sub_3313()
{
    if (NOT (IS_CHAR_DEAD( l_U109 )))
    {
        GET_CHAR_COORDINATES( sub_1946(), ref l_U116._fU0, ref l_U116._fU4, ref l_U116._fU8 );
        GET_CHAR_COORDINATES( l_U109, ref l_U119._fU0, ref l_U119._fU4, ref l_U119._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U116._fU0, l_U116._fU4, l_U116._fU8, l_U119._fU0, l_U119._fU4, l_U119._fU8, ref l_U122 );
        return l_U122;
    }
    return l_U122;
}

void sub_3520(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

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
            GET_SCRIPT_TASK_STATUS( (uParam0^), 29, ref iVar8 );
            if (iVar8 == 7)
            {
                (uParam4^) = 0;
            }
        }
    }
    return;
}

int sub_4318(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_4430( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_4430( "\n speech is not playing" );
    }
    return 0;
}

void sub_4430(unknown uParam0)
{
    return;
}

void sub_4527(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_4548( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_4548(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_4602( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_4602(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_4624( iParam1 )))
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
    sub_5300( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_4624(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_4430( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_4430( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_4430( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_5300(int iParam0, int iParam1)
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

int sub_5673(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1946() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1946(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1946() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1946(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1946()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1946() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1946() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_843() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_843() )))
    {
        return 0;
    }
    return 1;
}

void sub_6308(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_362( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_242( uParam0 );
    if (g_U34175._fU4)
    {
        sub_362( "Interactions_Started: Another interaction is already taking place" );
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
        sub_362( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_6671();
    sub_7442( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_7586( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_6671()
{
    sub_6680();
    sub_6783( ref g_U9893._fU68 );
    sub_6832();
    return;
}

void sub_6680()
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

void sub_6783(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_6832()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_6870( 1, g_U569[I] )) == 0)
        {
            sub_7121( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_7299())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_6870(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_7121(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_7206( g_U569 - 1 );
    return;
}

void sub_7206(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_7299()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_6870( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_7442(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_7476();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_7476()
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

void sub_7586(unknown uParam0, int iParam1)
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
    sub_8432( cVar4 );
    return;
}

void sub_8432(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_8631()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_3313() > 30) || (sub_1937()))
        {
            HINT_CAM( l_U113._fU0, l_U113._fU4, l_U113._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_8747()
{
    switch (l_U106)
    {
        case 0:
        CLEAR_HELP();
        if (DOES_VEHICLE_EXIST( l_U111 ))
        {
            if (IS_VEH_DRIVEABLE( l_U111 ))
            {
                SET_CAR_AS_MISSION_CAR( l_U111 );
                SET_CAR_COORDINATES( l_U111, -74.94430000, 1336.52100000, 19.30480000 );
                SET_CAR_HEADING( l_U111, 270.69820000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U111 );
                SET_CAR_IN_CUTSCENE( l_U111, 1 );
            }
        }
        CLEAR_AREA( l_U113._fU0, l_U113._fU4, l_U113._fU8, 100.00000000, 1 );
        DELETE_CHAR( ref l_U109 );
        GET_CHAR_COORDINATES( sub_1946(), ref l_U116._fU0, ref l_U116._fU4, ref l_U116._fU8 );
        GET_CHAR_HEADING( sub_1946(), ref l_U123 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SWITCH_PED_PATHS_OFF( l_U113._fU0 - 5.00000000, l_U113._fU4 - 5.00000000, l_U113._fU8 - 5.00000000, l_U113._fU0 + 5.00000000, l_U113._fU4 + 5.00000000, l_U113._fU8 + 5.00000000 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U130 );
        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U130, 0 );
        SET_CREATE_RANDOM_COPS( 0 );
        CLEAR_AREA_OF_COPS( l_U113._fU0, l_U113._fU4, l_U113._fU8, 50.00000000 );
        CREATE_CHAR( 26, l_U129, l_U113._fU0, l_U113._fU4, l_U113._fU8, ref l_U109, 1 );
        SET_CHAR_HEADING( l_U109, 90 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U109, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U109, 10.00000000 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U109, 1 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U109, 0 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U129 );
        SET_CHAR_MONEY( l_U109, 1000 );
        SET_CHAR_HEALTH( l_U109, 250 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U109, 1 );
        SET_COMBAT_DECISION_MAKER( l_U109, l_U130 );
        SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U109, 1 );
        SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U109, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U112 )))
        {
            ADD_BLIP_FOR_CHAR( l_U109, ref l_U112 );
            SET_BLIP_AS_FRIENDLY( l_U112, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U109 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U109, 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U109 );
            GIVE_WEAPON_TO_CHAR( l_U109, 7, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U109, 7, 1 );
            SET_CHAR_RELATIONSHIP( l_U109, 5, 0 );
            TASK_COMBAT( l_U109, sub_1946() );
        }
        if (NOT (IS_CHAR_DEAD( sub_1946() )))
        {
            SET_CHAR_COORDINATES( sub_1946(), -71.97950000, 1329.18800000, 19.41790000 );
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( sub_1946(), -73.31650000, 1330.54900000, 19.41450000, -1 );
            SET_CHAR_HEADING( sub_1946(), 2.47060000 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1946(), 0 );
            SET_CAM_BEHIND_PED( sub_1946() );
        }
        CLEAR_PRINTS();
        LOAD_ADDITIONAL_TEXT( "WI_MSHL", 0 );
        sub_2826( 1, l_U109, "CLARENCE", 0 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        l_U106 = 1;
        break;
        case 1:
        SET_WANTED_MULTIPLIER( 0.10000000 );
        CLEAR_HELP();
        CLEAR_NAMED_CUTSCENE( "rpghn1" );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_PED_PATHS_ON( l_U113._fU0 - 5.00000000, l_U113._fU4 - 5.00000000, l_U113._fU8 - 5.00000000, l_U113._fU0 + 5.00000000, l_U113._fU4 + 5.00000000, l_U113._fU8 + 5.00000000 );
        PRINT_NOW( "MSL1_PMT1", 7500, 1 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN_UNHACKED( 100 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
        }
        SET_PLAYER_CONTROL( sub_843(), 1 );
        l_U106 = 2;
        break;
        case 2:
        if ((NOT (IS_CHAR_INJURED( l_U109 ))) AND (sub_3313() < 20))
        {
            if ((l_U147) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                if (NOT (sub_4318( l_U137 )))
                {
                    sub_4527( "PICL_FIGHT", ref l_U137, 6, 1 );
                    SETTIMERA( 0 );
                    l_U147 = 0;
                }
            }
            else if (TIMERA() > 4500)
            {
                GENERATE_RANDOM_INT_IN_RANGE( l_U127, l_U126, ref l_U128 );
                if (l_U128 > 960)
                {
                    l_U147 = 1;
                }
            }
        }
        else
        {
            sub_3068( ref l_U137, 0 );
        }
        if (IS_CHAR_INJURED( l_U109 ))
        {
            if (DOES_BLIP_EXIST( l_U112 ))
            {
                REMOVE_BLIP( l_U112 );
            }
            sub_3068( ref l_U137, 0 );
            sub_10223();
        }
        break;
    }
    return;
}

void sub_10223()
{
    CLEAR_WANTED_LEVEL( sub_843() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_10258( 2027, 3 );
    sub_10342( "PD_CLARENCE", "PD_LITTLE" );
    sub_10535( l_U143 );
    sub_917();
    return;
}

void sub_10258(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_10342(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_10355( uParam0, uParam1 );
    if (iVar4 != -1)
    {
        g_U2273[iVar4]._fU180 = 1;
        g_U2273[iVar4]._fU212 = 1;
    }
    return;
}

int sub_10355(unknown uParam0, unknown uParam1)
{
    int Result;

    if ((DOES_TEXT_LABEL_EXIST( uParam0 )) AND (DOES_TEXT_LABEL_EXIST( uParam1 )))
    {
        for ( Result = 0; Result <= 99; Result++ )
        {
            if (COMPARE_STRING( ref g_U2273[Result]._fU16, uParam0 ))
            {
                if (COMPARE_STRING( ref g_U2273[Result]._fU0, uParam1 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

void sub_10535(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_242( uParam0 );
    sub_10555( uParam0 );
    sub_14529( uParam0 );
    return;
}

void sub_10555(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_10685();
        break;
        case 39:
        sub_11647();
        break;
        case 40:
        sub_11906();
        break;
        case 48:
        sub_12089();
        break;
        case 41:
        sub_12274();
        break;
        case 42:
        sub_12470();
        break;
        case 43:
        sub_12651();
        break;
        case 44:
        sub_12834();
        break;
        case 45:
        sub_13015();
        break;
        case 46:
        sub_13194();
        break;
        case 47:
        sub_13505();
        break;
        case 49:
        sub_13705();
        break;
        case 50:
        sub_13882();
        break;
        case 51:
        sub_14080();
        break;
        default: sub_362( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_14355();
    sub_14428();
    return;
}

void sub_10685()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_242( iVar2 );
    sub_10725( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 500 );
        break;
        default: sub_362( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_10725(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_10778( iParam0, uParam1, uParam2 );
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
        sub_10910( iParam0 + 0 );
    }
    return;
}

void sub_10778(int iParam0, int iParam1, int iParam2)
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
        sub_10910( iParam0 + 0 );
    }
    return;
}

void sub_10910(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_10941( iParam0->_fU4 )))
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

int sub_10941(unknown uParam0)
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

void sub_11371(unknown uParam0)
{
    sub_11382( uParam0 );
    return;
}

void sub_11382(unknown uParam0)
{
    ADD_SCORE( sub_843(), uParam0 );
    sub_11407( uParam0 );
    return;
}

void sub_11407(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_362( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_11647()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_242( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 100 );
        sub_10725( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_11371( 200 );
        sub_10725( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_11371( 500 );
        break;
        default: sub_362( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_11906()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_242( iVar2 );
    sub_10725( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 0 );
        break;
        default: sub_362( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_12089()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_242( iVar2 );
    sub_10725( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 0 );
        break;
        default: sub_362( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_12274()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_242( iVar2 );
    sub_10725( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 0 );
        break;
        case 2:
        sub_11371( 0 );
        break;
        default: sub_362( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_12470()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_242( iVar2 );
    sub_10725( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 0 );
        break;
        default: sub_362( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_12651()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_242( iVar2 );
    sub_10725( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 500 );
        break;
        default: sub_362( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_12834()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_242( iVar2 );
    sub_10725( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 0 );
        break;
        default: sub_362( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_13015()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_242( iVar2 );
    sub_10725( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 1000 );
        break;
        default: sub_362( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_13194()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_242( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 1000 );
        sub_13281( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_11371( 5000 );
        sub_10725( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_362( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_13281(int iParam0)
{
    sub_13294( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_13294(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_13505()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_242( iVar2 );
    sub_10725( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 0 );
        break;
        case 2:
        sub_11371( 0 );
        break;
        default: sub_362( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_13705()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_242( iVar2 );
    sub_10725( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 500 );
        break;
        default: sub_362( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_13882()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_242( iVar2 );
    sub_10725( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 0 );
        break;
        case 2:
        sub_11371( 0 );
        break;
        default: sub_362( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_14080()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_242( iVar2 );
    sub_10725( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_11371( 0 );
        break;
        case 2:
        sub_11371( 1000 );
        break;
        default: sub_362( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_14355()
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

void sub_14428()
{
    sub_14437();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_14437()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_14529(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_242( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_6783( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_14610( uParam0 );
    return;
}

void sub_14610(unknown uParam0)
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
            sub_14889( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_14889(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_15071( 0 );
    return;
}

void sub_15071(boolean bParam0)
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
        sub_15326();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_15326()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}