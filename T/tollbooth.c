void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U8 = {0.00000000, 0.00000000, 0.00000000};
    l_U14 = {1.00000000, -4.00000000, 0.00000000};
    l_U34 = 0;
    l_U35 = 0;
    l_U36 = 0;
    l_U37 = 0;
    l_U40 = 0;
    l_U42 = 0;
    l_U43 = "TOLLBOOTH_BARRIER_RAISE";
    l_U44 = "TOLLBOOTH_BARRIER_LOWER";
    l_U45 = "TOLLBOOTH_COINS_IN";
    l_U46 = -1;
    l_U47 = -1;
    l_U48 = -1;
    l_U49 = -1;
    l_U50 = 0;
    l_U51 = 0;
    l_U52 = 0;
    l_U54 = 0;
    l_U56 = 1;
    l_U11 = {l_U57._fU4[0]};
    l_U32 = l_U57._fU68[0];
    while (sub_266())
    {
        WAIT( 0 );
    }
    CREATE_OBJECT_NO_OFFSET( -1341473171, l_U11._fU0, l_U11._fU4, l_U11._fU8, ref l_U20, 1 );
    SET_OBJECT_HEADING( l_U20, l_U32 );
    SET_OBJECT_DYNAMIC( l_U20, 0 );
    SET_OBJECT_COLLISION( l_U20, 0 );
    FREEZE_OBJECT_POSITION( l_U20, 1 );
    SET_OBJECT_VISIBLE( l_U20, 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    GET_OBJECT_COORDINATES( l_U20, ref l_U11._fU0, ref l_U11._fU4, ref l_U11._fU8 );
    sub_458();
    sub_530();
    while (true)
    {
        WAIT( 0 );
        sub_561();
        if (IS_PLAYER_PLAYING( sub_1277() ))
        {
            sub_763();
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1277(), 0 )))
            {
                if (NOT l_U55)
                {
                    sub_2875();
                }
            }
            else
            {
                l_U55 = 1;
            }
            if (DOES_OBJECT_EXIST( l_U20 ))
            {
                GET_OBJECT_COORDINATES( l_U20, ref l_U11._fU0, ref l_U11._fU4, ref l_U11._fU8 );
                GET_OBJECT_HEADING( l_U20, ref l_U53 );
                SET_OBJECT_DYNAMIC( l_U20, 0 );
                if ((IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()) AND (NOT (sub_3063( l_U20 ))))
                {
                    if (IS_VEH_DRIVEABLE( l_U23 ))
                    {
                        if (DOES_OBJECT_EXIST( l_U22 ))
                        {
                            if (NOT sub_3225())
                            {
                                sub_3292();
                            }
                            sub_763();
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( sub_772() )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_772() ))
                        {
                            if (NOT sub_1046())
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_772(), l_U11._fU0, l_U11._fU4, l_U11._fU8, 50.00000000, 50.00000000, 10.00000000, 1 ))
                                {
                                    if (g_U9890 != 9)
                                    {
                                        l_U42 = g_U9890;
                                        g_U9890 = 9;
                                    }
                                }
                                else if (g_U9890 == 9)
                                {
                                    g_U9890 = l_U42;
                                }
                            }
                        }
                    }
                    switch (l_U0)
                    {
                        case 0:
                        if (sub_3722())
                        {
                            sub_3953( l_U20 );
                            sub_4338( l_U20 );
                            l_U0 = 2;
                        }
                        break;
                        case 2:
                        sub_1698();
                        sub_4551();
                        if (NOT (IS_CHAR_INJURED( l_U25 )))
                        {
                            if (DOES_OBJECT_EXIST( l_U22 ))
                            {
                                if (HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED_BY_CHAR( l_U17._fU0, l_U17._fU4, l_U17._fU8, 3.00000000, -1295524692, sub_772() ))
                                {
                                    if (NOT (sub_846( sub_772() )))
                                    {
                                        CLEAR_CHAR_TASKS( sub_772() );
                                    }
                                }
                                else if (NOT sub_3225())
                                {
                                    if (NOT (IS_CHAR_INJURED( sub_772() )))
                                    {
                                        if (sub_4979())
                                        {
                                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_772(), ref l_U23 );
                                        }
                                        else if (IS_CAR_DEAD( l_U23 ))
                                        {
                                            GET_RANDOM_CAR_FRONT_BUMPER_IN_SPHERE_NO_SAVE( l_U17._fU0, l_U17._fU4, l_U17._fU8, 5.00000000, 0, 0, ref l_U23, 0 );
                                        }
                                    }
                                    if (IS_VEH_DRIVEABLE( l_U23 ))
                                    {
                                        sub_5439( "IF IS_VEH_DRIVEABLE(boothCar)\n" );
                                        if (sub_5467( l_U23, l_U31, 15.00000000 ))
                                        {
                                            if ((IS_CHAR_IN_CAR( sub_772(), l_U23 )) AND (NOT (IS_CHAR_IN_ANY_HELI( sub_772() ))))
                                            {
                                                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1277(), 0 )))
                                                {
                                                    if (sub_1046())
                                                    {
                                                        sub_5716();
                                                        if (sub_5831( l_U23 ))
                                                        {
                                                            if (sub_846( sub_772() ))
                                                            {
                                                                l_U0 = 3;
                                                            }
                                                            else if (sub_5961( 5 ))
                                                            {
                                                                sub_6034( l_U23 );
                                                                sub_6093( sub_772(), l_U23 );
                                                                l_U0 = 3;
                                                            }
                                                            else if (NOT l_U51)
                                                            {
                                                                PRINT_HELP( "TOLCASH" );
                                                                SAY_AMBIENT_SPEECH( l_U25, "TOLL_PAID_NO", 1, 0, 0 );
                                                                l_U51 = 1;
                                                            };;;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        l_U52 = 1;
                                                        sub_5439( "IF NOT isPlayerAbleToDriveCar()\n" );
                                                        l_U36 = 1;
                                                        l_U0 = 3;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                GET_DRIVER_OF_CAR( l_U23, ref l_U26 );
                                                if (sub_846( l_U26 ))
                                                {
                                                    TASK_CAR_TEMP_ACTION( l_U26, l_U23, 1, 2500 );
                                                    l_U36 = 1;
                                                    l_U0 = 3;
                                                }
                                                else
                                                {
                                                    sub_6034( l_U23 );
                                                    sub_6093( l_U26, l_U23 );
                                                    l_U36 = 1;
                                                    l_U0 = 3;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            sub_5439( "IF NOT isCarHeadingAcceptable(boothCar, fArmH, 15.0)\n" );
                                        }
                                    }
                                }
                            }
                            else
                            {
                                l_U40 = 1;
                            }
                        }
                        break;
                        case 3:
                        if (l_U36)
                        {
                            sub_1698();
                        }
                        switch (l_U1)
                        {
                            case 0:
                            sub_5439( "armStage = openArm\n" );
                            if (TIMERA() > 1200)
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U20, 0.00000000, -1.00000000, 0.00000000, ref l_U2._fU0, ref l_U2._fU4, ref l_U2._fU8 );
                                SETTIMERA( 0 );
                            }
                            if (l_U36)
                            {
                                sub_5439( "IF bAmbientPedUse\n" );
                                if (IS_VEH_DRIVEABLE( l_U23 ))
                                {
                                    GET_DRIVER_OF_CAR( l_U23, ref l_U26 );
                                    if (NOT (IS_CHAR_INJURED( l_U26 )))
                                    {
                                        if (sub_846( l_U26 ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U26, 48, ref l_U38 );
                                            if (l_U38 == 7)
                                            {
                                                sub_656();
                                                l_U1 = 1;
                                            }
                                        }
                                        else
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U26, 29, ref l_U38 );
                                            if (l_U38 == 7)
                                            {
                                                sub_656();
                                                l_U1 = 1;
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_INJURED( sub_772() )))
                            {
                                GET_SCRIPT_TASK_STATUS( sub_772(), 80, ref l_U38 );
                                if (l_U38 == 7)
                                {
                                    sub_656();
                                    l_U1 = 1;
                                }
                            }
                            break;
                            case 1:
                            sub_5439( "armStage = armOpen\n" );
                            if (NOT l_U35)
                            {
                                sub_7517();
                                l_U35 = 1;
                            }
                            if (l_U36)
                            {
                                sub_5439( "armStage = armOpen & IF bAmbientPedUse\n" );
                                if (IS_VEH_DRIVEABLE( l_U23 ))
                                {
                                    if (DOES_OBJECT_EXIST( l_U22 ))
                                    {
                                        if (NOT (LOCATE_CAR_2D( l_U23, l_U17._fU0, l_U17._fU4, 10.00000000, 10.00000000, 0 )))
                                        {
                                            l_U1 = 2;
                                            l_U35 = 0;
                                            l_U23 = nil;
                                            l_U24 = nil;
                                            l_U52 = 0;
                                        }
                                        else
                                        {
                                            sub_7899();
                                        }
                                    }
                                }
                                else
                                {
                                    l_U1 = 2;
                                    l_U35 = 0;
                                    l_U36 = 0;
                                    l_U23 = nil;
                                    l_U24 = nil;
                                    l_U52 = 0;
                                }
                            }
                            else if (NOT (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_772(), l_U22, 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                l_U1 = 2;
                                l_U35 = 0;
                                l_U36 = 0;
                                l_U23 = nil;
                                l_U24 = nil;
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TOLNTRO" )))
                                {
                                    sub_1457( "TOLLHLP" );
                                }
                                else
                                {
                                    sub_1457( "TOLNTRO" );
                                }
                            }
                            break;
                            case 2:
                            sub_5439( "armStage = closeArm\n" );
                            if (g_U9890 == 9)
                            {
                                g_U9890 = l_U42;
                            }
                            sub_2589();
                            l_U1 = 0;
                            l_U0 = 2;
                            break;
                        }
                        break;
                    }
                }
                else if (l_U40)
                {
                    if (NOT (IS_CHAR_INJURED( l_U25 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U25, "TOLL_COME_BACK", 1, 0, 0 );
                    }
                }
                PRINTSTRING( "Toll Booth Script Killed" );
                PRINTNL();
                sub_1415();;
            }
            else if (l_U40)
            {
                if (NOT (IS_CHAR_INJURED( l_U25 )))
                {
                    SAY_AMBIENT_SPEECH( l_U25, "TOLL_COME_BACK", 1, 0, 0 );
                }
            }
            PRINTSTRING( "Toll Booth Script Killed" );
            PRINTNL();
            sub_1415();;
        }
    }
    return;
}

void sub_266()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MultiTutorial" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_458()
{
    vector vVar2;

    vVar2 = {1363.24500000, 999.26650000, 12.61550000};
    l_U29 = VDIST( l_U11, vVar2 );
    if (l_U29 < 5.00000000)
    {
        l_U49 = 0;
    }
    return;
}

void sub_530()
{
    return;
}

void sub_561()
{
    if (g_U9153)
    {
        sub_458();
        if (l_U49 == 0)
        {
            if (NOT l_U50)
            {
                if (DOES_OBJECT_EXIST( l_U22 ))
                {
                    l_U8._fU4 = 86.00000000;
                    SET_OBJECT_ROTATION( l_U22, 0.00000000, l_U8._fU4, l_U30 );
                    sub_656();
                    l_U50 = 1;
                }
            }
        }
    }
    else if (l_U50)
    {
        sub_2589();
        l_U50 = 0;
    }
    return;
}

void sub_656()
{
    if (DOES_OBJECT_EXIST( l_U22 ))
    {
        l_U46 = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( l_U46, l_U43, l_U22 );
        SET_OBJECT_COLLISION( l_U22, 0 );
        while (l_U8._fU4 <= 84.00000000)
        {
            WAIT( 0 );
            l_U8._fU4 += 3.00000000;
            sub_763();
            SET_OBJECT_ROTATION( l_U22, 0.00000000, l_U8._fU4, l_U30 );
            if (l_U36)
            {
                sub_1698();
            }
        }
        SET_OBJECT_COLLISION( l_U22, 1 );
        STOP_SOUND( l_U46 );
        RELEASE_SOUND_ID( l_U46 );
        l_U46 = -1;
    }
    return;
}

void sub_763()
{
    if (NOT (IS_CHAR_DEAD( sub_772() )))
    {
        if (DOES_OBJECT_EXIST( l_U22 ))
        {
            if (NOT (sub_846( sub_772() )))
            {
                if ((HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED_BY_CHAR( l_U17._fU0, l_U17._fU4, l_U17._fU8, 3.00000000, -1295524692, sub_772() )) || (l_U40))
                {
                    CLEAR_CHAR_TASKS( sub_772() );
                    ALTER_WANTED_LEVEL_NO_DROP( sub_1277(), 1 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_1277() );
                    if (NOT (IS_CHAR_INJURED( l_U25 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U25, "TOLL_COME_BACK", 1, 0, 0 );
                    }
                    PRINTSTRING( "Toll Booth Script Killed" );
                    PRINTNL();
                    sub_1415();
                }
            }
        }
    }
    return;
}

void sub_772()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_846(int iParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (((((((((IS_CAR_MODEL( uVar3, 1171614426 )) || (IS_CAR_MODEL( uVar3, 1127131465 ))) || (IS_CAR_MODEL( uVar3, 1938952078 ))) || (IS_CAR_MODEL( uVar3, 148777611 ))) || (IS_CAR_MODEL( uVar3, 1911513875 ))) || (IS_CAR_MODEL( uVar3, 2046537925 ))) || (IS_CAR_MODEL( uVar3, -350085182 ))) || (IS_CAR_MODEL( uVar3, -1900572838 ))) || (IS_CAR_MODEL( uVar3, -1627000575 )))
            {
                if (iParam0 == sub_772())
                {
                    if (sub_1046())
                    {
                        return 1;
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_1046()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( sub_772() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_772() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_772(), ref uVar2 );
            if ((IS_VEH_DRIVEABLE( uVar2 )) AND (NOT (IS_CAR_ON_FIRE( uVar2 ))))
            {
                GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
                if (NOT (IS_CAR_MODEL( uVar2, 1491375716 )))
                {
                    if (iVar3 == sub_772())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_1277()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1415()
{
    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TOLNTRO" )))
    {
        sub_1457( "TOLLHLP" );
    }
    else
    {
        sub_1457( "TOLNTRO" );
    }
    REMOVE_ANIMS( "AMB@TOLLBOOTH" );
    if (l_U42 != 0)
    {
        g_U9890 = 0;
    }
    if (l_U47 != -1)
    {
        STOP_SOUND( l_U47 );
        RELEASE_SOUND_ID( l_U47 );
    }
    if (l_U46 != -1)
    {
        STOP_SOUND( l_U46 );
        RELEASE_SOUND_ID( l_U46 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1457(unknown uParam0)
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

void sub_1698()
{
    if (NOT (IS_CHAR_DEAD( sub_772() )))
    {
        if (DOES_OBJECT_EXIST( l_U21 ))
        {
            if (sub_1046())
            {
                if (LOCATE_CHAR_IN_CAR_OBJECT_3D( sub_772(), l_U21, 1.50000000, 1.50000000, 1.50000000, 0 ))
                {
                    if (l_U40 == 0)
                    {
                        l_U40 = 1;
                        if (NOT (IS_CHAR_INJURED( l_U25 )))
                        {
                            SAY_AMBIENT_SPEECH( l_U25, "TOLL_COME_BACK", 1, 0, 0 );
                        }
                    }
                }
                if (NOT (HAS_OBJECT_BEEN_DAMAGED( l_U22 )))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, -6.00000000, 0.00000000, 0.00000000, ref l_U2._fU0, ref l_U2._fU4, ref l_U2._fU8 );
                    if (LOCATE_CHAR_IN_CAR_3D( sub_772(), l_U2._fU0, l_U2._fU4, l_U2._fU8, 1.50000000, 1.50000000, 2.00000000, 0 ))
                    {
                        if (l_U40 == 0)
                        {
                            l_U40 = 1;
                            if (NOT (IS_CHAR_INJURED( l_U25 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U25, "TOLL_COME_BACK", 1, 0, 0 );
                            }
                            SETTIMERB( 0 );
                        }
                    }
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, -4.00000000, 0.00000000, 0.00000000, ref l_U2._fU0, ref l_U2._fU4, ref l_U2._fU8 );
                    if (LOCATE_CHAR_IN_CAR_3D( sub_772(), l_U2._fU0, l_U2._fU4, l_U2._fU8, 1.50000000, 1.50000000, 2.00000000, 0 ))
                    {
                        if (l_U40 == 0)
                        {
                            l_U40 = 1;
                            if (NOT (IS_CHAR_INJURED( l_U25 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U25, "TOLL_COME_BACK", 1, 0, 0 );
                            }
                            SETTIMERB( 0 );
                        }
                    }
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, -2.00000000, 0.00000000, 0.00000000, ref l_U2._fU0, ref l_U2._fU4, ref l_U2._fU8 );
                    if (LOCATE_CHAR_IN_CAR_3D( sub_772(), l_U2._fU0, l_U2._fU4, l_U2._fU8, 1.50000000, 1.50000000, 2.00000000, 0 ))
                    {
                        if (l_U40 == 0)
                        {
                            l_U40 = 1;
                            if (NOT (IS_CHAR_INJURED( l_U25 )))
                            {
                                SAY_AMBIENT_SPEECH( l_U25, "TOLL_COME_BACK", 1, 0, 0 );
                            }
                            SETTIMERB( 0 );
                        }
                    }
                }
            }
            if (IS_CAR_DEAD( l_U24 ))
            {
                GET_RANDOM_CAR_FRONT_BUMPER_IN_SPHERE_NO_SAVE( l_U2._fU0, l_U2._fU4, l_U2._fU8, 5.00000000, 0, 0, ref l_U24, l_U23 );
            }
            else
            {
                GET_DRIVER_OF_CAR( l_U24, ref l_U27 );
                if (l_U27 == sub_772())
                {
                    ;
                }
                else if (NOT (IS_CHAR_INJURED( l_U27 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U27, 48, ref l_U38 );
                    if (l_U38 == 7)
                    {
                        if (NOT (IS_CHAR_IN_CAR( sub_772(), l_U24 )))
                        {
                            ;
                        }
                        else if (l_U52)
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_2589()
{
    if (DOES_OBJECT_EXIST( l_U22 ))
    {
        l_U47 = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( l_U47, l_U44, l_U22 );
        SET_OBJECT_COLLISION( l_U22, 0 );
        while (l_U8._fU4 >= 0.00000000)
        {
            WAIT( 0 );
            sub_763();
            SET_OBJECT_ROTATION( l_U22, 0.00000000, l_U8._fU4, l_U30 );
            l_U8._fU4 -= 3.00000000;
            if (l_U36)
            {
                sub_1698();
            }
        }
        if (l_U36)
        {
            l_U36 = 0;
        }
        SET_OBJECT_COLLISION( l_U22, 1 );
        STOP_SOUND( l_U47 );
        RELEASE_SOUND_ID( l_U47 );
        l_U47 = -1;
    }
    return;
}

void sub_2875()
{
    if (NOT (IS_CHAR_INJURED( l_U25 )))
    {
        GET_SCRIPT_TASK_STATUS( l_U25, 80, ref l_U38 );
        if (l_U38 == 7)
        {
            TASK_PLAY_ANIM( l_U25, "Idle", "AMB@TOLLBOOTH", 4.00000000, 1, 0, 0, 0, 0 );
        }
    }
    return;
}

int sub_3063(unknown uParam0)
{
    vector vVar3;

    vVar3 = {540.60000000, 755.00000000, 20.10000000};
    l_U29 = VDIST( l_U11, vVar3 );
    if (l_U29 < 2.00000000)
    {
        if (NOT sub_3121())
        {
            return 1;
        }
    }
    return 0;
}

void sub_3121()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Jimmy4" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

int sub_3225()
{
    float fVar2;

    if (DOES_OBJECT_EXIST( l_U22 ))
    {
        GET_OBJECT_HEALTH( l_U22, ref fVar2 );
        if (fVar2 < l_U33)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3292()
{
    if (NOT (IS_CAR_DEAD( l_U23 )))
    {
        if (DOES_OBJECT_EXIST( l_U20 ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, 3.00000000, 3.00000000, 0.00000000, ref l_U2._fU0, ref l_U2._fU4, ref l_U2._fU8 );
            GET_RANDOM_CAR_FRONT_BUMPER_IN_SPHERE_NO_SAVE( l_U2._fU0, l_U2._fU4, l_U2._fU8, 4.00000000, 0, 0, ref l_U24, l_U23 );
            if (NOT (IS_CAR_DEAD( l_U24 )))
            {
                GET_DRIVER_OF_CAR( l_U24, ref l_U27 );
                if (l_U27 != sub_772())
                {
                    if (NOT (IS_CHAR_INJURED( l_U27 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U27, 48, ref l_U38 );
                        if (l_U38 == 7)
                        {
                            if (NOT (IS_CHAR_IN_CAR( sub_772(), l_U24 )))
                            {
                                ;
                            }
                            else if (l_U52)
                            {
                                ;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_3722()
{
    REQUEST_ANIMS( "AMB@TOLLBOOTH" );
    REQUEST_MODEL( -1295524692 );
    REQUEST_MODEL( -1174154857 );
    REQUEST_MODEL( sub_3778() );
    if (((((HAS_MODEL_LOADED( -1295524692 )) AND (HAS_MODEL_LOADED( -1174154857 ))) AND (HAVE_ANIMS_LOADED( "AMB@TOLLBOOTH" ))) AND (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\TOLLBOOTH" ))) AND (HAS_MODEL_LOADED( sub_3778() )))
    {
        return 1;
    }
    return 0;
}

void sub_3778()
{
    if (l_U54 == 0)
    {
        GET_CURRENT_BASIC_COP_MODEL( ref l_U54 );
    }
    return l_U54;
}

void sub_3953(unknown uParam0)
{
    float fVar3;
    float fVar4;

    fVar3 = -0.30000000;
    fVar4 = 0.70000000;
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 2.89900000, -1.00000000, fVar3, ref l_U2._fU0, ref l_U2._fU4, ref l_U2._fU8 );
    CREATE_OBJECT( -1174154857, l_U2._fU0, l_U2._fU4, l_U2._fU8, ref l_U21, 1 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 3.09900000, -1.00000000, fVar4, ref l_U2._fU0, ref l_U2._fU4, ref l_U2._fU8 );
    CREATE_OBJECT( -1295524692, l_U2._fU0, l_U2._fU4, l_U2._fU8, ref l_U22, 1 );
    l_U17 = {l_U2};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U14._fU0, l_U14._fU4, l_U14._fU8, ref l_U17._fU0, ref l_U17._fU4, ref l_U17._fU8 );
    GET_OBJECT_HEADING( uParam0, ref l_U28 );
    l_U29 = l_U28 + 90.00000000;
    if (l_U29 > 360.00000000)
    {
        l_U29 -= 360.00000000;
    }
    l_U30 = l_U29;
    l_U31 = l_U30 + 180.00000000;
    if (l_U31 > 360.00000000)
    {
        l_U31 -= 360.00000000;
    }
    SET_OBJECT_HEADING( l_U22, l_U29 );
    SET_OBJECT_HEADING( l_U21, l_U29 );
    SET_OBJECT_ROTATION( l_U22, 0.00000000, l_U8._fU4, l_U29 );
    GET_OBJECT_HEALTH( l_U22, ref l_U33 );
    SET_OBJECT_DYNAMIC( l_U21, 0 );
    FREEZE_OBJECT_POSITION( l_U21, 1 );
    return;
}

void sub_4338(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.50000000, 0.25000000, 0.00000000, ref l_U2._fU0, ref l_U2._fU4, ref l_U2._fU8 );
        CREATE_CHAR( 6, sub_3778(), l_U2._fU0, l_U2._fU4, l_U2._fU8, ref l_U25, 1 );
        GET_OBJECT_HEADING( uParam0, ref l_U29 );
        SET_INFORM_RESPECTED_FRIENDS( l_U25, 999, 999 );
        SET_PED_DONT_DO_EVASIVE_DIVES( l_U25, 1 );
        SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U25, 1 );
        l_U29 += 180.00000000;
        if (l_U29 >= 360.00000000)
        {
            l_U29 -= 360.00000000;
        }
        SET_CHAR_HEADING( l_U25, l_U29 );
    }
    return;
}

void sub_4551()
{
    if ((g_U9152) AND (l_U56))
    {
        if (DOES_OBJECT_EXIST( l_U21 ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, 0.00000000, 10.00000000, 0.00000000, ref l_U2._fU0, ref l_U2._fU4, ref l_U2._fU8 );
            if (LOCATE_CHAR_IN_CAR_3D( sub_772(), l_U2._fU0, l_U2._fU4, l_U2._fU8, 50.00000000, 50.00000000, 3.00000000, 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_HELI( sub_772() )))
                {
                    if (sub_1046())
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1277(), 0 )))
                        {
                            if (NOT (sub_846( sub_772() )))
                            {
                                if (IS_SCORE_GREATER( sub_1277(), 4 ))
                                {
                                    sub_4768( "TOLNTRO", 1 );
                                    l_U56 = 0;
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

void sub_4768(unknown uParam0, unknown uParam1)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam1 );
            PRINT_HELP( uParam0 );
        }
    }
    return;
}

int sub_4979()
{
    unknown uVar2;
    float fVar3;

    if (DOES_OBJECT_EXIST( l_U20 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U20, l_U14._fU0, l_U14._fU4, l_U14._fU8, ref l_U2._fU0, ref l_U2._fU4, ref l_U2._fU8 );
    }
    if (NOT (IS_CHAR_DEAD( sub_772() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_772() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_772(), ref uVar2 );
            if (sub_1046())
            {
                if (((((((((IS_CAR_MODEL( uVar2, -2137348917 )) || (IS_CAR_MODEL( uVar2, 1353720154 ))) || (IS_CAR_MODEL( uVar2, 569305213 ))) || (IS_CAR_MODEL( uVar2, 904750859 ))) || (IS_CAR_MODEL( uVar2, 2053223216 ))) || (IS_CAR_MODEL( uVar2, -1099960214 ))) || (IS_CAR_MODEL( uVar2, 850991848 ))) || (IS_CAR_MODEL( uVar2, 1677715180 ))) || (IS_CAR_MODEL( uVar2, 1917016601 )))
                {
                    fVar3 = 8.00000000;
                }
                else
                {
                    fVar3 = 4.00000000;
                }
            }
            else
            {
                fVar3 = 6.00000000;
            }
            if (LOCATE_CHAR_IN_CAR_3D( sub_772(), l_U2._fU0, l_U2._fU4, l_U2._fU8, fVar3, fVar3, fVar3, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_5439(unknown uParam0)
{
    return;
}

int sub_5467(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    float fVar6;
    float fVar7;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_HEADING( uParam0, ref fVar5 );
        fVar7 = uParam1 - uParam2;
        if (fVar7 < 0.00000000)
        {
            fVar7 += 360.00000000;
        }
        fVar6 = uParam1 + uParam2;
        if (fVar6 >= 360.00000000)
        {
            fVar6 -= 360.00000000;
        }
        if (fVar6 > fVar7)
        {
            if ((fVar5 < fVar6) AND (fVar5 > fVar7))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((fVar5 < fVar6) || (fVar5 > fVar7))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

void sub_5716()
{
    if (g_U9152)
    {
        if (NOT (sub_846( sub_772() )))
        {
            if (IS_SCORE_GREATER( sub_1277(), 4 ))
            {
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TOLNTRO" ))
                {
                    CLEAR_HELP();
                }
                sub_4768( "TOLLHLP", 0 );
                g_U9152 = 0;
            }
        }
    }
    return;
}

int sub_5831(unknown uParam0)
{
    float fVar3;
    float fVar4;

    fVar4 = 7.50000000;
    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if (sub_846( sub_772() ))
        {
            fVar4 = 20.00000000;
        }
        if (fVar3 < fVar4)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_5961(int iParam0)
{
    int iVar3;

    STORE_SCORE( sub_1277(), ref iVar3 );
    if (iVar3 >= iParam0)
    {
        ADD_SCORE( sub_1277(), -iParam0 );
        return 1;
        break;
    }
    return 0;
}

void sub_6034(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    if (IS_THIS_MODEL_A_CAR( uVar3 ))
    {
        REMOVE_CAR_WINDOW( uParam0, 0 );
    }
    return;
}

void sub_6093(int iParam0, unknown uParam1)
{
    string sVar4;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            if (sub_6133( iParam0 ))
            {
                sVar4 = "Give_Money";
                if (sub_6239( uParam1 ))
                {
                    sVar4 = "toss_money_chopper";
                }
                else if (sub_6315( uParam1 ))
                {
                    sVar4 = "toss_money_dirt";
                }
                else if (sub_6388( uParam1 ))
                {
                    sVar4 = "toss_money_freeway";
                }
                else if (sub_6479( uParam1 ))
                {
                    sVar4 = "toss_money_scooter";
                }
                else if (sub_6555( uParam1 ))
                {
                    sVar4 = "toss_money_spt";
                };;;;;
                if (iParam0 == sub_772())
                {
                    TASK_PLAY_ANIM( iParam0, sVar4, "AMB@TOLLBOOTH", 4.00000000, 0, 0, 0, 0, 0 );
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref l_U39 );
                    TASK_CAR_TEMP_ACTION( 0, uParam1, 24, 1000 );
                    TASK_PLAY_ANIM( 0, sVar4, "AMB@TOLLBOOTH", 4.00000000, 0, 1, 0, 0, 0 );
                    CLOSE_SEQUENCE_TASK( l_U39 );
                    TASK_PERFORM_SEQUENCE( iParam0, l_U39 );
                    CLEAR_SEQUENCE_TASK( l_U39 );
                }
            }
        }
    }
    return;
}

int sub_6133(int iParam0)
{
    if (iParam0 == sub_772())
    {
        if (NOT sub_6155())
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_6155()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_6239(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, -570033273 ))
    {
        return 1;
    }
    return 0;
}

int sub_6315(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, 788045382 ))
    {
        return 1;
    }
    return 0;
}

int sub_6388(unknown uParam0)
{
    if ((IS_CAR_MODEL( uParam0, -1830458836 )) || (IS_CAR_MODEL( uParam0, 584879743 )))
    {
        return 1;
    }
    return 0;
}

int sub_6479(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, -1842748181 ))
    {
        return 1;
    }
    return 0;
}

int sub_6555(unknown uParam0)
{
    if ((IS_CAR_MODEL( uParam0, 1203311498 )) || (IS_CAR_MODEL( uParam0, -909201658 )))
    {
        return 1;
    }
    return 0;
}

void sub_7517()
{
    if (NOT (IS_CHAR_INJURED( l_U25 )))
    {
        if (sub_7542())
        {
            TASK_PLAY_ANIM( l_U25, "Indicate_Left_A", "AMB@TOLLBOOTH", 4.00000000, 0, 0, 0, 0, 0 );
        }
        else
        {
            TASK_PLAY_ANIM( l_U25, "Indicate_Left_B", "AMB@TOLLBOOTH", 4.00000000, 0, 0, 0, 0, 0 );
        }
        SAY_AMBIENT_SPEECH( l_U25, "TOLL_PAID_YES", 1, 0, 0 );
    }
    return;
}

int sub_7542()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
    if (iVar2 == 0)
    {
        return 1;
    }
    return 0;
}

void sub_7899()
{
    if (IS_VEH_DRIVEABLE( l_U23 ))
    {
        GET_DRIVER_OF_CAR( l_U23, ref l_U26 );
        if (l_U26 == sub_772())
        {
            ;
        }
        else if (NOT (IS_CHAR_INJURED( l_U26 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U26, 16, ref l_U38 );
            if (l_U38 == 7)
            {
                if (l_U52)
                {
                    GET_SCRIPT_TASK_STATUS( l_U26, 49, ref l_U38 );
                    if (l_U38 == 1)
                    {
                        if (g_U2230)
                        {
                            SET_DRIVE_TASK_CRUISE_SPEED( l_U26, 22.00000000 );
                        }
                        else
                        {
                            SET_DRIVE_TASK_CRUISE_SPEED( l_U26, 12.00000000 );
                        }
                    }
                }
                else if (NOT (IS_CHAR_IN_CAR( sub_772(), l_U23 )))
                {
                    TASK_CAR_DRIVE_WANDER( l_U26, l_U23, 15.00000000, 0 );
                }
            }
        }
    }
    return;
}