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
    l_U203 = 0;
    l_U217 = 0;
    l_U221 = 2;
    l_U224 = 41;
    l_U225 = 200.45910000;
    l_U226 = 0;
    l_U229 = 0;
    l_U230 = 0;
    l_U234 = 0;
    l_U235 = 0;
    if (sub_256( l_U224, l_U221 ))
    {
        if (IS_PLAYER_PLAYING( sub_957() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_957(), 0 )))
            {
                if (HAS_DEATHARREST_EXECUTED())
                {
                    sub_1031();
                }
                if (g_U0)
                {
                    SET_TIME_OF_DAY( 23, 1 );
                    l_U234 = 1;
                }
                if (NOT l_U235)
                {
                    GET_TIME_OF_DAY( ref l_U232, ref l_U233 );
                    if ((l_U232 >= 20) || (l_U232 < 4))
                    {
                        l_U234 = 1;
                        l_U235 = 1;
                    }
                    else
                    {
                        l_U234 = 0;
                        l_U235 = 1;
                    }
                }
                if ((l_U235) AND (NOT l_U234))
                {
                    TERMINATE_THIS_SCRIPT();
                }
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U201)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (sub_1947())
                            {
                                WAIT( 0 );
                            }
                            else if (g_U10978)
                            {
                                sub_1031();
                            }
                            if (NOT sub_2131())
                            {
                                sub_1031();
                            }
                            switch (l_U197)
                            {
                                case 0:
                                sub_2216();
                                break;
                                case 1:
                                sub_2779();
                                break;
                            }
                        }
                        else
                        {
                            sub_1031();
                        }
                        sub_7023();
                    }
                    if (l_U201)
                    {
                        switch (l_U198)
                        {
                            case 0:
                            sub_7139();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT g_U65019)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1956() )))
                {
                    if (sub_2945() < 25)
                    {
                        CLEAR_PRINTS();
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
                if (IS_HINT_RUNNING())
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U204, 0, 0, 0 );
                }
                g_U65019 = 1;
            }
            sub_1031();;
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

void sub_256(unknown uParam0, unknown uParam1)
{
    if (sub_265())
    {
        return 0;
    }
    return sub_312( uParam0, uParam1 );
}

int sub_265()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

boolean sub_312(unknown uParam0, int iParam1)
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
    uVar4 = sub_356( uParam0 );
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
        if (sub_633( g_U34048[uVar4]._fU8 ))
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

int sub_356(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_367( uParam0 )))
    {
        sub_476( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_367(unknown uParam0)
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

void sub_476(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_633(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_802( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_802(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_957()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1031()
{
    if (sub_1050( l_U224, l_U221 ))
    {
        sub_1146( l_U224, l_U221 );
        CLEAR_HELP();
        if (IS_PLAYER_PLAYING( sub_957() ))
        {
            SET_PLAYER_CONTROL( sub_957(), 1 );
        }
        sub_1616();
    }
    if (NOT (IS_CHAR_INJURED( l_U204 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U204 );
    }
    CLEAR_NAMED_CUTSCENE( "rped2" );
    REMOVE_BLIP( l_U207 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U204 );
    l_U204 = nil;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_1050(int iParam0, int iParam1)
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

void sub_1146(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_1050( uParam0, uParam1 )))
    {
        sub_476( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_1242();
    if (g_U813)
    {
        sub_1334();
    }
    else
    {
        sub_1452();
    }
    g_U10978 = 0;
    return;
}

void sub_1242()
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

void sub_1334()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1380();
    return;
}

void sub_1380()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1452()
{
    if (COMPARE_STRING( ref g_U9926, "RIPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_1498();
    return;
}

void sub_1498()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1616()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

int sub_1947()
{
    if (IS_CHAR_IN_ANY_CAR( sub_1956() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1956(), ref l_U205 );
        if (NOT (l_U205 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U205 ))
            {
                GET_CAR_SPEED( l_U205, ref l_U219 );
                if (l_U219 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_1956()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2131()
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

void sub_2216()
{
    switch (l_U196)
    {
        case 0:
        l_U208 = {-1638.94600000, 697.53250000, 27.31000000};
        l_U220 = -1600585231;
        REQUEST_ANIMS( "MISSEDDIE2" );
        while (NOT (HAVE_ANIMS_LOADED( "MISSEDDIE2" )))
        {
            WAIT( 0 );
        }
        REQUEST_MODEL( l_U220 );
        while (NOT (HAS_MODEL_LOADED( l_U220 )))
        {
            WAIT( 0 );
        }
        l_U196 = 1;
        break;
        case 1:
        if (NOT l_U202)
        {
            CLEAR_AREA( l_U208._fU0, l_U208._fU4, l_U208._fU8, 10.00000000, 1 );
            CREATE_CHAR( 26, l_U220, l_U208._fU0, l_U208._fU4, l_U208._fU8, ref l_U204, 1 );
            SET_CHAR_HEADING( l_U204, l_U225 );
            SET_CHAR_NEVER_TARGETTED( l_U204, 0 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U204, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U204, 1 );
            TASK_STAND_GUARD( l_U204, l_U208, 200.45910000, 5.00000000, 0, -1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U204, 1 );
            l_U202 = 1;
        }
        if (NOT (DOES_BLIP_EXIST( l_U207 )))
        {
            ADD_BLIP_FOR_CHAR( l_U204, ref l_U207 );
            CHANGE_BLIP_SPRITE( l_U207, 63 );
            SET_BLIP_AS_FRIENDLY( l_U207, 1 );
            CHANGE_BLIP_SCALE( l_U207, 1.00000000 );
            CHANGE_BLIP_DISPLAY( l_U207, 2 );
        }
        if (l_U202)
        {
            if (NOT (IS_CHAR_INJURED( l_U204 )))
            {
                TASK_PLAY_ANIM( l_U204, "eddie_idle", "misseddie2", 8.00000000, 1, 0, 0, 0, -2 );
            }
            l_U197 = 1;
        }
        break;
    }
    return;
}

void sub_2779()
{
    if ((IS_CHAR_INJURED( l_U204 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U204, sub_1956(), 0 )))
    {
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U204, 0, 0, 0 );
        }
        sub_1031();
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1956() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1956(), ref l_U205 );
        if (NOT (l_U205 == l_U206))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U206 );
            l_U206 = l_U205;
        }
    }
    if ((sub_2945() < 25) AND (IS_CHAR_ON_FOOT( sub_1956() )))
    {
        sub_3180( ref l_U204, ref l_U228, ref l_U208, ref l_U225, ref l_U229, 1.10000000, "eddie_idle", "missEDDIE2", 0, 1 );
    }
    switch (l_U199)
    {
        case 0:
        if ((((IS_CHAR_INJURED( l_U204 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U204, sub_1956(), 0 ))) || (IS_CHAR_ON_FIRE( l_U204 ))) || (IS_WANTED_LEVEL_GREATER( sub_957(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_957(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1956() )))
                {
                    if (sub_2945() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U204, 0, 0, 0 );
            }
            sub_1031();
        }
        if (NOT (IS_CHAR_INJURED( l_U204 )))
        {
            if ((sub_2945() < 18) AND (IS_CHAR_ON_FOOT( sub_1956() )))
            {
                if ((NOT IS_HINT_RUNNING()) AND (NOT l_U226))
                {
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U204, 0, 0, 6000 );
                    l_U226 = 1;
                }
                l_U199 = 1;
            }
        }
        break;
        case 1:
        if ((((IS_CHAR_INJURED( l_U204 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U204, sub_1956(), 0 ))) || (IS_CHAR_ON_FIRE( l_U204 ))) || (IS_WANTED_LEVEL_GREATER( sub_957(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_957(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_1956() )))
                {
                    if (sub_2945() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U204, 0, 0, 0 );
            }
            sub_1031();
        }
        if (sub_2945() < 5.50000000)
        {
            if (IS_CHAR_ON_FOOT( sub_1956() ))
            {
                if (NOT (IS_CHAR_INJURED( l_U204 )))
                {
                    if (sub_4086( 1, 1 ))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U204, sub_1956(), 0 )))
                        {
                            if (NOT (IS_CHAR_ON_FIRE( l_U204 )))
                            {
                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_957(), 0 )))
                                {
                                    if (sub_2131())
                                    {
                                        SET_MISSION_FLAG( 1 );
                                        SET_PLAYER_CONTROL( sub_957(), 0 );
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
        if (sub_2945() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U204, 0, 0, 0 );
            }
            l_U199 = 0;
        }
        break;
        case 2:
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U204, 0, 0, 0 );
        }
        CLEAR_WANTED_LEVEL( sub_957() );
        CLEAR_PRINTS();
        LOAD_ADDITIONAL_TEXT( "PIEAUD", 6 );
        CLEAR_NAMED_CUTSCENE( "rped2" );
        START_CUTSCENE_NOW( "rped2" );
        sub_4700( l_U224, l_U221 );
        l_U201 = 1;
        break;
    }
    return;
}

void sub_2945()
{
    if (NOT (IS_CHAR_DEAD( l_U204 )))
    {
        GET_CHAR_COORDINATES( sub_1956(), ref l_U211._fU0, ref l_U211._fU4, ref l_U211._fU8 );
        GET_CHAR_COORDINATES( l_U204, ref l_U214._fU0, ref l_U214._fU4, ref l_U214._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U211._fU0, l_U211._fU4, l_U211._fU8, l_U214._fU0, l_U214._fU4, l_U214._fU8, ref l_U217 );
        return l_U217;
    }
    return l_U217;
}

void sub_3180(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, boolean bParam9)
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

int sub_4086(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1956() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1956(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1956() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1956(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1956()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1956() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1956() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_957() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_957() )))
    {
        return 0;
    }
    return 1;
}

void sub_4700(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U10978)
    {
        sub_476( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_356( uParam0 );
    if (g_U34175._fU4)
    {
        sub_476( "Interactions_Started: Another interaction is already taking place" );
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
        sub_476( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U34175._fU4 = 1;
    g_U34175._fU8 = uParam0;
    g_U34175._fU12 = uParam1;
    sub_5063();
    sub_5834( g_U34048[uVar4]._fU32 );
    g_U34048[uVar4]._fU32 = 0;
    sub_5978( uParam0, uParam1 );
    g_U10978 = 1;
    return;
}

void sub_5063()
{
    sub_5072();
    sub_5175( ref g_U9893._fU68 );
    sub_5224();
    return;
}

void sub_5072()
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

void sub_5175(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_5224()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5262( 1, g_U569[I] )) == 0)
        {
            sub_5513( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_5691())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_5262(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_5513(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_5598( g_U569 - 1 );
    return;
}

void sub_5598(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_5691()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_5262( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_5834(int iParam0)
{
    g_U34175._fU16._fU4 += iParam0;
    sub_5868();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_5868()
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

void sub_5978(unknown uParam0, int iParam1)
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
    sub_6824( cVar4 );
    return;
}

void sub_6824(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

int sub_7023()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_2945() > 30) || (sub_1947()))
        {
            HINT_CAM( l_U208._fU0, l_U208._fU4, l_U208._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_7139()
{
    switch (l_U200)
    {
        case 0:
        CLEAR_HELP();
        if (DOES_VEHICLE_EXIST( l_U206 ))
        {
            if (IS_VEH_DRIVEABLE( l_U206 ))
            {
                SET_CAR_AS_MISSION_CAR( l_U206 );
                SET_CAR_COORDINATES( l_U206, -1629.21700000, 686.06730000, 26.67540000 );
                SET_CAR_HEADING( l_U206, 90.69810000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U206 );
                SET_CAR_IN_CUTSCENE( l_U206, 1 );
            }
        }
        CLEAR_AREA( l_U208._fU0, l_U208._fU4, l_U208._fU8, 5.00000000, 1 );
        DELETE_CHAR( ref l_U204 );
        GET_CHAR_COORDINATES( sub_1956(), ref l_U211._fU0, ref l_U211._fU4, ref l_U211._fU8 );
        GET_CHAR_HEADING( sub_1956(), ref l_U218 );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        SWITCH_PED_PATHS_OFF( l_U211._fU0 - 5.00000000, l_U211._fU4 - 5.00000000, l_U211._fU8 - 5.00000000, l_U211._fU0 + 5.00000000, l_U211._fU4 + 5.00000000, l_U211._fU8 + 5.00000000 );
        CLEAR_AREA( l_U211._fU0, l_U211._fU4, l_U211._fU8, 25.00000000, 1 );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U222 );
        LOAD_COMBAT_DECISION_MAKER( 1, ref l_U223 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "rped2" );
        CREATE_CHAR( 26, l_U220, -1636.25300000, 694.41330000, 27.42950000, ref l_U204, 1 );
        SET_CHAR_MAX_TIME_IN_WATER( l_U204, 20.00000000 );
        SET_CHAR_MAX_TIME_UNDERWATER( l_U204, 10.00000000 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U204, 0 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U204, 1 );
        SET_CHAR_AS_ENEMY( l_U204, 1 );
        REQUEST_MODEL( 1040104843 );
        while (NOT (HAS_MODEL_LOADED( 1040104843 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_DEAD( l_U204 )))
        {
            GIVE_WEAPON_TO_CHAR( l_U204, 3, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U204, 3, 1 );
            SET_CHAR_HEADING( l_U204, 263.19370000 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U204, 1 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U220 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1040104843 );
        SET_CHAR_COORDINATES( sub_1956(), -1631.96900000, 692.61760000, 27.04020000 );
        SET_CHAR_HEADING( sub_1956(), 53.33870000 );
        SET_CHAR_MONEY( l_U204, 1000 );
        SET_CHAR_HEALTH( l_U204, 250 );
        SET_CHAR_AS_MISSION_CHAR( l_U204 );
        SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U204, 1 );
        SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U204, 1 );
        if (NOT (DOES_BLIP_EXIST( l_U207 )))
        {
            ADD_BLIP_FOR_CHAR( l_U204, ref l_U207 );
        }
        LOAD_ADDITIONAL_TEXT( "WI_EDD2", 0 );
        l_U200 = 1;
        break;
        case 1:
        SET_ALL_RANDOM_PEDS_FLEE( sub_957(), 1 );
        CLEAR_HELP();
        SET_WANTED_MULTIPLIER( 0.20000000 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAM_BEHIND_PED( sub_1956() );
        SWITCH_PED_PATHS_ON( l_U211._fU0 - 5.00000000, l_U211._fU4 - 5.00000000, l_U211._fU8 - 5.00000000, l_U211._fU0 + 5.00000000, l_U211._fU4 + 5.00000000, l_U211._fU8 + 5.00000000 );
        if (NOT l_U203)
        {
            if (NOT (IS_CHAR_DEAD( l_U204 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U204, 0 );
                SET_BLIP_AS_FRIENDLY( l_U207, 0 );
                SET_CHAR_RELATIONSHIP( l_U204, 5, 0 );
                SET_COMBAT_DECISION_MAKER( l_U204, l_U222 );
                TASK_COMBAT( l_U204, sub_1956() );
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT( "EDD2_PMT1", 7500, 1 );
                }
                l_U203 = 1;
            }
        }
        LOAD_SCENE( l_U211._fU0, l_U211._fU4, l_U211._fU8 );
        DO_SCREEN_FADE_IN_UNHACKED( 100 );
        if (NOT (IS_CHAR_INJURED( sub_1956() )))
        {
            TASK_PLAY_ANIM( sub_1956(), "getup_back_fast", "MISSEDDIE2", 8.00000000, 0, 0, 0, 0, -1 );
        }
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL_ADVANCED( sub_957(), 1, 1, 1 );
        l_U200 = 3;
        break;
        case 3:
        if (IS_CHAR_INJURED( l_U204 ))
        {
            if (NOT l_U231)
            {
                if (NOT (IS_CHAR_DEAD( l_U204 )))
                {
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U204, 1 );
                    l_U231 = 1;
                }
            }
        }
        if (NOT l_U230)
        {
            if (NOT (IS_CHAR_INJURED( l_U204 )))
            {
                if (NOT l_U227)
                {
                    if (NOT (HAS_CHAR_GOT_WEAPON( l_U204, 3 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U204 );
                        SET_COMBAT_DECISION_MAKER( l_U204, l_U223 );
                        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U204, 1 );
                        TASK_SMART_FLEE_CHAR( l_U204, sub_1956(), 1000, -1 );
                        l_U227 = 1;
                    }
                }
                else
                {
                    l_U230 = 1;
                }
            }
        }
        else if (((sub_2945() > 100) AND (NOT (IS_CHAR_INJURED( l_U204 )))) AND (NOT (IS_CHAR_ON_SCREEN( l_U204 ))))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                CLEAR_PRINTS();
                PRINT( "EDD2_PMT21", 7500, 1 );
            }
            sub_8792();
        }
        if (IS_CHAR_INJURED( l_U204 ))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U220 );
            if (DOES_BLIP_EXIST( l_U207 ))
            {
                REMOVE_BLIP( l_U207 );
            }
            SET_ALL_RANDOM_PEDS_FLEE( sub_957(), 0 );
            sub_8985();
        }
        break;
    }
    return;
}

void sub_8792()
{
    g_U64747++;
    if (g_U64747 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_957(), 150 );
        SAY_AMBIENT_SPEECH( sub_1956(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    else
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_957(), 150 );
    }
    sub_1031();
    return;
}

void sub_8985()
{
    CLEAR_WANTED_LEVEL( sub_957() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_9020( 2028, 3 );
    sub_9095( "PD_ED", "PD_LOW" );
    sub_9288( l_U224 );
    sub_14201( 47 );
    UNLOCK_MISSION_NEWS_STORY( 47 );
    sub_1031();
    return;
}

void sub_9020(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_9095(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_9108( uParam0, uParam1 );
    if (iVar4 != -1)
    {
        g_U2273[iVar4]._fU180 = 1;
        g_U2273[iVar4]._fU212 = 1;
    }
    return;
}

int sub_9108(unknown uParam0, unknown uParam1)
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

void sub_9288(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_356( uParam0 );
    sub_9308( uParam0 );
    sub_13282( uParam0 );
    return;
}

void sub_9308(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_9438();
        break;
        case 39:
        sub_10400();
        break;
        case 40:
        sub_10659();
        break;
        case 48:
        sub_10842();
        break;
        case 41:
        sub_11027();
        break;
        case 42:
        sub_11223();
        break;
        case 43:
        sub_11404();
        break;
        case 44:
        sub_11587();
        break;
        case 45:
        sub_11768();
        break;
        case 46:
        sub_11947();
        break;
        case 47:
        sub_12258();
        break;
        case 49:
        sub_12458();
        break;
        case 50:
        sub_12635();
        break;
        case 51:
        sub_12833();
        break;
        default: sub_476( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_13108();
    sub_13181();
    return;
}

void sub_9438()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 38;
    uVar3 = sub_356( iVar2 );
    sub_9478( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 500 );
        break;
        default: sub_476( "Interactions_Badman_Pass: Unknown Badman Sequence - tell Keith" );
    }
    return;
}

void sub_9478(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_9531( iParam0, uParam1, uParam2 );
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
        sub_9663( iParam0 + 0 );
    }
    return;
}

void sub_9531(int iParam0, int iParam1, int iParam2)
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
        sub_9663( iParam0 + 0 );
    }
    return;
}

void sub_9663(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_9694( iParam0->_fU4 )))
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

int sub_9694(unknown uParam0)
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

void sub_10124(unknown uParam0)
{
    sub_10135( uParam0 );
    return;
}

void sub_10135(unknown uParam0)
{
    ADD_SCORE( sub_957(), uParam0 );
    sub_10160( uParam0 );
    return;
}

void sub_10160(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_476( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_10400()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 39;
    uVar3 = sub_356( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 100 );
        sub_9478( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 2:
        sub_10124( 200 );
        sub_9478( ref g_U34048[uVar3]._fU8, 168, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3:
        sub_10124( 500 );
        break;
        default: sub_476( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_10659()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 40;
    uVar3 = sub_356( iVar2 );
    sub_9478( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 0 );
        break;
        default: sub_476( "Interactions_Cherise_Pass: Unknown Cherise Sequence - tell Keith" );
    }
    return;
}

void sub_10842()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 48;
    uVar3 = sub_356( iVar2 );
    sub_9478( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 0 );
        break;
        default: sub_476( "Interactions_Clarence_Pass: Unknown Clarence Sequence - tell Keith" );
    }
    return;
}

void sub_11027()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 41;
    uVar3 = sub_356( iVar2 );
    sub_9478( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 0 );
        break;
        case 2:
        sub_10124( 0 );
        break;
        default: sub_476( "Interactions_Eddie_Pass: Unknown Eddie Sequence - tell Keith" );
    }
    return;
}

void sub_11223()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 42;
    uVar3 = sub_356( iVar2 );
    sub_9478( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 0 );
        break;
        default: sub_476( "Interactions_Gracie_Pass: Unknown Gracie Sequence - tell Keith" );
    }
    return;
}

void sub_11404()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 43;
    uVar3 = sub_356( iVar2 );
    sub_9478( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 500 );
        break;
        default: sub_476( "Interactions_Hossan_Pass: Unknown Hossan Sequence - tell Keith" );
    }
    return;
}

void sub_11587()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 44;
    uVar3 = sub_356( iVar2 );
    sub_9478( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 0 );
        break;
        default: sub_476( "Interactions_Ilyena_Pass: Unknown Ilyena Sequence - tell Keith" );
    }
    return;
}

void sub_11768()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 45;
    uVar3 = sub_356( iVar2 );
    sub_9478( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 1000 );
        break;
        default: sub_476( "Interactions_Ivan_Pass: Unknown Ivan Sequence - tell Keith" );
    }
    return;
}

void sub_11947()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 46;
    uVar3 = sub_356( iVar2 );
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 1000 );
        sub_12034( ref g_U34048[uVar3]._fU8 );
        g_U34048[uVar3]._fU24 = 1;
        break;
        case 2:
        sub_10124( 5000 );
        sub_9478( ref g_U34048[uVar3]._fU8, 96, 0, 0 );
        g_U34048[uVar3]._fU24 = 0;
        break;
        case 3: break;
        default: sub_476( "Interactions_Jeff_Pass: Unknown Jeff Sequence - tell Keith" );
    }
    return;
}

void sub_12034(int iParam0)
{
    sub_12047( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_12047(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_12258()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 47;
    uVar3 = sub_356( iVar2 );
    sub_9478( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 0 );
        break;
        case 2:
        sub_10124( 0 );
        break;
        default: sub_476( "Interactions_Marnie_Pass: Unknown Marnie Sequence - tell Keith" );
    }
    return;
}

void sub_12458()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 49;
    uVar3 = sub_356( iVar2 );
    sub_9478( ref g_U34048[uVar3]._fU8, 48, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 500 );
        break;
        default: sub_476( "Interactions_Mel_Pass: Unknown Mel Sequence - tell Keith" );
    }
    return;
}

void sub_12635()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 50;
    uVar3 = sub_356( iVar2 );
    sub_9478( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 0 );
        break;
        case 2:
        sub_10124( 0 );
        break;
        default: sub_476( "Interactions_Pathos_Pass: Unknown Pathos Sequence - tell Keith" );
    }
    return;
}

void sub_12833()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 51;
    uVar3 = sub_356( iVar2 );
    sub_9478( ref g_U34048[uVar3]._fU8, 24, 0, 0 );
    g_U34048[uVar3]._fU24 = 0;
    switch (g_U34048[uVar3]._fU28)
    {
        case 1:
        sub_10124( 0 );
        break;
        case 2:
        sub_10124( 1000 );
        break;
        default: sub_476( "Interactions_Sara_Pass: Unknown Sara Sequence - tell Keith" );
    }
    return;
}

void sub_13108()
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

void sub_13181()
{
    sub_13190();
    StrCopy( ref g_U9926, "RIPASS", 16 );
    return;
}

void sub_13190()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_13282(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_356( uParam0 );
    g_U34048[uVar3]._fU28 = 99;
    g_U34048[uVar3]._fU4 = 0;
    sub_5175( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 0;
    sub_13363( uParam0 );
    return;
}

void sub_13363(unknown uParam0)
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
            sub_13642( 5, iVar4 );
            g_U64848[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_13642(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_13824( 0 );
    return;
}

void sub_13824(boolean bParam0)
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
        sub_14079();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_14079()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_14201(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_14288( iParam0 ))
    {
        sub_14766( iParam0 );
    }
    return;
}

int sub_14288(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 20 )) || (IS_BIT_SET( g_U1452[uParam0], 21 )))
    {
        return 0;
    }
    sub_9478( ref uVar3, 1, 0, 0 );
    sub_14361( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_14574( "\n ----------------------------------------------------------------" );
    sub_14659( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_14574( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_14361(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_14574(unknown uParam0)
{
    return;
}

void sub_14659(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_14766(unknown uParam0)
{
    int iVar3;
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

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_14977( 20, 6, 16383, 16383, ref uVar4 );
        sub_15653( ref uVar4, 7 );
        sub_15684( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_14977( 20, 7, 9, 16383, ref uVar4 );
        sub_15653( ref uVar4, 7 );
        sub_15684( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_14977(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_15001( uParam0, 0, iParam4 + 0 );
    sub_15001( uParam1, 1, iParam4 + 0 );
    sub_15001( uParam2, 2, iParam4 + 0 );
    sub_15001( uParam3, 3, iParam4 + 0 );
    sub_15001( 0, 4, iParam4 + 0 );
    sub_15001( 1, 5, iParam4 + 0 );
    sub_15001( 65535, 6, iParam4 + 0 );
    sub_15001( 0, 12, iParam4 + 0 );
    sub_15001( 0, 11, iParam4 + 0 );
    sub_15001( 0, 14, iParam4 + 0 );
    sub_15001( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_15001( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_15001( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_15001(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_15653(int iParam0, unknown uParam1)
{
    sub_15001( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_15684(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_15724())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_16411( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_16210( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_15724()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_15758( 5, g_U968[I] )) == 7)
        {
            sub_16210( I );
            return 1;
        }
    }
    return 0;
}

int sub_15758(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_16210(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_16283( 39 );
    return;
}

void sub_16283(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_16411(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_16472( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_16472(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}