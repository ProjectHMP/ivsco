void main()
{
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 1;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    ProtectedSet(l_U129, 20);
    l_U134 = 0;
    l_U144 = "amb@pimps_pros";
    l_U145 = 0;
    l_U147 = "misscar_sex";
    l_U172 = 0;
    l_U173 = 0;
    l_U174 = 0;
    l_U175 = 0;
    l_U176 = 1;
    StrCopy( ref l_U214, "pros_serv", 16 );
    l_U218 = 4;
    StrCopy( ref l_U219, "pros_07", 16 );
    l_U223 = 0.91600000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_244();
    }
    WAIT( 0 );
    l_U116 = l_U224;
    sub_990();
    if ((g_U8670) || (g_U8671))
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambPimpNpros" )) == 1)
        {
            g_U8671 = 0;
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambbeggar" )) == 0)
            {
                g_U8670 = 0;
            }
        }
    }
    while (l_U106)
    {
        WAIT( 0 );
        if (sub_1319())
        {
            switch (l_U102)
            {
                case 0:
                sub_2046();
                break;
                case 1:
                sub_3018();
                break;
                default: break;
            }
        }
        else
        {
            l_U106 = 0;
        }
        sub_21700();
    }
    if (l_U108)
    {
        if (DOES_CHAR_EXIST( l_U116 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U116 )))
            {
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
            }
        }
        if (l_U109)
        {
            g_U8670 = 0;
        }
        sub_1623();
    }
    if (l_U110)
    {
        g_U8671 = 0;
    }
    sub_244();
    return;
}

void sub_244()
{
    if (NOT (IS_CHAR_DEAD( l_U116 )))
    {
        CLEAR_CHAR_TASKS( l_U116 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U116 );
    l_U116 = nil;
    if (NOT (IS_CHAR_DEAD( l_U117 )))
    {
        CLEAR_CHAR_TASKS( l_U117 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U117 );
    l_U117 = nil;
    if (NOT (IS_CHAR_DEAD( l_U118 )))
    {
        CLEAR_CHAR_TASKS( l_U118 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U118 );
    l_U118 = nil;
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U119 );
    l_U119 = nil;
    REMOVE_BLIP( l_U126 );
    REMOVE_BLIP( l_U127 );
    REMOVE_BLIP( l_U128 );
    REMOVE_ANIMS( l_U144 );
    sub_468( 4, ref l_U219 );
    if (l_U112)
    {
        if (# -NULL-0xc27e8e())
        {
            PROSTITUTE_CAM_ACTIVATE( 0 );
        }
        if (IS_PLAYER_PLAYING( sub_738() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_738(), 1 );
        }
        l_U114 = 0;
        l_U112 = 0;
    }
    if (l_U113)
    {
        sub_689();
        l_U113 = 0;
    }
    if (l_U114)
    {
        if (IS_PLAYER_PLAYING( sub_738() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_738(), 1 );
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_468(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((g_U9172 == iParam0) AND (l_U3))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_689();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_738(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_689()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_738()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_990()
{
    l_U106 = 0;
    if (DOES_CHAR_EXIST( l_U116 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U116 )))
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
            l_U106 = 1;
        }
    }
    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        if (NOT (IS_CHAR_DEAD( sub_1076() )))
        {
            ;
        }
        else
        {
            l_U106 = 0;
        }
    }
    else
    {
        l_U106 = 0;
    }
    if (l_U106)
    {
        if (NOT (IS_CHAR_DEAD( l_U116 )))
        {
            GET_CHAR_COORDINATES( l_U116, ref l_U123._fU0, ref l_U123._fU4, ref l_U123._fU8 );
        }
    }
    return;
}

void sub_1076()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1319()
{
    if (DOES_CHAR_EXIST( l_U116 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U116 )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( l_U116 )))
            {
                if (NOT g_U10978)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, sub_1076(), 100.00000000, 100.00000000, 50.00000000, 0 ))
                    {
                        return 1;
                    }
                }
                else
                {
                    l_U103 = 11;
                }
            }
            else if (l_U103 == 0)
            {
                ;
            }
            else if (NOT g_U10978)
            {
                return 1;
            }
            else
            {
                sub_1487();
                l_U103 = 11;
            };;;
        }
    }
    return 0;
}

void sub_1487()
{
    unknown uVar2;

    if (l_U112)
    {
        if (# -NULL-0xc27e8e())
        {
            PROSTITUTE_CAM_ACTIVATE( 0 );
        }
        if (IS_PLAYER_PLAYING( sub_738() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_738(), 1 );
            GET_SCRIPT_TASK_STATUS( sub_1076(), 88, ref l_U142 );
            if (l_U142 == 1)
            {
                CLEAR_CHAR_TASKS( sub_1076() );
                CLEAR_CHAR_SECONDARY_TASK( sub_1076() );
            }
        }
        l_U114 = 0;
        l_U112 = 0;
        sub_1623();
    }
    if (l_U113)
    {
        sub_689();
        l_U113 = 0;
    }
    if (NOT (IS_CHAR_INJURED( l_U116 )))
    {
        if (IS_SCREEN_FADED_OUT())
        {
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
            DELETE_CHAR( ref l_U116 );
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U116 );
            OPEN_SEQUENCE_TASK( ref uVar2 );
            if (IS_CHAR_IN_ANY_CAR( l_U116 ))
            {
                TASK_LEAVE_ANY_CAR( 0 );
            }
            TASK_WANDER_STANDARD( 0 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U116, uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U116 );
    }
    if (l_U172)
    {
        if (IS_PLAYER_PLAYING( sub_738() ))
        {
            CLEAR_CHAR_TASKS( sub_1076() );
            CLEAR_CHAR_SECONDARY_TASK( sub_1076() );
            TASK_STAND_STILL( sub_1076(), 1 );
        }
        l_U172 = 0;
    }
    return;
}

void sub_1623()
{
    if ((((IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U214, ProtectedGet(l_U177[0]) )) || (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U214, ProtectedGet(l_U177[1]) ))) || (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U214, ProtectedGet(l_U177[2]) ))) || (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U214, ProtectedGet(l_U177[3]) )))
    {
        CLEAR_HELP();
    }
    return;
}

void sub_2046()
{
    REQUEST_ANIMS( l_U144 );
    REQUEST_ANIMS( l_U147 );
    if ((NOT (HAVE_ANIMS_LOADED( l_U144 ))) || (NOT (HAVE_ANIMS_LOADED( l_U147 ))))
    {
        REQUEST_ANIMS( l_U144 );
        REQUEST_ANIMS( l_U147 );
    }
    else if (# -NULL-0xc27e8e())
    {
        ProtectedSet(l_U177[0], 70);
        ProtectedSet(l_U177[1], 70);
        ProtectedSet(l_U177[2], 70);
        ProtectedSet(l_U177[3], ProtectedGet(l_U129));
        ProtectedSet(l_U129, 70);
    }
    else
    {
        ProtectedSet(l_U177[0], 20);
        ProtectedSet(l_U177[1], 50);
        ProtectedSet(l_U177[2], 70);
        ProtectedSet(l_U177[3], ProtectedGet(l_U129));
        ProtectedSet(l_U129, 20);
    }
    l_U148[0] = "f_handjob_intro";
    l_U152[0] = "f_handjob_loop";
    l_U156[0] = "f_handjob_outro";
    l_U160[0] = "m_handjob_intro";
    l_U164[0] = "m_handjob_loop";
    l_U168[0] = "m_handjob_outro";
    l_U148[1] = "f_blowjob_intro";
    l_U152[1] = "f_blowjob_loop";
    l_U156[1] = "f_blowjob_outro";
    l_U160[1] = "m_blowjob_intro";
    l_U164[1] = "m_blowjob_loop";
    l_U168[1] = "m_blowjob_outro";
    l_U148[2] = "f_sex_intro";
    l_U152[2] = "f_sex_loop";
    l_U156[2] = "f_sex_outro";
    l_U160[2] = "m_sex_intro";
    l_U164[2] = "m_sex_loop";
    l_U168[2] = "m_sex_outro";
    l_U184[0] = 750;
    l_U189[0] = 500;
    l_U194[0] = 250;
    l_U199[0] = 999999;
    l_U184[1] = 750;
    l_U189[1] = 500;
    l_U194[1] = 250;
    l_U199[1] = 999999;
    l_U184[2] = 1000;
    l_U189[2] = 500;
    l_U194[2] = 250;
    l_U199[2] = 999999;
    l_U184[3] = 1000;
    l_U189[3] = 500;
    l_U194[3] = 250;
    l_U199[3] = 999999;
    l_U204[0] = 0.01000000;
    l_U204[1] = 0.01000000;
    l_U204[2] = 0.50000000;
    l_U204[3] = 0.50000000;
    l_U209[0] = 1;
    l_U209[1] = 2;
    l_U209[2] = 3;
    l_U209[3] = 3;
    l_U145 = 0;
    l_U183 = l_U145;
    l_U172 = 0;
    l_U175 = 0;
    l_U102 = 1;;
    return;
}

void sub_3018()
{
    if (NOT (l_U103 == 10))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U116, sub_1076(), 0 ))
        {
            l_U134++;
            if (l_U134 >= 2)
            {
                sub_468( 4, ref l_U219 );
                l_U103 = 10;
            }
            else
            {
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U116 );
            }
        }
    }
    switch (l_U105)
    {
        case 0:
        sub_3164();
        break;
        case 2:
        sub_4709();
        break;
        case 4:
        sub_18107();
        break;
        case 5:
        sub_20904();
        break;
    }
    return;
}

void sub_3164()
{
    l_U105 = 0;
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U117 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U119 );
    l_U117 = nil;
    l_U119 = nil;
    l_U118 = nil;
    if (NOT (IS_CHAR_DEAD( l_U116 )))
    {
        if (NOT g_U8670)
        {
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, sub_1076(), 10.00000000, 10.00000000, 10.00000000, 0 )) AND (IS_SCORE_GREATER( sub_738(), ProtectedGet(l_U177[0]) - 1 )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_1076() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1076(), ref l_U120 );
                    if (NOT (l_U120 == nil))
                    {
                        if (IS_VEH_DRIVEABLE( l_U120 ))
                        {
                            if (sub_3380( ref l_U120 ))
                            {
                                l_U105 = 2;
                            }
                            else
                            {
                                sub_3703();
                            }
                        }
                    }
                }
            }
            else if (sub_3979())
            {
                l_U105 = 4;
            }
            else if (NOT l_U111)
            {
                if (sub_4346())
                {
                    l_U105 = 5;
                }
            };;;
        }
        else if (sub_3979())
        {
            l_U105 = 4;
        }
        else if (NOT l_U111)
        {
            if (sub_4346())
            {
                l_U105 = 5;
            }
        };;;
    }
    if (l_U105 == 2)
    {
        if (NOT g_U8670)
        {
            l_U108 = 1;
        }
    }
    else if (NOT (l_U105 == 0))
    {
        if (l_U105 == 4)
        {
            if (NOT g_U8671)
            {
                l_U110 = 1;
                g_U8671 = 1;
            }
        }
        else if (l_U105 == 5)
        {
            l_U104 = 0;
        }
    }
    return;
}

int sub_3380(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        GET_CAR_MODEL( (uParam0^), ref uVar3 );
        if (sub_3417( uVar3 ))
        {
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( (uParam0^), ref iVar4 );
            if (iVar4 > 0)
            {
                GET_NUMBER_OF_PASSENGERS( (uParam0^), ref iVar4 );
                if ((iVar4 == 0) AND (IS_CAR_PASSENGER_SEAT_FREE( (uParam0^), 0 )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_3417(int iParam0)
{
    if (((((IS_THIS_MODEL_A_BOAT( iParam0 )) || (IS_THIS_MODEL_A_PLANE( iParam0 ))) || (IS_THIS_MODEL_A_HELI( iParam0 ))) || (IS_THIS_MODEL_A_TRAIN( iParam0 ))) || (IS_THIS_MODEL_A_BIKE( iParam0 )))
    {
        return 0;
    }
    if (((((((iParam0 == 2046537925) || (iParam0 == 148777611)) || (iParam0 == -350085182)) || (iParam0 == -1627000575)) || (iParam0 == -1900572838)) || (iParam0 == 1127131465)) || (iParam0 == 1911513875))
    {
        return 0;
    }
    if (((((iParam0 == 1560980623) || (iParam0 == 1938952078)) || (iParam0 == 1171614426)) || (iParam0 == -713569950)) || (iParam0 == -845979911))
    {
        return 0;
    }
    return 1;
}

void sub_3703()
{
    int iVar2;
    float fVar3;

    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1076() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1076(), ref l_U120 );
            if (NOT (l_U120 == nil))
            {
                if (IS_VEH_DRIVEABLE( l_U120 ))
                {
                    GET_CAR_SPEED( l_U120, ref fVar3 );
                    if (fVar3 <= 2.00000000)
                    {
                        if (IS_PLAYER_PRESSING_HORN( sub_738() ))
                        {
                            if ((IS_SCORE_GREATER( sub_738(), ProtectedGet(l_U177[0]) - 1 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_738(), 0 ))))
                            {
                                if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1076() )))
                                {
                                    GET_GAME_TIMER( ref iVar2 );
                                    if ((iVar2 - g_U9051) > 3000)
                                    {
                                        SAY_AMBIENT_SPEECH( sub_1076(), "HOOKER_CAR_SMALL", 1, 1, 0 );
                                        GET_GAME_TIMER( ref g_U9051 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_3979()
{
    int iVar2;

    if (NOT g_U8671)
    {
        GET_CHAR_COORDINATES( l_U116, ref l_U123._fU0, ref l_U123._fU4, ref l_U123._fU8 );
        GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( l_U123._fU0, l_U123._fU4, l_U123._fU8, 10.00000000, 0, 0, ref l_U119 );
        if (NOT (l_U119 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U119 ))
            {
                if (sub_3380( ref l_U119 ))
                {
                    GET_DRIVER_OF_CAR( l_U119, ref l_U117 );
                    if (NOT (l_U117 == nil))
                    {
                        if (sub_4147( ref l_U117 ))
                        {
                            GET_CAR_MODEL( l_U119, ref iVar2 );
                            if ((NOT (iVar2 == -956048545)) AND (NOT (iVar2 == 1208856469)))
                            {
                                SET_CHAR_AS_MISSION_CHAR( l_U117 );
                                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U117, 0 );
                                SET_CAR_AS_MISSION_CAR( l_U119 );
                                SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U119, 0 );
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    l_U119 = nil;
    l_U117 = nil;
    return 0;
}

int sub_4147(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_CHAR_MALE( (uParam0^) ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4346()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    l_U118 = nil;
    BEGIN_CHAR_SEARCH_CRITERIA();
    SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 35 );
    END_CHAR_SEARCH_CRITERIA();
    GET_CHAR_COORDINATES( l_U116, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    GET_CLOSEST_CHAR( uVar2._fU0, uVar2._fU4, uVar2._fU8, 10.00000000, 1, 0, ref l_U118 );
    if (NOT (l_U118 == nil))
    {
        if (NOT (IS_CHAR_INJURED( l_U118 )))
        {
            SET_CHAR_AS_MISSION_CHAR( l_U118 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U118, 0 );
            return 1;
        }
        else
        {
            l_U118 = nil;
        }
    }
    l_U118 = nil;
    return 0;
}

void sub_4709()
{
    if (l_U108)
    {
        ;
    }
    if (g_U8670)
    {
        if (l_U103 > 0)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, sub_1076(), 15.00000000, 15.00000000, 3.00000000, 0 )))
            {
                CLEAR_CHAR_TASKS( l_U116 );
                if (DOES_CHAR_EXIST( l_U116 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U116 )))
                    {
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U116 );
                    }
                }
                l_U103 = 0;
                l_U105 = 0;
                if (l_U109)
                {
                    g_U8670 = 0;
                    l_U109 = 0;
                }
            }
        }
    }
    switch (l_U103)
    {
        case 0:
        if (NOT (l_U105 == 0))
        {
            l_U103 = 1;
        }
        else
        {
            sub_3164();
        }
        break;
        case 1:
        sub_5036();
        break;
        case 2:
        sub_5751();
        BLOCK_CHAR_GESTURE_ANIMS( l_U116, 1 );
        break;
        case 3:
        sub_6438();
        BLOCK_CHAR_GESTURE_ANIMS( l_U116, 1 );
        break;
        case 4:
        sub_6955();
        break;
        case 5:
        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, sub_1076(), 5.00000000, 5.00000000, 5.00000000, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_738(), 0 ))))
        {
            GET_SCRIPT_TASK_STATUS( l_U116, 29, ref l_U142 );
            if (l_U142 == 1)
            {
                GET_SEQUENCE_PROGRESS( l_U116, ref l_U143 );
                if (l_U143 > 0)
                {
                    if ((IS_CHAR_IN_ANY_CAR( sub_1076() )) AND (IS_CHAR_IN_ANY_CAR( l_U116 )))
                    {
                        if (l_U114)
                        {
                            if (IS_PLAYER_PLAYING( sub_738() ))
                            {
                                SET_PLAYER_CAN_DO_DRIVE_BY( sub_738(), 1 );
                                l_U114 = 0;
                            }
                        }
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1076(), ref l_U120 );
                        if (IS_VEH_DRIVEABLE( l_U120 ))
                        {
                            if ((IS_CHAR_IN_CAR( l_U116, l_U120 )) AND (IS_CHAR_IN_CAR( sub_1076(), l_U120 )))
                            {
                                INCREMENT_INT_STAT_NO_MESSAGE( 303, 1 );
                                l_U103 = 7;
                                GET_GAME_TIMER( ref l_U130 );
                                l_U141 = 0;
                            }
                            SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_DRIVE_TO_LOC", 1, 1, 0 );
                            GET_GAME_TIMER( ref g_U9051 );
                            l_U115 = 0;
                        }
                    }
                    else
                    {
                        SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                        CLEAR_CHAR_TASKS( l_U116 );
                        OPEN_SEQUENCE_TASK( ref l_U121 );
                        if (HAVE_ANIMS_LOADED( l_U144 ))
                        {
                            TASK_PLAY_ANIM( 0, "rejection", l_U144, 13.00000000, 0, 1, 1, 0, -1 );
                        }
                        CLOSE_SEQUENCE_TASK( l_U121 );
                        TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                        CLEAR_SEQUENCE_TASK( l_U121 );
                        TASK_CLEAR_LOOK_AT( sub_1076() );
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                        l_U103 = 11;
                    }
                }
            }
            else if (l_U142 == 7)
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U116 )))
                {
                    SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                    CLEAR_CHAR_TASKS( l_U116 );
                    OPEN_SEQUENCE_TASK( ref l_U121 );
                    if (HAVE_ANIMS_LOADED( l_U144 ))
                    {
                        TASK_PLAY_ANIM( 0, "rejection", l_U144, 13.00000000, 0, 1, 1, 0, -1 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U121 );
                    TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                    CLEAR_SEQUENCE_TASK( l_U121 );
                    TASK_CLEAR_LOOK_AT( sub_1076() );
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                    l_U103 = 11;
                }
            }
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U116 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
            l_U103 = 11;
        }
        break;
        case 6:
        GET_SCRIPT_TASK_STATUS( l_U116, 29, ref l_U142 );
        if (l_U142 == 7)
        {
            if (l_U108)
            {
                if (DOES_CHAR_EXIST( l_U116 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U116 )))
                    {
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U116 )))
                    {
                        TASK_WANDER_STANDARD( l_U116 );
                    }
                }
                if (l_U109)
                {
                    g_U8670 = 0;
                    l_U109 = 0;
                }
                sub_1623();
                l_U109 = 0;
            }
            l_U103 = 0;
            l_U105 = 0;
        }
        break;
        case 7:
        sub_9545();
        break;
        case 8:
        sub_10880();
        break;
        case 9:
        sub_14163();
        break;
        case 10:
        l_U103 = 11;
        break;
        case 11:
        if (l_U114)
        {
            if (IS_PLAYER_PLAYING( sub_738() ))
            {
                SET_PLAYER_CAN_DO_DRIVE_BY( sub_738(), 1 );
                l_U114 = 0;
            }
        }
        if (l_U108)
        {
            if (DOES_CHAR_EXIST( l_U116 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U116 )))
                {
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                }
            }
            if (l_U109)
            {
                g_U8670 = 0;
                l_U109 = 0;
            }
            sub_1623();
            l_U108 = 0;
        }
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, sub_1076(), 20.00000000, 20.00000000, 20.00000000, 0 )))
        {
            l_U106 = 0;
        }
        break;
    }
    return;
}

void sub_5036()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    if (g_U8670)
    {
        if (DOES_CHAR_EXIST( l_U116 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U116 )))
            {
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U116 );
            }
        }
        l_U103 = 0;
        l_U105 = 0;
        l_U108 = 0;
    }
    else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, sub_1076(), 11.00000000, 11.00000000, 3.00000000, 0 ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1076() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1076(), ref l_U120 );
            if (IS_VEH_DRIVEABLE( l_U120 ))
            {
                if (sub_3380( ref l_U120 ))
                {
                    GET_CAR_SPEED( l_U120, ref fVar2 );
                    if (fVar2 <= 2.00000000)
                    {
                        if (IS_PLAYER_PRESSING_HORN( sub_738() ))
                        {
                            if ((IS_SCORE_GREATER( sub_738(), ProtectedGet(l_U177[0]) - 1 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_738(), 0 ))))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U116 )))
                                {
                                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 0 );
                                    SET_CHAR_AS_MISSION_CHAR( l_U116 );
                                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U116, 0 );
                                }
                                GET_CAR_MODEL( l_U120, ref l_U122 );
                                GET_MODEL_DIMENSIONS( l_U122, ref vVar12, ref vVar9 );
                                vVar6 = {vVar9 - vVar12};
                                vVar6 = {vVar6 / 2.00000000};
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U120, -vVar6.x + 0.20000000, 0.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U120, vVar6.x + 0.20000000, 0.00000000, 0.00000000, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                                GET_CHAR_COORDINATES( l_U116, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
                                if ((VDIST( uVar18, uVar15 )) < (VDIST( uVar18, uVar3 )))
                                {
                                    uVar3 = {uVar15};
                                }
                                OPEN_SEQUENCE_TASK( ref l_U121 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 2, -1, 1.00000000 );
                                CLOSE_SEQUENCE_TASK( l_U121 );
                                TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                                CLEAR_SEQUENCE_TASK( l_U121 );
                                REMOVE_CAR_WINDOW( l_U120, 0 );
                                l_U103 = 2;
                                g_U8670 = 1;
                                l_U109 = 1;
                            }
                            else
                            {
                                l_U103 = 0;
                                l_U105 = 0;
                                g_U8670 = 0;
                                l_U109 = 0;
                            }
                        }
                    }
                }
                else
                {
                    sub_3703();
                }
            }
        }
    }
    return;
}

void sub_5751()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    GET_SCRIPT_TASK_STATUS( l_U116, 29, ref l_U142 );
    if (l_U142 == 7)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1076() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1076(), ref l_U120 );
            if (IS_VEH_DRIVEABLE( l_U120 ))
            {
                if (sub_3380( ref l_U120 ))
                {
                    GET_CAR_SPEED( l_U120, ref fVar2 );
                    if ((fVar2 <= 2.00000000) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_738(), 0 ))))
                    {
                        GET_CAR_MODEL( l_U120, ref l_U122 );
                        GET_MODEL_DIMENSIONS( l_U122, ref vVar12, ref vVar9 );
                        vVar6 = {vVar9 - vVar12};
                        vVar6 = {vVar6 / 2.00000000};
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U120, -vVar6.x + 0.20000000, 0.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U120, vVar6.x + 0.20000000, 0.00000000, 0.00000000, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                        GET_CHAR_COORDINATES( l_U116, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
                        if ((VDIST( uVar18, uVar15 )) < (VDIST( uVar18, uVar3 )))
                        {
                            uVar3 = {uVar15};
                        }
                        OPEN_SEQUENCE_TASK( ref l_U121 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar3._fU0, uVar3._fU4, uVar3._fU8, 2, -1, 1.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_1076() );
                        TASK_STAND_STILL( 0, -2 );
                        CLOSE_SEQUENCE_TASK( l_U121 );
                        TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                        CLEAR_SEQUENCE_TASK( l_U121 );
                        l_U103 = 3;
                    }
                    else if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, sub_1076(), 15.00000000, 15.00000000, 5.00000000, 0 ))) || (IS_WANTED_LEVEL_GREATER( sub_738(), 0 )))
                    {
                        CLEAR_CHAR_TASKS( l_U116 );
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                        l_U103 = 11;
                    }
                }
                else
                {
                    CLEAR_CHAR_TASKS( l_U116 );
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                    l_U103 = 11;
                    sub_3703();
                }
            }
            else
            {
                CLEAR_CHAR_TASKS( l_U116 );
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                l_U103 = 11;
            }
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U116 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
            l_U103 = 11;
        }
    }
    return;
}

void sub_6438()
{
    float fVar2;

    GET_SCRIPT_TASK_STATUS( l_U116, 29, ref l_U142 );
    if (l_U142 == 1)
    {
        GET_SEQUENCE_PROGRESS( l_U116, ref l_U143 );
        if (l_U143 > 1)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1076() ))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, sub_1076(), 15.00000000, 15.00000000, 5.00000000, 0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1076(), ref l_U120 );
                    if (IS_VEH_DRIVEABLE( l_U120 ))
                    {
                        if (sub_3380( ref l_U120 ))
                        {
                            GET_CAR_SPEED( l_U120, ref fVar2 );
                            if (fVar2 <= 2.00000000)
                            {
                                SAY_AMBIENT_SPEECH( l_U116, "SOLICIT", 1, 1, 0 );
                                OPEN_SEQUENCE_TASK( ref l_U121 );
                                if (HAVE_ANIMS_LOADED( l_U144 ))
                                {
                                    TASK_PLAY_ANIM( 0, "car_proposition", l_U144, 12.00000000, 0, 0, 0, 0, -1 );
                                }
                                CLOSE_SEQUENCE_TASK( l_U121 );
                                TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                                CLEAR_SEQUENCE_TASK( l_U121 );
                                GET_GAME_TIMER( ref l_U130 );
                                GET_GAME_TIMER( ref l_U131 );
                                l_U103 = 4;
                                TASK_LOOK_AT_CHAR( sub_1076(), l_U116, 10000, 0 );
                            }
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS( l_U116 );
                            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                            l_U103 = 11;
                            sub_3703();
                        }
                    }
                    else
                    {
                        CLEAR_CHAR_TASKS( l_U116 );
                        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                        l_U103 = 11;
                    }
                }
                else
                {
                    CLEAR_CHAR_TASKS( l_U116 );
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                    l_U103 = 11;
                }
            }
        }
    }
    return;
}

void sub_6955()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_1076() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1076(), ref l_U120 );
        GET_CAR_SPEED( l_U120, ref uVar2 );
        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, sub_1076(), 15.00000000, 15.00000000, 5.00000000, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_738(), 0 ))))
        {
            if (sub_7065( 4, 0 ))
            {
                if (NOT l_U114)
                {
                    if (IS_PLAYER_PLAYING( sub_738() ))
                    {
                        SET_PLAYER_CAN_DO_DRIVE_BY( sub_738(), 0 );
                        l_U114 = 1;
                    }
                }
                if (sub_7401( 4, ref l_U219, 0 ))
                {
                    sub_468( 4, ref l_U219 );
                    CLEAR_CHAR_TASKS( l_U116 );
                    SAY_AMBIENT_SPEECH( sub_1076(), "SOLICIT_HOOKER_RESP_POS_CAR", 1, 1, 0 );
                    OPEN_SEQUENCE_TASK( ref l_U121 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U120, -2, 0 );
                    TASK_STAND_STILL( 0, -2 );
                    CLOSE_SEQUENCE_TASK( l_U121 );
                    TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                    CLEAR_SEQUENCE_TASK( l_U121 );
                    l_U103 = 5;
                }
                else
                {
                    GET_GAME_TIMER( ref l_U132 );
                    l_U133 = l_U132 - l_U130;
                    GET_SCRIPT_TASK_STATUS( l_U116, 29, ref l_U142 );
                    if (l_U133 >= 7500)
                    {
                        SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                        CLEAR_CHAR_TASKS( l_U116 );
                        OPEN_SEQUENCE_TASK( ref l_U121 );
                        if (HAVE_ANIMS_LOADED( l_U144 ))
                        {
                            TASK_PLAY_ANIM( 0, "rejection", l_U144, 13.00000000, 0, 1, 1, 0, -1 );
                        }
                        CLOSE_SEQUENCE_TASK( l_U121 );
                        TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                        CLEAR_SEQUENCE_TASK( l_U121 );
                        sub_468( 4, ref l_U219 );
                        TASK_CLEAR_LOOK_AT( sub_1076() );
                        l_U103 = 6;
                    }
                }
            }
            else
            {
                sub_468( 4, ref l_U219 );
                if (l_U114)
                {
                    if (IS_PLAYER_PLAYING( sub_738() ))
                    {
                        SET_PLAYER_CAN_DO_DRIVE_BY( sub_738(), 1 );
                        l_U114 = 0;
                    }
                }
            }
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U116 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
            TASK_CLEAR_LOOK_AT( sub_1076() );
            l_U103 = 11;
        }
    }
    else
    {
        CLEAR_CHAR_TASKS( l_U116 );
        SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
        TASK_CLEAR_LOOK_AT( sub_1076() );
        l_U103 = 11;
    }
    return;
}

int sub_7065(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_738() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_738() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_738() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_7161())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1076() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_7246())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_7161()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_7246()
{
    return sub_7257( 0, 0 );
}

int sub_7257(boolean bParam0, unknown uParam1)
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

int sub_7401(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_7065( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_738(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_7676();
                l_U1 = 1;
                g_U9173 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_7676()
{
    return sub_7257( 1, 1 );
}

void sub_9545()
{
    float fVar2;
    int iVar3;
    int iVar4;

    iVar3 = 4000;
    if (l_U112)
    {
        if (# -NULL-0xc27e8e())
        {
            PROSTITUTE_CAM_ACTIVATE( 0 );
        }
        if (IS_PLAYER_PLAYING( sub_738() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_738(), 1 );
        }
        l_U114 = 0;
        l_U112 = 0;
    }
    else if (l_U114)
    {
        if (IS_PLAYER_PLAYING( sub_738() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_738(), 1 );
            l_U114 = 0;
        }
    }
    if (l_U113)
    {
        sub_689();
        l_U113 = 0;
    }
    if (NOT l_U115)
    {
        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1076() ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U116 ))))
        {
            SAY_AMBIENT_SPEECH( sub_1076(), "HOOKER_QUIET", 1, 1, 0 );
            GET_GAME_TIMER( ref g_U9051 );
            l_U115 = 1;
        }
    }
    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_1076() )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_738(), 0 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1076(), ref l_U120 );
        if (IS_VEH_DRIVEABLE( l_U120 ))
        {
            if (IS_CHAR_IN_CAR( l_U116, l_U120 ))
            {
                GET_CAR_SPEED( l_U120, ref fVar2 );
                if ((fVar2 <= 2.00000000) AND (IS_PLAYER_CONTROL_ON( sub_738() )))
                {
                    if (NOT l_U107)
                    {
                        if (sub_9930())
                        {
                            GET_GAME_TIMER( ref l_U130 );
                            l_U107 = 1;
                        }
                        else if (l_U115)
                        {
                            GET_GAME_TIMER( ref iVar4 );
                            if ((iVar4 - g_U9051) > 30000)
                            {
                                if ((NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1076() ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U116 ))))
                                {
                                    SAY_AMBIENT_SPEECH( sub_1076(), "HOOKER_QUIET", 1, 1, 0 );
                                    GET_GAME_TIMER( ref g_U9051 );
                                }
                            }
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U132 );
                        l_U133 = l_U132 - l_U130;
                        if (l_U133 >= iVar3)
                        {
                            if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_7161()))
                            {
                                l_U175 = 0;
                                l_U176 = 1;
                                GET_GAME_TIMER( ref l_U182 );
                                if (NOT (# -NULL-0xc27e8e()))
                                {
                                    ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                    PRINT_HELP_FOREVER_WITH_NUMBER( ref l_U214, ProtectedGet(l_U177[l_U145]) );
                                }
                                l_U103 = 8;
                            }
                        }
                        else if (NOT sub_9930())
                        {
                            if (l_U115)
                            {
                                GET_GAME_TIMER( ref iVar4 );
                                if ((iVar4 - g_U9051) > 5000)
                                {
                                    if ((NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1076() ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U116 ))))
                                    {
                                        SAY_AMBIENT_SPEECH( sub_1076(), "HOOKER_QUIET", 1, 1, 0 );
                                        GET_GAME_TIMER( ref g_U9051 );
                                    }
                                }
                            }
                            l_U107 = 0;
                        }
                        if (l_U107)
                        {
                            ;
                        }
                    }
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                l_U103 = 11;
            }
        }
        else
        {
            SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
            l_U103 = 11;
        }
    }
    else
    {
        SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
        sub_1487();
        l_U103 = 11;
    }
    if (NOT (l_U103 == 8))
    {
        sub_1623();
    }
    return;
}

int sub_9930()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;

    fVar7 = 10.00000000;
    if (IS_CHAR_IN_ANY_CAR( sub_1076() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1076(), ref l_U120 );
    }
    GET_CHAR_COORDINATES( sub_1076(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    if (GET_CLOSEST_MAJOR_CAR_NODE( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 ))
    {
        if ((VDIST( uVar4, uVar8 )) <= 10.00000000)
        {
            return 0;
        }
    }
    BEGIN_CHAR_SEARCH_CRITERIA();
    SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 34 );
    END_CHAR_SEARCH_CRITERIA();
    GET_CLOSEST_CHAR( uVar4._fU0, uVar4._fU4, uVar4._fU8, fVar7, 1, 1, ref iVar2 );
    if (NOT (iVar2 == nil))
    {
        return 0;
    }
    else
    {
        GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uVar4._fU0, uVar4._fU4, uVar4._fU8, fVar7, 0, 0, ref iVar3 );
        if (NOT (iVar3 == nil))
        {
            if (NOT (iVar3 == l_U120))
            {
                if (IS_VEH_DRIVEABLE( iVar3 ))
                {
                    GET_DRIVER_OF_CAR( iVar3, ref iVar2 );
                    if (NOT (iVar3 == nil))
                    {
                        return 0;
                    }
                }
            }
        }
    }
    GET_INTERIOR_FROM_CHAR( sub_1076(), ref iVar11 );
    if (NOT (iVar11 == nil))
    {
        return 0;
    }
    return 1;
}

void sub_10880()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    int iVar8;

    if (NOT l_U114)
    {
        if (IS_PLAYER_PLAYING( sub_738() ))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_738(), 0 );
        }
        l_U114 = 1;
    }
    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_1076() )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_738(), 0 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1076(), ref l_U120 );
        if (IS_VEH_DRIVEABLE( l_U120 ))
        {
            if (IS_CHAR_IN_CAR( l_U116, l_U120 ))
            {
                GET_CAR_SPEED( l_U120, ref fVar2 );
                if ((((fVar2 <= 2.00000000) AND (IS_PLAYER_CONTROL_ON( sub_738() ))) AND (NOT sub_7161())) || (l_U175))
                {
                    if (((IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U214, ProtectedGet(l_U177[l_U145]) )) || (# -NULL-0xc27e8e())) || (l_U175))
                    {
                        if (NOT l_U175)
                        {
                            if (IS_SCORE_GREATER( sub_738(), ProtectedGet(l_U177[0]) - 1 ))
                            {
                                if (# -NULL-0xc27e8e())
                                {
                                    l_U176 = 1;
                                    l_U175 = 1;
                                    l_U145 = 3;
                                }
                                else
                                {
                                    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref uVar5, ref uVar6 );
                                    iVar7 = l_U145;
                                    if (IS_CONTROL_PRESSED( 0, 23 ))
                                    {
                                        GET_GAME_TIMER( ref l_U132 );
                                        if ((l_U132 - l_U182) > 1000)
                                        {
                                            sub_11255( 1 );
                                            GET_GAME_TIMER( ref l_U182 );
                                        }
                                    }
                                    else
                                    {
                                        l_U182 = 0;
                                    }
                                    if (NOT (iVar7 == l_U145))
                                    {
                                        if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( ref l_U214, ProtectedGet(l_U177[iVar7]) ))
                                        {
                                            CLEAR_HELP();
                                        }
                                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                        PRINT_HELP_FOREVER_WITH_NUMBER( ref l_U214, ProtectedGet(l_U177[l_U145]) );
                                    }
                                    if (sub_11666())
                                    {
                                        if (NOT l_U176)
                                        {
                                            sub_1623();
                                            l_U176 = 1;
                                            l_U175 = 1;
                                        }
                                    }
                                    else
                                    {
                                        l_U176 = 0;
                                    }
                                }
                            }
                            else
                            {
                                l_U145 = 3;
                                l_U175 = 1;
                            }
                        }
                        else if (NOT l_U112)
                        {
                            SET_PLAYER_CAN_DO_DRIVE_BY( sub_738(), 0 );
                            if (# -NULL-0xc27e8e())
                            {
                                PROSTITUTE_CAM_ACTIVATE( 1 );
                            }
                            l_U112 = 1;
                            l_U114 = 0;
                        }
                        if (NOT l_U113)
                        {
                            sub_7676();
                            sub_11860();
                            l_U113 = 1;
                        }
                        if (l_U145 == 0)
                        {
                            SAY_AMBIENT_SPEECH( sub_1076(), "HOOKER_CHEAP", 1, 1, 0 );
                        }
                        else if (l_U145 == 1)
                        {
                            SAY_AMBIENT_SPEECH( sub_1076(), "HOOKER_MIDRANGE", 1, 1, 0 );
                        }
                        else if (l_U145 == 2)
                        {
                            SAY_AMBIENT_SPEECH( sub_1076(), "HOOKER_EXPENSIVE", 1, 1, 0 );
                        }
                        else
                        {
                            SAY_AMBIENT_SPEECH( sub_1076(), "HOOKER_EXPENSIVE", 1, 1, 0 );
                        };;;
                        iVar8 = GET_CHAR_MONEY( l_U116 );
                        if (NOT (l_U145 == 3))
                        {
                            if (IS_SCORE_GREATER( sub_738(), ProtectedGet(l_U177[l_U145]) - 1 ))
                            {
                                ADD_SCORE( sub_738(), -1 * ProtectedGet(l_U177[l_U145]) );
                                INCREMENT_INT_STAT_NO_MESSAGE( 95, ProtectedGet(l_U177[l_U145]) );
                                iVar8 += ProtectedGet(l_U177[l_U145]);
                            }
                        }
                        else if (IS_SCORE_GREATER( sub_738(), ProtectedGet(l_U129) - 1 ))
                        {
                            ADD_SCORE( sub_738(), -1 * ProtectedGet(l_U129) );
                            INCREMENT_INT_STAT_NO_MESSAGE( 95, ProtectedGet(l_U129) );
                            iVar8 += ProtectedGet(l_U129);
                        }
                        SET_CHAR_MONEY( l_U116, iVar8 );
                        if (NOT (l_U145 == 3))
                        {
                            sub_12401( l_U120 );
                            if (HAVE_ANIMS_LOADED( l_U147 ))
                            {
                                TASK_PLAY_ANIM_WITH_FLAGS( l_U116, l_U148[l_U145], l_U147, 1000.00000000, -1, 8355 );
                                TASK_PLAY_ANIM_WITH_FLAGS( sub_1076(), l_U160[l_U145], l_U147, 1000.00000000, -1, 128 );
                                l_U172 = 1;
                                l_U173 = 0;
                                l_U174 = 0;
                            }
                        }
                        GET_GAME_TIMER( ref l_U130 );
                        GET_GAME_TIMER( ref l_U136 );
                        GET_GAME_TIMER( ref l_U139 );
                        GET_GAME_TIMER( ref l_U140 );
                        l_U138 = 0;
                        l_U137 = l_U184[l_U145];
                        l_U107 = 0;
                        l_U103 = 9;;
                    }
                    else
                    {
                        sub_1623();
                        l_U107 = 0;
                        l_U103 = 7;
                    }
                }
                else
                {
                    sub_1623();
                    l_U107 = 0;
                    l_U103 = 7;
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                sub_1623();
                SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
                l_U103 = 11;
            }
        }
        else
        {
            SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
            sub_1623();
            SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U116, 1 );
            l_U103 = 11;
        }
    }
    else
    {
        SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
        sub_1623();
        sub_1487();
        l_U103 = 11;
    }
    return;
}

void sub_11255(boolean bParam0)
{
    boolean bVar3;
    int I;

    l_U183 = l_U145;
    if (bParam0)
    {
        l_U183++;
    }
    else
    {
        l_U183--;
    }
    if (l_U183 >= (l_U177 - 1))
    {
        l_U183 = 0;
    }
    else if (l_U183 < 0)
    {
        l_U183 = (l_U177 - 1) - 1;
    }
    bVar3 = false;
    for ( I = 0; I < l_U177; I++ )
    {
        if (IS_SCORE_GREATER( sub_738(), ProtectedGet(l_U177[l_U183]) - 1 ))
        {
            bVar3 = true;
            l_U146 = l_U183;
            I = l_U177;
        }
        else if (bParam0)
        {
            l_U183++;
        }
        else
        {
            l_U183--;
        }
        if (l_U183 >= (l_U177 - 1))
        {
            l_U183 = 0;
        }
        else if (l_U183 < 0)
        {
            l_U183 = (l_U177 - 1) - 1;
        };;;
    }
    if (bVar3)
    {
        l_U145 = l_U146;
    }
    return;
}

int sub_11666()
{
    if ((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_11860()
{
    if ((g_U555 == 1) || (g_U8394 == 4))
    {
        if (g_U91._fU60 != -1)
        {
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U91._fU376 = 0;
        g_U91._fU100 = 1;
    }
    return;
}

void sub_12401(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int[26] iVar7;

    bVar4 = false;
    iVar5 = 0;
    iVar6 = 0;
    array(ref iVar7, 26);
    iVar7[0] = -1041692462;
    iVar7[1] = -682211828;
    iVar7[2] = 1063483177;
    iVar7[3] = 108773431;
    iVar7[4] = 723973206;
    iVar7[5] = -2119578145;
    iVar7[6] = -1097828879;
    iVar7[7] = 418536135;
    iVar7[8] = -2124201592;
    iVar7[9] = 1830407356;
    iVar7[10] = -227741703;
    iVar7[11] = -449022887;
    iVar7[12] = 1264386590;
    iVar7[13] = -1685021548;
    iVar7[14] = 1349725314;
    iVar7[15] = 1923400478;
    iVar7[16] = 1723137093;
    iVar7[17] = -295689028;
    iVar7[18] = 1821991593;
    iVar7[19] = -1896659641;
    iVar7[20] = 1534326199;
    iVar7[21] = -825837129;
    iVar7[22] = -1758379524;
    iVar7[23] = -583281407;
    iVar7[24] = -498054846;
    iVar7[25] = 2006667053;
    iVar6 = 26;
    GET_CAR_MODEL( uParam0, ref iVar3 );
    while (iVar5 < iVar6)
    {
        if (iVar3 == iVar7[iVar5])
        {
            bVar4 = true;
            iVar5 = iVar6;
        }
        iVar5++;
    }
    if (bVar4)
    {
        l_U148[0] = "f_handjob_intro_low";
        l_U152[0] = "f_handjob_loop_low";
        l_U156[0] = "f_handjob_outro_low";
        l_U160[0] = "m_handjob_intro_low";
        l_U164[0] = "m_handjob_loop_low";
        l_U168[0] = "m_handjob_outro_low";
        l_U148[1] = "f_blowjob_intro_low";
        l_U152[1] = "f_blowjob_loop_low";
        l_U156[1] = "f_blowjob_outro_low";
        l_U160[1] = "m_blowjob_intro_low";
        l_U164[1] = "m_blowjob_loop_low";
        l_U168[1] = "m_blowjob_outro_low";
        l_U148[2] = "f_sex_intro_low";
        l_U152[2] = "f_sex_loop_low";
        l_U156[2] = "f_sex_outro_low";
        l_U160[2] = "m_sex_intro_low";
        l_U164[2] = "m_sex_loop_low";
        l_U168[2] = "m_sex_outro_low";
        l_U223 = 0.80900000;
    }
    else
    {
        l_U148[0] = "f_handjob_intro";
        l_U152[0] = "f_handjob_loop";
        l_U156[0] = "f_handjob_outro";
        l_U160[0] = "m_handjob_intro";
        l_U164[0] = "m_handjob_loop";
        l_U168[0] = "m_handjob_outro";
        l_U148[1] = "f_blowjob_intro";
        l_U152[1] = "f_blowjob_loop";
        l_U156[1] = "f_blowjob_outro";
        l_U160[1] = "m_blowjob_intro";
        l_U164[1] = "m_blowjob_loop";
        l_U168[1] = "m_blowjob_outro";
        l_U148[2] = "f_sex_intro";
        l_U152[2] = "f_sex_loop";
        l_U156[2] = "f_sex_outro";
        l_U160[2] = "m_sex_intro";
        l_U164[2] = "m_sex_loop";
        l_U168[2] = "m_sex_outro";
        l_U223 = 0.91600000;
    }
    return;
}

void sub_14163()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    int iVar10;

    iVar2 = 15000;
    SET_SCRIPTED_ANIM_SEAT_OFFSET( l_U116, l_U223 );
    if ((IS_CHAR_SITTING_IN_ANY_CAR( l_U116 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_738(), 0 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U116, ref l_U120 );
        if (IS_VEH_DRIVEABLE( l_U120 ))
        {
            GET_CAR_SPEED( l_U120, ref fVar9 );
            if ((fVar9 <= 2.00000000) AND (IS_PLAYER_CONTROL_ON( sub_738() )))
            {
                sub_11860();
                GET_GAME_TIMER( ref l_U132 );
                if (NOT l_U174)
                {
                    GET_GAME_TIMER( ref l_U130 );
                }
                l_U133 = l_U132 - l_U130;
                if (l_U133 >= iVar2)
                {
                    if (NOT l_U173)
                    {
                        if (NOT (l_U145 == 3))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U116, l_U147, l_U156[l_U145] ))
                            {
                                if (HAS_CHAR_ANIM_FINISHED( l_U116, l_U147, l_U156[l_U145] ))
                                {
                                    if (HAVE_ANIMS_LOADED( l_U147 ))
                                    {
                                        TASK_PLAY_ANIM_WITH_FLAGS( l_U116, l_U156[l_U145], l_U147, 1000.00000000, -1, 8323 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( sub_1076(), l_U168[l_U145], l_U147, 1000.00000000, -1, 128 );
                                    }
                                    l_U173 = 1;
                                }
                            }
                            else if (HAVE_ANIMS_LOADED( l_U147 ))
                            {
                                TASK_PLAY_ANIM_WITH_FLAGS( l_U116, l_U156[l_U145], l_U147, 1000.00000000, -1, 8323 );
                                TASK_PLAY_ANIM_WITH_FLAGS( sub_1076(), l_U168[l_U145], l_U147, 1000.00000000, -1, 128 );
                            }
                            l_U173 = 1;;
                        }
                        else
                        {
                            l_U173 = 1;
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U116, 88, ref l_U142 );
                        if (l_U142 == 7)
                        {
                            l_U172 = 0;
                            sub_1487();
                            SAY_AMBIENT_SPEECH( sub_1076(), "AFTER_SEX", 1, 1, 0 );
                            SET_PLAYER_MOOD_NORMAL( sub_738() );
                            l_U103 = 11;
                        }
                    }
                }
                else if (IS_CHAR_SITTING_IN_CAR( sub_1076(), l_U120 ))
                {
                    GET_CHAR_COORDINATES( sub_1076(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                    uVar3._fU0 = uVar6._fU0 - 5.00000000;
                    uVar3._fU4 = uVar6._fU4 - 5.00000000;
                    uVar3._fU8 = uVar6._fU8 - 5.00000000;
                    uVar6._fU0 += 5.00000000;
                    uVar6._fU4 += 5.00000000;
                    uVar6._fU8 += 5.00000000;
                    if (NOT (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar3._fU0, uVar3._fU4, uVar3._fU8, uVar6._fU0, uVar6._fU4, uVar6._fU8 )))
                    {
                        l_U138 = l_U132 - l_U139;
                        if (l_U138 > 1000)
                        {
                            if (l_U174)
                            {
                                GET_CHAR_HEALTH( sub_1076(), ref l_U138 );
                                l_U138 += l_U209[l_U145];
                                if (l_U138 > 200)
                                {
                                    l_U138 = 200;
                                }
                                SET_CHAR_HEALTH( sub_1076(), l_U138 );
                                GET_GAME_TIMER( ref l_U139 );
                            }
                        }
                        iVar10 = iVar2 - l_U133;
                        if (iVar10 > 10000)
                        {
                            if (iVar10 < 13500)
                            {
                                l_U137 = l_U184[l_U145];
                            }
                        }
                        else if (iVar10 > 5000)
                        {
                            l_U137 = l_U189[l_U145];
                        }
                        else if (iVar10 > 1000)
                        {
                            l_U137 = l_U194[l_U145];
                        }
                        else
                        {
                            l_U137 = l_U199[l_U145];
                        };;;
                        GET_GAME_TIMER( ref l_U132 );
                        l_U133 = l_U132 - l_U136;
                        if (l_U133 >= l_U137)
                        {
                            if (NOT (l_U145 == 2))
                            {
                                if (l_U174)
                                {
                                    sub_15275( ref l_U120 );
                                    GET_GAME_TIMER( ref l_U136 );
                                }
                            }
                        }
                        if (l_U174)
                        {
                            if (l_U145 == 2)
                            {
                                GET_SCRIPT_TASK_STATUS( l_U116, 88, ref l_U142 );
                                if (l_U142 == 1)
                                {
                                    if (sub_15447())
                                    {
                                        GET_GAME_TIMER( ref l_U132 );
                                        l_U133 = l_U132 - l_U136;
                                        if (l_U133 >= 200)
                                        {
                                            sub_15275( ref l_U120 );
                                            GET_GAME_TIMER( ref l_U136 );
                                        }
                                    }
                                }
                            }
                        }
                        if (NOT l_U174)
                        {
                            if (NOT (l_U145 == 3))
                            {
                                if (HAVE_ANIMS_LOADED( l_U147 ))
                                {
                                    if ((IS_CHAR_PLAYING_ANIM( l_U116, l_U147, l_U148[l_U145] )) AND (IS_CHAR_PLAYING_ANIM( sub_1076(), l_U147, l_U160[l_U145] )))
                                    {
                                        if ((HAS_CHAR_ANIM_FINISHED( l_U116, l_U147, l_U148[l_U145] )) AND (HAS_CHAR_ANIM_FINISHED( sub_1076(), l_U147, l_U160[l_U145] )))
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( l_U116, l_U152[l_U145], l_U147, 1000.00000000, -1, 8339 );
                                            TASK_PLAY_ANIM_WITH_FLAGS( sub_1076(), l_U164[l_U145], l_U147, 1000.00000000, -1, 144 );
                                            l_U174 = 1;
                                        }
                                    }
                                    else
                                    {
                                        TASK_PLAY_ANIM_WITH_FLAGS( l_U116, l_U152[l_U145], l_U147, 1000.00000000, -1, 147 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( sub_1076(), l_U164[l_U145], l_U147, 1000.00000000, -1, 144 );
                                        l_U174 = 1;
                                        l_U174 = 1;
                                    }
                                }
                                else
                                {
                                    l_U174 = 1;
                                }
                            }
                            else
                            {
                                l_U174 = 1;
                            }
                            if (l_U174)
                            {
                                GET_GAME_TIMER( ref l_U130 );
                                GET_GAME_TIMER( ref l_U136 );
                                GET_GAME_TIMER( ref l_U139 );
                            }
                        }
                        else if (iVar10 > 1500)
                        {
                            if (l_U174)
                            {
                                GET_GAME_TIMER( ref l_U132 );
                                if ((l_U132 - l_U140) > 6000)
                                {
                                    if (NOT (l_U145 == 1))
                                    {
                                        SAY_AMBIENT_SPEECH( l_U116, "HOOKER_SEX", 1, 0, 0 );
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH( sub_1076(), "HOOKER_RELIEF", 1, 0, 0 );
                                    }
                                    GET_GAME_TIMER( ref l_U140 );
                                }
                            }
                        }
                    }
                }
                else
                {
                    SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                    sub_1487();
                    l_U103 = 11;
                }
            }
            else
            {
                l_U141++;
                if (l_U141 >= 4)
                {
                    SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
                    sub_1487();
                    l_U103 = 11;
                }
                else
                {
                    CLEAR_CHAR_TASKS( l_U116 );
                    CLEAR_CHAR_TASKS( sub_1076() );
                    TASK_STAND_STILL( l_U116, -2 );
                    l_U172 = 0;
                    l_U107 = 0;
                    l_U103 = 7;
                }
            }
        }
        else
        {
            SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
            sub_1487();
            l_U103 = 11;
        }
    }
    else
    {
        SAY_AMBIENT_SPEECH( l_U116, "SOLICIT_TURNED_DOWN", 1, 1, 0 );
        CLEAR_CHAR_TASKS( sub_1076() );
        CLEAR_CHAR_SECONDARY_TASK( sub_1076() );
        sub_1487();
        l_U103 = 11;
    }
    return;
}

void sub_15275(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;

    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        uVar3 = {0.00000000, 0.00000000, l_U204[l_U145]};
        vVar6 = {0.00000000, 0.00000000, 0.00000000};
        APPLY_FORCE_TO_CAR( (uParam0^), 1, uVar3, vVar6, 0, 1, 1, 1 );
        SHAKE_PAD( 0, 5, 64 );
    }
    return;
}

int sub_15447()
{
    float fVar2;

    if (IS_CHAR_PLAYING_ANIM( l_U116, l_U147, l_U152[l_U145] ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( l_U116, l_U147, l_U152[l_U145], ref fVar2 );
        if ((fVar2 > 0.03350000) AND (fVar2 < 0.04350000))
        {
            return 1;
        }
        if ((fVar2 > 0.05940000) AND (fVar2 < 0.06940000))
        {
            return 1;
        }
        if ((fVar2 > 0.08340000) AND (fVar2 < 0.09340000))
        {
            return 1;
        }
        if ((fVar2 > 0.10580000) AND (fVar2 < 0.11580000))
        {
            return 1;
        }
        if ((fVar2 > 0.12510000) AND (fVar2 < 0.13510000))
        {
            return 1;
        }
        if ((fVar2 > 0.14110000) AND (fVar2 < 0.15110000))
        {
            return 1;
        }
        if ((fVar2 > 0.16190000) AND (fVar2 < 0.17190000))
        {
            return 1;
        }
        if ((fVar2 > 0.18280000) AND (fVar2 < 0.19280000))
        {
            return 1;
        }
        if ((fVar2 > 0.20360000) AND (fVar2 < 0.21360000))
        {
            return 1;
        }
        if ((fVar2 > 0.22280000) AND (fVar2 < 0.23280000))
        {
            return 1;
        }
        if ((fVar2 > 0.24050000) AND (fVar2 < 0.25050000))
        {
            return 1;
        }
        if ((fVar2 > 0.25350000) AND (fVar2 < 0.26350000))
        {
            return 1;
        }
        if ((fVar2 > 0.26770000) AND (fVar2 < 0.27770000))
        {
            return 1;
        }
        if ((fVar2 > 0.27570000) AND (fVar2 < 0.28570000))
        {
            return 1;
        }
        if ((fVar2 > 0.28550000) AND (fVar2 < 0.29550000))
        {
            return 1;
        }
        if ((fVar2 > 0.29520000) AND (fVar2 < 0.30520000))
        {
            return 1;
        }
        if ((fVar2 > 0.30470000) AND (fVar2 < 0.31470000))
        {
            return 1;
        }
        if ((fVar2 > 0.31440000) AND (fVar2 < 0.32440000))
        {
            return 1;
        }
        if ((fVar2 > 0.32550000) AND (fVar2 < 0.33550000))
        {
            return 1;
        }
        if ((fVar2 > 0.33520000) AND (fVar2 < 0.34520000))
        {
            return 1;
        }
        if ((fVar2 > 0.34470000) AND (fVar2 < 0.35470000))
        {
            return 1;
        }
        if ((fVar2 > 0.35600000) AND (fVar2 < 0.36600000))
        {
            return 1;
        }
        if ((fVar2 > 0.36590000) AND (fVar2 < 0.37590000))
        {
            return 1;
        }
        if ((fVar2 > 0.37550000) AND (fVar2 < 0.38550000))
        {
            return 1;
        }
        if ((fVar2 > 0.38510000) AND (fVar2 < 0.39510000))
        {
            return 1;
        }
        if ((fVar2 > 0.39460000) AND (fVar2 < 0.40460000))
        {
            return 1;
        }
        if ((fVar2 > 0.40570000) AND (fVar2 < 0.41570000))
        {
            return 1;
        }
        if ((fVar2 > 0.41690000) AND (fVar2 < 0.42690000))
        {
            return 1;
        }
        if ((fVar2 > 0.42510000) AND (fVar2 < 0.43510000))
        {
            return 1;
        }
        if ((fVar2 > 0.43620000) AND (fVar2 < 0.44620000))
        {
            return 1;
        }
        if ((fVar2 > 0.45860000) AND (fVar2 < 0.46860000))
        {
            return 1;
        }
        if ((fVar2 > 0.47310000) AND (fVar2 < 0.48310000))
        {
            return 1;
        }
        if ((fVar2 > 0.48750000) AND (fVar2 < 0.49750000))
        {
            return 1;
        }
        if ((fVar2 > 0.50350000) AND (fVar2 < 0.51350000))
        {
            return 1;
        }
        if ((fVar2 > 0.51960000) AND (fVar2 < 0.52960000))
        {
            return 1;
        }
        if ((fVar2 > 0.53400000) AND (fVar2 < 0.54400000))
        {
            return 1;
        }
        if ((fVar2 > 0.54850000) AND (fVar2 < 0.55850000))
        {
            return 1;
        }
        if ((fVar2 > 0.56290000) AND (fVar2 < 0.57290000))
        {
            return 1;
        }
        if ((fVar2 > 0.57730000) AND (fVar2 < 0.58730000))
        {
            return 1;
        }
        if ((fVar2 > 0.59180000) AND (fVar2 < 0.60180000))
        {
            return 1;
        }
        if ((fVar2 > 0.60460000) AND (fVar2 < 0.61460000))
        {
            return 1;
        }
        if ((fVar2 > 0.61280000) AND (fVar2 < 0.62280000))
        {
            return 1;
        }
        if ((fVar2 > 0.62240000) AND (fVar2 < 0.63240000))
        {
            return 1;
        }
        if ((fVar2 > 0.63060000) AND (fVar2 < 0.64060000))
        {
            return 1;
        }
        if ((fVar2 > 0.64020000) AND (fVar2 < 0.65020000))
        {
            return 1;
        }
        if ((fVar2 > 0.64960000) AND (fVar2 < 0.65960000))
        {
            return 1;
        }
        if ((fVar2 > 0.65920000) AND (fVar2 < 0.66920000))
        {
            return 1;
        }
        if ((fVar2 > 0.66880000) AND (fVar2 < 0.67880000))
        {
            return 1;
        }
        if ((fVar2 > 0.67700000) AND (fVar2 < 0.68700000))
        {
            return 1;
        }
        if ((fVar2 > 0.68800000) AND (fVar2 < 0.69800000))
        {
            return 1;
        }
        if ((fVar2 > 0.69620000) AND (fVar2 < 0.70620000))
        {
            return 1;
        }
        if ((fVar2 > 0.70590000) AND (fVar2 < 0.71590000))
        {
            return 1;
        }
        if ((fVar2 > 0.71560000) AND (fVar2 < 0.72560000))
        {
            return 1;
        }
        if ((fVar2 > 0.72550000) AND (fVar2 < 0.73550000))
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}

void sub_18107()
{
    if (l_U103 > 0)
    {
        if (IS_VEH_DRIVEABLE( l_U119 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U117 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U117, l_U119 )))
                {
                    sub_18186();
                }
            }
        }
    }
    switch (l_U103)
    {
        case 0:
        if (NOT (l_U105 == 0))
        {
            l_U103 = 1;
        }
        else
        {
            sub_3164();
        }
        break;
        case 1:
        sub_18423();
        break;
        case 2:
        sub_18706();
        break;
        case 3:
        sub_19191();
        break;
        case 4:
        sub_19596();
        break;
        case 5:
        sub_20251();
        break;
        case 6:
        if (NOT (IS_CHAR_INJURED( l_U117 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U116, 29, ref l_U142 );
            if (l_U142 == 7)
            {
                GET_GAME_TIMER( ref l_U132 );
                l_U133 = l_U132 - l_U130;
                if ((l_U133 >= 10000) || (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, l_U117, 12.00000000, 12.00000000, 5.00000000, 0 ))))
                {
                    sub_18186();
                }
            }
        }
        else
        {
            sub_18186();
        }
        break;
        case 7:
        if (NOT (IS_CHAR_INJURED( l_U117 )))
        {
            GET_GAME_TIMER( ref l_U132 );
            l_U133 = l_U132 - l_U130;
            if (l_U133 >= 10000)
            {
                l_U103 = 11;
            }
        }
        else
        {
            l_U103 = 11;
        }
        break;
        case 10:
        l_U103 = 11;
        break;
        case 11:
        if (NOT (IS_CHAR_INJURED( l_U117 )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, l_U117, 12.00000000, 12.00000000, 5.00000000, 0 )))
            {
                l_U106 = 0;
            }
            else if (IS_VEH_DRIVEABLE( l_U119 ))
            {
                if (IS_CHAR_IN_CAR( l_U116, l_U119 ))
                {
                    l_U106 = 0;
                }
            }
        }
        else
        {
            l_U106 = 0;
        }
        break;
    }
    return;
}

void sub_18186()
{
    CLEAR_CHAR_TASKS( l_U116 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U117 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U118 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U119 );
    l_U117 = nil;
    l_U119 = nil;
    l_U118 = nil;
    if (l_U110)
    {
        g_U8671 = 0;
    }
    l_U103 = 0;
    l_U105 = 0;
    return;
}

void sub_18423()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( l_U117 )))
    {
        if (IS_VEH_DRIVEABLE( l_U119 ))
        {
            if (IS_CHAR_IN_CAR( l_U117, l_U119 ))
            {
                GET_CHAR_COORDINATES( l_U116, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if (GET_CLOSEST_CAR_NODE( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 ))
                {
                    GET_CAR_SPEED( l_U119, ref uVar5 );
                    OPEN_SEQUENCE_TASK( ref l_U121 );
                    TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( 0, l_U119, 0, 21, 5.00000000, 1, 3, 3 );
                    TASK_CAR_MISSION_NOT_AGAINST_TRAFFIC( 0, l_U119, 0, 5, 0.00000000, 1, 3, 3 );
                    CLOSE_SEQUENCE_TASK( l_U121 );
                    TASK_PERFORM_SEQUENCE( l_U117, l_U121 );
                    CLEAR_SEQUENCE_TASK( l_U121 );
                    l_U103 = 2;
                }
            }
            else
            {
                l_U103 = 11;
            }
        }
        else
        {
            l_U103 = 11;
        }
    }
    else
    {
        l_U103 = 11;
    }
    return;
}

void sub_18706()
{
    float fVar2;
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    if (NOT (IS_CHAR_INJURED( l_U117 )))
    {
        if (IS_VEH_DRIVEABLE( l_U119 ))
        {
            if (IS_CHAR_IN_CAR( l_U117, l_U119 ))
            {
                GET_CAR_SPEED( l_U119, ref fVar2 );
                GET_SCRIPT_TASK_STATUS( l_U117, 29, ref l_U142 );
                if ((l_U142 == 7) || (fVar2 <= 1.00000000))
                {
                    GET_CAR_MODEL( l_U119, ref l_U122 );
                    GET_MODEL_DIMENSIONS( l_U122, ref vVar6, ref vVar3 );
                    vVar9 = {vVar3 - vVar6};
                    vVar9 = {vVar9 / 2.00000000};
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U119, -vVar9.x + 0.20000000, 0.00000000, 0.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U119, vVar9.x + 0.20000000, 0.00000000, 0.00000000, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                    GET_CHAR_COORDINATES( l_U116, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
                    if ((VDIST( uVar18, uVar15 )) < (VDIST( uVar18, uVar12 )))
                    {
                        uVar12 = {uVar15};
                    }
                    OPEN_SEQUENCE_TASK( ref l_U121 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar12._fU0, uVar12._fU4, uVar12._fU8, 2, -1, 1.00000000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U117 );
                    TASK_STAND_STILL( 0, -2 );
                    CLOSE_SEQUENCE_TASK( l_U121 );
                    TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                    CLEAR_SEQUENCE_TASK( l_U121 );
                    l_U103 = 3;
                }
            }
            else
            {
                sub_18186();
            }
        }
        else
        {
            sub_18186();
        }
    }
    else
    {
        sub_18186();
    }
    return;
}

void sub_19191()
{
    float fVar2;

    if (NOT (IS_CHAR_INJURED( l_U117 )))
    {
        if (IS_VEH_DRIVEABLE( l_U119 ))
        {
            if (IS_CHAR_IN_CAR( l_U117, l_U119 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U116, 29, ref l_U142 );
                if (l_U142 == 1)
                {
                    GET_SEQUENCE_PROGRESS( l_U116, ref l_U143 );
                    if (l_U143 > 1)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, l_U117, 20.00000000, 20.00000000, 10.00000000, 0 ))
                        {
                            GET_CAR_SPEED( l_U119, ref fVar2 );
                            if (fVar2 <= 1.00000000)
                            {
                                OPEN_SEQUENCE_TASK( ref l_U121 );
                                if (HAVE_ANIMS_LOADED( l_U144 ))
                                {
                                    TASK_PLAY_ANIM( 0, "car_proposition", l_U144, 15.00000000, 0, 0, 0, 0, -1 );
                                }
                                CLOSE_SEQUENCE_TASK( l_U121 );
                                TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                                CLEAR_SEQUENCE_TASK( l_U121 );
                                GET_GAME_TIMER( ref l_U130 );
                                GENERATE_RANDOM_INT_IN_RANGE( 4000, 8000, ref l_U135 );
                                TASK_LOOK_AT_CHAR( l_U117, l_U116, 10000, 0 );
                                l_U103 = 4;
                            }
                        }
                        else
                        {
                            sub_18186();
                        }
                    }
                }
            }
            else
            {
                sub_18186();
            }
        }
        else
        {
            sub_18186();
        }
    }
    else
    {
        sub_18186();
    }
    return;
}

void sub_19596()
{
    float fVar2;

    if (NOT (IS_CHAR_INJURED( l_U117 )))
    {
        if (IS_VEH_DRIVEABLE( l_U119 ))
        {
            if (IS_CHAR_IN_CAR( l_U117, l_U119 ))
            {
                GET_CAR_SPEED( l_U119, ref fVar2 );
                if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U117, l_U116, 15.00000000, 15.00000000, 5.00000000, 0 )) AND (fVar2 <= 1.00000000))
                {
                    GET_GAME_TIMER( ref l_U132 );
                    l_U133 = l_U132 - l_U130;
                    if (l_U133 >= l_U135)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 10000, ref l_U135 );
                        if (l_U135 > 3000)
                        {
                            CLEAR_CHAR_TASKS( l_U116 );
                            OPEN_SEQUENCE_TASK( ref l_U121 );
                            SET_NEXT_DESIRED_MOVE_STATE( 2 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U119, -2, 0 );
                            TASK_STAND_STILL( 0, -2 );
                            CLOSE_SEQUENCE_TASK( l_U121 );
                            TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                            CLEAR_SEQUENCE_TASK( l_U121 );
                            l_U103 = 5;
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS( l_U116 );
                            OPEN_SEQUENCE_TASK( ref l_U121 );
                            if (HAVE_ANIMS_LOADED( l_U144 ))
                            {
                                TASK_PLAY_ANIM( 0, "rejection", l_U144, 16.00000000, 0, 1, 1, 0, -1 );
                            }
                            CLOSE_SEQUENCE_TASK( l_U121 );
                            TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                            CLEAR_SEQUENCE_TASK( l_U121 );
                            if (NOT (IS_CHAR_INJURED( l_U117 )))
                            {
                                if (IS_VEH_DRIVEABLE( l_U119 ))
                                {
                                    if (IS_CHAR_IN_CAR( l_U117, l_U119 ))
                                    {
                                        OPEN_SEQUENCE_TASK( ref l_U121 );
                                        TASK_CAR_DRIVE_WANDER( 0, l_U119, 10.00000000, 0 );
                                        CLOSE_SEQUENCE_TASK( l_U121 );
                                        TASK_PERFORM_SEQUENCE( l_U117, l_U121 );
                                        CLEAR_SEQUENCE_TASK( l_U121 );
                                        GET_GAME_TIMER( ref l_U130 );
                                    }
                                }
                            }
                            TASK_CLEAR_LOOK_AT( l_U117 );
                            l_U103 = 6;
                        }
                    }
                }
                else
                {
                    TASK_CLEAR_LOOK_AT( l_U117 );
                    sub_18186();
                }
            }
            else
            {
                TASK_CLEAR_LOOK_AT( l_U117 );
                sub_18186();
            }
        }
        else
        {
            sub_18186();
        }
    }
    else
    {
        sub_18186();
    }
    return;
}

void sub_20251()
{
    if (NOT (IS_CHAR_INJURED( l_U117 )))
    {
        if (IS_VEH_DRIVEABLE( l_U119 ))
        {
            if (IS_CHAR_IN_CAR( l_U117, l_U119 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U116, 29, ref l_U142 );
                if (l_U142 == 1)
                {
                    GET_SEQUENCE_PROGRESS( l_U116, ref l_U143 );
                    if (l_U143 > 0)
                    {
                        if (IS_CHAR_IN_CAR( l_U116, l_U119 ))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U121 );
                            TASK_CAR_DRIVE_WANDER( 0, l_U119, 10.00000000, 0 );
                            CLOSE_SEQUENCE_TASK( l_U121 );
                            TASK_PERFORM_SEQUENCE( l_U117, l_U121 );
                            CLEAR_SEQUENCE_TASK( l_U121 );
                            l_U103 = 7;
                            GET_GAME_TIMER( ref l_U130 );
                        }
                    }
                }
            }
            else
            {
                sub_18186();
            }
        }
        else
        {
            sub_18186();
        }
    }
    else
    {
        sub_18186();
    }
    return;
}

void sub_20904()
{
    if (IS_CHAR_INJURED( l_U118 ))
    {
        sub_18186();
    }
    else
    {
        switch (l_U103)
        {
            case 0:
            if (NOT (l_U105 == 0))
            {
                l_U103 = 1;
            }
            else
            {
                sub_3164();
            }
            break;
            case 1:
            switch (l_U104)
            {
                case 0:
                OPEN_SEQUENCE_TASK( ref l_U121 );
                TASK_GO_TO_CHAR( 0, l_U116, -1, 2.00000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U116 );
                CLOSE_SEQUENCE_TASK( l_U121 );
                TASK_PERFORM_SEQUENCE( l_U118, l_U121 );
                CLEAR_SEQUENCE_TASK( l_U121 );
                OPEN_SEQUENCE_TASK( ref l_U121 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U118 );
                TASK_STAND_STILL( 0, 999999 );
                CLOSE_SEQUENCE_TASK( l_U121 );
                TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                CLEAR_SEQUENCE_TASK( l_U121 );
                l_U104 = 1;
                break;
                case 1:
                GET_SCRIPT_TASK_STATUS( l_U118, 29, ref l_U142 );
                if (l_U142 == 7)
                {
                    OPEN_SEQUENCE_TASK( ref l_U121 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U116 );
                    CLOSE_SEQUENCE_TASK( l_U121 );
                    TASK_PERFORM_SEQUENCE( l_U118, l_U121 );
                    CLEAR_SEQUENCE_TASK( l_U121 );
                    OPEN_SEQUENCE_TASK( ref l_U121 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U118 );
                    CLOSE_SEQUENCE_TASK( l_U121 );
                    TASK_PERFORM_SEQUENCE( l_U116, l_U121 );
                    CLEAR_SEQUENCE_TASK( l_U121 );
                    l_U104 = 2;
                }
                else
                {
                    MODIFY_CHAR_MOVE_STATE( l_U118, 2 );
                }
                break;
                case 2:
                GET_SCRIPT_TASK_STATUS( l_U118, 29, ref l_U142 );
                if (l_U142 == 7)
                {
                    GET_SCRIPT_TASK_STATUS( l_U116, 29, ref l_U142 );
                    if (l_U142 == 7)
                    {
                        l_U111 = 1;
                        l_U104 = 3;
                    }
                }
                break;
                case 3:
                sub_18186();
                break;
            }
            break;
            case 10:
            if (NOT (IS_CHAR_INJURED( l_U118 )))
            {
                TASK_COMBAT( l_U118, sub_1076() );
                SET_CHAR_KEEP_TASK( l_U118, 1 );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U118 );
            l_U118 = nil;
            l_U103 = 11;
            break;
            case 11:
            if (NOT (IS_CHAR_INJURED( l_U117 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U116, l_U117, 12.00000000, 12.00000000, 5.00000000, 0 )))
                {
                    l_U106 = 0;
                }
            }
            break;
        }
    }
    return;
}

void sub_21700()
{
    return;
}
