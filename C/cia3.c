void main()
{
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    boolean bVar6;
    boolean bVar7;
    boolean bVar8;
    boolean bVar9;
    boolean bVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U484 = 0;
    l_U485 = {0.00000000, 0.00000000, 0.00000000};
    l_U488 = 2.50000000;
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 20.00000000;
    l_U494 = 180.00000000;
    l_U495 = 2.30000000;
    l_U496 = 0.55000000;
    l_U497 = {-386.03760000, 885.20530000, 15.06250000};
    l_U501 = {221.70160000, 315.89090000, 29.69170000};
    l_U504 = 263.00000000;
    l_U505 = -1660661558;
    l_U508 = 1976502708;
    l_U510 = 1543404628;
    l_U513 = 0;
    l_U514 = 0;
    l_U565 = 0;
    l_U566 = 0;
    l_U567 = 0;
    l_U719 = 1;
    l_U721 = 0;
    l_U741 = 0;
    l_U750 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_349();
        sub_2459();
    }
    fVar2 = 1.00000000;
    fVar3 = 1.00000000;
    fVar4 = (l_U495 - l_U496) / (l_U493 - l_U494);
    fVar5 = l_U495 - (l_U493 * fVar4);
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    bVar9 = false;
    bVar10 = false;
    while (true)
    {
        WAIT( 0 );
        if (NOT (l_U718 == 0))
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U506 )))
            {
                sub_3254( 1 );
            }
            else if (NOT (IS_CHAR_IN_CAR( sub_2676(), l_U506 )))
            {
                if (sub_4272( l_U506 ))
                {
                    EXPLODE_CAR( l_U506, 1, 0 );
                    sub_3254( 1 );
                }
            }
        }
        switch (l_U718)
        {
            case 0:
            sub_4455();
            break;
            case 1:
            if (LOCATE_CHAR_IN_CAR_3D( sub_2676(), 195.01000000, 286.27100000, 16.19900000, 3.50000000, 3.50000000, 3.50000000, 1 ))
            {
                if (sub_7435( 1, 1 ))
                {
                    REMOVE_BLIP( l_U500 );
                    l_U718 = 2;
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_2676(), 195.01000000, 286.27100000, 16.19900000, 3.50000000, 3.50000000, 3.50000000, 0 ))
            {
                PRINT_NOW( "CIA5_GET_CAR", 500, 1 );
            }
            else if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2676(), -64.73370000, 54.27560000, 13.76190000, 70.00000000, 70.00000000, 70.00000000, 0 ))) AND (NOT l_U560))
            {
                if (sub_7884() == 3)
                {
                    l_U560 = 1;
                }
                else
                {
                    sub_7987( 12, "C3_CALL2", "C3AUD", 10000, 0 );
                }
            };;;
            if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
            {
                LOAD_SCENE( l_U497._fU0, l_U497._fU4, l_U497._fU8 );
                SET_CHAR_COORDINATES( sub_2676(), l_U497._fU0, l_U497._fU4, l_U497._fU8 );
            }
            break;
            case 2:
            sub_11927();
            SWITCH_ROADS_BACK_TO_ORIGINAL( 132.81170000, 285.77020000, 0.00000000, 211.33040000, 290.82680000, 25.00000000 );
            if (NOT (IS_CAR_DEAD( l_U506 )))
            {
                ADD_BLIP_FOR_CAR( l_U506, ref l_U507 );
                PRINT_NOW( "CIA5_INSTR2", 7500, 0 );
            }
            l_U718 = 3;
            break;
            case 3:
            if (IS_CAR_DEAD( l_U506 ))
            {
                sub_3254( 1 );
            }
            else if (l_U552)
            {
                sub_14078();
            }
            sub_14879();
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U506 )))
            {
                STOP_PED_SPEAKING( sub_2676(), 1 );
                FREEZE_CAR_POSITION( l_U506, 1 );
                SET_CAR_COORDINATES( l_U506, -709.02700000, 357.86700000, 3.94586000 );
                WAIT( 0 );
                if (NOT (IS_CAR_DEAD( l_U506 )))
                {
                    FREEZE_CAR_POSITION( l_U506, 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U511 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U516 );
                    TASK_PAUSE( 0, 1000 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -712.06800000, 361.44000000, 4.04050000, 2, 20000, 0.20000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -716.30680000, 351.65950000, 4.04050000, 2, 20000, 0.20000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -716.80000000, 345.20000000, 3.05000000, 2, 20000, 0.20000000 );
                    if (NOT (IS_CHAR_DEAD( l_U526 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U526 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U516 );
                    TASK_PERFORM_SEQUENCE( l_U511, l_U516 );
                    CLEAR_SEQUENCE_TASK( l_U516 );
                }
                if (NOT (IS_CHAR_INJURED( l_U509 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U516 );
                    TASK_PAUSE( 0, 500 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -716.30680000, 351.65950000, 4.04050000, 2, 20000, 0.20000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -718.71000000, 345.71000000, 3.05000000, 2, 20000, 0.20000000 );
                    if (NOT (IS_CHAR_DEAD( l_U526 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U526 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U516 );
                    TASK_PERFORM_SEQUENCE( l_U509, l_U516 );
                    CLEAR_SEQUENCE_TASK( l_U516 );
                }
                sub_2738();
                if (NOT (IS_CAR_DEAD( l_U506 )))
                {
                    SET_CAR_ENGINE_ON( l_U506, 0, 1 );
                }
                if (DOES_BLIP_EXIST( l_U507 ))
                {
                    CHANGE_BLIP_COLOUR( l_U507, 3 );
                }
                PRINT_NOW( "CIA5_ENTRHELI", 7500, 0 );
                REMOVE_CAR_RECORDING( 249 );
                l_U718 = 4;
            }
            else
            {
                GET_CHAR_COORDINATES( sub_2676(), ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                GET_CAR_COORDINATES( l_U506, ref uVar14._fU0, ref uVar14._fU4, ref uVar14._fU8 );
                uVar11._fU8 = 0.00000000;
                uVar14._fU8 = 0.00000000;
                uVar17 = VDIST( uVar11, uVar14 );
                fVar3 = sub_18469( sub_18430( (fVar4 * uVar17) + fVar5, l_U496 ), l_U495 );
                if ((FIND_TIME_POSITION_IN_RECORDING( l_U506 )) < 10000.00000000)
                {
                    fVar3 = 1.20000000;
                }
                fVar3 *= 1.20000000;
                if ((FIND_TIME_POSITION_IN_RECORDING( l_U506 )) > 175000.00000000)
                {
                    if (NOT bVar8)
                    {
                        PRINT_NOW( "CIA5_HELILAND", 7500, 0 );
                        bVar8 = true;
                    }
                }
                if (fVar2 < fVar3)
                {
                    fVar2 += 0.10000000 * TIMESTEP();
                }
                else
                {
                    fVar2 -= 0.20000000 * TIMESTEP();
                }
                if ((FIND_TIME_POSITION_IN_RECORDING( l_U506 )) > 175000.00000000)
                {
                    if (fVar2 > 1.20000000)
                    {
                        fVar2 = 1.20000000;
                    }
                }
                SET_PLAYBACK_SPEED( l_U506, fVar2 );
                if (IS_CHAR_IN_AREA_3D( sub_2676(), -233.01530000, -880.00000000, -100.00000000, 144.52310000, -708.84100000, 0.00000000, 0 ))
                {
                    sub_2738();
                }
                else
                {
                    sub_18782( ref l_U509 );
                    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref uVar18 );
                    if (((sub_19469()) AND (NOT bVar6)) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                    {
                        PRINT_HELP( "CIA5_HINT1" );
                        bVar6 = true;
                    }
                }
                sub_19567();
                if (NOT l_U563)
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2676(), -718.71000000, 345.71000000, 3.05000000, 350.00000000, 350.00000000, 450.00000000, 0 )) || (l_U538 > 150000.00000000))
                    {
                        sub_19873();
                    }
                }
                else if (NOT l_U562)
                {
                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2676(), -718.71000000, 345.71000000, 3.05000000, 250.00000000, 250.00000000, 350.00000000, 0 )) || (l_U538 > 165000.00000000))
                    {
                        sub_20021();
                    }
                }
            }
            break;
            case 4:
            if (IS_CAR_DEAD( l_U506 ))
            {
                sub_3254( 1 );
            }
            else
            {
                sub_14879();
                if (((NOT (IS_CHAR_INJURED( l_U526 ))) AND (NOT (IS_CHAR_DEAD( l_U511 )))) AND (NOT l_U540))
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( l_U511, -718.24870000, 343.43290000, 3.48860000, 11.00000000, 11.00000000, 11.00000000, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U516 );
                        TASK_PLAY_ANIM( 0, "smoke_stub_out", "misscia3", 4.00000000, 0, 0, 0, 0, 0 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -718.45000000, 343.40000000, 3.05000000, 2, 20000, 0.20000000 );
                        if (NOT (IS_CHAR_DEAD( l_U511 )))
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U511 );
                        }
                        CLOSE_SEQUENCE_TASK( l_U516 );
                        TASK_PERFORM_SEQUENCE( l_U526, l_U516 );
                        CLEAR_SEQUENCE_TASK( l_U516 );
                        l_U540 = 1;
                    }
                }
                if ((((NOT (IS_CHAR_INJURED( l_U526 ))) AND (NOT (IS_CHAR_INJURED( l_U511 )))) AND (l_U540)) AND (NOT l_U539))
                {
                    GET_SCRIPT_TASK_STATUS( l_U526, 29, ref l_U541 );
                    if (l_U541 == 7)
                    {
                        GET_SCRIPT_TASK_STATUS( l_U511, 29, ref l_U541 );
                        if (l_U541 == 7)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U516 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U511 );
                            TASK_PLAY_ANIM( 0, "street_chat_a", "misscia3", 4.00000000, 1, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U516 );
                            TASK_PERFORM_SEQUENCE( l_U526, l_U516 );
                            CLEAR_SEQUENCE_TASK( l_U516 );
                            OPEN_SEQUENCE_TASK( ref l_U516 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U526 );
                            TASK_PLAY_ANIM( 0, "street_chat_b", "misscia3", 4.00000000, 1, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U516 );
                            TASK_PERFORM_SEQUENCE( l_U511, l_U516 );
                            CLEAR_SEQUENCE_TASK( l_U516 );
                            if (NOT (IS_CHAR_DEAD( l_U521[0] )))
                            {
                                TASK_TURN_CHAR_TO_FACE_CHAR( l_U521[0], l_U511 );
                            }
                            if ((NOT (IS_CHAR_DEAD( l_U521[1] ))) AND (NOT (IS_CHAR_DEAD( l_U509 ))))
                            {
                                TASK_TURN_CHAR_TO_FACE_CHAR( l_U521[1], l_U509 );
                            }
                            if ((NOT (IS_CHAR_DEAD( l_U521[1] ))) AND (NOT (IS_CAR_DEAD( l_U506 ))))
                            {
                                GET_CAR_COORDINATES( l_U506, ref l_U532._fU0, ref l_U532._fU4, ref l_U532._fU8 );
                                TASK_TURN_CHAR_TO_FACE_COORD( l_U521[1], l_U532._fU0, l_U532._fU4, l_U532._fU8 );
                            }
                            SETTIMERB( 0 );
                            l_U539 = 1;
                        }
                    }
                }
                if (IS_CHAR_IN_CAR( sub_2676(), l_U506 ))
                {
                    STOP_PED_SPEAKING( sub_2676(), 0 );
                    if (# -NULL-0xc238b5( 0 ))
                    {
                        sub_22124( "6CIA5_HELP", 1, 6000 );
                    }
                    else
                    {
                        sub_22124( "CIA5_HELP", 1, 6000 );
                    }
                    sub_22595();
                    SET_CHAR_CANT_BE_DRAGGED_OUT( sub_2676(), 1 );
                    sub_16619( "C3_STEAL", ref l_U542, 6, 1 );
                    sub_22736();
                    if (DOES_BLIP_EXIST( l_U507 ))
                    {
                        REMOVE_BLIP( l_U507 );
                    }
                    ADD_BLIP_FOR_COORD( 2323.53900000, 72.98220000, 5.81260000, ref l_U500 );
                    SET_BLIP_MARKER_LONG_DISTANCE( l_U500, 1 );
                    GET_GAME_TIMER( ref l_U587 );
                    SETTIMERB( 0 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2676(), 1 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 277, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -2118792523 );
                    SET_POLICE_FOCUS_WILL_TRACK_CAR( l_U506, 0 );
                    l_U718 = 5;
                }
            }
            break;
            case 5:
            g_U8707 = 1;
            if (IS_CAR_DEAD( l_U506 ))
            {
                sub_3254( 1 );
            }
            else
            {
                sub_23193();
                if (NOT l_U561)
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2676(), -718.71000000, 345.71000000, 3.05000000, 500.00000000, 500.00000000, 500.00000000, 0 )))
                    {
                        sub_26255();
                    }
                }
                if (l_U559)
                {
                    sub_26483( l_U512, 0 );
                    sub_26483( l_U509, 1 );
                }
                if (sub_28833( "CIA5_INSTR3", "CIA5_INSTR8", "GET_IN_HELI" ))
                {
                    if ((NOT (sub_29144( l_U542 ))) AND (NOT l_U594))
                    {
                        sub_16619( "C3_GETIN", ref l_U542, 6, 1 );
                        l_U594 = 1;
                    }
                    if (NOT l_U559)
                    {
                        if (l_U588)
                        {
                            GET_GAME_TIMER( ref l_U548 );
                            if (l_U548 > (l_U587 + 2000))
                            {
                                sub_29577();
                                sub_29762();
                            }
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U587 );
                            l_U588 = 1;
                        }
                    }
                    if (NOT bVar7)
                    {
                        if (NOT (sub_29144( l_U542 )))
                        {
                            PRINT_NOW( "CIA5_INSTR3", 7500, 0 );
                            SETTIMERB( 0 );
                            bVar7 = true;
                        }
                    }
                    else if (TIMERB() > 7000)
                    {
                        if ((sub_30244()) AND (NOT l_U592))
                        {
                            ALTER_WANTED_LEVEL( sub_2633(), 2 );
                            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_2633() );
                            sub_30322();
                            l_U592 = 1;
                        }
                    }
                    if (LOCATE_CHAR_IN_CAR_2D( sub_2676(), 2323.53900000, 72.98220000, 100.00000000, 100.00000000, 0 ))
                    {
                        if (NOT bVar10)
                        {
                            PRINT_NOW( "CIA5_LAND_IT", 7500, 0 );
                            bVar10 = true;
                        }
                        else if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT bVar9))
                        {
                            if (# -NULL-0xc238b5( 0 ))
                            {
                                sub_22124( "6CIA5_HELP", 10, 6000 );
                            }
                            else
                            {
                                sub_22124( "CIA5_HELP", 10, 6000 );
                            }
                            bVar9 = true;
                        }
                    }
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2676(), 2323.53900000, 72.98220000, 5.81260000, 12.00000000, 12.00000000, 1.50000000, 1 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U506 )))
                        {
                            GET_CAR_COORDINATES( l_U506, ref l_U532._fU0, ref l_U532._fU4, ref l_U532._fU8 );
                            if (l_U532._fU8 < 5.90000000)
                            {
                                if (NOT l_U557)
                                {
                                    SETTIMERA( 0 );
                                }
                                l_U557 = 1;
                                if (TIMERA() > 500)
                                {
                                    if (sub_7435( 1, 1 ))
                                    {
                                        if (DOES_BLIP_EXIST( l_U500 ))
                                        {
                                            REMOVE_BLIP( l_U500 );
                                        }
                                        if (DOES_BLIP_EXIST( l_U507 ))
                                        {
                                            REMOVE_BLIP( l_U507 );
                                        }
                                        LOCK_CAR_DOORS( l_U506, 4 );
                                        sub_30825();
                                        sub_34438();
                                    }
                                }
                            }
                            else
                            {
                                l_U557 = 0;
                            }
                        }
                    }
                    else
                    {
                        l_U557 = 0;
                    }
                }
                else if (NOT l_U559)
                {
                    l_U588 = 1;
                }
            }
            break;
            case 6:
            if (NOT (IS_CAR_DEAD( l_U506 )))
            {
                GET_CAR_COORDINATES( l_U506, ref l_U532._fU0, ref l_U532._fU4, ref l_U532._fU8 );
                PRINTNL();
                PRINTSTRING( "Heli coords- " );
                PRINTVECTOR( l_U532 );
            }
            break;
            default: break;
        }
        sub_46254();
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            sub_34438();
        }
        else if (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            sub_48836();
        }
    }
    return;
}

void sub_349()
{
    sub_358();
    return;
}

void sub_358()
{
    int iVar2;

    iVar2 = 12;
    sub_372( iVar2 );
    sub_1548( iVar2 );
    return;
}

void sub_372(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_416();
        sub_577();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_685();
            sub_724();
        }
    }
    sub_800();
    sub_901();
    uVar5 = sub_1014( uParam0 );
    sub_1455( uVar5, 0 );
    return;
}

void sub_416()
{
    sub_430( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_530();
    }
    return;
}

void sub_430(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_530()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_577()
{
    sub_586();
    return;
}

void sub_586()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_685()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_724()
{
    sub_733();
    return;
}

void sub_733()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_800()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_901()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_923();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_923()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1014(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1413( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1413(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1455(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_1548(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1557();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2332();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1557()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1595( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1595( 1, g_U569[I] )) != 0)
            {
                sub_1881( I );
            }
        }
    }
    if (NOT sub_2047())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_1595(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1881(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1966( g_U569 - 1 );
    return;
}

void sub_1966(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2047()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1595( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2332()
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

void sub_2459()
{
    SET_WANTED_MULTIPLIER( 1.00000000 );
    if (DOES_BLIP_EXIST( l_U500 ))
    {
        REMOVE_BLIP( l_U500 );
    }
    if (DOES_BLIP_EXIST( l_U507 ))
    {
        REMOVE_BLIP( l_U507 );
    }
    if ((DOES_CHAR_EXIST( l_U509 )) AND (NOT l_U558))
    {
        DELETE_CHAR( ref l_U509 );
    }
    if ((DOES_CHAR_EXIST( l_U511 )) AND (NOT l_U558))
    {
        DELETE_CHAR( ref l_U511 );
    }
    if (HAS_CAR_RECORDING_BEEN_LOADED( 249 ))
    {
        REMOVE_CAR_RECORDING( 249 );
    }
    if (IS_PLAYER_PLAYING( sub_2633() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2676(), 1 );
        STOP_PED_SPEAKING( sub_2676(), 0 );
    }
    sub_2738();
    sub_2889();
    sub_2926();
    SWITCH_ROADS_BACK_TO_ORIGINAL( 132.81170000, 285.77020000, 0.00000000, 211.33040000, 290.82680000, 25.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 2267.39500000, 62.45917000, 0.00000000, 2367.19700000, 74.76961000, 100.00000000 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 2219.80300000, 33.95198000, 0.00000000, 2428.63600000, 123.36520000, 100.00000000 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 2287.10000000, 70.50000000, 0.00000000, 2354.70000000, 103.50000000, 10.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2633()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2676()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2738()
{
    if (l_U484)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U482 = 0;
    l_U481 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_2889()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_2926()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_3254(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_NOW( "F_HELILOST", 7000, 1 );
        sub_3342( 12, "C3_F_LATE", "C3AUD", 0 );
        break;
        case 1:
        PRINT_NOW( "F_HELIDEAD", 7000, 1 );
        sub_3342( 12, "C3_F_DEAD", "C3AUD", 0 );
        l_U558 = 1;
        break;
        case 2:
        PRINT_NOW( "F_SPOOKED", 7000, 1 );
        sub_3342( 12, "C3_F_SPOOK", "C3AUD", 0 );
        break;
    }
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2633(), 150 );
        SAY_AMBIENT_SPEECH( sub_2676(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_4113();
    sub_2459();
    return;
}

void sub_3342(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_3386( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_3386(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
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
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
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
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_4113()
{
    sub_4122();
    return;
}

void sub_4122()
{
    int iVar2;

    iVar2 = 12;
    sub_4136( iVar2 );
    sub_1548( iVar2 );
    return;
}

void sub_4136(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2633(), 150 );
    CLEAR_HELP();
    sub_372( uParam0 );
    return;
}

int sub_4272(unknown uParam0)
{
    int iVar3;
    int iVar4;
    float fVar5;

    GET_CAR_UPRIGHT_VALUE( uParam0, ref fVar5 );
    if (fVar5 < 0.25000000)
    {
        GET_GAME_TIMER( ref iVar4 );
        iVar3 = iVar4 - l_U720;
        if (iVar3 > 10000)
        {
            return 1;
        }
    }
    else
    {
        GET_GAME_TIMER( ref l_U720 );
    }
    return 0;
}

void sub_4455()
{
    LOAD_ADDITIONAL_TEXT( "CIA5", 0 );
    sub_4486( "CIA5" );
    LOAD_ADDITIONAL_TEXT( "C3AUD", 6 );
    sub_4680( "C3AUD" );
    sub_4833( -59.30000000, 64.50000000, 14.40000000, 181, -59.30000000, 54.50000000, 14.40000000, 30, -1, 0 );
    if (g_U9893._fU24)
    {
        START_CUTSCENE_NOW( "N3" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "N3" );
    }
    REQUEST_MODEL( l_U505 );
    REQUEST_MODEL( l_U508 );
    REQUEST_MODEL( l_U510 );
    REQUEST_MODEL( -1341473171 );
    REQUEST_ANIMS( "misscia3" );
    REQUEST_CAR_RECORDING( 249 );
    while ((((((NOT (HAS_MODEL_LOADED( l_U505 ))) || (NOT (HAS_MODEL_LOADED( l_U508 )))) || (NOT (HAS_MODEL_LOADED( l_U510 )))) || (NOT (HAS_MODEL_LOADED( -1341473171 )))) || (NOT (HAVE_ANIMS_LOADED( "misscia3" )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 249 ))))
    {
        WAIT( 0 );
    }
    CLEAR_AREA( 2310, 85, 20, 100, 1 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 2287.10000000, 70.50000000, -100.00000000, 2354.70000000, 103.50000000, 100.00000000, 0 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 212.00000000, 310.00000000, 27.00000000, 230.00000000, 327.00000000, 35.00000000, 0 );
    FORCE_WEATHER_NOW( 1 );
    SWITCH_ROADS_OFF( 2219.80300000, 33.95198000, 0.00000000, 2428.63600000, 123.36520000, 100.00000000 );
    SWITCH_PED_PATHS_OFF( 2287.10000000, 70.50000000, 0.00000000, 2354.70000000, 103.50000000, 10.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 2287.10000000, 70.50000000, 0.00000000, 2354.70000000, 103.50000000, 10.00000000 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U568 );
    if (l_U513)
    {
        CREATE_CAR( l_U505, 2323.53900000, 72.98220000, 5.61260000, ref l_U506, 1 );
        SET_CAR_HEADING( l_U506, -98.00000000 );
        WARP_CHAR_INTO_CAR( sub_2676(), l_U506 );
        SET_CAM_BEHIND_PED( sub_2676() );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL( sub_2633(), 1 );
        l_U718 = 6;
    }
    else if (l_U514)
    {
        CREATE_CAR( l_U505, 2253.13300000, 85.67090000, 42.82570000, ref l_U506, 1 );
        SET_CAR_HEADING( l_U506, 270.00000000 );
        SET_HELI_BLADES_FULL_SPEED( l_U506 );
        SET_CAR_ENGINE_ON( l_U506, 1, 1 );
        WARP_CHAR_INTO_CAR( sub_2676(), l_U506 );
        SET_CAM_BEHIND_PED( sub_2676() );
        ADD_BLIP_FOR_COORD( 2323.53900000, 72.98220000, 5.81260000, ref l_U500 );
        SET_BLIP_MARKER_LONG_DISTANCE( l_U500, 1 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL( sub_2633(), 1 );
        l_U718 = 5;
    }
    else
    {
        sub_6011( 0, sub_2676(), "NIKO", 0 );
        SET_RELATIONSHIP( 5, 24, 0 );
        SET_WANTED_MULTIPLIER( 0.10000000 );
        SWITCH_ROADS_OFF( 132.81170000, 285.77020000, 0.00000000, 211.33040000, 290.82680000, 25.00000000 );
        CREATE_CAR( l_U505, l_U501._fU0, l_U501._fU4, l_U501._fU8, ref l_U506, 1 );
        SET_CAR_HEADING( l_U506, l_U504 );
        SET_CAR_COORDINATES_NO_OFFSET( l_U506, l_U501._fU0, l_U501._fU4, l_U501._fU8 );
        LOCK_CAR_DOORS( l_U506, 3 );
        CHANGE_CAR_COLOUR( l_U506, 27, 195 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U505 );
        l_U595[0] = {-0.90000000, -0.60000000, -1.05000000};
        l_U595[1] = {-0.90000000, 0.80000000, -1.05000000};
        l_U595[2] = {0.90000000, -0.70000000, -1.05000000};
        l_U595[3] = {0.90000000, 1.00000000, -1.05000000};
        for ( l_U548 = 0; l_U548 < 4; l_U548++ )
        {
            l_U631[l_U548][0] = {l_U595[l_U548]._fU0 - 0.05000000, l_U595[l_U548]._fU4 - 0.40000000, l_U595[l_U548]._fU8};
            l_U631[l_U548][1] = {l_U595[l_U548]._fU0 + 0.05000000, l_U595[l_U548]._fU4 - 0.40000000, l_U595[l_U548]._fU8};
            l_U631[l_U548][2] = {l_U595[l_U548]._fU0 - 0.05000000, l_U595[l_U548]._fU4 + 0.40000000, l_U595[l_U548]._fU8};
            l_U631[l_U548][3] = {l_U595[l_U548]._fU0 + 0.05000000, l_U595[l_U548]._fU4 + 0.40000000, l_U595[l_U548]._fU8};
        }
        l_U625[0] = 99;
        l_U625[1] = 99;
        l_U684[0] = {-713.90490000, 366.75320000, 3.05170000};
        l_U709[0] = 197.37670000;
        l_U684[1] = {-697.29250000, 360.01990000, 3.05160000};
        l_U709[1] = 125.62770000;
        l_U684[2] = {-697.71190000, 347.58510000, 3.05160000};
        l_U709[2] = 72.90940000;
        l_U684[3] = {-707.27780000, 344.97790000, 3.05170000};
        l_U709[3] = 5.26070000;
        l_U684[4] = {-719.56610000, 363.02330000, 3.05180000};
        l_U709[4] = 292.00310000;
        l_U684[5] = {-710.94070000, 348.40300000, 3.05170000};
        l_U709[5] = 352.27820000;
        l_U684[6] = {-710.25840000, 344.02660000, 3.05170000};
        l_U709[6] = 26.71470000;
        l_U684[7] = {-719.97710000, 351.80630000, 3.05180000};
        l_U709[7] = 298.32890000;
        LOAD_SCENE( -66.21970000, 54.32570000, 13.76190000 );
        SET_CHAR_COORDINATES( sub_2676(), -66.21970000, 54.32570000, 13.76190000 );
        SET_CHAR_HEADING( sub_2676(), 300.00000000 );
        SET_CAM_BEHIND_PED( sub_2676() );
        ADD_BLIP_FOR_COORD( 195.01000000, 286.20000000, 16.19900000, ref l_U500 );
        SET_ROUTE( l_U500, 1 );
        sub_7236( ref l_U500, 175.95200000, 288.65360000, 13.08300000, 270.00000000 );
        PRINT_NOW( "CIA5_INSTR1", 7500, 0 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL( sub_2633(), 1 );
        l_U718 = 1;
    }
    return;
}

void sub_4486(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    StrCopy( ref g_U9232, uParam0, 32 );
    sVar3 = "text_link_mission";
    if (IS_NETWORK_SESSION())
    {
        sVar3 = "txtlnkmiss_net";
    }
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    g_U9240 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_4680(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4699();
    return;
}

void sub_4699()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_4833(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, boolean bParam9)
{
    unknown uVar12;
    boolean bVar13;
    unknown uVar14;

    uVar14 = TO_FLOAT( iParam8 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar12 );
    if (IS_VEH_DRIVEABLE( uVar12 ))
    {
        if (iParam8 > 0)
        {
            if (LOCATE_CAR_3D( uVar12, uParam4._fU0, uParam4._fU4, uParam4._fU8, uVar14, uVar14, uVar14, 0 ))
            {
                SET_CAR_COORDINATES( uVar12, -10, -10, -10 );
                bVar13 = true;
            }
        }
        else if (LOCATE_CAR_3D( uVar12, uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7, uParam7, uParam7, 0 ))
        {
            SET_CAR_COORDINATES( uVar12, -10, -10, -10 );
            bVar13 = true;
        }
    }
    if (bParam9)
    {
        CLEAR_AREA_OF_CARS( uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7 );
    }
    else
    {
        CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7, 0 );
    }
    if (bVar13)
    {
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 3.00000000, 0 );
        SET_CAR_HEADING( uVar12, uParam3 );
        SET_CAR_COORDINATES( uVar12, uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    return;
}

void sub_6011(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6095( "\n PED NUMBER ", uParam0 );
    sub_6135( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6095(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6135(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7236(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

int sub_7435(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2676() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2676(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2676() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2676(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2676()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2676() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2676() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2633() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2633() )))
    {
        return 0;
    }
    return 1;
}

int sub_7884()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_7987(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_8047( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_8047(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_8117( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_8117( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2633() )))
    {
        sub_8117( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_2676() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2676() ))))
    {
        sub_8117( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_8117( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_8574()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((g_U91._fU372) || (NOT bParam8))
            {
                sub_8117( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 5) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 4))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT sub_8574()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_9946( uParam0, ref g_U91._fU176 );
    sub_11327( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_6135( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

void sub_8117(unknown uParam0)
{
    return;
}

int sub_8574()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_8631())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_8631()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2633() )))
    {
        sub_8117( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_8117( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_8117( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_8117( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2633() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2676() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_2676(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_8117( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_2676() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_8117( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_8117( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2633() )))
    {
        sub_8117( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_9946(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_11327(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_11927()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    unknown uVar5;
    unknown[2] uVar6;
    unknown uVar9;
    int iVar10;
    int iVar11;

    array(ref uVar6, 2);
    l_U567 = 0;
    while ((NOT bVar2) AND (NOT bVar3))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref l_U567 );
        if (iVar4 != 0)
        {
            iVar11 = l_U567 - iVar10;
        }
        if (((iVar11 >= 1000) AND (sub_12005())) AND (IS_SCREEN_FADED_IN()))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            sub_2738();
            if (NOT (IS_CAR_DEAD( l_U506 )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U506 ))
                {
                    sub_12160( l_U506, 8000.00000000 );
                }
                else
                {
                    FREEZE_CAR_POSITION_AND_DONT_LOAD_COLLISION( l_U506, 0 );
                    START_PLAYBACK_RECORDED_CAR( l_U506, 249 );
                    while (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U506 )))
                    {
                        WAIT( 0 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U506 )))
                    {
                        sub_12160( l_U506, 8000.00000000 );
                    }
                }
            }
            DO_SCREEN_FADE_IN( 500 );
            bVar3 = true;
        }
        else
        {
            switch (iVar4)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_2633(), 0 );
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                while (NOT sub_12416())
                {
                    WAIT( 0 );
                }
                CLEAR_SMALL_PRINTS();
                if (NOT (IS_CAR_DEAD( l_U506 )))
                {
                    CREATE_CHAR_INSIDE_CAR( l_U506, 26, l_U508, ref l_U509 );
                    CREATE_CHAR_AS_PASSENGER( l_U506, 26, l_U510, 0, ref l_U511 );
                    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U506, 1 );
                    GIVE_WEAPON_TO_CHAR( l_U509, 12, 30000, 0 );
                    GIVE_WEAPON_TO_CHAR( l_U511, 7, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U509, 0, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U511, 0, 0 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U509, 24 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U511, 24 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U509, 1 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U511, 1 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U509, 0 );
                    SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U511, 0 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U509, 1 );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U511, 1 );
                    SET_COMBAT_DECISION_MAKER( l_U509, l_U568 );
                    SET_COMBAT_DECISION_MAKER( l_U511, l_U568 );
                    SET_CHAR_ACCURACY( l_U509, 40 );
                    SET_CHAR_ACCURACY( l_U511, 40 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U509, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U508 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U510 );
                    SET_CAR_ENGINE_ON( l_U506, 1, 1 );
                    SET_HELI_BLADES_FULL_SPEED( l_U506 );
                    SET_CAR_COORDINATES( l_U506, l_U501._fU0, l_U501._fU4, l_U501._fU8 );
                    BEGIN_CAM_COMMANDS( ref uVar9 );
                    CREATE_CAM( 14, ref uVar6[0] );
                    SET_CAM_POS( uVar6[0], 186.51040000, 284.20500000, 15 );
                    SET_CAM_ROT( uVar6[0], 19.59116000, -0.00000000, -47.73893000 );
                    SET_CAM_FOV( uVar6[0], 50.00000000 );
                    SET_CAM_ACTIVE( uVar6[0], 1 );
                    SET_CAM_PROPAGATE( uVar6[0], 1 );
                    CREATE_CAM( 14, ref uVar6[1] );
                    SET_CAM_POS( uVar6[1], 186.51040000, 284.20500000, 15 );
                    SET_CAM_ROT( uVar6[1], 19.59116000, -0.00000000, -47.73893000 );
                    SET_CAM_FOV( uVar6[1], 40.00000000 );
                    SET_CAM_ACTIVE( uVar6[1], 1 );
                    SET_CAM_PROPAGATE( uVar6[1], 1 );
                    CREATE_CAM( 3, ref uVar5 );
                    SET_CAM_ACTIVE( uVar5, 1 );
                    SET_CAM_PROPAGATE( uVar5, 1 );
                    SET_CAM_INTERP_STYLE_CORE( uVar5, uVar6[0], uVar6[1], 4500, 0 );
                    SET_CURRENT_CHAR_WEAPON( sub_2676(), 0, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2676() )))
                    {
                        TASK_LOOK_AT_VEHICLE( sub_2676(), l_U506, 5000, 0 );
                        TASK_TURN_CHAR_TO_FACE_COORD( sub_2676(), l_U501._fU0, l_U501._fU4, l_U501._fU8 );
                    }
                }
                SETTIMERA( 0 );
                GET_GAME_TIMER( ref iVar10 );
                iVar4 = 1;
                break;
                case 1:
                if (TIMERA() > 1000)
                {
                    if (NOT (IS_CAR_DEAD( l_U506 )))
                    {
                        FREEZE_CAR_POSITION_AND_DONT_LOAD_COLLISION( l_U506, 0 );
                        START_PLAYBACK_RECORDED_CAR( l_U506, 249 );
                    }
                    SETTIMERA( 0 );
                    iVar4 = 2;
                }
                break;
                case 2:
                if (TIMERA() > 2000)
                {
                    SET_CAM_POS( uVar6[0], 213.06520000, 327.59470000, 29.61243000 );
                    SET_CAM_ROT( uVar6[0], 11.03047000, -0.00038200, -143.55100000 );
                    SET_CAM_FOV( uVar6[1], 47.00000000 );
                    SET_CAM_POS( uVar6[1], 209.22330000, 333.24230000, 31.89635000 );
                    SET_CAM_ROT( uVar6[1], 8.15260900, -0.00000000, -140.27290000 );
                    SET_CAM_FOV( uVar6[1], 53.00000000 );
                    SET_CAM_INTERP_STYLE_CORE( uVar5, uVar6[0], uVar6[1], 6500, 0 );
                    PRINT_NOW( "CIA5_INSTR5", 7500, 0 );
                    SETTIMERA( 0 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    iVar4 = 3;
                }
                break;
                case 3:
                if (TIMERA() > 6500)
                {
                    bVar2 = true;
                }
                break;
            }
        }
    }
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2676(), 0 );
    if (DOES_CAM_EXIST( uVar5 ))
    {
        if (IS_CAM_ACTIVE( uVar5 ))
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_ACTIVE( uVar5, 0 );
            SET_CAM_PROPAGATE( uVar5, 0 );
            SET_CAM_ACTIVE( uVar6[0], 0 );
            SET_CAM_PROPAGATE( uVar6[0], 0 );
            SET_CAM_ACTIVE( uVar6[1], 0 );
            SET_CAM_PROPAGATE( uVar6[1], 0 );
            DESTROY_CAM( uVar5 );
            DESTROY_CAM( uVar6[0] );
            DESTROY_CAM( uVar6[1] );
            END_CAM_COMMANDS( ref uVar9 );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U506 )))
    {
        LOCK_CAR_DOORS( l_U506, 1 );
    }
    SET_CAM_BEHIND_PED( sub_2676() );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_2633(), 1 );
    sub_2889();
    TASK_USE_MOBILE_PHONE( sub_2676(), 0 );
    CLEAR_SMALL_PRINTS();
    return;
}

int sub_12005()
{
    if ((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_12160(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
        {
            uVar4 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( uParam0, uParam1 - uVar4 );
        }
    }
    return;
}

void sub_12416()
{
    return sub_12427( 1, 1 );
}

int sub_12427(boolean bParam0, unknown uParam1)
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

void sub_14078()
{
    if (NOT l_U552)
    {
        if (l_U718 == 4)
        {
            sub_14116( l_U509, 0 );
            sub_14116( l_U511, 0 );
        }
        sub_14116( l_U521[0], 0 );
        sub_14116( l_U526, 0 );
        sub_14116( l_U521[1], 0 );
        sub_14116( l_U521[2], 0 );
        sub_14116( l_U521[3], 0 );
        SETTIMERA( 0 );
        if (NOT (IS_CHAR_INJURED( l_U521[0] )))
        {
            TASK_LOOK_AT_CHAR( l_U521[0], sub_2676(), 1000, 0 );
        }
        if ((NOT (IS_CAR_DEAD( l_U506 ))) AND (NOT (IS_CHAR_DEAD( l_U526 ))))
        {
            TASK_LOOK_AT_VEHICLE( l_U526, l_U506, 1000, 0 );
        }
        sub_14459( 1 );
        l_U552 = 1;
    }
    return;
}

void sub_14116(unknown uParam0, boolean bParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uParam0, 0 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( uParam0, 64820, 346, 3, 20 );
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U516 );
            if (bParam1)
            {
                TASK_PAUSE( 0, 800 );
            }
            TASK_COMBAT( 0, sub_2676() );
            CLOSE_SEQUENCE_TASK( l_U516 );
            TASK_PERFORM_SEQUENCE( uParam0, l_U516 );
            CLEAR_SEQUENCE_TASK( l_U516 );
        }
    }
    return;
}

void sub_14459(boolean bParam0)
{
    int I;

    for ( I = 2; I < 4; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U521[I] )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U521[I], 0 );
            CLEAR_CHAR_TASKS( l_U521[I] );
            if (bParam0)
            {
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U521[I], l_U722[I], 3 );
                OPEN_SEQUENCE_TASK( ref l_U516 );
                if (I == 2)
                {
                    TASK_PAUSE( 0, 800 );
                }
                TASK_COMBAT( 0, sub_2676() );
                CLOSE_SEQUENCE_TASK( l_U516 );
                TASK_PERFORM_SEQUENCE( l_U521[I], l_U516 );
                CLEAR_SEQUENCE_TASK( l_U516 );
            }
            else
            {
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U521[I], 64820, 346, 3, 20 );
                TASK_COMBAT( l_U521[I], sub_2676() );
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U521[2] )))
    {
        SAY_AMBIENT_SPEECH( l_U521[2], "GANG_ATTACK_WARNING", 1, 1, 0 );
    }
    else if (NOT (IS_CHAR_INJURED( l_U521[3] )))
    {
        SAY_AMBIENT_SPEECH( l_U521[3], "GANG_ATTACK_WARNING", 1, 1, 0 );
    }
    l_U579 = 1;
    return;
}

void sub_14879()
{
    float fVar2;
    unknown uVar3;

    GET_CHAR_SPEED( sub_2676(), ref l_U538 );
    if (NOT l_U579)
    {
        if ((DOES_CHAR_EXIST( l_U521[2] )) AND (DOES_CHAR_EXIST( l_U521[3] )))
        {
            if ((NOT (IS_CHAR_INJURED( l_U521[2] ))) AND (NOT (IS_CHAR_INJURED( l_U521[3] ))))
            {
                if (((((((((((((((((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U521[2], sub_2676(), 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U521[3], sub_2676(), 0 ))) || (IS_PED_RAGDOLL( l_U521[2] ))) || (IS_PED_RAGDOLL( l_U521[3] ))) || ((IS_PLAYER_TARGETTING_CHAR( sub_2633(), l_U521[2] )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U521[2], sub_2676() )))) || ((IS_PLAYER_TARGETTING_CHAR( sub_2633(), l_U521[3] )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U521[3], sub_2676() )))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U521[2], 49 ))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U521[3], 49 ))) || (IS_PED_RAGDOLL( l_U521[2] ))) || (IS_PED_RAGDOLL( l_U521[3] ))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U521[3], 49 ))) || (IS_CHAR_IN_AREA_3D( sub_2676(), -625.30000000, 339, 3, 64843, 375.70000000, 10, 0 ))) || ((IS_CHAR_IN_AREA_3D( sub_2676(), -626.60000000, 339.50000000, 3, -622.40000000, 347.70000000, 10, 0 )) AND (IS_CHAR_ON_FOOT( sub_2676() )))) || (IS_SNIPER_BULLET_IN_AREA( l_U722[2]._fU0 - 8, l_U722[2]._fU4 - 8, l_U722[2]._fU8 - 8, l_U722[2]._fU0 + 8, l_U722[2]._fU4 + 8, l_U722[2]._fU8 + 8 ))) || (IS_SNIPER_BULLET_IN_AREA( l_U722[3]._fU0 - 8, l_U722[3]._fU4 - 8, l_U722[3]._fU8 - 8, l_U722[3]._fU0 + 8, l_U722[3]._fU4 + 8, l_U722[3]._fU8 + 8 ))) || (IS_EXPLOSION_IN_AREA( -1, l_U722[2]._fU0 - 8, l_U722[2]._fU4 - 8, l_U722[2]._fU8 - 8, l_U722[2]._fU0 + 8, l_U722[2]._fU4 + 8, l_U722[2]._fU8 + 8 ))) || (IS_EXPLOSION_IN_AREA( -1, l_U722[3]._fU0 - 8, l_U722[3]._fU4 - 8, l_U722[3]._fU8 - 8, l_U722[3]._fU0 + 8, l_U722[3]._fU4 + 8, l_U722[3]._fU8 + 8 )))
                {
                    sub_14459( 1 );
                }
                else if (l_U751)
                {
                    if (NOT (IS_CHAR_IN_AREA_3D( sub_2676(), 64904, 324, 3, 64930, 353, 10, 0 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U516 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U722[2]._fU0, l_U722[2]._fU4, l_U722[2]._fU8, 2, 10000, 0.50000000 );
                        TASK_ACHIEVE_HEADING( 0, l_U735[2] );
                        TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Bouncer", -1082130432 );
                        CLOSE_SEQUENCE_TASK( l_U516 );
                        TASK_PERFORM_SEQUENCE( l_U521[2], l_U516 );
                        CLEAR_SEQUENCE_TASK( l_U516 );
                        OPEN_SEQUENCE_TASK( ref l_U516 );
                        TASK_PAUSE( 0, 500 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U722[3]._fU0, l_U722[3]._fU4, l_U722[3]._fU8, 2, 10000, 0.50000000 );
                        TASK_ACHIEVE_HEADING( 0, l_U735[3] );
                        CLOSE_SEQUENCE_TASK( l_U516 );
                        TASK_PERFORM_SEQUENCE( l_U521[3], l_U516 );
                        CLEAR_SEQUENCE_TASK( l_U516 );
                        l_U753 = 1;
                        l_U751 = 0;
                    }
                    else if (NOT (IS_CHAR_IN_ANY_CAR( sub_2676() )))
                    {
                        l_U751 = 0;
                        sub_14459( 1 );
                    }
                    else if ((sub_16078( l_U521[2], 29 )) || (sub_16078( l_U521[3], 29 )))
                    {
                        l_U751 = 0;
                        sub_14459( 1 );
                    };;;
                }
                else if (IS_CHAR_IN_AREA_3D( sub_2676(), 64910, 330, 3, 64924, 347, 10, 0 ))
                {
                    if (NOT l_U752)
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U521[2], 12, 0 );
                        TASK_SWAP_WEAPON( l_U521[2], 1 );
                        TASK_LOOK_AT_CHAR( l_U521[2], sub_2676(), -2, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U521[3], 7, 0 );
                        TASK_SWAP_WEAPON( l_U521[3], 1 );
                        TASK_LOOK_AT_CHAR( l_U521[3], sub_2676(), -2, 0 );
                        GET_CHAR_SPEED( sub_2676(), ref fVar2 );
                        if (IS_CHAR_IN_ANY_CAR( sub_2676() ))
                        {
                            if (fVar2 < 10)
                            {
                                GET_CAR_CHAR_IS_USING( sub_2676(), ref uVar3 );
                                OPEN_SEQUENCE_TASK( ref l_U516 );
                                TASK_PAUSE( 0, 800 );
                                TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_CAR( 0, uVar3, -0.80000000, 0, 0, 2, -2 );
                                CLOSE_SEQUENCE_TASK( l_U516 );
                                TASK_PERFORM_SEQUENCE( l_U521[2], l_U516 );
                                CLEAR_SEQUENCE_TASK( l_U516 );
                                OPEN_SEQUENCE_TASK( ref l_U516 );
                                TASK_PAUSE( 0, 200 );
                                TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_CAR( 0, uVar3, 0.80000000, 0, 0, 2, -2 );
                                CLOSE_SEQUENCE_TASK( l_U516 );
                                TASK_PERFORM_SEQUENCE( l_U521[3], l_U516 );
                                CLEAR_SEQUENCE_TASK( l_U516 );
                                l_U751 = 1;
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U521[3] )))
                        {
                            sub_6011( 2, l_U521[3], "TERRORIST", 0 );
                            sub_16619( "C3_SPOOK_2a", ref l_U542, 6, 1 );
                        }
                        else if (NOT (IS_CHAR_INJURED( l_U521[2] )))
                        {
                            sub_6011( 2, l_U521[2], "TERRORIST", 0 );
                            sub_16619( "C3_SPOOK_2a", ref l_U542, 6, 1 );
                        }
                        l_U752 = 1;
                    }
                    else if (l_U753)
                    {
                        sub_14459( 1 );
                    }
                };;;
            }
            else
            {
                sub_14459( 1 );
            }
        }
    }
    return;
}

int sub_16078(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_16619(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_16642( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_16642(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_16696( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_16696(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_16718( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
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
    sub_17398( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_16718(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_8117( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_8117( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_8117( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_17398(int iParam0, int iParam1)
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

void sub_18430(float Result, float fParam1)
{
    if (Result > fParam1)
    {
        return Result;
    }
    return fParam1;
}

void sub_18469(float Result, float fParam1)
{
    if (Result < fParam1)
    {
        return Result;
    }
    return fParam1;
}

void sub_18782(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U484)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((l_U482) AND (IS_HINT_RUNNING()))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U483 + 500))
        {
            l_U482 = 0;
        }
    }
    if (((((IS_CONTROL_PRESSED( 0, 51 )) AND (IS_CHAR_IN_ANY_CAR( sub_2676() ))) AND (NOT (IS_CHAR_DEAD( (uParam0^) )))) AND (NOT sub_18950())) AND (iVar3 != 4))
    {
        if ((NOT IS_HINT_RUNNING()) AND (IS_CHAR_IN_ANY_CAR( (uParam0^) )))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U483 );
            l_U482 = 1;
            l_U481 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U481) AND (NOT l_U482))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U481 = 1;
        }
    }
    else if (l_U481)
    {
        if (l_U484)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U481 = 0;
    };;;
    return;
}

int sub_18950()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_19469()
{
    int iVar2;

    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
    if (((iVar2 != 4) AND (iVar2 != 5)) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_2676() )))
    {
        return 1;
    }
    return 0;
}

void sub_19567()
{
    if (NOT (IS_CAR_DEAD( l_U506 )))
    {
        GET_CAR_COORDINATES( l_U506, ref l_U532._fU0, ref l_U532._fU4, ref l_U532._fU8 );
        if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2676(), l_U532._fU0, l_U532._fU4, l_U532._fU8, 280.00000000, 280.00000000, 280.00000000, 0 ))) AND (NOT (IS_CAR_ON_SCREEN( l_U506 ))))
        {
            CLEAR_SMALL_PRINTS();
            sub_3254( 0 );
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2676(), l_U532._fU0, l_U532._fU4, l_U532._fU8, 230.00000000, 230.00000000, 230.00000000, 0 )))
        {
            PRINT_NOW( "CIA5_LOSEHELI", 1000, 0 );
        }
    }
    return;
}

void sub_19873()
{
    REQUEST_MODEL( 1543404628 );
    REQUEST_MODEL( 1976502708 );
    REQUEST_MODEL( -625748998 );
    REQUEST_MODEL( -2118792523 );
    l_U563 = 1;
    return;
}

void sub_20021()
{
    if (((HAS_MODEL_LOADED( 1543404628 )) AND (HAS_MODEL_LOADED( 1976502708 ))) AND (HAS_MODEL_LOADED( -625748998 )))
    {
        l_U722[0] = {-717.67320000, 342.38090000, 3.48860000};
        l_U735[0] = 317;
        l_U722[1] = {-719.41360000, 344.14410000, 3.48860000};
        l_U735[1] = 321;
        l_U722[2] = {-626.16700000, 340.98200000, 3.81170000};
        l_U735[2] = 267;
        l_U722[3] = {-625.86660000, 345.83390000, 3.81170000};
        l_U735[3] = 270;
        for ( l_U548 = 0; l_U548 < 4; l_U548++ )
        {
            CREATE_CHAR( 4, 1976502708, l_U722[l_U548]._fU0, l_U722[l_U548]._fU4, l_U722[l_U548]._fU8, ref l_U521[l_U548], 1 );
            SET_CHAR_HEADING( l_U521[l_U548], l_U735[l_U548] );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U521[l_U548] );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U521[l_U548], 1 );
            if (l_U548 == 3)
            {
                GIVE_WEAPON_TO_CHAR( l_U521[l_U548], 7, 30000, 0 );
            }
            else if (l_U548 == 0)
            {
                GIVE_WEAPON_TO_CHAR( l_U521[l_U548], 11, 30000, 0 );
            }
            else
            {
                GIVE_WEAPON_TO_CHAR( l_U521[l_U548], 12, 30000, 0 );
            }
            SET_CURRENT_CHAR_WEAPON( l_U521[l_U548], 0, 0 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U521[l_U548], 24 );
            SET_CHAR_ACCURACY( l_U521[l_U548], 40 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U521[l_U548], 1 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U521[l_U548], 0 );
            SET_COMBAT_DECISION_MAKER( l_U521[l_U548], l_U568 );
        }
        SET_CHAR_COMPONENT_VARIATION( l_U521[2], 0, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U521[3], 0, 2, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U521[2], 1, 0, 2 );
        SET_CHAR_COMPONENT_VARIATION( l_U521[3], 1, 2, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U521[2], 2, 2, 2 );
        SET_CHAR_COMPONENT_VARIATION( l_U521[3], 2, 0, 0 );
        TASK_START_SCENARIO_IN_PLACE( l_U521[2], "Scenario_Bouncer", -1082130432 );
        CREATE_CHAR( 4, 1543404628, -719.88740000, 341.69780000, 3.48860000, ref l_U526, 1 );
        SET_CHAR_HEADING( l_U526, 319.00000000 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U526, 1 );
        GIVE_WEAPON_TO_CHAR( l_U526, 7, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U526, 0, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U526, 24 );
        SET_CHAR_ACCURACY( l_U526, 40 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U526, 1 );
        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U526, 0 );
        TASK_PLAY_ANIM( l_U526, "smoke_stand_a", "misscia3", 4.00000000, 1, 0, 0, 0, -1 );
        CREATE_OBJECT( -625748998, -713.33500000, 348.70000000, 3.07200000, ref l_U517[0], 1 );
        SET_OBJECT_HEADING( l_U517[0], 5.19600000 );
        CREATE_OBJECT( -625748998, -714.56100000, 350.98500000, 3.07200000, ref l_U517[1], 1 );
        SET_OBJECT_HEADING( l_U517[1], -3.09100000 );
        CREATE_OBJECT( -625748998, -710.73600000, 354.58700000, 3.07200000, ref l_U517[2], 1 );
        SET_OBJECT_HEADING( l_U517[2], 7.08600000 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -625748998 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1543404628 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1976502708 );
        l_U562 = 1;
    }
    else
    {
        REQUEST_MODEL( 1543404628 );
        REQUEST_MODEL( 1976502708 );
        REQUEST_MODEL( -625748998 );
    }
    return;
}

void sub_22124(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_22144( 1, "", -1, uParam0, uParam1, uParam2 );
    return;
}

void sub_22144(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            sub_22186( I );
            sub_22303( uParam5, I );
            switch (I)
            {
                case 0:
                StrCopy( ref g_U9241._fU28[0], uParam1, 16 );
                g_U9241._fU100[0] = uParam2;
                break;
                case 1:
                StrCopy( ref g_U9241._fU28[1], uParam3, 16 );
                g_U9241._fU100[1] = uParam4;
                break;
            }
            g_U9241._fU112[I] = 0;
            if (iParam0 == 2)
            {
                g_U9241._fU148[I] = 3;
            }
            else
            {
                g_U9241._fU148[I] = 1;
            }
            g_U9241._fU136[I] = -1;
            g_U9241._fU124[I] = 0;
        }
    }
    return;
}

void sub_22186(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_22238( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_22238(unknown uParam0)
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

void sub_22303(int iParam0, unknown uParam1)
{
    if (iParam0 == -1)
    {
        g_U9241._fU16[uParam1] = 6000;
    }
    else
    {
        g_U9241._fU16[uParam1] = iParam0;
    }
    return;
}

void sub_22595()
{
    sub_22607( 1, 1, -1 );
    return;
}

void sub_22607(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((I == iParam0) || (iParam0 == 2))
        {
            g_U9241._fU124[I] = uParam1;
            g_U9241._fU136[I] = uParam2;
        }
    }
    return;
}

void sub_22736()
{
    if (NOT l_U721)
    {
        if (NOT (IS_CHAR_DEAD( l_U526 )))
        {
            sub_6011( 2, l_U526, "TERRORIST", 0 );
        }
        else if (NOT (IS_CHAR_DEAD( l_U521[0] )))
        {
            sub_6011( 2, l_U521[0], "TERRORIST", 0 );
        }
        else if (NOT (IS_CHAR_DEAD( l_U521[1] )))
        {
            sub_6011( 2, l_U521[1], "TERRORIST", 0 );
        }
        else if (NOT (IS_CHAR_DEAD( l_U509 )))
        {
            sub_6011( 2, l_U509, "TERRORIST", 0 );
        }
        else if (NOT (IS_CHAR_DEAD( l_U511 )))
        {
            sub_6011( 2, l_U511, "TERRORIST", 0 );
        };;;;;
        l_U721 = 1;
    }
    return;
}

void sub_23193()
{
    if (l_U741 == 0)
    {
        GET_GAME_TIMER( ref l_U741 );
    }
    if (NOT l_U749)
    {
        GET_GAME_TIMER( ref l_U548 );
        if (l_U548 > (l_U741 + 21000))
        {
            if (sub_23268( 0 ))
            {
                if (sub_7987( 0, "C3_CALLR3", "C3AUD", 10000, 0 ))
                {
                    GET_GAME_TIMER( ref l_U740 );
                    l_U749 = 1;
                }
            }
        }
    }
    else if (NOT l_U750)
    {
        if (sub_24664( 0 ))
        {
            l_U750 = 1;
        }
    }
    if (((sub_7884() == 6) || (sub_7884() == 2)) AND (NOT g_U64676))
    {
        g_U64676 = 1;
        GET_GAME_TIMER( ref l_U740 );
    }
    if ((g_U64676) AND (NOT g_U64677))
    {
        sub_24838();
    }
    return;
}

int sub_23268(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U22274[uParam0]._fU0)
    {
        return 0;
    }
    if (g_U22274[uParam0]._fU4)
    {
        return 0;
    }
    if (NOT g_U22274[uParam0]._fU8)
    {
        return 0;
    }
    uVar3 = sub_23347( uParam0 );
    if (sub_23720( uVar3 ))
    {
        if (g_U10981[uVar3]._fU144._fU84)
        {
            return 0;
        }
    }
    if (g_U10981[uVar3]._fU40[1] < g_U22274[uParam0]._fU160)
    {
        return 0;
    }
    if (sub_23845( uParam0 ))
    {
        return 0;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return 0;
    }
    return 1;
}

int sub_23347(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 22: return 20;
        case 20: return 21;
        case 21: return 22;
    }
    sub_1413( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

int sub_23720(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        case 8: return 1;
    }
    return 0;
}

int sub_23845(unknown uParam0)
{
    if (g_U22274[uParam0]._fU188._fU0._fU0 == -1)
    {
        return 0;
    }
    if (NOT (sub_23920( g_U22274[uParam0]._fU188._fU0, g_U22274[uParam0]._fU188._fU8 )))
    {
        return 0;
    }
    return 1;
}

int sub_23920(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    boolean bVar8;

    if ((uParam0._fU0 < 0) || (uParam0._fU0 >= 24))
    {
        sub_1413( "KM_Is_Now_Time_Between_Start_End_Times: Start Hours Error" );
        return 0;
    }
    if ((uParam0._fU4 < 0) || (uParam0._fU4 >= 60))
    {
        sub_1413( "KM_Is_Now_Time_Between_Start_End_Times: Start Minutes Error" );
        return 0;
    }
    if ((uParam2._fU0 < 0) || (uParam2._fU0 >= 24))
    {
        sub_1413( "KM_Is_Now_Time_Between_Start_End_Times: End Hours Error" );
        return 0;
    }
    if ((uParam2._fU4 < 0) || (uParam2._fU4 >= 60))
    {
        sub_1413( "KM_Is_Now_Time_Between_Start_End_Times: End Minutes Error" );
        return 0;
    }
    GET_TIME_OF_DAY( ref uVar6._fU0, ref uVar6._fU4 );
    bVar8 = sub_24300( uParam2, uParam0 );
    if (NOT bVar8)
    {
        if (sub_24300( uVar6, uParam0 ))
        {
            return 0;
        }
        if (sub_24300( uParam2, uVar6 ))
        {
            return 0;
        }
        return 1;
    }
    if (sub_24424( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_24300( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_24300( uVar6, uParam2 ))
    {
        return 1;
    }
    return 0;
}

boolean sub_24300(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (uParam0._fU0 > uParam2._fU0)
    {
        return 0;
    }
    if (uParam0._fU0 < uParam2._fU0)
    {
        return 1;
    }
    return uParam0._fU4 < uParam2._fU4;
}

boolean sub_24424(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (uParam0._fU0 == uParam2._fU0))
    {
        return 0;
    }
    return uParam0._fU4 == uParam2._fU4;
}

int sub_24664(int iParam0)
{
    if (sub_24673())
    {
        if (g_U91._fU60 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_24673()
{
    if ((g_U91._fU0 == 1007) || (g_U91._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

void sub_24838()
{
    int iVar2;

    GET_GAME_TIMER( ref l_U548 );
    if ((NOT g_U64677) AND (l_U548 > (l_U740 + 4000)))
    {
        iVar2 = 0;
        if (l_U750)
        {
            sub_24913( iVar2, 24, 16383, 16383, ref l_U742 );
        }
        else
        {
            sub_24913( iVar2, 27, 16383, 16383, ref l_U742 );
        }
        sub_25283( ref l_U742, 1 );
        sub_25314( ref l_U742, 0 );
        sub_25347( ref l_U742, 43 );
        while (NOT (sub_25380( ref l_U742 )))
        {
            WAIT( 0 );
        }
        g_U64677 = 1;
    }
    return;
}

void sub_24913(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_24935( uParam0, 0, iParam4 + 0 );
    sub_24935( uParam1, 1, iParam4 + 0 );
    sub_24935( uParam2, 2, iParam4 + 0 );
    sub_24935( uParam3, 3, iParam4 + 0 );
    sub_24935( 0, 4, iParam4 + 0 );
    sub_24935( 1, 5, iParam4 + 0 );
    sub_24935( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_24935(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_25283(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_25314(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_25347(int iParam0, unknown uParam1)
{
    sub_24935( uParam1, 6, iParam0 + 0 );
    return;
}

int sub_25380(int iParam0)
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
        if (NOT sub_25450())
        {
            sub_1881( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_25577( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_1881( iVar9 );
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
                ConcatString(ref cVar5, sub_1595( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_1595( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_25450()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1595( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_1881( I );
            return 1;
        }
    }
    return 0;
}

int sub_25577(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_25642( uParam0, g_U569[Result] ))
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

int sub_25642(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_1595( 0, uParam0 );
        if (iVar14 == (sub_1595( 0, uParam6 )))
        {
            iVar15 = sub_1595( 3, uParam0 );
            if (iVar15 == (sub_1595( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_26255()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U509 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U511 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U512 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U521[0] );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U521[1] );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U521[2] );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U521[3] );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U526 );
    for ( l_U548 = 0; l_U548 < 3; l_U548++ )
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U517[l_U548] );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1543404628 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1976502708 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -625748998 );
    l_U561 = 1;
    return;
}

void sub_26483(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (IS_VEH_DRIVEABLE( l_U506 )))
        {
            if (IS_PED_RAGDOLL( uParam0 ))
            {
                if ((CHECK_NM_FEEDBACK( uParam0, 188, 0 )) || (CHECK_NM_FEEDBACK( uParam0, 162, 0 )))
                {
                    if (NOT l_U580)
                    {
                        SETTIMERB( 0 );
                        l_U580 = 1;
                    }
                    else if ((TIMERB() > 2000) AND (NOT l_U581[iParam1]))
                    {
                        SAY_AMBIENT_SPEECH( uParam0, "DODGE", 1, 1, 0 );
                        l_U581[iParam1] = 1;
                    }
                    GET_CHAR_HEIGHT_ABOVE_GROUND( sub_2676(), ref l_U538 );
                    if ((l_U538 > 8.00000000) AND (NOT l_U564))
                    {
                        l_U564 = 1;
                    }
                    if (((((l_U564) AND ((TIMERB() > 4000) AND (iParam1 == 0))) || ((TIMERB() > 6000) AND (iParam1 == 1))) AND (l_U538 < 6.00000000)) AND (l_U613[iParam1] != 4))
                    {
                        GET_GAME_TIMER( ref l_U567 );
                        if ((l_U565 == 0) || ((l_U565 == 1) AND (l_U567 > (l_U566 + 800))))
                        {
                            GET_GAME_TIMER( ref l_U566 );
                            CLEAR_CHAR_TASKS( uParam0 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uParam0, 0 );
                            SWITCH_PED_TO_ANIMATED( uParam0, 1 );
                            TASK_COMBAT( uParam0, sub_2676() );
                            l_U613[iParam1] = 4;
                            l_U565++;
                        }
                    }
                }
                else if ((l_U581[iParam1]) AND (NOT l_U584[iParam1]))
                {
                    HANDLE_AUDIO_ANIM_EVENT( uParam0, "PAIN_HIGH" );
                    l_U584[iParam1] = 1;
                }
            }
            else if ((l_U581[iParam1]) AND (NOT l_U584[iParam1]))
            {
                HANDLE_AUDIO_ANIM_EVENT( uParam0, "PAIN_HIGH" );
                l_U584[iParam1] = 1;
            }
            switch (l_U613[iParam1])
            {
                case 0:
                if (IS_CAR_IN_AREA_3D( l_U506, -724.00000000, 335.00000000, 0.00000000, -694.00000000, 378.00000000, 40.00000000, 0 ))
                {
                    CLEAR_CHAR_TASKS( uParam0 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uParam0, 1 );
                    UNLOCK_RAGDOLL( uParam0, 0 );
                    if (iParam1 == 0)
                    {
                        l_U625[iParam1] = sub_27163( uParam0, l_U625[1] );
                    }
                    else
                    {
                        l_U625[iParam1] = sub_27163( uParam0, l_U625[0] );
                    }
                    SET_NEXT_DESIRED_MOVE_STATE( 4 );
                    if (l_U589[iParam1])
                    {
                        GET_OBJECT_COORDINATES( l_U608[iParam1], ref l_U532._fU0, ref l_U532._fU4, ref l_U532._fU8 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( uParam0, l_U532._fU0, l_U532._fU4, l_U532._fU8, 4, 0.20000000, 1.00000000, 0, 1 );
                        l_U589[iParam1] = 1;
                    }
                    else
                    {
                        TASK_GO_TO_OBJECT( uParam0, l_U608[iParam1], -1, 0.20000000 );
                    }
                    l_U619[iParam1] = 0;
                    l_U613[iParam1]++;
                }
                break;
                case 1:
                if ((NOT (IS_CAR_IN_AREA_3D( l_U506, -724.00000000, 335.00000000, 0.00000000, -694.00000000, 378.00000000, 40.00000000, 0 ))) AND (IS_CHAR_IN_CAR( sub_2676(), l_U506 )))
                {
                    CLEAR_CHAR_TASKS( uParam0 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uParam0, 0 );
                    TASK_COMBAT( uParam0, sub_2676() );
                    l_U619[iParam1] = 0;
                    l_U613[iParam1] = 0;
                }
                else if (iParam1 == 0)
                {
                    l_U625[iParam1] = sub_27163( uParam0, l_U625[1] );
                }
                else
                {
                    l_U625[iParam1] = sub_27163( uParam0, l_U625[0] );
                }
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U506, l_U595[l_U625[iParam1]]._fU0, l_U595[l_U625[iParam1]]._fU4, l_U595[l_U625[iParam1]]._fU8, ref l_U532._fU0, ref l_U532._fU4, ref l_U532._fU8 );
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( uParam0, l_U532._fU0, l_U532._fU4, l_U532._fU8, 0.50000000, 0.50000000, 20.00000000, 0 )))
                {
                    GET_SCRIPT_TASK_STATUS( uParam0, 18, ref l_U541 );
                    if (l_U541 == 7)
                    {
                        TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_CAR( uParam0, l_U506, l_U595[l_U625[iParam1]]._fU0, l_U595[l_U625[iParam1]]._fU4, l_U595[l_U625[iParam1]]._fU8, 4, -2 );
                        l_U619[iParam1] = 0;
                    }
                }
                else
                {
                    GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    l_U538 = l_U532._fU8 - uVar4._fU8;
                    if ((l_U538 > -0.30000000) AND (l_U538 < 0.60000000))
                    {
                        SET_CURRENT_CHAR_WEAPON( uParam0, 0, 0 );
                        UNLOCK_RAGDOLL( uParam0, 1 );
                        GENERATE_RANDOM_FLOAT_IN_RANGE( 12000, 18000, ref l_U535._fU0 );
                        GENERATE_RANDOM_FLOAT_IN_RANGE( 8000, 12000, ref l_U535._fU4 );
                        SWITCH_PED_TO_RAGDOLL( uParam0, ROUND( l_U535._fU4 ), ROUND( l_U535._fU0 ), 1, 1, 1, 0 );
                        CREATE_NM_MESSAGE( 1, 79 );
                        SEND_NM_MESSAGE( uParam0 );
                        CREATE_NM_MESSAGE( 1, 119 );
                        SET_NM_MESSAGE_VEC3( 121, l_U532._fU0, l_U532._fU4, l_U532._fU8 );
                        SET_NM_MESSAGE_FLOAT( 122, 0.50000000 );
                        SEND_NM_MESSAGE( uParam0 );
                        CREATE_NM_MESSAGE( 1, 79 );
                        SET_NM_MESSAGE_VEC3( 87, l_U532._fU0, l_U532._fU4, l_U532._fU8 );
                        SET_NM_MESSAGE_BOOL( 103, 1 );
                        SEND_NM_MESSAGE( uParam0 );
                        CREATE_NM_MESSAGE( 1, 161 );
                        SET_NM_MESSAGE_INSTANCE_INDEX( 177, 0, l_U506, 0 );
                        SET_NM_MESSAGE_VEC3( 165, l_U631[l_U625[iParam1]][0] );
                        SET_NM_MESSAGE_VEC3( 166, l_U631[l_U625[iParam1]][1] );
                        SET_NM_MESSAGE_VEC3( 167, l_U631[l_U625[iParam1]][2] );
                        SET_NM_MESSAGE_VEC3( 168, l_U631[l_U625[iParam1]][3] );
                        SET_NM_MESSAGE_BOOL( 172, 1 );
                        SET_NM_MESSAGE_BOOL( 175, 1 );
                        SET_NM_MESSAGE_BOOL( 176, 1 );
                        SET_NM_MESSAGE_BOOL( 178, 1 );
                        SET_NM_MESSAGE_FLOAT( 179, 1.50000000 );
                        SET_NM_MESSAGE_FLOAT( 164, -1.00000000 );
                        SEND_NM_MESSAGE( uParam0 );
                        CREATE_NM_MESSAGE( 1, 67 );
                        SET_NM_MESSAGE_BOOL( 77, 1 );
                        SEND_NM_MESSAGE( uParam0 );
                        l_U619[iParam1] = 0;
                        l_U613[iParam1]++;
                    }
                    else if (NOT l_U619[iParam1])
                    {
                        TASK_SHOOT_AT_CHAR( uParam0, sub_2676(), 999999, 3 );
                        l_U619[iParam1] = 1;
                    }
                }
                break;
                case 2:
                if (NOT (IS_PED_RAGDOLL( uParam0 )))
                {
                    SWITCH_PED_TO_ANIMATED( uParam0, 1 );
                    l_U613[iParam1] = 0;
                }
                break;
            }
        }
    }
    return;
}

void sub_27163(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;
    float fVar11;
    float fVar12;

    fVar11 = 0.00000000;
    fVar12 = 9999.00000000;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    if (NOT (IS_CAR_DEAD( l_U506 )))
    {
        for ( l_U548 = 0; l_U548 < 4; l_U548++ )
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U506, l_U595[l_U548]._fU0, l_U595[l_U548]._fU4, l_U595[l_U548]._fU8, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref fVar11 );
            if (fVar11 < fVar12)
            {
                if (l_U548 != iParam1)
                {
                    fVar12 = fVar11;
                    Result = l_U548;
                }
            }
        }
    }
    return Result;
}

int sub_28833(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (IS_CHAR_IN_CAR( sub_2676(), l_U506 ))
    {
        if (DOES_BLIP_EXIST( l_U507 ))
        {
            REMOVE_BLIP( l_U507 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U500 )))
        {
            if (NOT l_U719)
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
            else
            {
                PRINT_NOW( uParam1, 7500, 1 );
            }
            l_U719 = 1;
            ADD_BLIP_FOR_COORD( 2323.53900000, 72.98220000, 5.81260000, ref l_U500 );
        }
        return 1;
    }
    if (DOES_BLIP_EXIST( l_U500 ))
    {
        REMOVE_BLIP( l_U500 );
    }
    if (NOT (DOES_BLIP_EXIST( l_U507 )))
    {
        ADD_BLIP_FOR_CAR( l_U506, ref l_U507 );
        CHANGE_BLIP_COLOUR( l_U507, 3 );
        if (NOT l_U719)
        {
            l_U719 = 1;
            ADD_BLIP_FOR_COORD( 2323.53900000, 72.98220000, 5.81260000, ref l_U500 );
            REMOVE_BLIP( l_U507 );
            PRINT_NOW( uParam0, 7500, 1 );
        }
        else if (sub_29144( l_U542 ))
        {
            sub_29316( ref l_U542, 0 );
        }
        sub_2926();
        PRINT_NOW( uParam2, 7500, 1 );;
    }
    return 0;
}

int sub_29144(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_8117( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_8117( "\n speech is not playing" );
    }
    return 0;
}

void sub_29316(int iParam0, unknown uParam1)
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

void sub_29577()
{
    int I;

    I = 0;
    if (NOT (IS_CAR_DEAD( l_U506 )))
    {
        for ( I = 0; I < 4; I++ )
        {
            CREATE_OBJECT( -1341473171, 1.00000000, 1.00000000, 1.00000000 - I, ref l_U608[I], 1 );
            ATTACH_OBJECT_TO_CAR( l_U608[I], l_U506, 0, l_U595[I]._fU0, l_U595[I]._fU4, l_U595[I]._fU8, 0, 0, 0 );
            SET_OBJECT_VISIBLE( l_U608[I], 0 );
        }
        l_U559 = 1;
    }
    return;
}

void sub_29762()
{
    boolean bVar2;

    l_U548 = 0;
    while ((l_U548 < 8) AND (NOT bVar2))
    {
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U549 );
        CREATE_OBJECT( -1341473171, l_U684[l_U548]._fU0, l_U684[l_U548]._fU4, l_U684[l_U548]._fU8, ref l_U549, 1 );
        SET_OBJECT_VISIBLE( l_U549, 0 );
        SET_OBJECT_COLLISION( l_U549, 0 );
        if (NOT (IS_OBJECT_ON_SCREEN( l_U549 )))
        {
            CREATE_CHAR( 4, 1976502708, l_U684[l_U548]._fU0, l_U684[l_U548]._fU4, l_U684[l_U548]._fU8, ref l_U512, 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U512 );
            SET_CHAR_HEADING( l_U512, l_U709[l_U548] );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U512, 1 );
            GIVE_WEAPON_TO_CHAR( l_U512, 7, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U512, 7, 0 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U512, 24 );
            SET_CHAR_ACCURACY( l_U512, 40 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U512, 1 );
            SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U512, 0 );
            bVar2 = true;
        }
        DELETE_OBJECT( ref l_U549 );
        l_U548++;
    }
    return;
}

int sub_30244()
{
    if (g_U9241._fU148[1] == 0)
    {
        return 0;
    }
    return 1;
}

void sub_30322()
{
    if (sub_30332( 1 ))
    {
        g_U9241._fU124[1] = 0;
    }
    return;
}

int sub_30332(unknown uParam0)
{
    if ((g_U9241._fU148[uParam0] == 7) || (g_U9241._fU148[uParam0] == 9))
    {
        return 1;
    }
    return 0;
}

void sub_30825()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    unknown uVar5;
    unknown[2] uVar6;
    unknown uVar9;
    int iVar10;
    int iVar11;

    array(ref uVar6, 2);
    l_U567 = 0;
    while ((NOT bVar2) AND (NOT bVar3))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref l_U567 );
        if (iVar4 != 0)
        {
            iVar11 = l_U567 - iVar10;
        }
        if (((iVar11 >= 1000) AND (sub_12005())) AND (IS_SCREEN_FADED_IN()))
        {
            TASK_TOGGLE_DUCK( sub_2676(), 0 );
            bVar3 = true;
        }
        else
        {
            switch (iVar4)
            {
                case 0:
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2676(), 1 );
                SET_PLAYER_CONTROL( sub_2633(), 0 );
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                while (NOT sub_12416())
                {
                    WAIT( 0 );
                }
                CLEAR_HELP();
                CLEAR_SMALL_PRINTS();
                sub_2926();
                ALTER_WANTED_LEVEL( sub_2633(), 0 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( sub_2633() );
                SET_WANTED_MULTIPLIER( 0.00000000 );
                REQUEST_MODEL( -999506922 );
                REQUEST_MODEL( -685276541 );
                REQUEST_MODEL( l_U505 );
                REQUEST_CAR_RECORDING( 235 );
                while ((((NOT (HAS_MODEL_LOADED( -999506922 ))) || (NOT (HAS_MODEL_LOADED( l_U505 )))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 235 )))) || (NOT (HAS_MODEL_LOADED( -685276541 ))))
                {
                    WAIT( 0 );
                }
                CLEAR_AREA( 2333.77200000, 83.33680000, 4.80770000, 200.00000000, 1 );
                CREATE_CAR( -685276541, 2346.78900000, 94.05460000, 4.81260000, ref l_U531, 1 );
                SET_CAR_HEADING( l_U531, 181.85050000 );
                CHANGE_CAR_COLOUR( l_U531, 0, 0 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -685276541 );
                CREATE_CHAR( 4, -999506922, 2338.36000000, 90.76200000, 4.81260000, ref l_U527[0], 1 );
                CREATE_CHAR( 4, -999506922, 2340.12000000, 89.27630000, 4.81260000, ref l_U527[1], 1 );
                SET_CHAR_HEADING( l_U527[0], 138.42170000 );
                SET_CHAR_HEADING( l_U527[1], 138.95550000 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U527[0] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U527[1] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U527[0], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U527[1], 1 );
                sub_6011( 3, l_U527[1], "J3_FED", 0 );
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2676() )))
                {
                    WARP_CHAR_INTO_CAR( sub_2676(), l_U506 );
                }
                if (IS_CHAR_IN_ANY_CAR( sub_2676() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_2676(), 2325.50000000, 74.74360000, 5.86385000 );
                }
                SET_CHAR_COORDINATES( sub_2676(), 2325.50000000, 74.74360000, 4.85890000 );
                SET_CHAR_HEADING( sub_2676(), 309.70000000 );
                if (NOT (IS_CAR_DEAD( l_U506 )))
                {
                    SET_CAR_HEADING( l_U506, -98.00000000 );
                    SET_CAR_COORDINATES( l_U506, 2323.53900000, 72.98220000, 4.80770000 );
                    APPLY_FORCE_TO_CAR( l_U506, 1, 0, 0, -1.00000000, 0, 0, 0, 0, 1, 1, 1 );
                    SET_CAR_ENGINE_ON( l_U506, 1, 1 );
                    SET_HELI_BLADES_FULL_SPEED( l_U506 );
                }
                OPEN_SEQUENCE_TASK( ref l_U516 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 2328.67900000, 77.50981000, 4.85890000, 2, 20000, 0.50000000 );
                TASK_ACHIEVE_HEADING( 0, -52.15081000 );
                CLOSE_SEQUENCE_TASK( l_U516 );
                TASK_PERFORM_SEQUENCE( sub_2676(), l_U516 );
                CLEAR_SEQUENCE_TASK( l_U516 );
                OPEN_SEQUENCE_TASK( ref l_U516 );
                TASK_PAUSE( 0, 700 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 2325.00000000, 75.70000000, 5.00000000, 2, 20000, 0.10000000 );
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U506, 20000 );
                CLOSE_SEQUENCE_TASK( l_U516 );
                TASK_PERFORM_SEQUENCE( l_U527[0], l_U516 );
                CLEAR_SEQUENCE_TASK( l_U516 );
                OPEN_SEQUENCE_TASK( ref l_U516 );
                TASK_PAUSE( 0, 500 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 2332.70300000, 80.75470000, 4.71870000, 2, 20000, 0.10000000 );
                CLOSE_SEQUENCE_TASK( l_U516 );
                TASK_PERFORM_SEQUENCE( l_U527[1], l_U516 );
                CLEAR_SEQUENCE_TASK( l_U516 );
                BEGIN_CAM_COMMANDS( ref uVar9 );
                CREATE_CAM( 14, ref uVar6[0] );
                SET_CAM_POS( uVar6[0], 2340.00000000, 90.90000000, 5.00000000 );
                SET_CAM_ROT( uVar6[0], 7.44000000, 0.00000000, 134.00000000 );
                SET_CAM_FOV( uVar6[0], 42.00000000 );
                CREATE_CAM( 14, ref uVar6[1] );
                SET_CAM_POS( uVar6[1], 2340.00000000, 90.90000000, 5.00000000 );
                SET_CAM_ROT( uVar6[1], 7.44000000, 0.00000000, 134.00000000 );
                SET_CAM_FOV( uVar6[1], 36.00000000 );
                CREATE_CAM( 3, ref uVar5 );
                SET_CAM_ACTIVE( uVar6[0], 1 );
                SET_CAM_PROPAGATE( uVar6[0], 1 );
                SET_CAM_ACTIVE( uVar6[1], 1 );
                SET_CAM_PROPAGATE( uVar6[1], 1 );
                SET_CAM_ACTIVE( uVar5, 1 );
                SET_CAM_PROPAGATE( uVar5, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_CAM_INTERP_STYLE_CORE( uVar5, uVar6[0], uVar6[1], 6000, 0 );
                WAIT( 700 );
                DO_SCREEN_FADE_IN( 500 );
                GET_GAME_TIMER( ref iVar10 );
                SETTIMERA( 0 );
                if (NOT (IS_CAR_DEAD( l_U506 )))
                {
                    LOCK_CAR_DOORS( l_U506, 1 );
                }
                iVar4 = 1;
                break;
                case 1:
                GET_SCRIPT_TASK_STATUS( sub_2676(), 29, ref l_U541 );
                if (l_U541 == 7)
                {
                    SET_CAM_POS( uVar6[0], 2331.00600000, 77.90668000, 5.65993400 );
                    SET_CAM_ROT( uVar6[0], 11.56976000, 0.00000000, 105.46670000 );
                    SET_CAM_ACTIVE( uVar6[1], 0 );
                    SET_CAM_PROPAGATE( uVar6[1], 0 );
                    SET_CAM_ACTIVE( uVar5, 0 );
                    SET_CAM_PROPAGATE( uVar5, 0 );
                    SET_CAM_FOV( uVar6[0], 55.00000000 );
                    SET_CAM_FOV( uVar6[1], 48.00000000 );
                    if ((NOT (IS_CHAR_DEAD( l_U527[0] ))) AND (NOT (IS_CAR_DEAD( l_U506 ))))
                    {
                        SET_CHAR_COORDINATES( l_U527[0], 2326.20000000, 81.40000000, 4.71870000 );
                        SET_CHAR_HEADING( l_U527[0], 161.00000000 );
                        OPEN_SEQUENCE_TASK( ref l_U516 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 2325.00000000, 75.70000000, 5.00000000, 2, 20000, 0.10000000 );
                        TASK_ENTER_CAR_AS_DRIVER( 0, l_U506, 20000 );
                        CLOSE_SEQUENCE_TASK( l_U516 );
                        TASK_PERFORM_SEQUENCE( l_U527[0], l_U516 );
                        CLEAR_SEQUENCE_TASK( l_U516 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U527[1] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U527[1] );
                        SET_CHAR_COORDINATES( l_U527[1], 2330.20000000, 79.95000000, 4.71870000 );
                        SET_CHAR_HEADING( l_U527[1], 150.00000000 );
                        TASK_CHAR_SLIDE_TO_COORD( l_U527[1], 2329.53000000, 78.36000000, 5.66962500, 142.00000000, 1.00000000 );
                    }
                    SET_CHAR_COORDINATES( sub_2676(), 2328.67900000, 77.50981000, 4.85890000 );
                    SET_CHAR_HEADING( sub_2676(), -40.00000000 );
                    TASK_LOOK_AT_CHAR( sub_2676(), l_U527[1], 20000, 0 );
                    SETTIMERA( 0 );
                    iVar4 = 2;
                }
                break;
                case 2:
                if (NOT (IS_CHAR_DEAD( l_U527[1] )))
                {
                    if (TIMERA() > 800)
                    {
                        sub_16619( "C3_DELIVER", ref l_U542, 6, 1 );
                        SETTIMERA( 0 );
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                        iVar4 = 3;
                    }
                }
                break;
                case 3:
                if (NOT (sub_29144( l_U542 )))
                {
                    if (((NOT (IS_CHAR_DEAD( l_U527[0] ))) AND (NOT (IS_CHAR_DEAD( l_U527[1] )))) AND (NOT (IS_CAR_DEAD( l_U506 ))))
                    {
                        CLEAR_CHAR_TASKS( l_U527[1] );
                        SET_CHAR_COORDINATES( l_U527[1], 2325.20000000, 70.50000000, 4.71870000 );
                        SET_CHAR_HEADING( l_U527[1], 54.31150000 );
                        CLOSE_ALL_CAR_DOORS( l_U506 );
                        SET_CHAR_COORDINATES( l_U527[0], 2324.94300000, 74.69994000, 4.71870000 );
                        SET_CHAR_HEADING( l_U527[0], 65371 );
                        TASK_ENTER_CAR_AS_PASSENGER( l_U527[1], l_U506, -2, 0 );
                        TASK_ENTER_CAR_AS_DRIVER( l_U527[0], l_U506, -2 );
                        SET_CAM_POS( uVar6[0], 2327.84800000, 74.07270000, 6.63296000 );
                        SET_CAM_ROT( uVar6[0], -3.09540800, -0.00000000, 111.64610000 );
                        SET_CAM_FOV( uVar6[0], 38.00000000 );
                        SETTIMERA( 0 );
                        iVar4 = 4;
                    }
                }
                break;
                case 4:
                if (((NOT (IS_CHAR_DEAD( l_U527[0] ))) AND (NOT (IS_CHAR_DEAD( l_U527[1] )))) AND (NOT (IS_CAR_DEAD( l_U506 ))))
                {
                    if ((IS_CHAR_IN_CAR( l_U527[1], l_U506 )) AND (IS_CHAR_IN_CAR( l_U527[0], l_U506 )))
                    {
                        SET_CAM_POS( uVar6[1], 2335.80600000, 75.99667000, 5.45769100 );
                        SET_CAM_ROT( uVar6[1], 28.68886000, -0.00000000, 100.54550000 );
                        SET_CAM_FOV( uVar6[1], 55.00000000 );
                        SET_CHAR_COORDINATES( sub_2676(), 2333.04600000, 79.55947000, 4.81260000 );
                        SET_CHAR_HEADING( sub_2676(), 125.00000000 );
                        TASK_LOOK_AT_CHAR( l_U527[0], sub_2676(), 1500, 0 );
                        SETTIMERA( 0 );
                        iVar4 = 5;
                    }
                }
                break;
                case 5:
                if (NOT (IS_CAR_DEAD( l_U506 )))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U506 )))
                    {
                        if (TIMERA() > 1000)
                        {
                            SET_CAM_ACTIVE( uVar6[1], 1 );
                            SET_CAM_PROPAGATE( uVar6[1], 1 );
                            SET_CAM_ACTIVE( uVar5, 1 );
                            SET_CAM_PROPAGATE( uVar5, 1 );
                            SET_CAM_INTERP_STYLE_CORE( uVar5, uVar6[0], uVar6[1], 5000, 0 );
                            FREEZE_CAR_POSITION( l_U506, 0 );
                            START_PLAYBACK_RECORDED_CAR( l_U506, 235 );
                        }
                    }
                }
                if (TIMERA() > 5000)
                {
                    bVar2 = true;
                }
                break;
            }
        }
    }
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    if (DOES_CAM_EXIST( uVar5 ))
    {
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_CAM_ACTIVE( uVar5, 0 );
        SET_CAM_PROPAGATE( uVar5, 0 );
        SET_CAM_ACTIVE( uVar6[0], 0 );
        SET_CAM_PROPAGATE( uVar6[0], 0 );
        SET_CAM_ACTIVE( uVar6[1], 0 );
        SET_CAM_PROPAGATE( uVar6[1], 0 );
        DESTROY_CAM( uVar5 );
        DESTROY_CAM( uVar6[0] );
        DESTROY_CAM( uVar6[1] );
        END_CAM_COMMANDS( ref uVar9 );
    }
    SET_CHAR_COORDINATES( sub_2676(), 2333.04600000, 79.55947000, 4.81260000 );
    SET_CHAR_HEADING( sub_2676(), 125.00000000 );
    TASK_CLEAR_LOOK_AT( sub_2676() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_2676(), 0 );
    if (NOT (IS_CAR_DEAD( l_U506 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U506 ))
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U506 );
            GET_CAR_COORDINATES( l_U506, ref l_U532._fU0, ref l_U532._fU4, ref l_U532._fU8 );
            SET_CAR_COORDINATES( l_U506, l_U532._fU0, l_U532._fU4, l_U532._fU8 + 100.00000000 );
            WAIT( 0 );
        }
    }
    if (DOES_CHAR_EXIST( l_U527[0] ))
    {
        DELETE_CHAR( ref l_U527[0] );
    }
    if (DOES_CHAR_EXIST( l_U527[1] ))
    {
        DELETE_CHAR( ref l_U527[1] );
    }
    if (DOES_VEHICLE_EXIST( l_U506 ))
    {
        DELETE_CAR( ref l_U506 );
    }
    SET_CAM_BEHIND_PED( sub_2676() );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_2633(), 1 );
    sub_2889();
    CLEAR_SMALL_PRINTS();
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_34438()
{
    g_U64660 = 1;
    sub_34455();
    CLEAR_WANTED_LEVEL( sub_2633() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 50 );
    sub_3342( 12, "C3_PASS", "C3AUD", 0 );
    sub_2459();
    return;
}

void sub_34455()
{
    sub_34464();
    return;
}

void sub_34464()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_34482();
    sub_34541( iVar2, iVar3, iVar4 );
    return;
}

void sub_34482()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_34541(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 12;
    sub_34574( iVar5, uParam0, uParam1, uParam2, "Contact_13" );
    return;
}

void sub_34574(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_34670( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_34670( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_34670( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_34670( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_34670( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_34670( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_35247( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((NOT g_U10981[iParam0]._fU144._fU12) AND (g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_35644( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_35644( 0, 4 );
            }
        }
    }
    if (NOT (sub_35733( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2633(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2633() );
    }
    sub_1557();
    bVar27 = true;
    uVar28 = sub_35247( iParam0, iVar7 );
    uVar29 = sub_1014( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 5) || (iVar30 == 6))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_45109( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_45539();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_45624( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_45681( iParam0 );
                sub_45720( 0 );
                sub_1455( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_45828();
        }
    }
    if (bParam2)
    {
        sub_45539();
        sub_45916();
        sub_45720( 0 );
    }
    if (bParam3)
    {
        sub_45539();
        sub_45956();
        sub_45720( 0 );
        sub_1455( uVar29, 0 );
    }
    sub_901();
    return;
}

void sub_34670(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_35247(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1413( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_35644(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_35733(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_35941( uParam1 );
        break;
        case 1:
        bVar8 = sub_38019( uParam1 );
        break;
        case 2:
        bVar8 = sub_38245( uParam1 );
        break;
        case 3:
        bVar8 = sub_38395( uParam1 );
        break;
        case 4:
        bVar8 = sub_38673( uParam1 );
        break;
        case 5:
        bVar8 = sub_38976( uParam1 );
        break;
        case 6:
        bVar8 = sub_39175( uParam1 );
        break;
        case 7:
        bVar8 = sub_39401( uParam1 );
        break;
        case 8:
        bVar8 = sub_39636( uParam1 );
        break;
        case 9:
        bVar8 = sub_40011( uParam1 );
        break;
        case 10:
        bVar8 = sub_40258( uParam1 );
        break;
        case 11:
        bVar8 = sub_40397( uParam1 );
        break;
        case 12:
        bVar8 = sub_40696( uParam1 );
        break;
        case 13:
        bVar8 = sub_40924( uParam1 );
        break;
        case 14:
        bVar8 = sub_41211( uParam1 );
        break;
        case 15:
        bVar8 = sub_41493( uParam1 );
        break;
        case 16:
        bVar8 = sub_41775( uParam1 );
        break;
        case 17:
        bVar8 = sub_41976( uParam1 );
        break;
        case 18:
        bVar8 = sub_42049( uParam1 );
        break;
        case 19:
        bVar8 = sub_42263( uParam1 );
        break;
        case 20:
        bVar8 = sub_42516( uParam1 );
        break;
        case 21:
        bVar8 = sub_42763( uParam1 );
        break;
        case 22:
        bVar8 = sub_42964( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_37624( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_35247( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_43287( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_35941(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_36220( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_36220( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_36220( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_36220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_36220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_36220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_36220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_36220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_36220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_36220( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_36220( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_36220( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_36220( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_36220( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_36220( iVar3, 0, sub_37502(), sub_37768(), 0, 0 );
        break;
        default:
        sub_37927( "Friend 1", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Friend 1", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_36220(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_36231( uParam1 );
    sub_36405( uParam0, 0, uParam2 );
    sub_36405( uParam0, 1, uParam3 );
    sub_36405( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_34482();
    return;
}

void sub_36231(unknown uParam0)
{
    ADD_SCORE( sub_2633(), uParam0 );
    sub_36256( uParam0 );
    return;
}

void sub_36256(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1413( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_36405(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_36562( uParam0 );
    }
    return;
}

void sub_36562(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if (((((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_37502()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_37624( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_37624(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_37768()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_37624( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_37927(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_38019(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36220( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_37927( "Contact 2", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 2", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38245(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_36220( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_37927( "Girl 3", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Girl 3", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38395(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_36220( iVar3, 0, sub_37502(), sub_37768(), 0, 0 );
        break;
        default:
        sub_37927( "Friend 4", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Friend 4", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38673(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36220( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_36220( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_36220( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_36220( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_37927( "Contact 5", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 5", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38976(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_37927( "Contact 7", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 7", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39175(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36220( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_37927( "Contact 7b", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 7b", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39401(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_36220( iVar3, 0, sub_37502(), sub_37768(), 0, 0 );
        break;
        default:
        sub_37927( "Friend 8", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Friend 8", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39636(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_36220( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_36220( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_36220( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_36220( iVar3, 0, sub_37502(), sub_37768(), 0, 0 );
        break;
        default:
        sub_37927( "Friend 9", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Friend 9", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40011(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_36220( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_36220( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_37927( "Contact 10", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_37927( "Contact 10", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40258(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_37927( "Girl 11", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Girl 11", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40397(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36220( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_36220( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_36220( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_36220( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_36220( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_37927( "Contact 12", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 12", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40696(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36220( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_37927( "Contact 13", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 13", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40924(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_36220( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_36220( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_36220( iVar3, 0, sub_37502(), sub_37768(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_37927( "Friend 15", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Friend 15", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41211(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36220( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_36220( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_36220( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_37927( "Contact 16", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 16", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41493(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_36220( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_36220( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_36220( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_37927( "Contact 18", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 18", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41775(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_37927( "Contact 19", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 19", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41976(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_37927( "Girl 20", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42049(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_37927( "Contact 21", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 21", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42263(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36220( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_36220( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_37927( "Contact 22", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 22", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42516(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_36220( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_36220( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_36220( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_37927( "Contact 24", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 24", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42763(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_36220( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_36220( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_37927( "Contact 25", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_37927( "Contact 25", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_42964(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_36220( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_37927( "Girl 26", 1 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_37927( "Girl 26", 0 );
        sub_36220( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_43287(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_43335( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_44066( iParam1 );
    }
    return;
}

int sub_43335(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_43475( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_43475(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_43657( 0 );
    return;
}

void sub_43657(boolean bParam0)
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
        sub_43912();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_43912()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_44066(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_44399( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_44399( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_44399( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_44399( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_44399( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_44399( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_44399( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_44399( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_44399( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_44399( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_44399( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_44399( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_44399( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_44399( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_44399( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_44399( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_44399( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_44399( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_44399( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_44399(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_45109(unknown uParam0, unknown uParam1)
{
    sub_45128( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_45128(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
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

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_45539()
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

int sub_45624(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_45681(unknown uParam0)
{
    sub_800();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_45720(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_45828()
{
    sub_45837();
    return;
}

void sub_45837()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_45916()
{
    sub_45837();
    return;
}

void sub_45956()
{
    sub_45837();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_46254()
{
    if (l_U718 == 3)
    {
        if (l_U562)
        {
            if (((NOT (IS_CHAR_DEAD( l_U521[0] ))) AND (NOT (IS_CHAR_DEAD( l_U521[1] )))) AND (NOT (IS_CHAR_DEAD( l_U526 ))))
            {
                if (((((((((((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U526, sub_2676(), 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U521[0], sub_2676(), 0 ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U521[1], sub_2676(), 0 ))) || (IS_PED_RAGDOLL( l_U521[0] ))) || (IS_PED_RAGDOLL( l_U521[1] ))) || ((IS_PLAYER_TARGETTING_CHAR( sub_2633(), l_U526 )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U526, sub_2676() )))) || ((IS_PLAYER_TARGETTING_CHAR( sub_2633(), l_U521[0] )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U521[0], sub_2676() )))) || ((IS_PLAYER_TARGETTING_CHAR( sub_2633(), l_U521[1] )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U521[1], sub_2676() )))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U521[0], 49 ))) || (IS_SNIPER_BULLET_IN_AREA( 64811, 338, 0, 64826, 350, 10 ))) || ((IS_EXPLOSION_IN_AREA( -1, 64811, 338, 0, 64826, 350, 10 )) AND (NOT l_U552)))
                {
                    if (NOT l_U556)
                    {
                        sub_22736();
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2676(), 64823, 350, 4, 30, 30, 30, 0 ))
                        {
                            sub_16619( "C3_SPOOK_2c", ref l_U542, 6, 1 );
                        }
                        else
                        {
                            sub_16619( "C3_SPOOK_2c", ref l_U542, 6, 1 );
                        }
                        l_U556 = 1;
                    }
                    sub_14078();
                }
            }
            else if (NOT l_U552)
            {
                sub_14078();
            }
            if (NOT (IS_CAR_DEAD( l_U506 )))
            {
                if ((IS_PLAYBACK_GOING_ON_FOR_CAR( l_U506 )) AND ((FIND_TIME_POSITION_IN_RECORDING( l_U506 )) > 175000.00000000))
                {
                    if ((IS_CHAR_IN_AREA_3D( sub_2676(), -725.50000000, 329.00000000, 1.00000000, -695.50000000, 385.00000000, 8.00000000, 0 )) || (l_U552))
                    {
                        if (l_U552)
                        {
                            ;
                        }
                        if (NOT (IS_CHAR_DEAD( l_U509 )))
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U506 );
                            TASK_HELI_MISSION( l_U509, l_U506, 0, 0, 64747, 642, 86, 4, 25.00000000, 10, -1, 70, 20 );
                        }
                        sub_22736();
                        sub_16619( "C3_SPOOK_1", ref l_U542, 4, 1 );
                        sub_47003( 2 );
                        sub_3254( 2 );
                    }
                }
            }
        }
    }
    else if (l_U718 == 4)
    {
        if (((((NOT (IS_CHAR_DEAD( l_U521[0] ))) AND (NOT (IS_CHAR_DEAD( l_U521[1] )))) AND (NOT (IS_CHAR_DEAD( l_U526 )))) AND (NOT (IS_CHAR_DEAD( l_U509 )))) AND (NOT (IS_CHAR_DEAD( l_U511 ))))
        {
            if ((((((((((((((((((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U526, sub_2676(), 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U521[0], sub_2676(), 0 ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U521[1], sub_2676(), 0 ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U509, sub_2676(), 0 ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U511, sub_2676(), 0 ))) || (IS_PED_RAGDOLL( l_U521[0] ))) || (IS_PED_RAGDOLL( l_U521[1] ))) || ((IS_PLAYER_TARGETTING_CHAR( sub_2633(), l_U526 )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U526, sub_2676() )))) || ((IS_PLAYER_TARGETTING_CHAR( sub_2633(), l_U521[0] )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U521[0], sub_2676() )))) || ((IS_PLAYER_TARGETTING_CHAR( sub_2633(), l_U521[1] )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U521[1], sub_2676() )))) || ((IS_PLAYER_TARGETTING_CHAR( sub_2633(), l_U509 )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U509, sub_2676() )))) || ((IS_PLAYER_TARGETTING_CHAR( sub_2633(), l_U511 )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U511, sub_2676() )))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U521[0], 49 ))) || (IS_CHAR_RESPONDING_TO_EVENT( l_U511, 49 ))) || (IS_CHAR_IN_AREA_3D( sub_2676(), -725.50000000, 329.00000000, 1.00000000, -695.50000000, 385.00000000, 8.00000000, 0 ))) || ((IS_CHAR_IN_AREA_2D( sub_2676(), -719.90000000, 341.40000000, -692.00000000, 372.10000000, 0 )) AND (l_U579))) || (IS_SNIPER_BULLET_IN_AREA( 64811, 338, 0, 64826, 350, 10 ))) || ((IS_EXPLOSION_IN_AREA( -1, -725.50000000, 329.00000000, 1.00000000, -695.50000000, 385.00000000, 8.00000000 )) AND (NOT l_U552)))
            {
                if (NOT l_U556)
                {
                    sub_22736();
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2676(), 64823, 350, 4, 30, 30, 30, 0 ))
                    {
                        sub_16619( "C3_SPOOK_2c", ref l_U542, 6, 1 );
                    }
                    else
                    {
                        sub_16619( "C3_SPOOK_2c", ref l_U542, 6, 1 );
                    }
                    l_U556 = 1;
                }
                sub_14078();
            }
        }
        else if (NOT l_U552)
        {
            if (NOT l_U556)
            {
                sub_22736();
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_2676(), 64823, 350, 4, 30, 30, 30, 0 ))
                {
                    sub_16619( "C3_SPOOK_2c", ref l_U542, 6, 1 );
                }
                else
                {
                    sub_16619( "C3_SPOOK_2c", ref l_U542, 6, 1 );
                }
                l_U556 = 1;
            }
            sub_14078();
        }
        if (NOT (IS_CAR_DEAD( l_U506 )))
        {
            GET_CAR_COORDINATES( l_U506, ref l_U532._fU0, ref l_U532._fU4, ref l_U532._fU8 );
            if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2676(), l_U532._fU0, l_U532._fU4, l_U532._fU8, 6.00000000, 6.00000000, 6.00000000, 0 )) AND (NOT l_U555))
            {
                l_U555 = 1;
                if (NOT l_U552)
                {
                    sub_14078();
                }
            }
        }
        if (((NOT (IS_CHAR_DEAD( l_U509 ))) AND (NOT (IS_CHAR_DEAD( l_U511 )))) AND (NOT (IS_CAR_DEAD( l_U506 ))))
        {
            if (((TIMERB() > 60000) AND (NOT l_U554)) AND (l_U539))
            {
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                TASK_ENTER_CAR_AS_DRIVER( l_U509, l_U506, 30000 );
                SET_NEXT_DESIRED_MOVE_STATE( 2 );
                TASK_ENTER_CAR_AS_PASSENGER( l_U511, l_U506, 30000, 0 );
                if ((NOT (IS_CHAR_DEAD( l_U526 ))) AND (NOT (IS_CAR_DEAD( l_U506 ))))
                {
                    CLEAR_CHAR_TASKS( l_U526 );
                    GET_CAR_COORDINATES( l_U506, ref l_U532._fU0, ref l_U532._fU4, ref l_U532._fU8 );
                    TASK_TURN_CHAR_TO_FACE_COORD( l_U526, l_U532._fU0, l_U532._fU4, l_U532._fU8 );
                }
                PRINT_NOW( "CIA5_INSTR4", 7500, 0 );
                l_U554 = 1;
            }
        }
        if (((NOT (IS_CHAR_DEAD( l_U509 ))) AND (NOT (IS_CHAR_DEAD( l_U511 )))) AND (NOT (IS_CAR_DEAD( l_U506 ))))
        {
            if (((IS_CHAR_IN_CAR( l_U509, l_U506 )) AND (IS_CHAR_IN_CAR( l_U511, l_U506 ))) AND (l_U554))
            {
                sub_47003( 0 );
                sub_3254( 0 );
            }
        }
    }
    return;
}

void sub_47003(int iParam0)
{
    if ((NOT (IS_CHAR_DEAD( l_U509 ))) AND (NOT (IS_CAR_DEAD( l_U506 ))))
    {
        LOCK_CAR_DOORS( l_U506, 2 );
        TASK_HELI_MISSION( l_U509, l_U506, 0, 0, -877.87000000, 2381.50000000, 147.40000000, 4, 25.00000000, 10, -1, 100, 40 );
    }
    if (NOT (IS_CHAR_DEAD( l_U509 )))
    {
        SET_CHAR_KEEP_TASK( l_U509, 1 );
    }
    if (NOT (IS_CHAR_DEAD( l_U511 )))
    {
        SET_CHAR_KEEP_TASK( l_U511, 1 );
    }
    for ( l_U548 = 0; l_U548 < 4; l_U548++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U521[l_U548] )))
        {
            if (iParam0 == 2)
            {
                TASK_COMBAT( l_U521[l_U548], sub_2676() );
            }
            else
            {
                TASK_PAUSE( l_U521[l_U548], 30000 );
            }
            SET_CHAR_KEEP_TASK( l_U521[l_U548], 1 );
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U526 )))
    {
        if (iParam0 == 2)
        {
            TASK_COMBAT( l_U526, sub_2676() );
        }
        else
        {
            TASK_PAUSE( l_U526, 29000 );
        }
        SET_CHAR_KEEP_TASK( l_U526, 1 );
    }
    l_U558 = 1;
    return;
}

void sub_48836()
{
    switch (l_U718)
    {
        case 1:
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2676() )))
        {
            REQUEST_MODEL( 1349725314 );
            while (NOT (HAS_MODEL_LOADED( 1349725314 )))
            {
                WAIT( 0 );
            }
            CREATE_CAR( 1349725314, 163.89200000, 288.15880000, 10.83690000, ref l_U515, 1 );
            SET_CAR_HEADING( l_U515, 265.63600000 );
            SET_CAR_COORDINATES( l_U515, 163.89200000, 288.15880000, 10.83690000 );
            WARP_CHAR_INTO_CAR( sub_2676(), l_U515 );
            SET_CAM_BEHIND_PED( sub_2676() );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U515 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1349725314 );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_2676(), 163.89200000, 288.15880000, 10.83690000 );
            SET_CHAR_HEADING( sub_2676(), 265.63600000 );
            SET_CAM_BEHIND_PED( sub_2676() );
        }
        break;
        case 3:
        if (NOT (IS_CAR_DEAD( l_U506 )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U506 ))
            {
                sub_12160( l_U506, 175000.00000000 );
            }
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2676() )))
        {
            REQUEST_MODEL( 1349725314 );
            while (NOT (HAS_MODEL_LOADED( 1349725314 )))
            {
                WAIT( 0 );
            }
            CREATE_CAR( 1349725314, -590.78280000, 337.08070000, 5.62000000, ref l_U515, 1 );
            SET_CAR_HEADING( l_U515, 79.00000000 );
            SET_CAR_COORDINATES( l_U515, -645.04130000, 342.79790000, 3.50240000 );
            WARP_CHAR_INTO_CAR( sub_2676(), l_U515 );
            SET_CAM_BEHIND_PED( sub_2676() );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U515 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1349725314 );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_2676(), -590.78280000, 337.08070000, 5.62000000 );
            SET_CHAR_HEADING( sub_2676(), 79.00000000 );
            SET_CAM_BEHIND_PED( sub_2676() );
        }
        break;
        case 5:
        if (NOT (IS_CAR_DEAD( l_U506 )))
        {
            SET_CAR_COORDINATES( l_U506, 2253.13300000, 85.67090000, 42.82570000 );
            SET_CAR_HEADING( l_U506, 270.00000000 );
            SET_CAM_BEHIND_PED( sub_2676() );
        }
        break;
        case 6:
        if (NOT (IS_CAR_DEAD( l_U506 )))
        {
            SET_CAR_COORDINATES( l_U506, 2323.53900000, 72.98220000, 5.61260000 );
            SET_CAR_HEADING( l_U506, -98.00000000 );
            FREEZE_CAR_POSITION( l_U506, 1 );
            WAIT( 1000 );
            if (NOT (IS_CAR_DEAD( l_U506 )))
            {
                FREEZE_CAR_POSITION( l_U506, 0 );
            }
        }
        break;
        default: break;
    }
    return;
}
