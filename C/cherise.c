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
    l_U204 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U209 = 1;
    l_U210 = 0;
    l_U211 = 0;
    l_U212 = 0;
    l_U213 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U216 = 0;
    l_U238 = 0;
    l_U241 = 1;
    l_U292 = 40;
    l_U293 = 280.46510000;
    l_U294 = 0;
    l_U296 = 0;
    l_U299 = 7;
    l_U303 = 1000;
    l_U304 = 1;
    l_U306 = 0;
    l_U307 = 0;
    l_U308 = 0;
    l_U309 = 1;
    l_U311 = 0;
    l_U316 = 0;
    if (sub_360( l_U292, l_U241 ))
    {
        if (IS_PLAYER_PLAYING( sub_1061() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1061(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1140( ref l_U248, 0 );
                    sub_1140( ref l_U254, 0 );
                    sub_1274();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U202)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (sub_2534())
                            {
                                WAIT( 0 );
                            }
                            else if (g_U10978)
                            {
                                sub_1274();
                            }
                            if (NOT sub_2682())
                            {
                                sub_1274();
                            }
                            switch (l_U197)
                            {
                                case 0:
                                sub_2767();
                                break;
                                case 1:
                                sub_3320();
                                break;
                            }
                        }
                        else
                        {
                            sub_1274();
                        }
                        sub_7750();
                    }
                    if (l_U202)
                    {
                        switch (l_U198)
                        {
                            case 0:
                            sub_7866();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT g_U65019)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2417() )))
                {
                    if (sub_3486() < 25)
                    {
                        CLEAR_PRINTS();
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U217, 0, 0, 0 );
                }
                g_U65019 = 1;
            }
            sub_1274();;
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

void sub_360(unknown uParam0, unknown uParam1)
{
    if (sub_369())
    {
        return 0;
    }
    return sub_416( uParam0, uParam1 );
}

int sub_369()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_416(unknown uParam0, int iParam1)
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
    uVar4 = sub_460( uParam0 );
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
        if (sub_737( g_U34048[uVar4]._fU8 ))
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

int sub_460(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_471( uParam0 )))
    {
        sub_580( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_471(unknown uParam0)
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

void sub_580(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_737(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_906( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_906(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1061()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1140(int iParam0, unknown uParam1)
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

void sub_1274()
{
    if ((l_U205) AND (NOT l_U206))
    {
        if (sub_1300())
        {
            sub_1347( 0 );
        }
    }
    if (sub_1569( l_U292, l_U241 ))
    {
        sub_1665( l_U292, l_U241 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_1061() ))
        {
            SET_PLAYER_CONTROL( sub_1061(), 1 );
        }
        sub_2135();
    }
    if (DOES_CHAR_EXIST( l_U217 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U217 )))
        {
            SET_CHAR_INVINCIBLE( l_U217, 0 );
            FREEZE_CHAR_POSITION( l_U217, 0 );
            CLEAR_CHAR_TASKS( l_U217 );
        }
        else
        {
            REMOVE_CHAR_ELEGANTLY( ref l_U217 );
        }
    }
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -331.80130000, 1600.88800000, 15.27710000, -321.80130000, 1610.88800000, 25.27710000, 1 );
    CLEAR_NAMED_CUTSCENE( "rpexg1" );
    REMOVE_BLIP( l_U222 );
    REMOVE_BLIP( l_U221 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U217 );
    l_U217 = nil;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_ALL_RANDOM_PEDS_FLEE( sub_1061(), 0 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2417(), 1 );
    SWITCH_MAD_DRIVERS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1300()
{
    if (g_U9241._fU148[0] == 0)
    {
        return 0;
    }
    return 1;
}

void sub_1347(int iParam0)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_1385( I );
            g_U9241._fU148[I] = 0;
            g_U9241._fU112[I] = -1;
            StrCopy( ref g_U9241._fU28[I], "", 16 );
        }
    }
    return;
}

void sub_1385(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_1437( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_1437(unknown uParam0)
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

int sub_1569(int iParam0, int iParam1)
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

void sub_1665(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1569( uParam0, uParam1 )))
    {
        sub_580( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1761();
    if (g_U813)
    {
        sub_1853();
    }
    else
    {
        sub_1971();
    }
    g_U10978 = 0;
    return;
}

void sub_1761()
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

void sub_1853()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1899();
    return;
}

void sub_1899()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1971()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_2017();
    return;
}

void sub_2017()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_2135()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_2417()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2534()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2417() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2417(), ref l_U219 );
        if (NOT (l_U219 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U219 ))
            {
                GET_CAR_SPEED( l_U219, ref l_U240 );
                if (l_U240 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_2682()
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

void sub_2767()
{
    switch (l_U196)
    {
        case 0:
        l_U226 = {-273.07290000, 1431.90800000, 19.42980000};
        l_U290 = 88667657;
        REQUEST_MODEL( l_U290 );
        REQUEST_ANIMS( "misscherise" );
        while ((NOT (HAS_MODEL_LOADED( l_U290 ))) || (NOT (HAVE_ANIMS_LOADED( "misscherise" ))))
        {
            WAIT( 0 );
        }
        l_U196 = 1;
        break;
        case 1:
        if (NOT l_U204)
        {
            CLEAR_AREA( -312.98180000, 1410.18700000, 15.46450000, 10.00000000, 1 );
            CREATE_CHAR( 26, l_U290, l_U226._fU0, l_U226._fU4, l_U226._fU8, ref l_U217, 1 );
            SET_CHAR_HEADING( l_U217, l_U293 );
            SET_CHAR_NEVER_TARGETTED( l_U217, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U217, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U217, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U217, 1 );
            l_U204 = 1;
        }
        if (NOT (DOES_BLIP_EXIST( l_U221 )))
        {
            ADD_BLIP_FOR_CHAR( l_U217, ref l_U221 );
            CHANGE_BLIP_SPRITE( l_U221, 64 );
            SET_BLIP_AS_FRIENDLY( l_U221, 1 );
            CHANGE_BLIP_SCALE( l_U221, 1.00000000 );
            CHANGE_BLIP_DISPLAY( l_U221, 2 );
        }
        if (HAVE_ANIMS_LOADED( "misscherise" ))
        {
            l_U203 = 1;
        }
        if ((l_U203) AND (l_U204))
        {
            if (NOT (IS_CHAR_INJURED( l_U217 )))
            {
                TASK_PLAY_ANIM( l_U217, "female_ilde", "misscherise", 8.00000000, 1, 0, 0, 0, -2 );
            }
            l_U197 = 1;
        }
        break;
    }
    return;
}

void sub_3320()
{
    if ((IS_CHAR_INJURED( l_U217 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U217, sub_2417(), 0 )))
    {
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U217, 0, 0, 0 );
        }
        sub_1274();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2417() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2417(), ref l_U219 );
        if (NOT (l_U219 == l_U220))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U220 );
            l_U220 = l_U219;
        }
    }
    if ((sub_3486() < 25) AND (IS_CHAR_ON_FOOT( sub_2417() )))
    {
        sub_3723( ref l_U217, ref l_U295, ref l_U226, ref l_U293, ref l_U296, 1.10000000, "female_ilde", "misscherise", 0, 1 );
    }
    switch (l_U199)
    {
        case 0:
        if ((((IS_CHAR_INJURED( l_U217 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U217, sub_2417(), 0 ))) || (IS_CHAR_ON_FIRE( l_U217 ))) || (IS_WANTED_LEVEL_GREATER( sub_1061(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1061(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2417() )))
                {
                    if (sub_3486() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U217, 0, 0, 0 );
            }
            sub_1274();
        }
        if ((NOT (IS_CHAR_INJURED( l_U217 ))) AND (IS_CHAR_ON_FOOT( sub_2417() )))
        {
            if (sub_3486() < 18)
            {
                if ((NOT IS_HINT_RUNNING()) AND (NOT l_U294))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U217, 0, 0, 6000 );
                    TASK_LOOK_AT_CHAR( l_U217, sub_2417(), -2, 0 );
                    l_U294 = 1;
                }
                l_U199 = 1;
            }
        }
        break;
        case 1:
        if ((((IS_CHAR_INJURED( l_U217 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U217, sub_2417(), 0 ))) || (IS_CHAR_ON_FIRE( l_U217 ))) || (IS_WANTED_LEVEL_GREATER( sub_1061(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_1061(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2417() )))
                {
                    if (sub_3486() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U217, 0, 0, 0 );
            }
            sub_1274();
        }
        if (sub_3486() < 4.00000000)
        {
            if (IS_CHAR_ON_FOOT( sub_2417() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U217 )))
                {
                    if (sub_4648( 1, 1 ))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U217, sub_2417(), 0 )))
                        {
                            if (NOT (IS_CHAR_ON_FIRE( l_U217 )))
                            {
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1061(), 0 )))
                                {
                                    if (sub_2682())
                                    {
                                        SET_MISSION_FLAG( 1 );
                                        SET_PLAYER_CONTROL( sub_1061(), 0 );
                                        DO_SCREEN_FADE_OUT( 100 );
                                        while (NOT IS_SCREEN_FADED_OUT())
                                        {
                                            WAIT( 0 );
                                        }
                                        l_U199 = 2;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (sub_3486() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U217, 0, 0, 0 );
            }
            l_U199 = 0;
        }
        break;
        case 2:
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U217, 0, 0, 0 );
        }
        CLEAR_WANTED_LEVEL( sub_1061() );
        CLEAR_PRINTS();
        LOAD_ADDITIONAL_TEXT( "PICAUD", 6 );
        sub_5222();
        CLEAR_NAMED_CUTSCENE( "rpexg1" );
        START_CUTSCENE_NOW( "rpexg1" );
        SET_GROUP_SEPARATION_RANGE( sub_5364(), 30.00000000 );
        sub_5427( l_U292, l_U241 );
        l_U202 = 1;
        break;
    }
    return;
}

void sub_3486()
{
    if (NOT (IS_CHAR_DEAD( l_U217 )))
    {
        GET_CHAR_COORDINATES( sub_2417(), ref l_U229._fU0, ref l_U229._fU4, ref l_U229._fU8 );
        GET_CHAR_COORDINATES( l_U217, ref l_U232._fU0, ref l_U232._fU4, ref l_U232._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U229._fU0, l_U229._fU4, l_U229._fU8, l_U232._fU0, l_U232._fU4, l_U232._fU8, ref l_U238 );
        return l_U238;
    }
    return l_U238;
}

void sub_3723(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
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

int sub_4648(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2417() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2417(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2417() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2417(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2417()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2417() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2417() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1061() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1061() )))
    {
        return 0;
    }
    return 1;
}

void sub_5222()
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

void sub_5364()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5427(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_580( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_460( uParam0 );
    if (g_U34175._fU4)
    {
        sub_580( "Interactions_Started: Another interaction is already taking place" );
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
        sub_580( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_5790();
    sub_6561( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_6705( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_5790()
{
    sub_5799();
    sub_5902( ref g_U9893._fU68 );
    sub_5951();
    return;
}

void sub_5799()
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

void sub_5902(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_5951()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5989( 1, g_U569[I] )) == 0)
        {
            sub_6240( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_6418())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_5989(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_6240(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_6325( g_U569 - 1 );
    return;
}

void sub_6325(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_6418()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5989( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_6561(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_6595();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_6595()
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

void sub_6705(unknown uParam0, int iParam1)
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
    sub_7551( cVar4 );
    return;
}

void sub_7551(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_7750()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_3486() > 30) || (sub_2534()))
        {
            HINT_CAM( l_U226._fU0, l_U226._fU4, l_U226._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_7866()
{
    if (IS_CHAR_DEAD( l_U217 ))
    {
        if (NOT (l_U200 == 15))
        {
            PRINT( "CHRS_PMT61", 7500, 1 );
            sub_1140( ref l_U248, 0 );
            sub_1140( ref l_U266, 0 );
            sub_1140( ref l_U272, 0 );
            sub_1140( ref l_U254, 0 );
            sub_7978( 40, l_U217, 28 );
            sub_8028();
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U217 )))
    {
        GET_CHAR_HEALTH( l_U217, ref l_U302 );
    }
    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U217, sub_2417(), 0 ))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U217, 0 );
        if ((l_U302 < 150) AND (NOT (IS_CHAR_DEAD( l_U217 ))))
        {
            if (NOT l_U316)
            {
                SET_CHAR_INVINCIBLE( l_U217, 1 );
                sub_1140( ref l_U248, 0 );
                CLEAR_PRINTS();
                CLEAR_HELP();
                sub_8380( "PIC_HITS", ref l_U260, 6, 1 );
                if (DOES_BLIP_EXIST( l_U223 ))
                {
                    REMOVE_BLIP( l_U223 );
                }
                if (NOT (IS_CHAR_INJURED( l_U217 )))
                {
                    TASK_SMART_FLEE_CHAR( l_U217, sub_2417(), 600, -1 );
                }
                l_U316 = 1;
            }
            else if (sub_9425( ref l_U260 ))
            {
                PRINT( "CHRS_PMT31", 7500, 1 );
                sub_8028();
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2417() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2417(), ref l_U219 );
        if (NOT (l_U219 == l_U220))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U220 );
            l_U220 = l_U219;
            SET_CAR_AS_MISSION_CAR( l_U220 );
        }
    }
    if (l_U209)
    {
        if (NOT (IS_CHAR_DEAD( sub_2417() )))
        {
            if (IS_VEH_DRIVEABLE( l_U220 ))
            {
                if (IS_CHAR_IN_CAR( sub_2417(), l_U220 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U217 )))
                    {
                        if (IS_CHAR_IN_CAR( l_U217, l_U220 ))
                        {
                            if (g_U64743 == 0)
                            {
                                if (sub_9719( l_U254 ))
                                {
                                    CLEAR_PRINTS();
                                    sub_9770( "PIC_BANT1", ref l_U254, 6, 1 );
                                }
                            }
                            else if (g_U64743 == 1)
                            {
                                if (sub_9719( l_U254 ))
                                {
                                    CLEAR_PRINTS();
                                    sub_9770( "PIC_BANT2", ref l_U254, 6, 1 );
                                }
                            }
                            l_U211 = 1;
                        }
                        else if (sub_9964( l_U254 ))
                        {
                            sub_10135( ref l_U254 );
                        }
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U217 )))
                {
                    if (IS_CHAR_IN_CAR( l_U217, l_U220 ))
                    {
                        if (sub_9964( l_U254 ))
                        {
                            sub_10135( ref l_U254 );
                        }
                    }
                    else if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        if (sub_3486() < 10.00000000)
                        {
                            if (g_U64743 == 0)
                            {
                                if (sub_9719( l_U254 ))
                                {
                                    sub_9770( "PIC_BANT1", ref l_U254, 6, 1 );
                                }
                            }
                            else if (g_U64743 == 1)
                            {
                                if (sub_9719( l_U254 ))
                                {
                                    sub_9770( "PIC_BANT2", ref l_U254, 6, 1 );
                                }
                            }
                        }
                        else if (sub_9964( l_U254 ))
                        {
                            sub_10135( ref l_U254 );
                        }
                    }
                }
            }
        }
    }
    if (l_U214)
    {
        if (NOT (IS_CHAR_INJURED( l_U217 )))
        {
            if (NOT (IS_GROUP_MEMBER( l_U217, sub_5364() )))
            {
                l_U209 = 0;
                if (DOES_BLIP_EXIST( l_U221 ))
                {
                    if (sub_3486() < 12.00000000)
                    {
                        REMOVE_BLIP( l_U221 );
                        SET_GROUP_MEMBER( sub_5364(), l_U217 );
                        l_U209 = 1;
                        if ((NOT (IS_CHAR_INJURED( l_U217 ))) AND (l_U302 > 150))
                        {
                            if ((NOT (IS_CHAR_INJURED( sub_2417() ))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_2417() ))))
                            {
                                if (NOT l_U307)
                                {
                                    PRINT( "CHRS_PMT2", 7500, 1 );
                                    l_U307 = 1;
                                }
                            }
                            l_U307 = 0;
                            ADD_BLIP_FOR_COORD( -326.80130000, 1605.88800000, 19.27710000, ref l_U223 );
                            SET_ROUTE( l_U223, 1 );
                            CLEAR_PRINTS();
                            PRINT( "CHRS_PMT1", 7500, 1 );
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U223 ))
                {
                    REMOVE_BLIP( l_U223 );
                }
                if (NOT (DOES_BLIP_EXIST( l_U221 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U217, ref l_U221 );
                    SET_ROUTE( l_U221, 1 );
                    SET_BLIP_AS_FRIENDLY( l_U221, 1 );
                }
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CHRS_PMT11" )))
                {
                    CLEAR_PRINTS();
                    PRINT( "CHRS_PMT11", 7500, 1 );
                }
            }
        }
    }
    switch (l_U200)
    {
        case 0:
        CLEAR_HELP();
        if (DOES_VEHICLE_EXIST( l_U220 ))
        {
            if (IS_VEH_DRIVEABLE( l_U220 ))
            {
                SET_CAR_AS_MISSION_CAR( l_U220 );
                SET_CAR_COORDINATES( l_U220, -277.09490000, 1423.97600000, 19.31040000 );
                SET_CAR_HEADING( l_U220, 91.39610000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U220 );
                SET_CAR_IN_CUTSCENE( l_U220, 1 );
            }
        }
        DELETE_CHAR( ref l_U217 );
        GET_CHAR_COORDINATES( sub_2417(), ref l_U229._fU0, ref l_U229._fU4, ref l_U229._fU8 );
        GET_CHAR_HEADING( sub_2417(), ref l_U239 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SWITCH_PED_PATHS_OFF( l_U229._fU0 - 5.00000000, l_U229._fU4 - 5.00000000, l_U229._fU8 - 5.00000000, l_U229._fU0 + 5.00000000, l_U229._fU4 + 5.00000000, l_U229._fU8 + 5.00000000 );
        CLEAR_AREA( l_U229._fU0, l_U229._fU4, l_U229._fU8, 100.00000000, 1 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U243 );
        LOAD_COMBAT_DECISION_MAKER( 6, ref l_U244 );
        # -sub_C1FFC0-0xc214c8( 3, ref l_U246 );
        LOAD_COMBAT_DECISION_MAKER( 1, ref l_U247 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        REQUEST_MODEL( -552829610 );
        REQUEST_MODEL( -314369597 );
        while ((NOT (HAS_MODEL_LOADED( -552829610 ))) || (NOT (HAS_MODEL_LOADED( -314369597 ))))
        {
            WAIT( 0 );
        }
        OPEN_SEQUENCE_TASK( ref l_U245 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -331.28300000, 1607.02600000, 19.42090000, 2, -2, 1.00000000 );
        TASK_STAND_GUARD( 0, -331.28300000, 1607.02600000, 19.42090000, 77.10090000, 15.00000000, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U245 );
        CREATE_CHAR( 26, l_U290, -272.56920000, 1431.83700000, 19.42930000, ref l_U217, 1 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U217, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U217, 10.00000000 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2417(), 0 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U217, 0 );
        SET_PED_DIES_WHEN_INJURED( l_U217, 0 );
        SET_CHAR_NEVER_TARGETTED( l_U217, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U217, 1 );
        sub_12060( ref l_U217, ref l_U246, ref l_U247 );
        if (NOT (IS_CHAR_DEAD( l_U217 )))
        {
            SET_CHAR_HEADING( l_U217, 191.83140000 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U217, 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U290 );
        }
        if (IS_SCREEN_FADED_OUT())
        {
            REMOVE_BLIP( l_U221 );
            if (NOT (IS_CHAR_DEAD( sub_2417() )))
            {
                SET_CHAR_COORDINATES( sub_2417(), -272.54320000, 1428.99600000, 19.42880000 );
                SET_CHAR_HEADING( sub_2417(), 207.02870000 );
                SET_CAM_BEHIND_PED( sub_2417() );
            }
            l_U200 = 1;
        }
        break;
        case 1:
        sub_12581( "PICAUD" );
        sub_12700( 0, sub_2417(), "NIKO", 0 );
        sub_12700( 1, l_U217, "PI_CHERISE", 0 );
        LOAD_ADDITIONAL_TEXT( "WI_CHRS", 0 );
        CLEAR_NAMED_CUTSCENE( "rpexg1" );
        CLEAR_HELP();
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_PED_PATHS_ON( l_U229._fU0 - 5.00000000, l_U229._fU4 - 5.00000000, l_U229._fU8 - 5.00000000, l_U229._fU0 + 5.00000000, l_U229._fU4 + 5.00000000, l_U229._fU8 + 5.00000000 );
        SET_CAM_BEHIND_PED( sub_2417() );
        LOAD_SCENE( l_U229._fU0, l_U229._fU4, l_U229._fU8 );
        SET_CAR_GENERATORS_ACTIVE_IN_AREA( -331.80130000, 1600.88800000, 15.27710000, -321.80130000, 1610.88800000, 25.27710000, 0 );
        DO_SCREEN_FADE_IN( 250 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL_ADVANCED( sub_1061(), 1, 1, 1 );
        if (NOT (IS_CHAR_INJURED( l_U217 )))
        {
            TASK_LOOK_AT_CHAR( l_U217, sub_2417(), -2, 0 );
            if (NOT l_U213)
            {
                if (sub_8380( "PIC_LOCATE", ref l_U248, 6, 1 ))
                {
                    WAIT( 250 );
                    l_U213 = 1;
                    l_U201 = 0;
                    l_U206 = 1;
                    l_U200 = 2;
                }
            }
        }
        break;
        case 2:
        if (NOT (sub_9964( l_U248 )))
        {
            CLEAR_PRINTS();
            l_U213 = 0;
            l_U201 = 0;
            l_U206 = 1;
            l_U200 = 3;
        }
        break;
        case 3:
        if (NOT l_U307)
        {
            PRINT( "CHRS_PMT2", 7500, 1 );
            l_U307 = 1;
        }
        if (NOT (IS_CHAR_INJURED( sub_2417() )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2417() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U217 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U217, 0 );
                }
                CLEAR_PRINTS();
                l_U214 = 1;
                l_U200 = 4;
            }
            else
            {
                l_U214 = 0;
            }
        }
        break;
        case 4:
        if (l_U211)
        {
            if (NOT l_U213)
            {
                if (NOT (IS_CHAR_INJURED( l_U217 )))
                {
                    TASK_LOOK_AT_CHAR( l_U217, sub_2417(), 0, 0 );
                }
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (g_U64743 == 0)
                    {
                        if (sub_8380( "PIC_BANT1", ref l_U254, 6, 1 ))
                        {
                            l_U213 = 1;
                        }
                    }
                    else if (g_U64743 == 1)
                    {
                        if (sub_8380( "PIC_BANT2", ref l_U254, 6, 1 ))
                        {
                            l_U213 = 1;
                        }
                    }
                    else if (g_U64743 == 2)
                    {
                        l_U213 = 1;
                    };;;
                }
            }
        }
        if ((DOES_VEHICLE_EXIST( l_U220 )) AND (NOT (IS_VEH_DRIVEABLE( l_U220 ))))
        {
            SET_CAR_ENGINE_ON( l_U220, 0, 0 );
        }
        if (LOCATE_CHAR_ANY_MEANS_2D( sub_2417(), -347.31360000, 1613.05100000, 100.00000000, 100.00000000, 0 ))
        {
            if (NOT l_U208)
            {
                CREATE_CHAR( 26, -552829610, -332.25980000, 1643.14600000, 19.34810000, ref l_U218, 1 );
                SET_CHAR_RELATIONSHIP( l_U218, 5, 0 );
                SET_CHAR_MAX_TIME_IN_WATER( l_U218, 20.00000000 );
                SET_CHAR_MAX_TIME_UNDERWATER( l_U218, 10.00000000 );
                SET_AMBIENT_VOICE_NAME( l_U218, "M_Y_CONSTRUCT_02_BS1" );
                sub_12700( 2, l_U218, "RCIC_BOYFRIEND", 0 );
                if (NOT (IS_CHAR_INJURED( l_U218 )))
                {
                    TASK_PLAY_ANIM_UPPER_BODY( l_U218, "stand_smoke", "misscherise", 8.00000000, 1, 0, 0, 0, -1 );
                }
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U218, 1 );
                if (NOT (IS_CHAR_INJURED( l_U218 )))
                {
                    SET_CHAR_HEADING( l_U218, 234.36770000 );
                    SET_CHAR_HEALTH( l_U218, 250 );
                }
                MARK_MODEL_AS_NO_LONGER_NEEDED( -552829610 );
                CLEAR_AREA( -332.25980000, 1643.14600000, 19.34810000, 15.00000000, 1 );
                CLEAR_AREA_OF_CARS( -324.78000000, 1607.89000000, 19.46000000, 15.00000000 );
                l_U208 = 1;
            }
            else
            {
                l_U213 = 0;
                l_U200 = 5;
            }
        }
        break;
        case 5:
        if (IS_CHAR_DEAD( l_U218 ))
        {
            PRINT_NOW( "CHRS_PMT71", 7500, 1 );
            sub_8028();
        }
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U218, sub_2417(), 0 ))
        {
            PRINT_NOW( "CHRS_PMT71", 7500, 1 );
            sub_8028();
        }
        if (IS_WANTED_LEVEL_GREATER( sub_1061(), 0 ))
        {
            if (DOES_BLIP_EXIST( l_U223 ))
            {
                REMOVE_BLIP( l_U223 );
                PRINT_HELP( "GLOCK_WL" );
            }
        }
        else if (l_U213)
        {
            if (NOT (DOES_BLIP_EXIST( l_U223 )))
            {
                ADD_BLIP_FOR_COORD( -324.78000000, 1607.89000000, 19.46000000, ref l_U223 );
                SET_ROUTE( l_U223, 1 );
                if (IS_THIS_PRINT_BEING_DISPLAYED( "GLOCK_WL", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    CLEAR_PRINTS();
                }
            }
        }
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1061(), 0 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U217 )))
            {
                if (IS_GROUP_MEMBER( l_U217, sub_5364() ))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2417(), -324.78000000, 1607.89000000, 19.46000000 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )) AND (sub_4648( 1, 1 )))
                    {
                        SET_PLAYER_CONTROL( sub_1061(), 0 );
                        if (sub_3486() < 3.00000000)
                        {
                            if (IS_HINT_RUNNING())
                            {
                                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U217, 0, 0, 0 );
                                TASK_LOOK_AT_CHAR( sub_2417(), l_U217, 0, 0 );
                            }
                            if (IS_CHAR_IN_ANY_CAR( sub_2417() ))
                            {
                                if ((NOT (IS_CAR_UPSIDEDOWN( l_U220 ))) AND (IS_VEH_DRIVEABLE( l_U220 )))
                                {
                                    GET_CAR_MODEL( l_U220, ref l_U291 );
                                    GET_CAR_HEADING( l_U220, ref l_U315 );
                                    GET_CAR_COORDINATES( l_U220, ref l_U312._fU0, ref l_U312._fU4, ref l_U312._fU8 );
                                    SET_WIDESCREEN_BORDERS( 1 );
                                    sub_1140( ref l_U254, 0 );
                                    CLEAR_PRINTS();
                                    REQUEST_MODEL( -196312163 );
                                    while (NOT (HAS_MODEL_LOADED( -196312163 )))
                                    {
                                        WAIT( 0 );
                                    }
                                    if (DOES_BLIP_EXIST( l_U223 ))
                                    {
                                        REMOVE_BLIP( l_U223 );
                                    }
                                    if (NOT (DOES_BLIP_EXIST( l_U224 )))
                                    {
                                        ADD_BLIP_FOR_CHAR( l_U218, ref l_U224 );
                                        SET_BLIP_AS_FRIENDLY( l_U224, 0 );
                                    }
                                    BEGIN_CAM_COMMANDS( ref l_U301 );
                                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                    CREATE_CAM( 14, ref l_U298 );
                                    SET_CAM_POS( l_U298, -343.37000000, 1659.00000000, 23.79000000 );
                                    SET_CAM_ROT( l_U298, -8.09000000, -0.00000000, -154.45000000 );
                                    SET_CAM_FOV( l_U298, 21.60000000 );
                                    SET_CAM_PROPAGATE( l_U298, 1 );
                                    SET_CAM_ACTIVE( l_U298, 1 );
                                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                    SET_WANTED_MULTIPLIER( 0.20000000 );
                                    if (IS_SCREEN_FADED_OUT())
                                    {
                                        DO_SCREEN_FADE_IN( 250 );
                                        while (NOT IS_SCREEN_FADED_IN())
                                        {
                                            WAIT( 0 );
                                        }
                                    }
                                    if (NOT l_U213)
                                    {
                                        if (sub_8380( "PIC_ID", ref l_U266, 6, 1 ))
                                        {
                                            l_U213 = 1;
                                        }
                                    }
                                    l_U200 = 6;
                                }
                            }
                            else if (IS_CHAR_ON_FOOT( sub_2417() ))
                            {
                                while (NOT (sub_15149( sub_2417() )))
                                {
                                    WAIT( 0 );
                                }
                                SET_WIDESCREEN_BORDERS( 1 );
                                sub_1140( ref l_U254, 0 );
                                CLEAR_PRINTS();
                                if (NOT l_U213)
                                {
                                    if (sub_8380( "PIC_ID", ref l_U266, 6, 1 ))
                                    {
                                        l_U213 = 1;
                                    }
                                }
                                if (DOES_BLIP_EXIST( l_U223 ))
                                {
                                    REMOVE_BLIP( l_U223 );
                                }
                                if (NOT (DOES_BLIP_EXIST( l_U224 )))
                                {
                                    ADD_BLIP_FOR_CHAR( l_U218, ref l_U224 );
                                    SET_BLIP_AS_FRIENDLY( l_U224, 0 );
                                }
                                BEGIN_CAM_COMMANDS( ref l_U301 );
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                CREATE_CAM( 14, ref l_U298 );
                                SET_CAM_POS( l_U298, -343.37000000, 1659.00000000, 23.79000000 );
                                SET_CAM_ROT( l_U298, -8.09000000, -0.00000000, -154.45000000 );
                                SET_CAM_FOV( l_U298, 21.60000000 );
                                if (NOT (IS_CHAR_INJURED( sub_2417() )))
                                {
                                    CLEAR_CHAR_TASKS( sub_2417() );
                                    REMOVE_PED_HELMET( sub_2417(), 0 );
                                }
                                SET_CAM_PROPAGATE( l_U298, 1 );
                                SET_CAM_ACTIVE( l_U298, 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                SET_WANTED_MULTIPLIER( 0.20000000 );
                                l_U200 = 6;
                            }
                        }
                        else
                        {
                            l_U214 = 0;
                            if (NOT (IS_CHAR_INJURED( sub_2417() )))
                            {
                                GET_CHAR_COORDINATES( sub_2417(), ref l_U229._fU0, ref l_U229._fU4, ref l_U229._fU8 );
                            }
                            if (NOT IS_HINT_RUNNING())
                            {
                                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U217, 0, 0, 30000 );
                                TASK_LOOK_AT_CHAR( sub_2417(), l_U217, -2, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U217 )))
                                {
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U217, l_U229._fU0, l_U229._fU4, l_U229._fU8, 4, -2, 1.00000000 );
                                }
                                PRINT( "CHRS_PMT4", 3000, 1 );
                            }
                        }
                    }
                    else if ((sub_15781() < 12.50000000) AND (IS_CHAR_IN_ANY_CAR( sub_2417() )))
                    {
                        if (NOT (sub_15149( sub_2417() )))
                        {
                            SET_PLAYER_CONTROL( sub_1061(), 0 );
                            DO_SCREEN_FADE_OUT( 250 );
                            while (NOT (sub_15149( sub_2417() )))
                            {
                                WAIT( 0 );
                            }
                        }
                        else if (IS_SCREEN_FADED_OUT())
                        {
                            SET_CHAR_COORDINATES( sub_2417(), -324.78000000, 1607.89000000, 19.46000000 );
                            l_U200 = 5;
                        }
                    }
                }
            }
        }
        break;
        case 6:
        l_U206 = 0;
        if (l_U212 == 0)
        {
            SETTIMERA( 0 );
            l_U212 = 1;
        }
        if ((TIMERA() >= 2000) AND (sub_16133()))
        {
            SET_PLAYER_CONTROL( sub_1061(), 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            if (NOT l_U206)
            {
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U301 );
                l_U206 = 1;
            }
            l_U213 = 0;
            l_U209 = 0;
            sub_1140( ref l_U266, 0 );
            l_U200 = 7;
        }
        if (NOT (sub_9964( l_U266 )))
        {
            CLEAR_PRINTS();
            if (NOT l_U206)
            {
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                END_CAM_COMMANDS( ref l_U300 );
                SET_WIDESCREEN_BORDERS( 0 );
                l_U206 = 1;
            }
            PRINT_NOW( "CHRS_PMT3", 7500, 5 );
            SET_PLAYER_CONTROL( sub_1061(), 1 );
            l_U213 = 0;
            l_U209 = 0;
            l_U200 = 7;
        }
        else if (((sub_16456( l_U266 )) == 1) AND (NOT l_U308))
        {
            if (NOT (IS_CHAR_INJURED( sub_2417() )))
            {
                TASK_LEAVE_ANY_CAR( sub_2417() );
                l_U308 = 1;
            }
        }
        break;
        case 7:
        l_U206 = 0;
        l_U212 = 0;
        if (IS_CHAR_DEAD( l_U218 ))
        {
            PRINT_NOW( "CHRS_PMT71", 7500, 1 );
            sub_8028();
        }
        if (NOT l_U210)
        {
            if (NOT (IS_CHAR_INJURED( l_U217 )))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U217 )))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U217 );
                    SET_CHAR_RELATIONSHIP( l_U217, 1, 0 );
                    TASK_SEEK_COVER_FROM_PED( l_U217, l_U218, 0 );
                    l_U214 = 0;
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U217, 1 );
                    l_U210 = 1;
                }
            }
        }
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U218, sub_2417(), 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U218 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U218, 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U218 );
            }
            l_U200 = 10;
        }
        if ((((IS_CHAR_ON_FOOT( sub_2417() )) AND (sub_4648( 1, 1 ))) AND (sub_15781() < 4.50000000)) AND (NOT sub_369()))
        {
            SWITCH_MAD_DRIVERS( 0 );
            ALLOW_EMERGENCY_SERVICES( 0 );
            if (NOT (IS_CHAR_INJURED( l_U218 )))
            {
                TASK_LOOK_AT_CHAR( l_U218, sub_2417(), -2, 0 );
            }
            l_U200 = 8;
        }
        break;
        case 8:
        l_U206 = 0;
        if (NOT (IS_CHAR_INJURED( sub_2417() )))
        {
            if (NOT (IS_CHAR_INJURED( l_U218 )))
            {
                TASK_LOOK_AT_CHAR( l_U218, sub_2417(), -2, 0 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U218 )))
        {
            if (NOT (IS_CHAR_INJURED( sub_2417() )))
            {
                TASK_LOOK_AT_CHAR( sub_2417(), l_U218, -1, 0 );
            }
        }
        l_U212 = 0;
        l_U213 = 0;
        sub_8380( "PIC_BOYF", ref l_U272, 6, 1 );
        WAIT( 500 );
        l_U200 = 9;
        break;
        case 9:
        if (l_U212 == 0)
        {
            SETTIMERA( 0 );
            l_U212 = 1;
        }
        if ((TIMERA() >= 2000) AND (sub_16133()))
        {
            SET_PLAYER_CONTROL( sub_1061(), 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_1140( ref l_U272, 0 );
            l_U200 = 10;
        }
        if (sub_9425( ref l_U272 ))
        {
            CLEAR_CHAR_TASKS( sub_2417() );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_ALL_RANDOM_PEDS_FLEE( sub_1061(), 1 );
            l_U200 = 10;
        }
        else if (IS_CHAR_ARMED( sub_2417(), l_U299 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U218 )))
            {
                if (NOT l_U311)
                {
                    if (NOT (IS_CHAR_INJURED( l_U218 )))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U218, 7, 100, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U218, 7, 0 );
                        TASK_SWAP_WEAPON( l_U218, 1 );
                        l_U311 = 1;
                    }
                }
            }
        }
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U218, sub_2417(), 0 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U218 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U218 );
                sub_1140( ref l_U272, 0 );
                l_U200 = 10;
            }
            else
            {
                sub_1140( ref l_U272, 0 );
                REMOVE_BLIP( l_U224 );
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT( "CHRS_PMT5", 7500, 1 );
                }
                l_U200 = 12;
            }
        }
        break;
        case 10:
        if (NOT l_U207)
        {
            SET_ALL_RANDOM_PEDS_FLEE( sub_1061(), 1 );
            if (NOT (IS_CHAR_DEAD( l_U218 )))
            {
                TASK_LOOK_AT_CHAR( l_U218, sub_2417(), 0, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U218, 0 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U218, 1 );
                TASK_COMBAT( l_U218, sub_2417() );
            }
            l_U207 = 1;
        }
        if (NOT (IS_CHAR_INJURED( sub_2417() )))
        {
            GET_CURRENT_CHAR_WEAPON( sub_2417(), ref l_U310 );
            if ((l_U310 == 0) || (l_U310 == 56))
            {
                ;
            }
            else if (NOT l_U311)
            {
                if (NOT (IS_CHAR_INJURED( l_U218 )))
                {
                    GIVE_WEAPON_TO_CHAR( l_U218, 7, 100, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U218, 7, 0 );
                    l_U311 = 1;
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U218 )))
        {
            GET_CHAR_HEALTH( l_U218, ref l_U242 );
        }
        if (l_U242 < 120)
        {
            if (NOT (IS_CHAR_INJURED( l_U218 )))
            {
                CLEAR_PRINTS();
                CLEAR_CHAR_TASKS( l_U218 );
                SET_CHAR_RELATIONSHIP( l_U218, 2, 0 );
                SET_COMBAT_DECISION_MAKER( l_U218, l_U247 );
                TASK_SMART_FLEE_CHAR( l_U218, sub_2417(), 9999.00000000, -1 );
                if (DOES_BLIP_EXIST( l_U224 ))
                {
                    REMOVE_BLIP( l_U224 );
                }
                l_U212 = 0;
                l_U206 = 0;
                if (NOT (IS_CHAR_INJURED( l_U217 )))
                {
                    TASK_PERFORM_SEQUENCE( l_U217, l_U245 );
                    CLEAR_SEQUENCE_TASK( l_U245 );
                }
                l_U200 = 11;
            }
        }
        else if (l_U309)
        {
            sub_8380( "PIC_BEGS", ref l_U248, 6, 1 );
            SETTIMERA( 0 );
            l_U309 = 0;
        }
        else if (TIMERA() > 4500)
        {
            GENERATE_RANDOM_INT_IN_RANGE( l_U304, l_U303, ref l_U305 );
            if (l_U305 > 970)
            {
                l_U309 = 1;
            }
        };;;
        if (IS_CHAR_INJURED( l_U218 ))
        {
            if (DOES_BLIP_EXIST( l_U224 ))
            {
                REMOVE_BLIP( l_U224 );
            }
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                PRINT( "CHRS_PMT5", 7500, 1 );
            }
            l_U200 = 12;
        }
        if (sub_15781() > 100)
        {
            if ((NOT (IS_CHAR_DEAD( l_U218 ))) AND (NOT (IS_CHAR_ON_SCREEN( l_U218 ))))
            {
                DELETE_CHAR( ref l_U218 );
                if (NOT (IS_CHAR_INJURED( l_U217 )))
                {
                    PRINT( "CHRS_PMT21", 7500, 1 );
                    REMOVE_CHAR_ELEGANTLY( ref l_U217 );
                    sub_8028();
                }
            }
        }
        break;
        case 11:
        if (DOES_BLIP_EXIST( l_U224 ))
        {
            REMOVE_BLIP( l_U224 );
        }
        if (l_U212 == 0)
        {
            SETTIMERA( 0 );
            l_U212 = 1;
        }
        if (NOT (IS_CHAR_DEAD( l_U218 )))
        {
            if (NOT l_U215)
            {
                sub_8380( "PIC_BEATEN", ref l_U284, 6, 1 );
                l_U215 = 1;
            }
            else
            {
                l_U306 = 0;
                if ((NOT (sub_9964( l_U284 ))) || (sub_15781() > 20.00000000))
                {
                    l_U200 = 12;
                }
            }
        }
        else if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if ((NOT (IS_CHAR_INJURED( l_U217 ))) AND (NOT (IS_CHAR_INJURED( sub_2417() ))))
            {
                TASK_LOOK_AT_CHAR( l_U217, sub_2417(), -2, 0 );
            }
            PRINT( "CHRS_PMT5", 7500, 1 );
        }
        l_U200 = 12;;
        break;
        case 12:
        if (sub_9964( l_U284 ))
        {
            sub_1140( ref l_U284, 1 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U221 )))
        {
            ADD_BLIP_FOR_CHAR( l_U217, ref l_U221 );
            SET_BLIP_AS_FRIENDLY( l_U221, 1 );
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                CLEAR_PRINTS();
                PRINT( "CHRS_PMT5", 7500, 1 );
            }
        }
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            PRINT( "CHRS_PMT5", 7500, 1 );
        }
        if (sub_3486() < 3.50000000)
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U217, 0 );
            SET_PLAYER_CONTROL( sub_1061(), 0 );
            DO_SCREEN_FADE_OUT( 250 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_AREA( -328.74010000, 1610.58400000, 19.42150000, 20.00000000, 1 );
            if ((DOES_VEHICLE_EXIST( l_U220 )) AND (IS_VEH_DRIVEABLE( l_U220 )))
            {
                SET_CAR_COORDINATES( l_U220, l_U312._fU0, l_U312._fU4, l_U312._fU8 );
                SET_CAR_HEADING( l_U220, l_U315 );
            }
            if (IS_CHAR_IN_ANY_CAR( sub_2417() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_2417(), -328.74010000, 1610.58400000, 19.42150000 );
            }
            if (NOT (IS_CHAR_INJURED( sub_2417() )))
            {
                CLEAR_CHAR_TASKS( sub_2417() );
                SET_CHAR_COORDINATES( sub_2417(), -328.74010000, 1610.58400000, 19.42150000 );
                SET_CHAR_HEADING( sub_2417(), 147.86690000 );
                REMOVE_PED_HELMET( sub_2417(), 1 );
                if (NOT (IS_CHAR_INJURED( l_U217 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2417(), l_U217, -2, 0 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U217 )))
            {
                CLEAR_CHAR_TASKS( l_U217 );
                SET_CHAR_COORDINATES( l_U217, -329.60960000, 1608.93600000, 19.42150000 );
                SET_CHAR_HEADING( l_U217, 348.92310000 );
                CLEAR_CHAR_TASKS( l_U217 );
                if (NOT (IS_CHAR_INJURED( sub_2417() )))
                {
                    TASK_LOOK_AT_CHAR( l_U217, sub_2417(), -2, 0 );
                }
            }
            SET_WIDESCREEN_BORDERS( 1 );
            if (NOT l_U306)
            {
                BEGIN_CAM_COMMANDS( ref l_U301 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                CREATE_CAM( 14, ref l_U297 );
                SET_CAM_POS( l_U297, -330.27000000, 1611.42000000, 20.91000000 );
                SET_CAM_FOV( l_U297, 57.30000000 );
                SET_CAM_NEAR_DOF( l_U297, 0.10000000 );
                SET_CAM_FAR_DOF( l_U297, 5.00000000 );
                SET_CAM_ROT( l_U297, -5.07000000, -0.00000000, -140.18000000 );
                CREATE_CAM( 14, ref l_U298 );
                SET_CAM_POS( l_U298, -329.92000000, 1611.51000000, 20.82000000 );
                SET_CAM_FOV( l_U298, 53.40000000 );
                SET_CAM_NEAR_DOF( l_U298, 0.10000000 );
                SET_CAM_FAR_DOF( l_U298, 8.00000000 );
                SET_CAM_ROT( l_U298, -7.36000000, 0.00000000, -157.25000000 );
                SET_CAM_PROPAGATE( l_U297, 1 );
                SET_CAM_ACTIVE( l_U297, 1 );
                SET_USE_HIGHDOF( 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                l_U306 = 1;
            }
            CLEAR_PRINTS();
            l_U213 = 0;
            l_U212 = 0;
            SWITCH_MAD_DRIVERS( 1 );
            ALLOW_EMERGENCY_SERVICES( 1 );
            DO_SCREEN_FADE_IN( 250 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            l_U200 = 13;
        }
        break;
        case 13:
        if (NOT (IS_CHAR_DEAD( l_U218 )))
        {
            g_U15654[42] = 0;
            if (NOT l_U213)
            {
                sub_8380( "PIC_STAY", ref l_U278, 6, 1 );
                WAIT( 250 );
                l_U213 = 1;
                CREATE_CAM( 3, ref l_U225 );
                SET_CAM_PROPAGATE( l_U225, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U225, l_U297, l_U298, 20000, 0 );
                l_U200 = 14;
            }
        }
        else
        {
            g_U15654[42] = 1;
            if (NOT l_U213)
            {
                if (sub_8380( "PIC_DEAD", ref l_U278, 6, 1 ))
                {
                    WAIT( 250 );
                    l_U213 = 1;
                    CREATE_CAM( 3, ref l_U225 );
                    SET_CAM_PROPAGATE( l_U225, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U225, l_U297, l_U298, 20000, 0 );
                    l_U200 = 14;
                }
            }
        }
        break;
        case 14:
        if (l_U212 == 0)
        {
            SETTIMERA( 0 );
            l_U212 = 1;
        }
        if ((TIMERA() >= 2000) AND (sub_16133()))
        {
            sub_1140( ref l_U278, 0 );
            l_U200 = 14;
        }
        if ((sub_16456( l_U278 )) == 2)
        {
            SET_CAM_PROPAGATE( l_U298, 1 );
            SET_CAM_ACTIVE( l_U298, 1 );
            SET_CAM_PROPAGATE( l_U297, 0 );
            SET_CAM_ACTIVE( l_U297, 0 );
        }
        if (sub_9425( ref l_U278 ))
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            if (NOT (IS_CHAR_DEAD( sub_2417() )))
            {
                TASK_LOOK_AT_CHAR( l_U217, sub_2417(), 0, 0 );
            }
            if (NOT (IS_CHAR_INJURED( l_U217 )))
            {
                if (NOT l_U216)
                {
                    if (g_U15654[42])
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U217 )))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( l_U217, -337.85560000, 1605.22400000, 19.42150000, 3, -2, 1.50000000 );
                            l_U216 = 1;
                        }
                    }
                    else if (NOT (IS_CHAR_IN_ANY_CAR( l_U217 )))
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U217, -337.85560000, 1605.22400000, 19.42150000, 2, -2, 1.50000000 );
                        l_U216 = 1;
                    }
                }
                else if (NOT (IS_CHAR_ON_SCREEN( l_U217 )))
                {
                    DELETE_CHAR( ref l_U217 );
                    l_U200 = 15;
                }
            }
        }
        break;
        case 15:
        if (NOT (IS_CHAR_DEAD( l_U217 )))
        {
            TASK_LOOK_AT_CHAR( sub_2417(), l_U217, 0, 0 );
        }
        END_CAM_COMMANDS( ref l_U301 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_PLAYER_CONTROL( sub_1061(), 1 );
        CLEAR_CHAR_TASKS( sub_2417() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_USE_HIGHDOF( 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        sub_20406();
        break;
    }
    return;
}

void sub_7978(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_8028()
{
    if (g_U64743 == 0)
    {
        g_U64743 = 1;
    }
    else if (g_U64743 == 1)
    {
        g_U64743 = 2;
    }
    SET_ALL_RANDOM_PEDS_FLEE( sub_1061(), 0 );
    g_U64748++;
    if (g_U64748 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1061(), 150 );
        SAY_AMBIENT_SPEECH( sub_2417(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    else
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_1061(), 150 );
    }
    sub_1274();
    return;
}

void sub_8380(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_8401( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_8401(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_8455( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_8455(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_8477( iParam1 )))
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
    sub_9165( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_8477(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_8554( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_8554( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_8554( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_8554(unknown uParam0)
{
    return;
}

void sub_9165(int iParam0, int iParam1)
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

int sub_9425(int iParam0)
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

void sub_9719(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_9770(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9791( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

int sub_9791(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_8455( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_9964(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_8554( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_8554( "\n speech is not playing" );
    }
    return 0;
}

int sub_10135(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_8554( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_8554( "\n CONVERSATION PAUSED AT LINE " );
            sub_10275( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_8554( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_8554( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_8554( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_10275(unknown uParam0)
{
    return;
}

void sub_12060(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_CHAR_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam2^) );
            N_1061756705( (uParam1^), 12 );
            N_1061756705( (uParam1^), 9 );
            N_1061756705( (uParam1^), 7 );
            N_1061756705( (uParam1^), 15 );
            N_1061756705( (uParam1^), 31 );
            N_1061756705( (uParam1^), 43 );
            N_1061756705( (uParam1^), 36 );
            N_1061756705( (uParam1^), 37 );
            N_1061756705( (uParam1^), 13 );
            N_1061756705( (uParam1^), 56 );
            N_1061756705( (uParam1^), 79 );
            N_1061756705( (uParam1^), 11 );
            N_1061756705( (uParam1^), 20 );
            N_1061756705( (uParam1^), 46 );
            N_1061756705( (uParam1^), 44 );
            N_1061756705( (uParam1^), 125 );
            N_1061756705( (uParam1^), 17 );
            ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( (uParam1^), 31, 413, 0, 100, 100, 100, 0, 1 );
            ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( (uParam1^), 31, 412, 0, 10, 10, 10, 0, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
        }
    }
    return;
}

void sub_12581(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_12598();
    return;
}

void sub_12598()
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

void sub_12700(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_12780( "\n PED NUMBER ", uParam0 );
    sub_12820( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_12780(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_12820(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_15149(unknown uParam0)
{
    float fVar3;

    GET_CHAR_SPEED( uParam0, ref fVar3 );
    if ((fVar3 < 0.50000000) || (IS_CHAR_STOPPED( uParam0 )))
    {
        return 1;
    }
    return 0;
}

void sub_15781()
{
    if (NOT (IS_CHAR_DEAD( l_U218 )))
    {
        GET_CHAR_COORDINATES( sub_2417(), ref l_U229._fU0, ref l_U229._fU4, ref l_U229._fU8 );
        GET_CHAR_COORDINATES( l_U218, ref l_U235._fU0, ref l_U235._fU4, ref l_U235._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U229._fU0, l_U229._fU4, l_U229._fU8, l_U235._fU0, l_U235._fU4, l_U235._fU8, ref l_U238 );
        return l_U238;
    }
    return l_U238;
}

int sub_16133()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_16456(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_9964( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_20406()
{
    CLEAR_WANTED_LEVEL( sub_1061() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    SET_ALL_RANDOM_PEDS_FLEE( sub_1061(), 0 );
    sub_20455( l_U292 );
    if (g_U15654[39] == 0)
    {
        sub_8380( "PIC_MOAN", ref l_U248, 6, 1 );
    }
    sub_1274();
    return;
}

void sub_20455(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_460( uParam0 );
    sub_20475( uParam0 );
    sub_24449( uParam0 );
    return;
}

void sub_20475(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_20605();
        break;
        case 39:
        sub_21567();
        break;
        case 40:
        sub_21826();
        break;
        case 48:
        sub_22009();
        break;
        case 41:
        sub_22194();
        break;
        case 42:
        sub_22390();
        break;
        case 43:
        sub_22571();
        break;
        case 44:
        sub_22754();
        break;
        case 45:
        sub_22935();
        break;
        case 46:
        sub_23114();
        break;
        case 47:
        sub_23425();
        break;
        case 49:
        sub_23625();
        break;
        case 50:
        sub_23802();
        break;
        case 51:
        sub_24000();
        break;
        default: sub_580( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_24275();
    sub_24348();
    return;
}

void sub_20605()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_460( iVar2 );
    sub_20645( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 500 );
        break;
        default: sub_580( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_20645(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_20698( iParam0, uParam1, uParam2 );
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
        sub_20830( iParam0 + 0 );
    }
    return;
}

void sub_20698(int iParam0, int iParam1, int iParam2)
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
        sub_20830( iParam0 + 0 );
    }
    return;
}

void sub_20830(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_20861( iParam0->_fU4 )))
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

int sub_20861(unknown uParam0)
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

void sub_21291(unknown uParam0)
{
    sub_21302( uParam0 );
    return;
}

void sub_21302(unknown uParam0)
{
    ADD_SCORE( sub_1061(), uParam0 );
    sub_21327( uParam0 );
    return;
}

void sub_21327(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_580( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_21567()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_460( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 100 );
        sub_20645( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_21291( 200 );
        sub_20645( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_21291( 500 );
        break;
        default: sub_580( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_21826()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_460( iVar2 );
    sub_20645( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 0 );
        break;
        default: sub_580( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_22009()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_460( iVar2 );
    sub_20645( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 0 );
        break;
        default: sub_580( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_22194()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_460( iVar2 );
    sub_20645( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 0 );
        break;
        case 2:
        sub_21291( 0 );
        break;
        default: sub_580( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_22390()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_460( iVar2 );
    sub_20645( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 0 );
        break;
        default: sub_580( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_22571()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_460( iVar2 );
    sub_20645( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 500 );
        break;
        default: sub_580( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_22754()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_460( iVar2 );
    sub_20645( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 0 );
        break;
        default: sub_580( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_22935()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_460( iVar2 );
    sub_20645( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 1000 );
        break;
        default: sub_580( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_23114()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_460( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 1000 );
        sub_23201( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_21291( 5000 );
        sub_20645( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_580( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_23201(int iParam0)
{
    sub_23214( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_23214(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_23425()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_460( iVar2 );
    sub_20645( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 0 );
        break;
        case 2:
        sub_21291( 0 );
        break;
        default: sub_580( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_23625()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_460( iVar2 );
    sub_20645( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 500 );
        break;
        default: sub_580( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_23802()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_460( iVar2 );
    sub_20645( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 0 );
        break;
        case 2:
        sub_21291( 0 );
        break;
        default: sub_580( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_24000()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_460( iVar2 );
    sub_20645( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_21291( 0 );
        break;
        case 2:
        sub_21291( 1000 );
        break;
        default: sub_580( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_24275()
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

void sub_24348()
{
    sub_24357();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_24357()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_24449(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_460( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_5902( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_24530( uParam0 );
    return;
}

void sub_24530(unknown uParam0)
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
            sub_24809( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_24809(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_24991( 0 );
    return;
}

void sub_24991(boolean bParam0)
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
        sub_25246();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_25246()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}