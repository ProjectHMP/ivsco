void main()
{
    int iVar2;

    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U7 = {1.00000000, 1.00000000, 1.00000000};
    l_U16 = 1.00000000;
    l_U25 = 0;
    l_U26 = 0;
    l_U27 = 0;
    l_U28 = 0;
    l_U38 = 99;
    l_U39 = 0;
    l_U40 = 0;
    l_U52 = 0;
    l_U53 = 0;
    l_U54 = {0.00000000, 0.00000000, 0.00000000};
    l_U57 = {0.00000000, 0.00000000, 0.00000000};
    l_U60 = 0;
    l_U61 = 0;
    l_U68 = 0;
    l_U191 = 99;
    l_U193 = 99;
    l_U201 = 0;
    l_U208 = 0;
    l_U211 = 0;
    l_U212 = -1;
    l_U213 = {0.00000000, 0.00000000, 0.00000000};
    l_U216 = {0.00000000, 0.00000000, 0.00000000};
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    l_U223 = 1.00000000;
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 0;
    l_U229 = 0;
    l_U230 = 0;
    l_U231 = 0;
    l_U233 = 0;
    l_U234 = {1.00000000, 0.00000000, 1.00000000};
    l_U237 = {-1.00000000, 0.00000000, -1.50000000};
    l_U240 = 0.50000000;
    l_U241 = 0.50000000;
    l_U242 = 0.50000000;
    l_U247 = 0;
    l_U350 = 0.33000000;
    l_U546 = 0;
    l_U547 = 0;
    l_U548 = {722.57110000, 1383.07900000, 13.30010000};
    l_U937 = 0;
    l_U938 = 0;
    l_U939 = 0;
    l_U940 = 0;
    l_U941 = 1;
    l_U946 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    if (l_U546 > 29)
    {
        l_U937 = 1;
    }
    sub_504();
    sub_1901();
    sub_2197();
    sub_3799();
    sub_3928( 9 );
    while (true)
    {
        WAIT( 0 );
        switch (l_U937)
        {
            case 0:
            if (NOT g_U10978)
            {
                if (NOT g_U9339)
                {
                    CHANGE_GARAGE_TYPE( "BxGRG1", 3 );
                    if (IS_GARAGE_OPEN( "BxGRG1" ))
                    {
                        CLOSE_GARAGE( "BxGRG1" );
                    }
                    g_U9340 = l_U514[l_U546] + 1;
                    sub_6008( ref l_U712[g_U9340], 3 );
                    sub_6292( 80, 100, g_U9340, 16383, ref l_U712[g_U9340] );
                    sub_6427( ref l_U712[g_U9340], l_U680[g_U9340] );
                    sub_6468( ref l_U712[g_U9340], 0 );
                    sub_6506( ref l_U712[g_U9340], 0 );
                    sub_6543( ref l_U712[g_U9340] );
                    g_U9339 = 1;
                }
                else
                {
                    l_U937 = 7;
                }
            }
            break;
            case 7:
            if (IS_THIS_PRINT_BEING_DISPLAYED( "CT-HELP1", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
            {
                CLEAR_PRINTS();
            }
            if (NOT g_U9344)
            {
                if (NOT (IS_CHAR_DEAD( sub_5492() )))
                {
                    if ((sub_7804( ref l_U712[g_U9340] )) == 3)
                    {
                        CREATE_CAR_GENERATOR( l_U551[g_U9340]._fU0, l_U551[g_U9340]._fU4, l_U551[g_U9340]._fU8, l_U450[g_U9340], l_U482[g_U9340], 4.00000000, l_U647[g_U9340], l_U352[g_U9340], l_U384[g_U9340], l_U416[g_U9340], 0, 1, 0, 0, ref l_U646 );
                        SWITCH_CAR_GENERATOR( l_U646, 1000 );
                        g_U9344 = 1;
                    }
                }
            }
            if (NOT g_U10978)
            {
                if (TIMERA() >= 60000)
                {
                    if (g_U9344 == 1)
                    {
                        SWITCH_CAR_GENERATOR( l_U646, 1000 );
                        SETTIMERA( 0 );
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_5492() )))
            {
                if ((IS_CHAR_IN_ANY_CAR( sub_5492() )) AND (NOT g_U10978))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5492(), ref l_U645 );
                    GET_CAR_MODEL( l_U645, ref l_U679 );
                    if (((NOT (IS_THIS_MODEL_A_BOAT( l_U679 ))) AND (NOT (IS_THIS_MODEL_A_HELI( l_U679 )))) AND (IS_VEH_DRIVEABLE( l_U645 )))
                    {
                        if ((sub_8269( l_U645 )) AND (sub_8374( l_U645 )))
                        {
                            sub_8430( 9, 1 );
                            l_U547 = 1;
                            SET_CAN_RESPRAY_CAR( l_U645, 0 );
                            if (NOT l_U946)
                            {
                                PRINT_NOW( "CT-FOUND", 7500, 1 );
                                l_U946 = 1;
                            }
                            l_U937 = 1;
                        }
                    }
                }
            }
            break;
            case 1:
            if (((NOT (IS_CHAR_INJURED( sub_5492() ))) AND (LOCATE_CHAR_IN_CAR_3D( sub_5492(), l_U548._fU0, l_U548._fU4, l_U548._fU8, 50.00000000, 50.00000000, 15.00000000, 0 ))) AND (IS_GARAGE_CLOSED( "BxGRG1" )))
            {
                OPEN_GARAGE( "BxGRG1" );
            }
            if ((NOT (IS_CHAR_INJURED( sub_5492() ))) AND (NOT g_U10978))
            {
                if (NOT (l_U546 >= 30))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_5492() )))
                    {
                        sub_8430( 9, 0 );
                        l_U937 = 7;
                    }
                    else if (NOT (IS_VEH_DRIVEABLE( l_U645 )))
                    {
                        PRINT_NOW( "CT-COND-3", 7500, 0 );
                        sub_8430( 9, 0 );
                        l_U946 = 0;
                        l_U937 = 7;
                    }
                }
                if (l_U937 == 1)
                {
                    if ((((LOCATE_CHAR_IN_CAR_3D( sub_5492(), l_U548._fU0, l_U548._fU4, l_U548._fU8, 20.00000000, 20.00000000, 15.00000000, 0 )) AND (IS_GARAGE_OPEN( "BxGRG1" ))) AND (NOT sub_8849())) AND (NOT sub_8901()))
                    {
                        if (NOT (l_U546 >= 30))
                        {
                            if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "CT-HELP1", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                            {
                                PRINT( "CT-HELP1", 7500, 1 );
                            }
                        }
                    }
                    if ((((LOCATE_CHAR_IN_CAR_3D( sub_5492(), l_U548._fU0, l_U548._fU4 - 2.00000000, l_U548._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )) AND (IS_GARAGE_OPEN( "BxGRG1" ))) AND (NOT sub_9079())) AND (NOT g_U9893._fU12))
                    {
                        if (l_U546 >= 30)
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_5492(), ref l_U645 );
                            GET_CAR_MODEL( l_U645, ref l_U679 );
                            if (sub_9173())
                            {
                                SET_PLAYER_CONTROL( sub_9466(), 0 );
                                while ((NOT (IS_CHAR_INJURED( sub_5492() ))) AND (NOT (sub_9523( sub_5492() ))))
                                {
                                    WAIT( 0 );
                                }
                                l_U937 = 3;
                            }
                            else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CT-MISSION" )))
                            {
                                PRINT_HELP( "CT-MISSION" );
                            }
                        }
                        else if (IS_VEH_DRIVEABLE( l_U645 ))
                        {
                            if ((sub_8269( l_U645 )) AND (sub_8374( l_U645 )))
                            {
                                SET_PLAYER_CONTROL( sub_9466(), 0 );
                                while ((NOT (IS_CHAR_INJURED( sub_5492() ))) AND (NOT (sub_9523( sub_5492() ))))
                                {
                                    WAIT( 0 );
                                }
                                l_U946 = 0;
                                l_U937 = 2;
                            }
                            else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                PRINT_NOW( "CT-MODEL", 7500, 1 );
                            }
                        }
                    }
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( sub_5492() )))
            {
                if (IS_VEH_DRIVEABLE( l_U645 ))
                {
                    GET_CAR_MODEL_VALUE( l_U647[g_U9340], ref l_U346 );
                    GET_CAR_HEALTH( l_U645, ref l_U347 );
                    sub_9890();
                    sub_10186();
                    l_U348 = ROUND( l_U346 * l_U350 );
                    l_U349 = (TO_FLOAT( l_U347 )) / 1000;
                    l_U351 = ROUND( l_U349 * l_U348 );
                    if (l_U347 > 0)
                    {
                        TASK_LEAVE_CAR( sub_5492(), l_U645 );
                        DO_SCREEN_FADE_OUT( 150 );
                        while (((NOT (IS_CHAR_INJURED( sub_5492() ))) AND (IS_CHAR_IN_ANY_CAR( sub_5492() ))) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_5492() )))
                        {
                            WAIT( 0 );
                        }
                        CLEAR_PRINTS();
                        l_U937 = 4;
                    }
                }
                else
                {
                    PRINT_NOW( "CT-COND-3", 7500, 0 );
                    SET_PLAYER_CONTROL( sub_9466(), 1 );
                    l_U937 = 8;
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( sub_5492() )))
            {
                if (IS_VEH_DRIVEABLE( l_U645 ))
                {
                    GET_CAR_MODEL_VALUE( l_U679, ref l_U346 );
                    GET_CAR_HEALTH( l_U645, ref l_U347 );
                    sub_9890();
                    sub_10186();
                    l_U348 = ROUND( l_U346 * l_U350 );
                    l_U349 = (TO_FLOAT( l_U347 )) / 1000;
                    l_U351 = ROUND( l_U349 * l_U348 );
                    if (l_U347 > 0)
                    {
                        TASK_LEAVE_CAR( sub_5492(), l_U645 );
                        DO_SCREEN_FADE_OUT( 150 );
                        while (((NOT (IS_CHAR_INJURED( sub_5492() ))) AND (IS_CHAR_IN_ANY_CAR( sub_5492() ))) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_5492() )))
                        {
                            WAIT( 0 );
                        }
                        CLEAR_PRINTS();
                        l_U937 = 4;
                    }
                }
                else
                {
                    PRINT_NOW( "CT-COND-3", 7500, 0 );
                    SET_PLAYER_CONTROL( sub_9466(), 1 );
                    l_U937 = 8;
                }
            }
            break;
            case 4:
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (IS_VEH_DRIVEABLE( l_U645 ))
            {
                LOCK_CAR_DOORS( l_U645, 2 );
            }
            INCREMENT_INT_STAT( 285, 1 );
            sub_11009( 285 );
            if (l_U546 >= 30)
            {
                if (NOT (IS_CHAR_INJURED( sub_5492() )))
                {
                    SET_CHAR_COORDINATES( sub_5492(), 734.62320000, 1378.38800000, 13.24810000 );
                    SET_CHAR_HEADING( sub_5492(), 230.79790000 );
                    SET_GAME_CAM_HEADING( 180.00000000 );
                    CLEAR_AREA_OF_CARS( 730.59340000, 1383.17900000, 13.27770000, 10.00000000 );
                    CLEAR_AREA_OF_CHARS( 730.59340000, 1383.17900000, 13.27770000, 10.00000000 );
                    CLEAR_AREA( 730.59340000, 1383.17900000, 13.27770000, 10.00000000, 1 );
                    l_U937 = 5;
                }
            }
            else if (NOT (IS_CHAR_INJURED( sub_5492() )))
            {
                SET_CHAR_COORDINATES( sub_5492(), 734.62320000, 1378.38800000, 13.24810000 );
                SET_CHAR_HEADING( sub_5492(), 230.79790000 );
                SET_GAME_CAM_HEADING( 180.00000000 );
                CLEAR_AREA_OF_CARS( 730.59340000, 1383.17900000, 13.27770000, 10.00000000 );
                CLEAR_AREA_OF_CHARS( 730.59340000, 1383.17900000, 13.27770000, 10.00000000 );
                CLEAR_AREA( 730.59340000, 1383.17900000, 13.27770000, 10.00000000, 1 );
                sub_11399( ref l_U712[g_U9340], 1 );
                l_U937 = 5;
            }
            break;
            case 5:
            if (NOT (IS_CHAR_INJURED( sub_5492() )))
            {
                SET_PLAYER_CONTROL( sub_9466(), 0 );
                if (NOT l_U940)
                {
                    DO_SCREEN_FADE_IN( 150 );
                    l_U940 = 1;
                }
                SET_CAM_IN_FRONT_OF_PED( sub_5492() );
                if (IS_GARAGE_OPEN( "BxGRG1" ))
                {
                    CLOSE_GARAGE( "BxGRG1" );
                }
                else if (IS_GARAGE_CLOSED( "BxGRG1" ))
                {
                    if (l_U347 < 1000)
                    {
                        PRINT_WITH_NUMBER( "CT-COND-2", l_U351, 7500, 0 );
                    }
                    else if ((l_U938 == 0) AND (l_U939 == 0))
                    {
                        PRINT_WITH_NUMBER( "CT-COND-1", l_U351, 7500, 0 );
                    }
                    else if (l_U939 > 0)
                    {
                        if (l_U938 > 0)
                        {
                            l_U351 -= (l_U938 * 100) + (l_U939 * 500);
                            if (l_U351 < 0)
                            {
                                l_U351 = sub_11815( 0, 100 );
                            }
                            PRINT_WITH_NUMBER( "CT-COND-2", l_U351, 7500, 0 );
                        }
                        else
                        {
                            l_U351 -= l_U939 * 500;
                            if (l_U351 < 0)
                            {
                                l_U351 = sub_11815( 0, 100 );
                            }
                            PRINT_WITH_NUMBER( "CT-COND-2", l_U351, 7500, 0 );
                        }
                    }
                    else
                    {
                        l_U351 -= l_U938 * 100;
                        if (l_U351 < 0)
                        {
                            l_U351 = sub_11815( 0, 100 );
                        }
                        PRINT_WITH_NUMBER( "CT-COND-2", l_U351, 7500, 0 );
                    };;;
                    if (DOES_VEHICLE_EXIST( l_U645 ))
                    {
                        DELETE_CAR( ref l_U645 );
                    }
                    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
                    sub_12080( l_U351 );
                    l_U940 = 0;
                    SET_PLAYER_CONTROL( sub_9466(), 1 );
                    if (NOT g_U10978)
                    {
                        if (l_U546 < 30)
                        {
                            sub_12312();
                        }
                    }
                    l_U937 = 6;
                }
            }
            break;
            case 6:
            l_U938 = 0;
            if (NOT (l_U546 >= 29))
            {
                sub_8430( 9, 0 );
                l_U547 = 0;
                iVar2 = g_U9340;
                l_U546++;
                g_U9340 = l_U514[l_U546] + 1;
                if (g_U9344)
                {
                    DELETE_CAR_GENERATOR( l_U646 );
                    g_U9344 = 0;
                }
                sub_12505( ref l_U942, 6, 1, l_U941 );
                while (NOT (sub_13112( l_U942 )))
                {
                    WAIT( 0 );
                }
                while (NOT (sub_13377( 0 )))
                {
                    WAIT( 0 );
                }
                sub_6008( ref l_U712[g_U9340], 3 );
                sub_6292( 80, iVar2 + 30, g_U9340, 16383, ref l_U712[g_U9340] );
                sub_6427( ref l_U712[g_U9340], l_U680[g_U9340] );
                sub_6468( ref l_U712[g_U9340], 0 );
                sub_6506( ref l_U712[g_U9340], 0 );
                sub_6543( ref l_U712[g_U9340] );
                sub_14277();
                l_U937 = 7;
            }
            else if (l_U546 == 29)
            {
                AWARD_ACHIEVEMENT( 28 );
                sub_12505( ref l_U942, 6, 1, l_U941 );
                while (NOT (sub_13112( l_U942 )))
                {
                    WAIT( 0 );
                }
            }
            l_U546 = 30;
            if (NOT g_U9343)
            {
                sub_14450( -1 );
                sub_6292( 80, 101, 16383, 16383, ref l_U930 );
                sub_6543( ref l_U930 );
                l_U350 = 0.10000000;
                sub_8430( 9, 0 );
                g_U9343 = 1;
            }
            l_U937 = 1;;
            break;
            case 8:
            if ((NOT (IS_CHAR_INJURED( sub_5492() ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5492(), 722.57200000, 1381.49300000, 15.73600000, 10.00000000, 10.00000000, 10.00000000, 0 ))))
            {
                l_U938 = 0;
                if (IS_GARAGE_OPEN( "BxGRG1" ))
                {
                    CLOSE_GARAGE( "BxGRG1" );
                }
                else if (((DOES_VEHICLE_EXIST( l_U645 )) AND (NOT (IS_CHAR_INJURED( sub_5492() )))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_5492() ))))
                {
                    DELETE_CAR( ref l_U645 );
                }
                if (NOT (l_U546 >= 30))
                {
                    l_U937 = 7;
                }
                else
                {
                    l_U937 = 1;
                }
            }
            break;
        }
    }
    return;
}

void sub_504()
{
    l_U647[0] = -1041692462;
    l_U647[1] = -1041692462;
    l_U647[2] = -1830458836;
    l_U647[3] = 1075851868;
    l_U647[4] = -682211828;
    l_U647[5] = 1063483177;
    l_U647[6] = 2006918058;
    l_U647[7] = -2030171296;
    l_U647[8] = 108773431;
    l_U647[9] = 162883121;
    l_U647[10] = -1130810103;
    l_U647[11] = 723973206;
    l_U647[12] = -1971955454;
    l_U647[13] = -1842748181;
    l_U647[14] = 418536135;
    l_U647[15] = 886934177;
    l_U647[16] = -2124201592;
    l_U647[17] = 486987393;
    l_U647[18] = 525509695;
    l_U647[19] = 1203311498;
    l_U647[20] = -808457413;
    l_U647[21] = 1376298265;
    l_U647[22] = 1390084576;
    l_U647[23] = 83136452;
    l_U647[24] = -1685021548;
    l_U647[25] = 1349725314;
    l_U647[26] = 970598228;
    l_U647[27] = 1821991593;
    l_U647[28] = -1896659641;
    l_U647[29] = 2006667053;
    l_U647[30] = 1777363799;
    l_U352[0] = 131;
    l_U352[1] = 131;
    l_U352[2] = 106;
    l_U352[3] = 104;
    l_U352[4] = 0;
    l_U352[5] = 39;
    l_U352[6] = 52;
    l_U352[7] = 77;
    l_U352[8] = 23;
    l_U352[9] = 76;
    l_U352[10] = 106;
    l_U352[11] = 47;
    l_U352[12] = 1;
    l_U352[13] = 58;
    l_U352[14] = 90;
    l_U352[15] = 69;
    l_U352[16] = 1;
    l_U352[17] = 78;
    l_U352[18] = 0;
    l_U352[19] = 1;
    l_U352[20] = 89;
    l_U352[21] = 55;
    l_U352[22] = 34;
    l_U352[23] = 102;
    l_U352[24] = 59;
    l_U352[25] = 49;
    l_U352[26] = 69;
    l_U352[27] = 1;
    l_U352[28] = 106;
    l_U352[29] = 53;
    l_U352[30] = 0;
    l_U384[0] = 132;
    l_U384[1] = 132;
    l_U384[2] = 106;
    l_U384[3] = 104;
    l_U384[4] = 0;
    l_U384[5] = 39;
    l_U384[6] = 52;
    l_U384[7] = 72;
    l_U384[8] = 23;
    l_U384[9] = 76;
    l_U384[10] = 106;
    l_U384[11] = 47;
    l_U384[12] = 1;
    l_U384[13] = 0;
    l_U384[14] = 90;
    l_U384[15] = 69;
    l_U384[16] = 9;
    l_U384[17] = 0;
    l_U384[18] = 34;
    l_U384[19] = 1;
    l_U384[20] = 89;
    l_U384[21] = 55;
    l_U384[22] = 10;
    l_U384[23] = 102;
    l_U384[24] = 52;
    l_U384[25] = 49;
    l_U384[26] = 69;
    l_U384[27] = 1;
    l_U384[28] = 106;
    l_U384[29] = 53;
    l_U384[30] = 0;
    l_U416[0] = 127;
    l_U416[1] = 127;
    l_U416[2] = 104;
    l_U416[3] = 106;
    l_U416[4] = 99;
    l_U416[5] = 89;
    l_U416[6] = 50;
    l_U416[7] = 77;
    l_U416[8] = 93;
    l_U416[9] = 50;
    l_U416[10] = 108;
    l_U416[11] = 127;
    l_U416[12] = 5;
    l_U416[13] = 55;
    l_U416[14] = 89;
    l_U416[15] = 71;
    l_U416[16] = 8;
    l_U416[17] = 79;
    l_U416[18] = 101;
    l_U416[19] = 9;
    l_U416[20] = 89;
    l_U416[21] = 60;
    l_U416[22] = 8;
    l_U416[23] = 106;
    l_U416[24] = 132;
    l_U416[25] = 56;
    l_U416[26] = 83;
    l_U416[27] = 79;
    l_U416[28] = 107;
    l_U416[29] = 53;
    l_U416[30] = 8;
    return;
}

void sub_1901()
{
    l_U680[0] = 1;
    l_U680[1] = 1;
    l_U680[2] = 2;
    l_U680[3] = 3;
    l_U680[4] = 4;
    l_U680[5] = 5;
    l_U680[6] = 6;
    l_U680[7] = 7;
    l_U680[8] = 8;
    l_U680[9] = 9;
    l_U680[10] = 10;
    l_U680[11] = 11;
    l_U680[12] = 12;
    l_U680[13] = 13;
    l_U680[14] = 14;
    l_U680[15] = 15;
    l_U680[16] = 16;
    l_U680[17] = 17;
    l_U680[18] = 18;
    l_U680[19] = 19;
    l_U680[20] = 20;
    l_U680[21] = 21;
    l_U680[22] = 22;
    l_U680[23] = 23;
    l_U680[24] = 24;
    l_U680[25] = 25;
    l_U680[26] = 26;
    l_U680[27] = 27;
    l_U680[28] = 28;
    l_U680[29] = 29;
    l_U680[30] = 30;
    return;
}

void sub_2197()
{
    l_U551[0] = {0.00000000, 0.00000000, 0.00000000};
    l_U551[1] = {-448.77850000, 668.76180000, 9.43080000};
    l_U551[2] = {1815.26400000, 339.35240000, 21.30980000};
    l_U551[3] = {2242.08800000, 353.25870000, 17.21640000};
    l_U551[4] = {1176.42400000, 1477.33000000, 15.72800000};
    l_U551[5] = {-624.06830000, 177.73450000, 3.66200000};
    l_U551[6] = {-1335.64000000, 1342.21700000, 20.70790000};
    l_U551[7] = {-1211.58700000, 1035.07500000, 18.57320000};
    l_U551[8] = {-268.18350000, -273.87080000, 13.87090000};
    l_U551[9] = {1074.79100000, -554.05240000, 12.61790000};
    l_U551[10] = {1787.49200000, 623.36100000, 27.94750000};
    l_U551[11] = {-234.86940000, 1336.45000000, 23.46570000};
    l_U551[12] = {790.64390000, 430.63540000, 10.55790000};
    l_U551[13] = {81.21490000, -403.32680000, 13.64930000};
    l_U551[14] = {1108.56000000, 33.64630000, 32.91590000};
    l_U551[15] = {851.72390000, 36.30190000, 24.95980000};
    l_U551[16] = {1313.96000000, 345.47530000, 20.87700000};
    l_U551[17] = {986.77180000, 1877.89700000, 22.89210000};
    l_U551[18] = {647.25790000, 989.25840000, 1.92630000};
    l_U551[19] = {44.60630000, 1138.89200000, 13.53810000};
    l_U551[20] = {-104.45920000, -774.28230000, 4.08820000};
    l_U551[21] = {23.48440000, -601.23210000, 13.69340000};
    l_U551[22] = {-1145.14300000, 349.03680000, 3.50090000};
    l_U551[23] = {-38.42380000, -76.23130000, 13.64950000};
    l_U551[24] = {1589.18300000, 768.14870000, 28.11740000};
    l_U551[25] = {-1187.96900000, 594.71340000, 3.37270000};
    l_U551[26] = {-1713.16700000, 518.64220000, 24.44380000};
    l_U551[27] = {-6.93460000, -488.41550000, 13.58390000};
    l_U551[28] = {-1267.81800000, 1643.98400000, 29.76840000};
    l_U551[29] = {1268.19300000, 594.99580000, 37.40210000};
    l_U551[30] = {836.99680000, 750.90610000, 6.78210000};
    l_U450[0] = 0.00000000;
    l_U450[1] = 0.00000000;
    l_U450[2] = 0.00000000;
    l_U450[3] = 8.00000000;
    l_U450[4] = 0.00000000;
    l_U450[5] = -8.00000000;
    l_U450[6] = -8.00000000;
    l_U450[7] = -8.00000000;
    l_U450[8] = 0.00000000;
    l_U450[9] = 8.00000000;
    l_U450[10] = -8.00000000;
    l_U450[11] = 8.00000000;
    l_U450[12] = 8.00000000;
    l_U450[13] = -8.00000000;
    l_U450[14] = 0.00000000;
    l_U450[15] = -8.00000000;
    l_U450[16] = -8.00000000;
    l_U450[17] = -8.00000000;
    l_U450[18] = 0.00000000;
    l_U450[19] = 0.00000000;
    l_U450[20] = -8.00000000;
    l_U450[21] = -8.00000000;
    l_U450[22] = -8.00000000;
    l_U450[23] = 0.00000000;
    l_U450[24] = 0.00000000;
    l_U450[25] = 0.00000000;
    l_U450[26] = 8.00000000;
    l_U450[27] = -8.00000000;
    l_U450[28] = -8.00000000;
    l_U450[29] = 0.00000000;
    l_U450[30] = 0.00000000;
    l_U482[0] = 0.00000000;
    l_U482[1] = 8.00000000;
    l_U482[2] = 8.00000000;
    l_U482[3] = 0.00000000;
    l_U482[4] = 8.00000000;
    l_U482[5] = 0.00000000;
    l_U482[6] = 0.00000000;
    l_U482[7] = 0.00000000;
    l_U482[8] = -8.00000000;
    l_U482[9] = 0.00000000;
    l_U482[10] = 0.00000000;
    l_U482[11] = 0.00000000;
    l_U482[12] = 0.00000000;
    l_U482[13] = 0.00000000;
    l_U482[14] = 8.00000000;
    l_U482[15] = 0.00000000;
    l_U482[16] = 0.00000000;
    l_U482[17] = 0.00000000;
    l_U482[18] = 8.00000000;
    l_U482[19] = 8.00000000;
    l_U482[20] = 0.00000000;
    l_U482[21] = 0.00000000;
    l_U482[22] = 0.00000000;
    l_U482[23] = 8.00000000;
    l_U482[24] = 8.00000000;
    l_U482[25] = 8.00000000;
    l_U482[26] = 0.00000000;
    l_U482[27] = 0.00000000;
    l_U482[28] = 0.00000000;
    l_U482[29] = 8.00000000;
    l_U482[30] = -8.00000000;
    return;
}

void sub_3799()
{
    int iVar2;
    unknown uVar3;
    int[0] iVar4;
    int I;

    array(ref iVar4, 30);
    for ( I = 0; I < iVar4; I++ )
    {
        iVar4[I] = 0;
    }
    while (NOT (iVar2 == 30))
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 30, ref uVar3 );
        if (NOT iVar4[uVar3])
        {
            iVar4[uVar3] = 1;
            l_U514[iVar2] = uVar3;
            iVar2++;
        }
    }
    return;
}

void sub_3928(unknown uParam0)
{
    g_U10133._fU0[uParam0] = 1;
    sub_3949();
    return;
}

void sub_3949()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_3977( 13 );
        if ((sub_4022( 13, iVar3 )) AND (g_U9932[g_U9999[I]._fU0]._fU0))
        {
            sub_4123( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_4307( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_3977( 11 );
        if ((sub_4022( 11, iVar3 )) AND (g_U9932[g_U10090[I]._fU0]._fU0))
        {
            sub_4123( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_4307( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_4501( I );
        if ((sub_4022( g_U10324[I]._fU12, iVar3 )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            sub_4123( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_4809( I );
        }
        else
        {
            sub_4307( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_5038();
    return;
}

int sub_3977(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_4022(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U10133._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_4123(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        if ((((iParam4 == 2) || (iParam4 == 3)) || (iParam4 == 4)) || (iParam4 == 1))
        {
            ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        else
        {
            ADD_BLIP_FOR_CONTACT( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U0 );
        if (iParam4 == 3)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 3 );
        }
        if (iParam4 == 4)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 5 );
        }
    }
    return;
}

void sub_4307(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_4501(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_4543( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_3977( g_U10324[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U10978)
    {
        uVar3 = g_U10324[uParam0]._fU12;
        if (g_U10133._fU0[uVar3])
        {
            if (g_U10324[uParam0]._fU24 == 1)
            {
                if (g_U9937 == g_U10324[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_4543(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_4809(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_5038()
{
    int I;
    boolean bVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int iVar12;

    I = 0;
    bVar3 = sub_3977( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_5083( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_3977( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_5083( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((sub_4501( I )) AND (g_U9932[g_U10324[I]._fU28]._fU0))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 59; I++ )
    {
        bVar3 = sub_4501( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U9937 == g_U10324[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_5083( g_U10324[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar3 = false;
        if (g_U9943[I]._fU0)
        {
            if (g_U9937 == g_U9943[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_5083( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_5492() )))
        {
            GET_CHAR_COORDINATES( sub_5492(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_5610( uVar7, g_U9943[I]._fU8 );
                    if (fVar11 < fVar10)
                    {
                        fVar10 = fVar11;
                        iVar12 = I;
                    }
                }
            }
        }
        if (NOT (iVar12 == -1))
        {
            for ( I = 0; I < 5; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_5083( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_5083(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 0 );
    }
    else
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 1 );
    }
    return;
}

void sub_5492()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5610(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_6008(int iParam0, unknown uParam1)
{
    sub_6024( uParam1, 5, iParam0 + 0 );
    return;
}

void sub_6024(unknown uParam0, unknown uParam1, int iParam2)
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
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_6292(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_6024( uParam0, 0, iParam4 + 0 );
    sub_6024( uParam1, 1, iParam4 + 0 );
    sub_6024( uParam2, 2, iParam4 + 0 );
    sub_6024( uParam3, 3, iParam4 + 0 );
    sub_6024( 0, 4, iParam4 + 0 );
    sub_6024( 1, 5, iParam4 + 0 );
    sub_6024( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_6427(int iParam0, unknown uParam1)
{
    sub_6024( uParam1, 6, iParam0 + 0 );
    return;
}

void sub_6468(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_6506(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_6543(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_6613())
        {
            sub_6914( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_7127( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_6914( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_6651( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_6651( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_6613()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_6651( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_6914( I );
            return 1;
        }
    }
    return 0;
}

int sub_6651(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_6914(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_6999( g_U569 - 1 );
    return;
}

void sub_6999(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_7127(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_7192( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_7192(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_6651( 0, uParam0 );
        if (iVar14 == (sub_6651( 0, uParam6 )))
        {
            iVar15 = sub_6651( 3, uParam0 );
            if (iVar15 == (sub_6651( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_7804(int iParam0)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_7192( iParam0->_fU0, g_U569[I] ))
            {
                iParam0->_fU24 = I;
                return sub_6651( 4, g_U569[I] );
            }
        }
        iParam0->_fU24 = -2;
    }
    return 6;
}

int sub_8269(unknown uParam0)
{
    if (IS_CHAR_IN_CAR( sub_5492(), uParam0 ))
    {
        GET_CAR_COLOURS( uParam0, ref l_U448, ref l_U449 );
        if ((l_U448 == l_U352[g_U9340]) AND (l_U449 == l_U384[g_U9340]))
        {
            return 1;
        }
    }
    return 0;
}

int sub_8374(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, l_U647[g_U9340] ))
    {
        return 1;
    }
    return 0;
}

void sub_8430(unknown uParam0, unknown uParam1)
{
    g_U10133._fU84[uParam0] = uParam1;
    sub_3949();
    return;
}

int sub_8849()
{
    if ((g_U91._fU0 == 1007) || (g_U91._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

void sub_8901()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_9079()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_9173()
{
    if (((((IS_THIS_MODEL_A_BOAT( l_U679 )) || (IS_THIS_MODEL_A_HELI( l_U679 ))) || (IS_CAR_A_MISSION_CAR( l_U645 ))) || (sub_9225( l_U645 ))) || (sub_9311( l_U645 )))
    {
        return 0;
    }
    return 1;
}

int sub_9225(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

int sub_9311(unknown uParam0)
{
    if (((((((IS_CAR_MODEL( uParam0, -350085182 )) || (IS_CAR_MODEL( uParam0, 148777611 ))) || (IS_CAR_MODEL( uParam0, 2046537925 ))) || (IS_CAR_MODEL( uParam0, -1627000575 ))) || (IS_CAR_MODEL( uParam0, 1127131465 ))) || (IS_CAR_MODEL( uParam0, 1171614426 ))) || (IS_CAR_MODEL( uParam0, 1938952078 )))
    {
        return 1;
    }
    return 0;
}

void sub_9466()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_9523(unknown uParam0)
{
    float fVar3;

    GET_CHAR_SPEED( uParam0, ref fVar3 );
    if ((fVar3 < 0.50000000) || (IS_CHAR_STOPPED( uParam0 )))
    {
        return 1;
    }
    return 0;
}

void sub_9890()
{
    if (IS_THIS_MODEL_A_BIKE( l_U679 ))
    {
        if (IS_CAR_TYRE_BURST( l_U645, 6 ))
        {
            l_U938++;
        }
        if (IS_CAR_TYRE_BURST( l_U645, 7 ))
        {
            l_U938++;
        }
    }
    else if (IS_THIS_MODEL_A_CAR( l_U679 ))
    {
        if (IS_CAR_TYRE_BURST( l_U645, 0 ))
        {
            l_U938++;
        }
        if (IS_CAR_TYRE_BURST( l_U645, 1 ))
        {
            l_U938++;
        }
        if (IS_CAR_TYRE_BURST( l_U645, 2 ))
        {
            l_U938++;
        }
        if (IS_CAR_TYRE_BURST( l_U645, 3 ))
        {
            l_U938++;
        }
        if (IS_CAR_TYRE_BURST( l_U645, 4 ))
        {
            l_U938++;
        }
        if (IS_CAR_TYRE_BURST( l_U645, 5 ))
        {
            l_U938++;
        }
    }
    return;
}

void sub_10186()
{
    if (IS_THIS_MODEL_A_CAR( l_U679 ))
    {
        if (IS_CAR_DOOR_DAMAGED( l_U645, 4 ))
        {
            l_U939++;
        }
        if (IS_CAR_DOOR_DAMAGED( l_U645, 5 ))
        {
            l_U939++;
        }
        if (IS_CAR_DOOR_DAMAGED( l_U645, 0 ))
        {
            l_U939++;
        }
        if (IS_CAR_DOOR_DAMAGED( l_U645, 1 ))
        {
            l_U939++;
        }
        if (IS_CAR_DOOR_DAMAGED( l_U645, 2 ))
        {
            l_U939++;
        }
        if (IS_CAR_DOOR_DAMAGED( l_U645, 3 ))
        {
            l_U939++;
        }
    }
    return;
}

void sub_11009(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_11399(int iParam0, unknown uParam1)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_7192( iParam0->_fU0, g_U569[I] ))
            {
                g_U569[I]._fU20 = uParam1;
                iParam0->_fU24 = I;
            }
        }
    }
    return;
}

void sub_11815(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_12080(unknown uParam0)
{
    ADD_SCORE( sub_9466(), uParam0 );
    sub_12105( uParam0 );
    return;
}

void sub_12105(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_12216( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_12216(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_12312()
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

void sub_12505(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_12558( iParam0, uParam1, uParam2 );
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
        sub_12690( iParam0 + 0 );
    }
    return;
}

void sub_12558(int iParam0, int iParam1, int iParam2)
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
        sub_12690( iParam0 + 0 );
    }
    return;
}

void sub_12690(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_12721( iParam0->_fU4 )))
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

int sub_12721(unknown uParam0)
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

int sub_13112(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_13281( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_13281(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

int sub_13377(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_PLAYER_PLAYING( sub_9466() )))
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    if ((g_U9893._fU4) AND (NOT g_U9893._fU8))
    {
        return 0;
    }
    if (g_U91._fU104)
    {
        return 0;
    }
    if (sub_9079())
    {
        return 0;
    }
    if (sub_13479())
    {
        return 0;
    }
    if (sub_13684())
    {
        return 0;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_13738( uParam0 ))
    {
        return 0;
    }
    return 1;
}

int sub_13479()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U15436[I]._fU8)
        {
            return 1;
        }
    }
    for ( I = 0; I < 23; I++ )
    {
        if (g_U22274[I]._fU68)
        {
            return 1;
        }
        if (g_U22274[I]._fU500._fU16)
        {
            return 1;
        }
    }
    for ( I = 0; I < 13; I++ )
    {
        if (g_U15807[I]._fU0)
        {
            if (g_U15807[I]._fU12)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_13684()
{
    if (g_U9078)
    {
        return 1;
    }
    return 0;
}

int sub_13738(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_13758())
    {
        return 1;
    }
    if (sub_13793())
    {
        return 1;
    }
    if (NOT (iParam0 == 0))
    {
        if (NOT (sub_13864( iParam0 )))
        {
            iParam0 = 0;
        }
    }
    if (NOT (iParam0 == 0))
    {
        if (sub_14013( iParam0 ))
        {
            return 1;
        }
        return 0;
    }
    if (g_U63988._fU4 > iVar3)
    {
        return 1;
    }
    return 0;
}

void sub_13758()
{
    return g_U91._fU540;
}

int sub_13793()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (g_U63988._fU0 > iVar2)
    {
        return 1;
    }
    return 0;
}

int sub_13864(int iParam0)
{
    int iVar3;

    iVar3 = sub_13873();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_13928();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_13873()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_13928()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_14013(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 - g_U63988._fU8;
    if (iVar4 < iParam0)
    {
        return 1;
    }
    return 0;
}

void sub_14277()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_13873();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

void sub_14450(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 5;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        iVar3 = 0;
        break;
        case 22:
        iVar3 = 1;
        break;
        case 19:
        iVar3 = 2;
        break;
        case 8:
        iVar3 = 3;
        break;
        case -1:
        iVar3 = 4;
        break;
        default: return;
    }
    iVar4 = 0;
    if (NOT g_U64792[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U64792[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_14625( 1, iVar4 );
            g_U64792[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_14625(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_14807( 0 );
    return;
}

void sub_14807(boolean bParam0)
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
        sub_15062();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_15062()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}