void main()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    int I;
    unknown uVar9;

    l_U98 = 0;
    l_U99 = 150.00000000;
    l_U430 = 0;
    l_U431 = 1;
    l_U432 = 3;
    l_U434 = 0;
    l_U451 = -1;
    l_U455 = 0;
    l_U456 = 1;
    l_U457 = 1;
    l_U465 = 150.00000000;
    l_U555 = 0;
    l_U556 = 150.00000000;
    l_U606 = 0;
    l_U811 = 0;
    l_U812 = 0;
    l_U813 = 0;
    l_U814 = 0;
    l_U815 = 1;
    l_U816 = 0;
    l_U817 = 0;
    l_U818 = 0;
    l_U819 = 1;
    l_U820 = 0;
    l_U821 = 0;
    l_U822 = 0;
    l_U823 = 0;
    l_U824 = 0;
    l_U825 = 0;
    l_U826 = 0;
    l_U827 = 0;
    l_U828 = 0;
    l_U830 = 0;
    l_U831 = 0;
    l_U835 = 0;
    l_U836 = 0;
    l_U1054 = 0;
    l_U1055 = 0;
    l_U1056 = 0;
    l_U1057 = 0;
    l_U1059 = 0;
    l_U1061 = 0;
    l_U1062 = 150;
    l_U1075 = {0.45000000, 0.70000000, 1.15800000};
    l_U1078 = {0.00000000, 1.72400000, 1.03400000};
    l_U1081 = {-0.37100000, 0.00000000, 0.00000000};
    l_U1084 = {0.86700000, 1.02300000, 1.10700000};
    l_U1087 = {0.38200000, 0.88600000, 1.01700000};
    l_U1090 = {0.00000000, -0.60000000, 0.04800000};
    l_U1093 = {0.00000000, 0.00000000, 0.20800000};
    l_U1096 = {0.00000000, 1.00000000, -0.33500000};
    l_U1099 = -1;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_470();
    }
    l_U837 = {sub_1570( g_U64920 )};
    sub_5691( "FCB2AU" );
    if (IS_PLAYER_PLAYING( sub_515() ))
    {
        sub_5827( 0, sub_810(), "NIKO", 0 );
    }
    while (IS_PLAYER_PLAYING( sub_515() ))
    {
        GET_FRAME_TIME( ref uVar6 );
        l_U1052 += uVar6 * 1000.00000000;
        l_U1053 += uVar6 * 1000.00000000;
        switch (l_U1054)
        {
            case 0:
            switch (l_U1055)
            {
                case 0:
                REQUEST_MODEL( -1660661558 );
                sub_6152( 8 );
                l_U1055++;
                break;
                case 1:
                if ((HAS_MODEL_LOADED( -1660661558 )) AND (sub_6906( 8 )))
                {
                    SETTIMERA( 0 );
                    l_U1055++;
                }
                break;
                case 2:
                if (DOES_OBJECT_EXIST( l_U1063 ))
                {
                    DELETE_OBJECT( ref l_U1063 );
                }
                if (DOES_CHAR_EXIST( l_U1064 ))
                {
                    DELETE_CHAR( ref l_U1064 );
                }
                if (DOES_VEHICLE_EXIST( l_U1074 ))
                {
                    DELETE_CAR( ref l_U1074 );
                }
                bVar2 = false;
                if ((TIMERA() > 5000) AND (NOT (sub_7103( l_U837._fU0._fU0, l_U837._fU0._fU4, l_U837._fU0._fU8, 5.00000000, 1128792064 ))))
                {
                    bVar2 = true;
                }
                if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
                {
                    bVar2 = true;
                }
                if (IS_PLAYER_PLAYING( sub_515() ))
                {
                    if (sub_4885())
                    {
                        if (bVar2)
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_810(), l_U837._fU0._fU0, l_U837._fU0._fU4, l_U837._fU0._fU8, 40.00000000, 40.00000000, 40.00000000, 0 ))
                            {
                                bVar2 = false;
                            }
                        }
                    }
                }
                if (sub_4885())
                {
                    if (NOT bVar2)
                    {
                        if (TIMERA() > 10000)
                        {
                            if (NOT l_U836)
                            {
                                l_U100[22]._fU0 = {-518.89480000, -865.69350000, 4.53810000};
                                l_U837._fU0 = {l_U100[22]._fU0};
                                l_U836 = 1;
                                SETTIMERA( 5000 );
                            }
                            else
                            {
                                l_U100[22]._fU0 = {-608.88820000, -930.24240000, 3.83790000};
                                l_U837._fU0 = {l_U100[22]._fU0};
                                l_U836 = 0;
                                SETTIMERA( 5000 );
                            }
                        }
                    }
                }
                if (bVar2)
                {
                    uVar3 = {l_U837._fU0};
                    CREATE_CAR( -1660661558, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1074, 1 );
                    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref uVar6 );
                    CHANGE_CAR_COLOUR( l_U1074, 113, 76 );
                    SET_CAR_HEADING( l_U1074, uVar6 );
                    SET_HELI_BLADES_FULL_SPEED( l_U1074 );
                    sub_7650( 8, ref l_U1064, l_U1074 );
                    sub_8333( l_U1064, 8, 1 );
                    SET_PED_DIES_WHEN_INJURED( l_U1064, 1 );
                    sub_5827( 1, l_U1064, "BRUCIE", 0 );
                    sub_9329();
                    CREATE_OBJECT( -1851907280, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U1063, 1 );
                    ATTACH_OBJECT_TO_CAR( l_U1063, l_U1074, 0, l_U1078 + l_U1096, l_U1081 );
                    if (DOES_BLIP_EXIST( l_U809 ))
                    {
                        REMOVE_BLIP( l_U809 );
                    }
                    if (l_U837._fU48)
                    {
                        ADD_BLIP_FOR_COORD( l_U837._fU16._fU0, l_U837._fU16._fU4, l_U837._fU16._fU8, ref l_U809 );
                    }
                    else
                    {
                        ADD_BLIP_FOR_COORD( l_U837._fU0._fU0, l_U837._fU0._fU4, l_U837._fU0._fU8, ref l_U809 );
                    }
                    CHANGE_BLIP_SPRITE( l_U809, 32 );
                    PRINT_NOW( "BRC1", 7500, 1 );
                    sub_9681( l_U1074 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -1660661558 );
                    sub_9719( 8 );
                    SETTIMERA( 0 );
                    SETTIMERB( 0 );
                    sub_9767( 2 );
                }
                break;
            }
            sub_9822();
            sub_10106();
            break;
            case 2:
            switch (l_U1055)
            {
                case 0:
                if (TIMERA() > 2000)
                {
                    if (DOES_VEHICLE_EXIST( l_U1074 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U1074 ))
                        {
                            LOCK_CAR_DOORS( l_U1074, 1 );
                            sub_11724();
                            l_U1055++;
                        }
                    }
                }
                break;
                case 1:
                if ((TIMERA() < 600000) AND (NOT (IS_KEYBOARD_KEY_JUST_PRESSED( 49 ))))
                {
                    if (l_U829)
                    {
                        l_U837 = {sub_1570( g_U64920 )};
                        l_U829 = 0;
                        sub_9767( 0 );
                    }
                    if (NOT l_U835)
                    {
                        if (IS_VEH_DRIVEABLE( l_U1074 ))
                        {
                            if (SET_CAR_ON_GROUND_PROPERLY( l_U1074 ))
                            {
                                l_U835 = 1;
                            }
                        }
                    }
                    GET_CAR_CHAR_IS_USING( sub_810(), ref iVar7 );
                    if (DOES_VEHICLE_EXIST( iVar7 ))
                    {
                        if (IS_VEH_DRIVEABLE( iVar7 ))
                        {
                            if (iVar7 == l_U1074)
                            {
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BRCH2" ))
                                {
                                    sub_1440();
                                }
                                sub_559( 0 );
                                FREEZE_CAR_POSITION( l_U1074, 0 );
                                if (NOT (IS_CHAR_INJURED( l_U1064 )))
                                {
                                    SET_CHAR_CANT_BE_DRAGGED_OUT( l_U1064, 1 );
                                }
                                CLEAR_CHAR_TASKS( sub_810() );
                                TASK_ENTER_CAR_AS_PASSENGER( sub_810(), iVar7, 5000, 0 );
                                l_U824 = 0;
                                l_U825 = 0;
                                if (DOES_GROUP_EXIST( sub_12448() ))
                                {
                                    GET_GROUP_SIZE( sub_12448(), ref uVar9, ref I );
                                    if (I > 0)
                                    {
                                        l_U824 = 1;
                                    }
                                }
                                if (DOES_GROUP_EXIST( sub_12448() ))
                                {
                                    GET_GROUP_SIZE( sub_12448(), ref uVar9, ref I );
                                    if (I > 0)
                                    {
                                        GET_GROUP_MEMBER( sub_12448(), 0, ref l_U1065 );
                                        if (NOT (IS_CHAR_INJURED( l_U1065 )))
                                        {
                                            CLEAR_CHAR_TASKS( l_U1065 );
                                            TASK_ENTER_CAR_AS_PASSENGER( l_U1065, iVar7, 10000, 1 );
                                        }
                                        if (I > 1)
                                        {
                                            GET_GROUP_MEMBER( sub_12448(), 1, ref l_U1065 );
                                            if (NOT (IS_CHAR_INJURED( l_U1065 )))
                                            {
                                                CLEAR_CHAR_TASKS( l_U1065 );
                                                TASK_ENTER_CAR_AS_PASSENGER( l_U1065, iVar7, 10000, 2 );
                                            }
                                        }
                                    }
                                }
                                l_U1055++;
                            }
                        }
                    }
                }
                else
                {
                    PRINT_NOW( "BRC2", 7500, 1 );
                    sub_9767( 5 );
                }
                break;
                case 2:
                if (IS_VEH_DRIVEABLE( l_U1074 ))
                {
                    if (IS_CHAR_IN_CAR( sub_810(), l_U1074 ))
                    {
                        l_U831 = 1;
                        GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U1099 );
                        FREEZE_CAR_POSITION( l_U1074, 1 );
                        CLEAR_CHAR_TASKS( sub_810() );
                        sub_559( 0 );
                        GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U1058 );
                        while (l_U1058 == -1)
                        {
                            GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U1058 );
                            WAIT( 0 );
                        }
                        l_U1055++;
                    }
                    else if (sub_12913())
                    {
                        PRINTSTRING( "PLAYER CANCELLED GETTING IN HELI \n" );
                        sub_559( 1 );
                        sub_9329();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
                        l_U1055 = 0;
                    }
                }
                break;
                case 3:
                if (IS_VEH_DRIVEABLE( l_U1074 ))
                {
                    if (IS_CHAR_IN_CAR( sub_810(), l_U1074 ))
                    {
                        if (DOES_BLIP_EXIST( l_U809 ))
                        {
                            REMOVE_BLIP( l_U809 );
                        }
                        sub_13769( ref l_U1060 );
                        CREATE_CAM( 14, ref l_U1046 );
                        if (IS_VEH_DRIVEABLE( l_U1074 ))
                        {
                            ATTACH_CAM_TO_VEHICLE( l_U1046, l_U1074 );
                            SET_CAM_ATTACH_OFFSET( l_U1046, l_U1084._fU0 + l_U1096._fU0, l_U1084._fU4 + l_U1096._fU4, l_U1084._fU8 + l_U1096._fU8 );
                            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1046, 1 );
                            POINT_CAM_AT_VEHICLE( l_U1046, l_U1074 );
                            SET_CAM_POINT_OFFSET( l_U1046, l_U1087._fU0 + l_U1096._fU0, l_U1087._fU4 + l_U1096._fU4, l_U1087._fU8 + l_U1096._fU8 );
                            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U1046, 1 );
                        }
                        SET_CAM_FOV( l_U1046, 52.27500000 );
                        SET_CAM_ACTIVE( l_U1046, 1 );
                        SET_CAM_PROPAGATE( l_U1046, 1 );
                        SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 0 );
                        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                        SETTIMERA( 0 );
                        l_U1055++;
                    }
                }
                break;
                case 4:
                if (NOT (IS_CHAR_INJURED( l_U1064 )))
                {
                    if (sub_14122( "FCB2_ARRCNL", ref l_U1067, 6, 1 ))
                    {
                        TASK_LOOK_AT_CHAR( l_U1064, sub_810(), 3000, 0 );
                        SETTIMERA( 0 );
                        l_U1055++;
                    }
                }
                break;
                case 5:
                if (TIMERA() > 2000)
                {
                    sub_9767( 3 );
                }
                break;
            }
            if (IS_PLAYER_PLAYING( sub_515() ))
            {
                if (NOT l_U823)
                {
                    if (IS_VEH_DRIVEABLE( l_U1074 ))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_810(), l_U1074, 7.00000000, 7.00000000, 3.00000000, 0 ))
                        {
                            PRINT_HELP( "BRCH2" );
                            l_U823 = 1;
                        }
                    }
                }
                else if (IS_VEH_DRIVEABLE( l_U1074 ))
                {
                    if (IS_CHAR_IN_CAR( sub_810(), l_U1074 ))
                    {
                        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BRCH2" ))
                        {
                            sub_1440();
                        }
                    }
                }
            }
            if (IS_PLAYER_PLAYING( sub_515() ))
            {
                if (l_U837._fU48)
                {
                    if (NOT l_U822)
                    {
                        if (IS_VEH_DRIVEABLE( l_U1074 ))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_810(), l_U1074, 15.00000000, 15.00000000, 4.00000000, 0 ))
                            {
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BRCH1" ))
                                {
                                    sub_1440();
                                }
                                if (DOES_BLIP_EXIST( l_U809 ))
                                {
                                    REMOVE_BLIP( l_U809 );
                                }
                                ADD_BLIP_FOR_COORD( l_U837._fU0._fU0, l_U837._fU0._fU4, l_U837._fU0._fU8, ref l_U809 );
                                CHANGE_BLIP_SPRITE( l_U809, 32 );
                                l_U822 = 1;
                            }
                        }
                    }
                }
            }
            if (IS_PLAYER_PLAYING( sub_515() ))
            {
                if (l_U837._fU48)
                {
                    if (DOES_BLIP_EXIST( l_U809 ))
                    {
                        if (NOT l_U821)
                        {
                            if (LOCATE_CHAR_ON_FOOT_3D( sub_810(), l_U837._fU16._fU0, l_U837._fU16._fU4, l_U837._fU16._fU8, 50.00000000, 50.00000000, 15.00000000, 0 ))
                            {
                                PRINT_HELP( "BRCH1" );
                                FLASH_BLIP( l_U809, 1 );
                                l_U821 = 1;
                            }
                        }
                        else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BRCH1" )))
                        {
                            FLASH_BLIP( l_U809, 0 );
                        }
                    }
                }
            }
            if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                while (NOT (LOAD_ALL_PATH_NODES( 1 )))
                {
                    WAIT( 0 );
                }
                if (IS_PLAYER_PLAYING( sub_515() ))
                {
                    SET_CHAR_COORDINATES( sub_810(), l_U837._fU0._fU0, l_U837._fU0._fU4, l_U837._fU0._fU8 );
                    if (GET_CLOSEST_CAR_NODE( l_U837._fU0._fU0, l_U837._fU0._fU4, l_U837._fU0._fU8, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 ))
                    {
                        SET_CHAR_COORDINATES( sub_810(), uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                        LOAD_SCENE( uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                    }
                }
                LOAD_ALL_PATH_NODES( 0 );
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
            }
            sub_9822();
            sub_10106();
            break;
            case 3:
            if (IS_VEH_DRIVEABLE( l_U1074 ))
            {
                if (DOES_GROUP_EXIST( sub_12448() ))
                {
                    GET_GROUP_SIZE( sub_12448(), ref uVar9, ref I );
                    if (I > 0)
                    {
                        GET_GROUP_MEMBER( sub_12448(), 0, ref l_U1065 );
                        if (NOT (IS_CHAR_INJURED( l_U1065 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U1065, l_U1074 )))
                            {
                                if (NOT (IS_CHAR_ON_SCREEN( l_U1065 )))
                                {
                                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U1074, 1 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1065, l_U1074, 1 );
                                    }
                                }
                            }
                        }
                        if (I > 1)
                        {
                            GET_GROUP_MEMBER( sub_12448(), 1, ref l_U1065 );
                            if (NOT (IS_CHAR_INJURED( l_U1065 )))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U1065, l_U1074 )))
                                {
                                    if (NOT (IS_CHAR_ON_SCREEN( l_U1065 )))
                                    {
                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U1074, 2 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1065, iVar7, 2 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U1074 ))
            {
                if (l_U824)
                {
                    if (NOT l_U825)
                    {
                        if (DOES_GROUP_EXIST( sub_12448() ))
                        {
                            l_U825 = 1;
                            GET_GROUP_SIZE( sub_12448(), ref uVar9, ref I );
                            if (I > 0)
                            {
                                GET_GROUP_MEMBER( sub_12448(), 0, ref l_U1065 );
                                if (NOT (IS_CHAR_INJURED( l_U1065 )))
                                {
                                    if (NOT (IS_CHAR_IN_CAR( l_U1065, l_U1074 )))
                                    {
                                        l_U825 = 0;
                                    }
                                }
                                if (I > 1)
                                {
                                    GET_GROUP_MEMBER( sub_12448(), 1, ref l_U1065 );
                                    if (NOT (IS_CHAR_INJURED( l_U1065 )))
                                    {
                                        if (NOT (IS_CHAR_IN_CAR( l_U1065, l_U1074 )))
                                        {
                                            l_U825 = 0;
                                        }
                                    }
                                }
                            }
                        }
                        if (l_U825)
                        {
                            CLOSE_ALL_CAR_DOORS( l_U1074 );
                        }
                    }
                }
            }
            switch (l_U1055)
            {
                case 0:
                sub_11724();
                if (DOES_CAM_EXIST( l_U1046 ))
                {
                    SET_CAM_ACTIVE( l_U1046, 1 );
                    SET_CAM_PROPAGATE( l_U1046, 0 );
                }
                CREATE_CAM( 14, ref l_U1048 );
                if (DOES_OBJECT_EXIST( l_U1063 ))
                {
                    ATTACH_CAM_TO_OBJECT( l_U1048, l_U1063 );
                    SET_CAM_ATTACH_OFFSET( l_U1048, l_U1090._fU0, l_U1090._fU4, l_U1090._fU8 );
                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1048, 1 );
                    POINT_CAM_AT_OBJECT( l_U1048, l_U1063 );
                    SET_CAM_POINT_OFFSET( l_U1048, l_U1093._fU0, l_U1093._fU4, l_U1093._fU8 );
                    SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U1048, 1 );
                    SET_CAM_FOV( l_U1048, 65.00000000 );
                    SET_CAM_ACTIVE( l_U1048, 1 );
                    SET_CAM_PROPAGATE( l_U1048, 0 );
                }
                CREATE_CAM( 3, ref l_U1047 );
                SET_CAM_INTERP_STYLE_DETAILED( l_U1047, 1, 1, 1, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U1047, l_U1046, l_U1048, 500, 0 );
                SET_CAM_ACTIVE( l_U1047, 1 );
                SET_CAM_PROPAGATE( l_U1047, 1 );
                l_U1055++;
                break;
                case 1:
                if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U1047 )))
                {
                    DESTROY_CAM( l_U1047 );
                    DESTROY_CAM( l_U1046 );
                    SET_CAM_ACTIVE( l_U1048, 1 );
                    SET_CAM_PROPAGATE( l_U1048, 1 );
                    l_U1055++;
                }
                break;
                case 2:
                if (NOT (IS_CAR_DEAD( l_U1074 )))
                {
                    DETACH_OBJECT( l_U1063, 1 );
                    ATTACH_OBJECT_TO_CAR( l_U1063, l_U1074, 0, l_U1078 + l_U1096, l_U1081 );
                }
                if (DOES_CAM_EXIST( l_U1048 ))
                {
                    if (DOES_OBJECT_EXIST( l_U1063 ))
                    {
                        ;
                    }
                    SET_CAM_ATTACH_OFFSET( l_U1048, l_U1090._fU0, l_U1090._fU4, l_U1090._fU8 );
                    SET_CAM_POINT_OFFSET( l_U1048, l_U1093._fU0, l_U1093._fU4, l_U1093._fU8 );
                    SET_CAM_FOV( l_U1048, 65.00000000 );
                }
                sub_17207();
                if (NOT l_U819)
                {
                    if (IS_CONTROL_PRESSED( 2, 77 ))
                    {
                        l_U819 = 1;
                        if (NOT (IS_CHAR_DEAD( l_U1064 )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U1074 ))
                            {
                                CLEAR_CHAR_TASKS( l_U1064 );
                                TASK_HELI_MISSION( l_U1064, l_U1074, 0, 0, l_U850._fU0._fU0, l_U850._fU0._fU4, l_U850._fU0._fU8, 19, 50, 5, -1, sub_18190(), l_U1062 );
                                if (DOES_BLIP_EXIST( l_U810 ))
                                {
                                    REMOVE_BLIP( l_U810 );
                                }
                                ADD_BLIP_FOR_COORD( l_U850._fU0._fU0, l_U850._fU0._fU4, l_U850._fU0._fU8, ref l_U810 );
                                CHANGE_BLIP_COLOUR( l_U810, 6 );
                            }
                        }
                        SET_FOLLOW_VEHICLE_CAM_SUBMODE( 4 );
                        SETTIMERA( 0 );
                        l_U1052 = 2000.00000000;
                        l_U1053 = 0.00000000;
                        sub_9767( 4 );
                    }
                }
                if (NOT l_U819)
                {
                    if (IS_CONTROL_PRESSED( 2, 43 ))
                    {
                        sub_9767( 5 );
                        if (l_U820)
                        {
                            PRINTSTRING( "GET_OUT_AND_FLY_OFF - 2 \n" );
                        }
                    }
                }
                break;
            }
            if (IS_PLAYER_PLAYING( sub_515() ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_810() )))
                {
                    sub_9767( 5 );
                }
            }
            sub_9822();
            sub_18559();
            break;
            case 4:
            if (IS_VEH_DRIVEABLE( l_U1074 ))
            {
                if (DOES_GROUP_EXIST( sub_12448() ))
                {
                    GET_GROUP_SIZE( sub_12448(), ref uVar9, ref I );
                    if (I > 0)
                    {
                        GET_GROUP_MEMBER( sub_12448(), 0, ref l_U1065 );
                        if (NOT (IS_CHAR_INJURED( l_U1065 )))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U1065, l_U1074 )))
                            {
                                if (NOT (IS_CHAR_ON_SCREEN( l_U1065 )))
                                {
                                    if (IS_CAR_PASSENGER_SEAT_FREE( l_U1074, 1 ))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1065, l_U1074, 1 );
                                    }
                                }
                            }
                        }
                        if (I > 1)
                        {
                            GET_GROUP_MEMBER( sub_12448(), 1, ref l_U1065 );
                            if (NOT (IS_CHAR_INJURED( l_U1065 )))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U1065, l_U1074 )))
                                {
                                    if (NOT (IS_CHAR_ON_SCREEN( l_U1065 )))
                                    {
                                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U1074, 2 ))
                                        {
                                            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U1065, iVar7, 2 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            sub_20201();
            switch (l_U1055)
            {
                case 0:
                if (IS_VEH_DRIVEABLE( l_U1074 ))
                {
                    PRINT_HELP( "BRCH4" );
                    CLOSE_ALL_CAR_DOORS( l_U1074 );
                    FREEZE_CAR_POSITION( l_U1074, 0 );
                    l_U1055++;
                }
                break;
                default:
            }
            if (IS_VEH_DRIVEABLE( l_U1074 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U1064 )))
                {
                    if (IS_CHAR_IN_CAR( l_U1064, l_U1074 ))
                    {
                        if ((NOT (LOCATE_CAR_3D( l_U1074, l_U850._fU0._fU0, l_U850._fU0._fU4, l_U850._fU0._fU8, 7.00000000, 7.00000000, 5.00000000, 1 ))) AND (NOT (LOCATE_CAR_2D( l_U1074, l_U850._fU0._fU0, l_U850._fU0._fU4, 50.00000000, 50.00000000, 0 ))))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U1064, 49, ref l_U1066 );
                            if (l_U1066 == 7)
                            {
                                TASK_HELI_MISSION( l_U1064, l_U1074, 0, 0, l_U850._fU0._fU0, l_U850._fU0._fU4, l_U850._fU0._fU8, 19, 50, 5, -1, sub_18190(), l_U1062 );
                                l_U1061++;
                            }
                            else if (NOT l_U834)
                            {
                                for ( I = 0; I < 1; I++ )
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1074, 0.00000000, 100.00000000 + ((TO_FLOAT( I )) * 20.00000000), 500.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    GET_GROUND_Z_FOR_3D_COORD( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref uVar3._fU8 );
                                    if (uVar3._fU8 > l_U1062)
                                    {
                                        CLEAR_CHAR_TASKS( l_U1064 );
                                        l_U1062 = ROUND( uVar3._fU8 + 20.00000000 );
                                        l_U1052 = 0.00000000;
                                        TASK_HELI_MISSION( l_U1064, l_U1074, 0, 0, l_U850._fU0._fU0, l_U850._fU0._fU4, l_U850._fU0._fU8, 19, 50, 5, -1, sub_18190(), l_U1062 );
                                    }
                                }
                            }
                            else
                            {
                                l_U1062 = sub_18190();
                            }
                            if (NOT l_U834)
                            {
                                if ((l_U1052 < 2000.00000000) AND (l_U1053 > 5000.00000000))
                                {
                                    APPLY_FORCE_TO_CAR( l_U1074, 0, 0.00000000, 0.00000000, 100.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 0, 1, 1 );
                                }
                            }
                        }
                        else if (NOT l_U834)
                        {
                            if (LOCATE_CAR_2D( l_U1074, l_U850._fU0._fU0, l_U850._fU0._fU4, 50.00000000, 50.00000000, 0 ))
                            {
                                l_U1062 = sub_18190();
                                CLEAR_CHAR_TASKS( l_U1064 );
                                TASK_HELI_MISSION( l_U1064, l_U1074, 0, 0, l_U850._fU0._fU0, l_U850._fU0._fU4, l_U850._fU0._fU8, 19, 50, 5, -1, sub_18190(), l_U1062 );
                                l_U834 = 1;
                            }
                        }
                        GET_SCRIPT_TASK_STATUS( l_U1064, 49, ref l_U1066 );
                        if (l_U1066 == 7)
                        {
                            l_U827 = 1;
                            sub_9767( 5 );
                            if (l_U820)
                            {
                                PRINTSTRING( "GET_OUT_AND_FLY_OFF - 3 \n" );
                            }
                        }
                    }
                }
            }
            if (IS_PLAYER_PLAYING( sub_515() ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_810() )))
                {
                    sub_9767( 5 );
                }
            }
            sub_9822();
            if (l_U1054 == 4)
            {
                bVar2 = false;
                if (IS_VEH_DRIVEABLE( l_U1074 ))
                {
                    if ((((CHECK_STUCK_TIMER( l_U1074, 3, 5000 )) || (CHECK_STUCK_TIMER( l_U1074, 2, 5000 ))) || (CHECK_STUCK_TIMER( l_U1074, 1, 5000 ))) || (CHECK_STUCK_TIMER( l_U1074, 0, 5000 )))
                    {
                        bVar2 = true;
                    }
                }
                if (l_U1061 > 3)
                {
                    l_U1061 = 0;
                    bVar2 = true;
                }
                if (TIMERA() > 240000)
                {
                    SETTIMERA( 0 );
                    bVar2 = true;
                }
                if (NOT (LOCATE_CAR_3D( l_U1074, l_U850._fU0._fU0, l_U850._fU0._fU4, l_U850._fU0._fU8, 15.00000000, 15.00000000, 15.00000000, 1 )))
                {
                    if (NOT l_U819)
                    {
                        if (IS_CONTROL_PRESSED( 2, 77 ))
                        {
                            bVar2 = true;
                        }
                    }
                }
                if (bVar2)
                {
                    DO_SCREEN_FADE_OUT( 1000 );
                    sub_1440();
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                        sub_20201();
                        sub_1440();
                    }
                    if (IS_VEH_DRIVEABLE( l_U1074 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U1064 )))
                        {
                            SET_CAR_COORDINATES( l_U1074, l_U850._fU0._fU0 + 1.00000000, l_U850._fU0._fU4 + 1.00000000, l_U850._fU0._fU8 + 5.00000000 );
                            LOAD_SCENE( l_U850._fU0._fU0 + 1.00000000, l_U850._fU0._fU4 + 1.00000000, l_U850._fU0._fU8 + 5.00000000 );
                            SET_HELI_BLADES_FULL_SPEED( l_U1074 );
                            TASK_HELI_MISSION( l_U1064, l_U1074, 0, 0, l_U850._fU0._fU0, l_U850._fU0._fU4, l_U850._fU0._fU8, 19, 50, 5, -1, sub_18190(), l_U1062 );
                        }
                    }
                    DO_SCREEN_FADE_IN( 1000 );
                }
            }
            break;
            case 5:
            switch (l_U1055)
            {
                case 0:
                if (IS_PLAYER_PLAYING( sub_515() ))
                {
                    sub_1440();
                    if (l_U831)
                    {
                        sub_559( 1 );
                        sub_782( 1 );
                        sub_1028();
                        SET_GAME_CAM_HEADING( 45.00000000 );
                        sub_1307( ref l_U1060 );
                        sub_23019();
                    }
                    if ((IS_VEH_DRIVEABLE( l_U1074 )) AND (l_U831))
                    {
                        LOCK_CAR_DOORS( l_U1074, 3 );
                        SET_FOLLOW_VEHICLE_CAM_SUBMODE( 1 );
                        SETTIMERA( 0 );
                        l_U1055++;
                    }
                    else
                    {
                        sub_23163();
                        if (l_U827)
                        {
                            sub_9767( 7 );
                        }
                        else
                        {
                            sub_9767( 8 );
                        }
                    }
                }
                break;
                case 1:
                if (NOT (IS_CHAR_INJURED( l_U1064 )))
                {
                    if (sub_14122( "FCB2_DRPOFF", ref l_U1067, 6, 1 ))
                    {
                        TASK_LOOK_AT_CHAR( l_U1064, sub_810(), 3000, 0 );
                        l_U1055++;
                    }
                }
                else
                {
                    l_U1055++;
                }
                break;
                case 2:
                if (IS_PLAYER_PLAYING( sub_515() ))
                {
                    if (NOT (sub_23546( l_U1067 )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U1074 ))
                        {
                            if (IS_CHAR_IN_CAR( sub_810(), l_U1074 ))
                            {
                                CLEAR_CHAR_TASKS( sub_810() );
                                TASK_LEAVE_CAR_IMMEDIATELY( sub_810(), l_U1074 );
                            }
                            if (DOES_GROUP_EXIST( sub_12448() ))
                            {
                                GET_GROUP_SIZE( sub_12448(), ref uVar9, ref I );
                                if (I > 0)
                                {
                                    GET_GROUP_MEMBER( sub_12448(), 0, ref l_U1065 );
                                    if (NOT (IS_CHAR_INJURED( l_U1065 )))
                                    {
                                        if (IS_CHAR_IN_CAR( l_U1065, l_U1074 ))
                                        {
                                            TASK_LEAVE_CAR_IMMEDIATELY( l_U1065, l_U1074 );
                                        }
                                    }
                                    if (I > 1)
                                    {
                                        GET_GROUP_MEMBER( sub_12448(), 1, ref l_U1065 );
                                        if (NOT (IS_CHAR_INJURED( l_U1065 )))
                                        {
                                            if (IS_CHAR_IN_CAR( l_U1065, l_U1074 ))
                                            {
                                                TASK_LEAVE_CAR_IMMEDIATELY( l_U1065, l_U1074 );
                                            }
                                        }
                                    }
                                }
                            }
                            l_U1055++;
                        }
                        else if (l_U827)
                        {
                            sub_9767( 7 );
                        }
                        else
                        {
                            sub_9767( 8 );
                        }
                    }
                }
                break;
                case 3:
                if (IS_PLAYER_PLAYING( sub_515() ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1074 ))
                    {
                        if ((((NOT (IS_CHAR_IN_CAR( sub_810(), l_U1074 ))) AND (NOT (sub_24089( sub_810() )))) AND (NOT (sub_24334( l_U1074 )))) AND (NOT (sub_24505( l_U1074 ))))
                        {
                            if (DOES_BLIP_EXIST( l_U810 ))
                            {
                                REMOVE_BLIP( l_U810 );
                            }
                            sub_1333();
                            SET_PLAYER_CONTROL( sub_515(), 1 );
                            LOCK_CAR_DOORS( l_U1074, 2 );
                            SET_CAR_ENGINE_ON( l_U1074, 1, 1 );
                            SET_HELI_BLADES_FULL_SPEED( l_U1074 );
                            SETTIMERA( 0 );
                            l_U1055++;
                        }
                    }
                    else if (l_U827)
                    {
                        sub_9767( 7 );
                    }
                    else
                    {
                        sub_9767( 8 );
                    }
                }
                break;
                case 4:
                sub_23163();
                if (l_U827)
                {
                    sub_9767( 7 );
                }
                else
                {
                    sub_9767( 8 );
                }
                break;
            }
            break;
            case 7:
            if (IS_PLAYER_PLAYING( sub_515() ))
            {
                if (NOT (IS_CAR_DEAD( l_U1074 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_810(), l_U1074, 400.00000000, 400.00000000, 0 )))
                    {
                        sub_907();
                    }
                }
            }
            switch (l_U1055)
            {
                case 0:
                sub_722();
                if (NOT (IS_CAR_DEAD( l_U1074 )))
                {
                    FREEZE_CAR_POSITION( l_U1074, 0 );
                    LOCK_CAR_DOORS( l_U1074, 3 );
                }
                if (DOES_BLIP_EXIST( l_U809 ))
                {
                    REMOVE_BLIP( l_U809 );
                }
                if (DOES_BLIP_EXIST( l_U810 ))
                {
                    REMOVE_BLIP( l_U810 );
                }
                l_U1055++;
                break;
                default:
            }
            sub_25075();
            if (NOT sub_25879())
            {
                sub_470();
            }
            break;
            case 8:
            if (IS_PLAYER_PLAYING( sub_515() ))
            {
                if (NOT (IS_CAR_DEAD( l_U1074 )))
                {
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( sub_810(), l_U1074, 400.00000000, 400.00000000, 0 )))
                    {
                        sub_907();
                    }
                }
            }
            switch (l_U1055)
            {
                case 0:
                sub_722();
                if (NOT (IS_CAR_DEAD( l_U1074 )))
                {
                    FREEZE_CAR_POSITION( l_U1074, 0 );
                    LOCK_CAR_DOORS( l_U1074, 3 );
                }
                if (DOES_BLIP_EXIST( l_U809 ))
                {
                    REMOVE_BLIP( l_U809 );
                }
                if (DOES_BLIP_EXIST( l_U810 ))
                {
                    REMOVE_BLIP( l_U810 );
                }
                l_U1055++;
                break;
                default:
            }
            sub_10106();
            if (NOT sub_26274())
            {
                sub_470();
            }
            break;
        }
        sub_26446();
        sub_26683();
        if (l_U816)
        {
            SET_FOLLOW_VEHICLE_CAM_SUBMODE( 4 );
            l_U816 = 0;
        }
        if (g_U64927)
        {
            sub_470();
        }
        if (NOT l_U830)
        {
            if (DOES_CHAR_EXIST( l_U1064 ))
            {
                if (IS_CHAR_INJURED( l_U1064 ))
                {
                    bVar2 = false;
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U1064, sub_810(), 0 ))
                    {
                        bVar2 = true;
                    }
                    sub_26919( bVar2, l_U1064 );
                    l_U830 = 1;
                }
            }
        }
        WAIT( 0 );
    }
    sub_470();
    return;
}

void sub_470()
{
    PRINTSTRING( "BRUCIE HELI - CLEARED UP \n" );
    if (IS_PLAYER_PLAYING( sub_515() ))
    {
        sub_559( 1 );
        sub_782( 1 );
    }
    sub_907();
    sub_1028();
    if (l_U1060 == 1)
    {
        sub_1307( ref l_U1060 );
    }
    sub_1333();
    if (DOES_BLIP_EXIST( l_U810 ))
    {
        REMOVE_BLIP( l_U810 );
    }
    if (IS_VEH_DRIVEABLE( l_U1074 ))
    {
        FREEZE_CAR_POSITION( l_U1074, 0 );
    }
    sub_1440();
    g_U64927 = 0;
    g_U64920 = -1;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_515()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_559(boolean bParam0)
{
    if (NOT bParam0)
    {
        if (NOT l_U832)
        {
            SET_PLAYER_CONTROL( sub_515(), 0 );
            sub_600();
            SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 0 );
            l_U832 = 1;
        }
    }
    else if (l_U832)
    {
        SET_PLAYER_CONTROL( sub_515(), 1 );
        sub_722();
        SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 1 );
        l_U832 = 0;
    }
    return;
}

void sub_600()
{
    return sub_611( 1, 1 );
}

int sub_611(boolean bParam0, unknown uParam1)
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

void sub_722()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_782(boolean bParam0)
{
    if (NOT bParam0)
    {
        if (NOT l_U833)
        {
            SET_CHAR_VISIBLE( sub_810(), 0 );
            l_U833 = 1;
        }
    }
    else if (l_U833)
    {
        SET_CHAR_VISIBLE( sub_810(), 1 );
        l_U833 = 0;
    }
    return;
}

void sub_810()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_907()
{
    if (DOES_BLIP_EXIST( l_U809 ))
    {
        REMOVE_BLIP( l_U809 );
    }
    if (DOES_CHAR_EXIST( l_U1064 ))
    {
        sub_967( l_U1064 );
    }
    if (DOES_OBJECT_EXIST( l_U1063 ))
    {
        DELETE_OBJECT( ref l_U1063 );
    }
    return;
}

void sub_967(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_1028()
{
    if ((((DOES_CAM_EXIST( l_U1046 )) || (DOES_CAM_EXIST( l_U1048 ))) || (DOES_CAM_EXIST( l_U1047 ))) || (DOES_CAM_EXIST( l_U1049 )))
    {
        if (IS_PLAYER_PLAYING( sub_515() ))
        {
            sub_782( 1 );
        }
        if (DOES_CAM_EXIST( l_U1046 ))
        {
            DESTROY_CAM( l_U1046 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 500 );
        }
        if (DOES_CAM_EXIST( l_U1048 ))
        {
            DESTROY_CAM( l_U1048 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 500 );
        }
        if (DOES_CAM_EXIST( l_U1047 ))
        {
            DESTROY_CAM( l_U1047 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 500 );
        }
        if (DOES_CAM_EXIST( l_U1049 ))
        {
            DESTROY_CAM( l_U1049 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 0, 0 );
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    return;
}

void sub_1307(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_1333()
{
    if (NOT (l_U1099 == -1))
    {
        SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U1099 );
        l_U1099 = -1;
    }
    return;
}

void sub_1440()
{
    if ((((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BRCH1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BRCH2" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BRCH3" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BRCH4" )))
    {
        CLEAR_HELP();
    }
    return;
}

void sub_1570(int iParam0)
{
    if (NOT l_U98)
    {
        sub_1590();
    }
    if (iParam0 == -1)
    {
        if (NOT sub_4787())
        {
            g_U64920 = 0;
        }
    }
    else
    {
        g_U64920 = iParam0;
    }
    if ((g_U64920 < 0) || (g_U64920 >= 25))
    {
        g_U64920 = 0;
    }
    return l_U100[g_U64920];
}

void sub_1590()
{
    l_U100[0]._fU0 = {-267.23070000, 215.22850000, 222.58660000};
    l_U100[0]._fU16 = {-224.24710000, 237.59570000, 14.80550000};
    l_U100[0]._fU28 = 262.40520000;
    l_U100[0]._fU32 = {-267.93950000, 198.38260000, 220.72550000};
    l_U100[0]._fU44 = 0.00000000;
    l_U100[0]._fU48 = 1;
    l_U100[1]._fU0 = {123.72880000, 1334.86600000, 1.78000000};
    l_U100[1]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[1]._fU28 = 0.00000000;
    l_U100[1]._fU32 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[1]._fU44 = 0.00000000;
    l_U100[1]._fU48 = 0;
    l_U100[2]._fU0 = {-130.83230000, 1657.62100000, 48.15180000};
    l_U100[2]._fU16 = {-150.97410000, 1645.37200000, 20.42860000};
    l_U100[2]._fU28 = 225.00000000;
    l_U100[2]._fU32 = {-142.54930000, 1659.79100000, 52.40900000};
    l_U100[2]._fU44 = 275.63830000;
    l_U100[2]._fU48 = 1;
    l_U100[3]._fU0 = {179.11420000, -614.42640000, 260.71940000};
    l_U100[3]._fU16 = {154.43230000, -580.69670000, 14.69460000};
    l_U100[3]._fU28 = 0.00000000;
    l_U100[3]._fU32 = {160.08150000, -592.97440000, 261.71950000};
    l_U100[3]._fU44 = 270.00000000;
    l_U100[3]._fU48 = 1;
    l_U100[4]._fU0 = {-666.81570000, -173.54820000, 3.84170000};
    l_U100[4]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[4]._fU28 = 0.00000000;
    l_U100[4]._fU32 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[4]._fU44 = 0.00000000;
    l_U100[4]._fU48 = 0;
    l_U100[5]._fU0 = {-19.16920000, -349.44100000, 28.76150000};
    l_U100[5]._fU16 = {-6.69420000, -364.74400000, 14.91190000};
    l_U100[5]._fU28 = 270.00000000;
    l_U100[5]._fU32 = {-18.99100000, -361.36360000, 29.76180000};
    l_U100[5]._fU44 = 0.00000000;
    l_U100[5]._fU48 = 1;
    l_U100[6]._fU0 = {-498.72420000, 1390.05100000, 31.04970000};
    l_U100[6]._fU16 = {-505.90690000, 1366.07700000, 17.23940000};
    l_U100[6]._fU28 = 90.00000000;
    l_U100[6]._fU32 = {-486.01780000, 1394.92400000, 32.08560000};
    l_U100[6]._fU44 = 0.00000000;
    l_U100[6]._fU48 = 1;
    l_U100[7]._fU0 = {-235.64820000, 739.35410000, 6.17110000};
    l_U100[7]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[7]._fU28 = 0.00000000;
    l_U100[7]._fU32 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[7]._fU44 = 76.00000000;
    l_U100[7]._fU48 = 0;
    l_U100[8]._fU0 = {989.73400000, 1858.37000000, 38.92900000};
    l_U100[8]._fU16 = {981.76800000, 1839.55100000, 23.84300000};
    l_U100[8]._fU28 = 105.00000000;
    l_U100[8]._fU32 = {979.00000000, 1842.00000000, 39.98300000};
    l_U100[8]._fU44 = 356.00000000;
    l_U100[8]._fU48 = 1;
    l_U100[9]._fU0 = {710.88320000, 1919.65800000, 26.30350000};
    l_U100[9]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[9]._fU28 = 0.00000000;
    l_U100[9]._fU32 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[9]._fU44 = 0.00000000;
    l_U100[9]._fU48 = 0;
    l_U100[10]._fU0 = {473.07860000, 2055.41900000, 5.69720000};
    l_U100[10]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[10]._fU28 = 0.00000000;
    l_U100[10]._fU32 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[10]._fU44 = 0.00000000;
    l_U100[10]._fU48 = 0;
    l_U100[11]._fU0 = {1489.04500000, 700.34230000, 40.13960000};
    l_U100[11]._fU16 = {1492.36400000, 686.01860000, 29.37190000};
    l_U100[11]._fU28 = 270.00000000;
    l_U100[11]._fU32 = {1470.00000000, 694.23300000, 41.14000000};
    l_U100[11]._fU44 = 326.10000000;
    l_U100[11]._fU48 = 1;
    l_U100[12]._fU0 = {928.00000000, -665.12000000, 23.59000000};
    l_U100[12]._fU16 = {915.40420000, -679.42300000, 16.44000000};
    l_U100[12]._fU28 = 180.00000000;
    l_U100[12]._fU32 = {916.70000000, -671.70000000, 24.50000000};
    l_U100[12]._fU44 = 0.00000000;
    l_U100[12]._fU48 = 1;
    l_U100[13]._fU0 = {1104.68700000, 590.21720000, 53.93700000};
    l_U100[13]._fU16 = {1105.42300000, 563.31700000, 27.86000000};
    l_U100[13]._fU28 = 180.00000000;
    l_U100[13]._fU32 = {1125.34200000, 595.07700000, 56.20000000};
    l_U100[13]._fU44 = 90.00000000;
    l_U100[13]._fU48 = 1;
    l_U100[14]._fU0 = {1145.69600000, -28.94000000, 57.55100000};
    l_U100[14]._fU16 = {1140.50000000, -37.49000000, 37.90000000};
    l_U100[14]._fU28 = 165.00000000;
    l_U100[14]._fU32 = {1138.19800000, -20.07660000, 56.23690000};
    l_U100[14]._fU44 = 270.00000000;
    l_U100[14]._fU48 = 1;
    l_U100[15]._fU0 = {1928.12400000, 478.60600000, 26.32900000};
    l_U100[15]._fU16 = {1934.28000000, 464.94000000, 18.28000000};
    l_U100[15]._fU28 = 180.00000000;
    l_U100[15]._fU32 = {1947.52000000, 468.36000000, 27.34000000};
    l_U100[15]._fU44 = 76.00000000;
    l_U100[15]._fU48 = 1;
    l_U100[16]._fU0 = {-1212.84100000, 135.35750000, 3.20640000};
    l_U100[16]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[16]._fU28 = 0.00000000;
    l_U100[16]._fU32 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[16]._fU44 = 0.00000000;
    l_U100[16]._fU48 = 0;
    l_U100[17]._fU0 = {-1718.49700000, 328.48700000, 42.40560000};
    l_U100[17]._fU16 = {-1740.21400000, 329.25020000, 25.44380000};
    l_U100[17]._fU28 = 60.00000000;
    l_U100[17]._fU32 = {-1728.46900000, 325.25920000, 42.40630000};
    l_U100[17]._fU44 = 300.00000000;
    l_U100[17]._fU48 = 1;
    l_U100[18]._fU0 = {-1201.74600000, 914.49170000, 99.74560000};
    l_U100[18]._fU16 = {-1178.35200000, 920.13810000, 19.55690000};
    l_U100[18]._fU28 = 270.00000000;
    l_U100[18]._fU32 = {-1191.20300000, 931.90990000, 99.74670000};
    l_U100[18]._fU44 = 90.00000000;
    l_U100[18]._fU48 = 1;
    l_U100[19]._fU0 = {-1445.24900000, 1363.79600000, 20.56830000};
    l_U100[19]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[19]._fU28 = 0.00000000;
    l_U100[19]._fU32 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[19]._fU44 = 0.00000000;
    l_U100[19]._fU48 = 0;
    l_U100[20]._fU0 = {-1050.21700000, -307.04530000, 2.91640000};
    l_U100[20]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[20]._fU28 = 0.00000000;
    l_U100[20]._fU32 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[20]._fU44 = 0.00000000;
    l_U100[20]._fU48 = 0;
    l_U100[21]._fU0 = {-782.00510000, 1390.05900000, 0.97790000};
    l_U100[21]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[21]._fU28 = 0.00000000;
    l_U100[21]._fU32 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[21]._fU44 = 0.00000000;
    l_U100[21]._fU48 = 0;
    l_U100[22]._fU0 = {-608.88820000, -930.24240000, 3.83790000};
    l_U100[22]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[22]._fU28 = 0.00000000;
    l_U100[22]._fU32 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[22]._fU44 = 0.00000000;
    l_U100[22]._fU48 = 0;
    l_U100[23]._fU0 = {436.70540000, 180.56010000, 70.43960000};
    l_U100[23]._fU16 = {420.33100000, 189.23710000, 8.49250000};
    l_U100[23]._fU28 = 90.00000000;
    l_U100[23]._fU32 = {424.17010000, 200.01470000, 70.41130000};
    l_U100[23]._fU44 = 253.52230000;
    l_U100[23]._fU48 = 1;
    l_U100[24]._fU0 = {606.08740000, 1059.21400000, 2.94380000};
    l_U100[24]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[24]._fU28 = 0.00000000;
    l_U100[24]._fU32 = {0.00000000, 0.00000000, 0.00000000};
    l_U100[24]._fU44 = 0.00000000;
    l_U100[24]._fU48 = 0;
    l_U98 = 1;
    return;
}

int sub_4787()
{
    int I;
    int iVar3;
    int J;
    int iVar5;
    int[5] iVar6;
    float[5] fVar12;
    int iVar18;
    float fVar19;
    vector vVar20;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    int iVar26;

    if (NOT l_U98)
    {
        sub_1590();
    }
    array(ref iVar6, 5);
    array(ref fVar12, 5);
    if (IS_PLAYER_PLAYING( sub_515() ))
    {
        GET_CHAR_COORDINATES( sub_810(), ref vVar20.x, ref vVar20.y, ref vVar20.z );
        iVar26 = GET_MAP_AREA_FROM_COORDS( vVar20 );
    }
    else
    {
        return 0;
    }
    if (sub_4885())
    {
        g_U64920 = 22;
        return 1;
    }
    for ( I = 0; I < 5; I++ )
    {
        iVar6[I] = -1;
        fVar12[I] = 1E8;
    }
    iVar18 = -1;
    fVar19 = 1E8;
    for ( I = 0; I < 25; I++ )
    {
        if (NOT (I == 22))
        {
            if ((GET_MAP_AREA_FROM_COORDS( l_U100[I]._fU0 )) == iVar26)
            {
                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( l_U100[I]._fU0._fU0, l_U100[I]._fU0._fU4, l_U100[I]._fU0._fU8, 5.00000000, 5.00000000, 5.00000000 )))
                {
                    uVar23 = {l_U100[I]._fU0 - vVar20};
                    for ( iVar3 = 0; iVar3 < 5; iVar3++ )
                    {
                        if ((VMAG( uVar23 )) < fVar12[iVar3])
                        {
                            for ( J = 0; J < 5; J++ )
                            {
                                iVar5 = 5 - (J + 1);
                                if ((iVar5 > iVar3) AND (iVar5 > 0))
                                {
                                    iVar6[iVar5] = iVar6[iVar5 - 1];
                                    fVar12[iVar5] = fVar12[iVar5 - 1];
                                }
                            }
                            iVar6[iVar3] = I;
                            fVar12[iVar3] = VMAG( uVar23 );
                            iVar3 = 5;
                        }
                    }
                }
            }
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (iVar6[I] == -1))
        {
            if (fVar12[I] > l_U99)
            {
                if (fVar12[I] < fVar19)
                {
                    iVar18 = iVar6[I];
                    fVar19 = fVar12[I];
                }
            }
        }
    }
    if (iVar18 == -1)
    {
        for ( I = 0; I < 5; I++ )
        {
            if (NOT (iVar6[I] == -1))
            {
                iVar18 = iVar6[I];
                fVar19 = fVar12[I];
            }
        }
    }
    if (NOT (iVar18 == -1))
    {
        g_U64920 = iVar18;
        return 1;
        break;
    }
    return 0;
}

int sub_4885()
{
    if (IS_PLAYER_PLAYING( sub_515() ))
    {
        if ((IS_CHAR_IN_AREA_3D( sub_810(), -832.00000000, -1096.00000000, -100.00000000, -462.80000000, -616.00000000, 100.00000000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_810(), -512.00000000, -1016.00000000, -100.00000000, -384.00000000, -896.00000000, 100.00000000, 0 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_5691(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_5708();
    return;
}

void sub_5708()
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

void sub_5827(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5907( "\n PED NUMBER ", uParam0 );
    sub_5947( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5907(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5947(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6152(unknown uParam0)
{
    REQUEST_MODEL( sub_6163( uParam0 ) );
    return;
}

int sub_6163(unknown uParam0)
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
    sub_6826( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_6826(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_6906(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_6163( uParam0 ) );
}

int sub_7103(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    GET_GAME_VIEWPORT_ID( ref uVar7 );
    if (CAM_IS_SPHERE_VISIBLE( uVar7, uParam0, uParam1, uParam2, uParam3 ))
    {
        if (IS_PLAYER_PLAYING( sub_515() ))
        {
            GET_CHAR_COORDINATES( sub_810(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {(vector( uParam2, uParam1, uParam0)) - vVar8};
            if ((VMAG( uVar11 )) < fParam4)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_7650(unknown uParam0, unknown uParam1, unknown uParam2)
{
    CREATE_CHAR_INSIDE_CAR( uParam2, 25, sub_6163( uParam0 ), uParam1 );
    sub_7683( uParam0, (uParam1^) );
    return;
}

void sub_7683(unknown uParam0, unknown uParam1)
{
    sub_7695( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_7695(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_7789( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_8333( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_7789(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_8333(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_7789( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7789( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7789( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_7789( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_7789( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_7789( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7789( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_7789( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_7789( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7789( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_7789( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_7789( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_7789( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_9329()
{
    if (IS_VEH_DRIVEABLE( l_U1074 ))
    {
        LOCK_CAR_DOORS( l_U1074, 2 );
        SET_CAR_ENGINE_ON( l_U1074, 1, 1 );
        SET_CAR_ON_GROUND_PROPERLY( l_U1074 );
        FREEZE_CAR_POSITION( l_U1074, 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U1064 )))
    {
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U1064, 0 );
    }
    l_U835 = 0;
    return;
}

void sub_9681(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_9719(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_6163( uParam0 ) );
    return;
}

void sub_9767(int iParam0)
{
    if (NOT (iParam0 == l_U1054))
    {
        l_U1054 = iParam0;
        l_U1055 = 0;
        l_U819 = 1;
    }
    return;
}

void sub_9822()
{
    if (DOES_VEHICLE_EXIST( l_U1074 ))
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U1074 )))
        {
            sub_9767( 5 );
            if (l_U820)
            {
                PRINTSTRING( "GET_OUT_AND_FLY_OFF - 6 \n" );
            }
        }
    }
    if (DOES_CHAR_EXIST( l_U1064 ))
    {
        if (IS_CHAR_INJURED( l_U1064 ))
        {
            sub_9767( 5 );
            if (l_U820)
            {
                PRINTSTRING( "GET_OUT_AND_FLY_OFF - 7 \n" );
            }
        }
        else if (IS_VEH_DRIVEABLE( l_U1074 ))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U1064, l_U1074 )))
            {
                sub_9767( 5 );
                if (l_U820)
                {
                    PRINTSTRING( "GET_OUT_AND_FLY_OFF - 8 \n" );
                }
            }
        }
    }
    return;
}

void sub_10106()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (l_U837._fU48)
    {
        if (l_U811 == 0)
        {
            if (IS_PLAYER_PLAYING( sub_515() ))
            {
                if (LOCATE_CHAR_ON_FOOT_3D( sub_810(), l_U837._fU32._fU0, l_U837._fU32._fU4, l_U837._fU32._fU8, 1.00000000, 1.00000000, 1.00000000, 1 ))
                {
                    SET_PLAYER_CONTROL( sub_515(), 0 );
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    if (IS_PLAYER_PLAYING( sub_515() ))
                    {
                        uVar2 = {l_U837._fU16};
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8 + 1.00000000, ref uVar2._fU8 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
                        SET_CHAR_COORDINATES( sub_810(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        SET_CHAR_HEADING( sub_810(), l_U837._fU28 );
                        REQUEST_COLLISION_AT_POSN( l_U837._fU16._fU0, l_U837._fU16._fU4, l_U837._fU16._fU8 );
                        LOAD_ALL_OBJECTS_NOW();
                        LOAD_SCENE( l_U837._fU16._fU0, l_U837._fU16._fU4, l_U837._fU16._fU8 );
                        WAIT( 0 );
                    }
                    if (IS_PLAYER_PLAYING( sub_515() ))
                    {
                        uVar2 = {l_U837._fU16};
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8 + 1.00000000, ref uVar2._fU8 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
                        SET_CHAR_COORDINATES( sub_810(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        SET_CHAR_HEADING( sub_810(), l_U837._fU28 );
                    }
                    if (IS_PLAYER_PLAYING( sub_515() ))
                    {
                        if (DOES_BLIP_EXIST( l_U809 ))
                        {
                            REMOVE_BLIP( l_U809 );
                        }
                        ADD_BLIP_FOR_COORD( l_U837._fU16._fU0, l_U837._fU16._fU4, l_U837._fU16._fU8, ref l_U809 );
                        CHANGE_BLIP_SPRITE( l_U809, 32 );
                        SET_CAM_BEHIND_PED( sub_810() );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    if (IS_PLAYER_PLAYING( sub_515() ))
                    {
                        SET_PLAYER_CONTROL( sub_515(), 1 );
                    }
                    l_U811 = 1;
                }
            }
            if (l_U811 == 0)
            {
                if (IS_PLAYER_PLAYING( sub_515() ))
                {
                    if (LOCATE_CHAR_ON_FOOT_3D( sub_810(), l_U837._fU16._fU0, l_U837._fU16._fU4, l_U837._fU16._fU8, 1.00000000, 1.00000000, 1.00000000, 1 ))
                    {
                        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BRCH1" ))
                        {
                            sub_1440();
                        }
                        SET_PLAYER_CONTROL( sub_515(), 0 );
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                        if (IS_PLAYER_PLAYING( sub_515() ))
                        {
                            uVar2 = {l_U837._fU32};
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8 + 1.00000000, ref uVar2._fU8 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
                            SET_CHAR_COORDINATES( sub_810(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( sub_810(), l_U837._fU44 );
                            REQUEST_COLLISION_AT_POSN( l_U837._fU32._fU0, l_U837._fU32._fU4, l_U837._fU32._fU8 );
                            LOAD_ALL_OBJECTS_NOW();
                            LOAD_SCENE( l_U837._fU32._fU0, l_U837._fU32._fU4, l_U837._fU32._fU8 );
                            WAIT( 0 );
                        }
                        if (IS_PLAYER_PLAYING( sub_515() ))
                        {
                            uVar2 = {l_U837._fU32};
                            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8 + 1.00000000, ref uVar2._fU8 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
                            SET_CHAR_COORDINATES( sub_810(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                            SET_CHAR_HEADING( sub_810(), l_U837._fU44 );
                        }
                        if (IS_PLAYER_PLAYING( sub_515() ))
                        {
                            if (DOES_BLIP_EXIST( l_U809 ))
                            {
                                REMOVE_BLIP( l_U809 );
                            }
                            ADD_BLIP_FOR_COORD( l_U837._fU0._fU0, l_U837._fU0._fU4, l_U837._fU0._fU8, ref l_U809 );
                            CHANGE_BLIP_SPRITE( l_U809, 32 );
                            SET_CAM_BEHIND_PED( sub_810() );
                        }
                        DO_SCREEN_FADE_IN( 500 );
                        while (NOT IS_SCREEN_FADED_IN())
                        {
                            WAIT( 0 );
                        }
                        if (IS_PLAYER_PLAYING( sub_515() ))
                        {
                            SET_PLAYER_CONTROL( sub_515(), 1 );
                        }
                        l_U811 = 1;
                    }
                }
            }
        }
        else if (IS_PLAYER_PLAYING( sub_515() ))
        {
            if ((NOT (LOCATE_CHAR_ON_FOOT_3D( sub_810(), l_U837._fU16._fU0, l_U837._fU16._fU4, l_U837._fU16._fU8, 2.00000000, 2.00000000, 5.00000000, 0 ))) AND (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_810(), l_U837._fU32._fU0, l_U837._fU32._fU4, l_U837._fU32._fU8, 2.00000000, 2.00000000, 5.00000000, 0 ))))
            {
                l_U811 = 0;
            }
        }
    }
    return;
}

void sub_11724()
{
    int I;

    l_U1056 = 0;
    while (NOT (LOAD_ALL_PATH_NODES( 1 )))
    {
        WAIT( 0 );
    }
    sub_11766();
    for ( I = 0; I < 25; I++ )
    {
        sub_11803( I );
    }
    LOAD_ALL_PATH_NODES( 0 );
    return;
}

void sub_11766()
{
    l_U1056 = 0;
    return;
}

void sub_11803(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    if (sub_11814( uParam0 ))
    {
        FIND_STREET_NAME_AT_POSITION( l_U100[uParam0]._fU0, ref uVar3, ref iVar4 );
        l_U870[l_U1056]._fU0 = uParam0;
        l_U870[l_U1056]._fU20 = uVar3;
        if (NOT (iVar4 == 0))
        {
            l_U870[l_U1056]._fU24 = iVar4;
        }
        else
        {
            l_U870[l_U1056]._fU24 = uVar3;
        }
        StrCopy( ref l_U870[l_U1056]._fU4, GET_NAME_OF_ZONE( l_U100[uParam0]._fU0._fU0, l_U100[uParam0]._fU0._fU4, l_U100[uParam0]._fU0._fU8 ), 16 );
        l_U1056++;
    }
    return;
}

int sub_11814(int iParam0)
{
    if (NOT (iParam0 == g_U64920))
    {
        if (sub_11851( l_U100[iParam0]._fU0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_11851(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    iVar5 = GET_INT_STAT( 363 );
    iVar6 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    if (iVar6 <= iVar5)
    {
        return 1;
    }
    return 0;
}

void sub_12448()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_12913()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    int iVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    vector vVar14;
    unknown uVar17;
    vector vVar18;
    unknown uVar21;
    float fVar22;

    GET_GAME_CAM( ref uVar5 );
    GET_CAM_ROT( uVar5, ref uVar2._fU0, ref uVar2._fU4, ref uVar6 );
    vVar7 = {0.00000000, 1.00000000, 0.00000000};
    vVar7 = {sub_12979( vVar7, 0.00000000, 0.00000000, uVar6 )};
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar10, ref iVar11, ref uVar12, ref uVar13 );
    if ((iVar10 == 0) AND (iVar11 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar10, ref iVar11 );
    }
    uVar2._fU0 = iVar10 / 128.00000000;
    uVar2._fU4 = iVar11 / -128.00000000;
    uVar2._fU8 = 0.00000000;
    if ((VMAG( uVar2 )) < 0.50000000)
    {
        return 0;
    }
    GET_HEADING_FROM_VECTOR_2D( uVar2._fU0, uVar2._fU4, ref uVar17 );
    vVar14 = {0.00000000, 1.00000000, 0.00000000};
    vVar14 = {sub_12979( vVar14, 0.00000000, 0.00000000, uVar6 )};
    vVar14 = {sub_12979( vVar14, 0.00000000, 0.00000000, uVar17 )};
    if (IS_PLAYER_PLAYING( sub_515() ))
    {
        GET_CHAR_HEADING( sub_810(), ref uVar21 );
        vVar18 = {0.00000000, 1.00000000, 0.00000000};
        vVar18 = {sub_12979( vVar18, 0.00000000, 0.00000000, uVar21 )};
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( vVar18.x, vVar18.y, vVar14.x, vVar14.y, ref fVar22 );
    if (fVar22 > 60.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_12979(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown Result;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = {uParam0};
    uVar8 = COS( uParam3._fU0 );
    uVar9 = SIN( uParam3._fU0 );
    uVar13._fU0 = uParam0._fU0;
    uVar13._fU4 = (uVar8 * Result._fU4) - (uVar9 * Result._fU8);
    uVar13._fU8 = (uVar9 * Result._fU4) + (uVar8 * Result._fU8);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU4 );
    uVar9 = SIN( uParam3._fU4 );
    uVar13._fU0 = (uVar8 * Result._fU0) + (uVar9 * Result._fU8);
    uVar13._fU4 = uParam0._fU4;
    uVar13._fU8 = (uVar8 * Result._fU8) - (uVar9 * Result._fU0);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU8 );
    uVar9 = SIN( uParam3._fU8 );
    uVar13._fU0 = (uVar8 * Result._fU0) - (uVar9 * Result._fU4);
    uVar13._fU4 = (uVar9 * Result._fU0) + (uVar8 * Result._fU4);
    uVar13._fU8 = uParam0._fU8;
    Result = {uVar13};
    return Result;
}

void sub_13769(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    return;
}

void sub_14122(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_14143( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_14143(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_14197( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_14197(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_14219( iParam1 )))
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
    sub_14907( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_14219(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_14296( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_14296( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_14296( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_14296(unknown uParam0)
{
    return;
}

void sub_14907(int iParam0, int iParam1)
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

void sub_17207()
{
    unknown uVar2;

    if (IS_SCREEN_FADED_IN())
    {
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BRCH3" )))
        {
            PRINT_HELP_FOREVER( "BRCH3" );
        }
        if ((sub_17265( 1 )) || (sub_17346( 1 )))
        {
            GET_FRAME_TIME( ref uVar2 );
            l_U1059 += ROUND( uVar2 * 1000.00000000 );
        }
        else
        {
            l_U1059 = 0;
        }
        if (NOT l_U817)
        {
            if (NOT l_U819)
            {
                if (sub_17265( 1 ))
                {
                    l_U818 = 1;
                    l_U819 = 1;
                }
            }
            else if (sub_17265( 1 ))
            {
                if (l_U1059 > 1000)
                {
                    l_U818 = 1;
                }
            }
        }
        if (NOT l_U818)
        {
            if (NOT l_U819)
            {
                if (sub_17346( 1 ))
                {
                    l_U817 = 1;
                    l_U819 = 1;
                }
            }
            else if (sub_17346( 1 ))
            {
                if (l_U1059 > 1000)
                {
                    l_U817 = 1;
                }
            }
        }
        if (l_U818)
        {
            sub_17649();
            if (DOES_BLIP_EXIST( l_U810 ))
            {
                REMOVE_BLIP( l_U810 );
            }
        }
        if (l_U817)
        {
            sub_17747();
            if (DOES_BLIP_EXIST( l_U810 ))
            {
                REMOVE_BLIP( l_U810 );
            }
        }
        sub_17835();
    }
    return;
}

int sub_17265(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    if ((iVar4 < 65504) || ((uParam0) AND (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 ))))
    {
        return 1;
    }
    return 0;
}

int sub_17346(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar3, ref iVar4, ref uVar5, ref uVar6 );
    if ((iVar3 == 0) AND (iVar4 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar3, ref iVar4 );
    }
    if ((iVar4 > 32) || ((uParam0) AND (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 ))))
    {
        return 1;
    }
    return 0;
}

void sub_17649()
{
    l_U1057 += -1;
    if (l_U1057 < 0)
    {
        l_U1057 = l_U1056 - 1;
    }
    l_U818 = 0;
    return;
}

void sub_17747()
{
    l_U1057++;
    if (l_U1057 > (l_U1056 - 1))
    {
        l_U1057 = 0;
    }
    l_U817 = 0;
    return;
}

void sub_17835()
{
    unknown uVar2;

    if (l_U1056 > 0)
    {
        l_U813 = 1;
        if (l_U1056 > 0)
        {
            uVar2 = l_U870[l_U1057]._fU0;
            l_U850 = {l_U100[uVar2]};
            l_U863 = {l_U870[l_U1057]};
        }
        else
        {
            l_U813 = 0;
        }
    }
    if (NOT (DOES_BLIP_EXIST( l_U810 )))
    {
        if (DOES_BLIP_EXIST( l_U810 ))
        {
            REMOVE_BLIP( l_U810 );
        }
        ADD_BLIP_FOR_COORD( l_U850._fU0._fU0, l_U850._fU0._fU4, l_U850._fU0._fU8, ref l_U810 );
        CHANGE_BLIP_COLOUR( l_U810, 6 );
        FLASH_BLIP( l_U810, 1 );
    }
    return;
}

void sub_18190()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    fVar2 = l_U850._fU0._fU8 + 50.00000000;
    if (NOT (IS_CAR_DEAD( l_U1074 )))
    {
        GET_CAR_COORDINATES( l_U1074, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    }
    if (uVar3._fU8 > fVar2)
    {
        fVar2 = uVar3._fU8 + 10.00000000;
    }
    return ROUND( fVar2 );
}

void sub_18559()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    fVar7 = 1.21300000;
    fVar8 = 0.79200000;
    fVar9 = 0.79200000;
    if (IS_JAPANESE_VERSION())
    {
        fVar7 = 1.21300000 * 0.75000000;
        fVar8 = 0.79200000 * 0.45000000;
        fVar9 = 0.79200000 * 0.75000000;
    }
    if (l_U815)
    {
        SET_TEXT_RENDER_ID( l_U1058 );
    }
    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    if (l_U813)
    {
        GET_HUD_COLOUR( 15, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
        SET_TEXT_SCALE( fVar7, 3.58900000 );
        SET_TEXT_WRAP( 0.00000000, 2.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        DISPLAY_TEXT( 0.00600000, 0.07300000, ref l_U863._fU4 );
        SET_TEXT_SCALE( fVar8, 2.50000000 );
        SET_TEXT_WRAP( 0.16200000, 2.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        if (l_U863._fU20 == l_U863._fU24)
        {
            DISPLAY_TEXT_WITH_SUBSTRING_GIVEN_HASH_KEY( 0.16200000, 0.54200000, "BRCSTN1", l_U863._fU20 );
        }
        else
        {
            DISPLAY_TEXT_WITH_TWO_SUBSTRINGS_GIVEN_HASH_KEYS( 0.16200000, 0.54200000, "BRCSTN2", l_U863._fU20, l_U863._fU24 );
        }
        SET_TEXT_SCALE( fVar9, 2.50000000 );
        SET_TEXT_WRAP( 0.16200000, 2.00000000 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        SET_TEXT_COLOUR( uVar2, uVar3, uVar4, uVar5 );
        SET_TEXT_BACKGROUND( 0 );
        SET_TEXT_PROPORTIONAL( 1 );
        uVar6 = sub_19088( l_U850._fU0 );
        if (NOT (COMPARE_STRING( uVar6, "FULSTP" )))
        {
            DISPLAY_TEXT( 0.16200000, 0.73300000, uVar6 );
        }
        if (l_U828)
        {
            PRINTSTRING( "Current Heli Dest coords = " );
            PRINTFLOAT( l_U850._fU0._fU0 );
            PRINTSTRING( ", " );
            PRINTFLOAT( l_U850._fU0._fU4 );
            PRINTSTRING( ", " );
            PRINTFLOAT( l_U850._fU0._fU8 );
            PRINTSTRING( "\n" );
            l_U828 = 0;
        }
    }
    return;
}

string sub_19088(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    switch (uVar5)
    {
        case 0:
        if (sub_19153( uParam0 ))
        {
            return "BRC_BR";
        }
        else
        {
            return "BRC_DK";
        }
        break;
        case 1:
        if (sub_19544( uParam0 ))
        {
            return "FULSTP";
        }
        else
        {
            return "BRC_BO";
        }
        break;
        case 2:
        return "BRC_AL";
        break;
        case 3:
        return "BRC_AD";
        break;
        default:
        return "FULSTP";
        break;
    }
    return "FULSTP";
}

int sub_19153(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = GET_NAME_OF_ZONE( uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    if (COMPARE_STRING( uVar5, "ESHOO" ))
    {
        return 1;
    }
    if (COMPARE_STRING( uVar5, "OUTL" ))
    {
        return 1;
    }
    if (COMPARE_STRING( uVar5, "SCHOL" ))
    {
        return 1;
    }
    if (COMPARE_STRING( uVar5, "SUTHS" ))
    {
        return 1;
    }
    if (COMPARE_STRING( uVar5, "BEECW" ))
    {
        return 1;
    }
    if (COMPARE_STRING( uVar5, "BEGGA" ))
    {
        return 1;
    }
    if (COMPARE_STRING( uVar5, "DOWTW" ))
    {
        return 1;
    }
    if (COMPARE_STRING( uVar5, "BOAB" ))
    {
        return 1;
    }
    if (COMPARE_STRING( uVar5, "ROTTH" ))
    {
        return 1;
    }
    if (COMPARE_STRING( uVar5, "FIISL" ))
    {
        return 1;
    }
    if (COMPARE_STRING( uVar5, "FIREP" ))
    {
        return 1;
    }
    if (COMPARE_STRING( uVar5, "HOBEH" ))
    {
        return 1;
    }
    return 0;
}

int sub_19544(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = GET_NAME_OF_ZONE( uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    if (COMPARE_STRING( uVar5, "CHISL" ))
    {
        return 1;
    }
    return 0;
}

void sub_20201()
{
    int iVar2;
    boolean bVar3;
    float fVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;
    float fVar10;
    int iVar11;

    bVar3 = true;
    if (DOES_CAM_EXIST( l_U1048 ))
    {
        DESTROY_CAM( l_U1048 );
    }
    if (bVar3)
    {
        if (IS_PLAYER_PLAYING( sub_515() ))
        {
            if (IS_VEH_DRIVEABLE( l_U1074 ))
            {
                if (IS_CHAR_IN_CAR( sub_810(), l_U1074 ))
                {
                    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar2 );
                    if (iVar2 == 4)
                    {
                        if (NOT (DOES_CAM_EXIST( l_U1049 )))
                        {
                            GET_GAME_CAM_CHILD( ref uVar5 );
                            if (DOES_CAM_EXIST( l_U1049 ))
                            {
                                DESTROY_CAM( l_U1049 );
                            }
                            CREATE_CAM( 14, ref l_U1049 );
                            ATTACH_CAM_TO_VEHICLE( l_U1049, l_U1074 );
                            SET_CAM_ATTACH_OFFSET( l_U1049, l_U1075._fU0 + l_U1096._fU0, l_U1075._fU4 + l_U1096._fU4, l_U1075._fU8 + l_U1096._fU8 );
                            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U1049, 1 );
                            sub_20500( l_U1074, ref l_U1049, 0.00000000, 0.00000000, 0.00000000 );
                            SET_CAM_FOV( l_U1049, 40.00000000 );
                            SET_CAM_ACTIVE( l_U1049, 1 );
                            SET_CAM_PROPAGATE( l_U1049, 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            sub_782( 0 );
                            l_U1050 = 0.00000000;
                            l_U1051 = 0.00000000;
                        }
                        else
                        {
                            fVar10 = 1.00000000 + ((8.00000000 - 1.00000000) * GET_MOUSE_SENSITIVITY());
                            iVar11 = ROUND( fVar10 );
                            GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar6, ref uVar7, ref iVar8, ref iVar9 );
                            if ((iVar8 == 0) AND (iVar9 == 0))
                            {
                                GET_MOUSE_INPUT( ref iVar8, ref iVar9 );
                                iVar8 *= iVar11;
                                iVar9 *= iVar11;
                            }
                            if (NOT IS_LOOK_INVERTED())
                            {
                                iVar9 *= -1;
                            }
                            if ((iVar9 > 28) || (iVar9 < 65508))
                            {
                                fVar4 = TO_FLOAT( iVar9 );
                                fVar4 *= fVar4;
                                fVar4 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
                                fVar4 *= 2.00000000;
                                if (iVar9 < 0)
                                {
                                    fVar4 *= -1.00000000;
                                }
                                l_U1051 += fVar4;
                                if (l_U1051 < -32.00000000)
                                {
                                    l_U1051 = -32.00000000;
                                }
                                if (l_U1051 > 45.00000000)
                                {
                                    l_U1051 = 45.00000000;
                                }
                            }
                            if ((iVar8 > 28) || (iVar8 < 65508))
                            {
                                fVar4 = TO_FLOAT( iVar8 );
                                fVar4 *= fVar4;
                                fVar4 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
                                fVar4 *= 2.00000000;
                                if (iVar8 > 0)
                                {
                                    fVar4 *= -1.00000000;
                                }
                                l_U1050 += fVar4;
                                if (l_U1050 < -70.00000000)
                                {
                                    l_U1050 = -70.00000000;
                                }
                                if (l_U1050 > 95.00000000)
                                {
                                    l_U1050 = 95.00000000;
                                }
                            }
                            SET_CAM_ATTACH_OFFSET( l_U1049, l_U1075._fU0 + l_U1096._fU0, l_U1075._fU4 + l_U1096._fU4, l_U1075._fU8 + l_U1096._fU8 );
                            sub_20500( l_U1074, ref l_U1049, l_U1051, 0.00000000, l_U1050 );
                            SET_CAM_FOV( l_U1049, 40.00000000 );
                            if (DOES_CAM_EXIST( l_U1049 ))
                            {
                                if (NOT (IS_CAR_DEAD( l_U1074 )))
                                {
                                    ;
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_1028();
                    }
                }
                else
                {
                    sub_1028();
                }
            }
            else
            {
                sub_1028();
            }
        }
        else
        {
            sub_1028();
        }
    }
    return;
}

void sub_20500(unknown uParam0, unknown uParam1, vector vParam2)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (DOES_CAM_EXIST( (uParam1^) ))
        {
            GET_CAR_HEADING( uParam0, ref uVar7 );
            GET_CAR_ROLL( uParam0, ref uVar9 );
            GET_CAR_PITCH( uParam0, ref uVar8 );
            vVar10.x = uVar8 * 0.80000000;
            vVar10.y = uVar9 * -0.80000000;
            vVar10.z = uVar7;
            vVar10 = {vVar10 + vParam2};
            SET_CAM_ROT( (uParam1^), vVar10.x, vVar10.y, vVar10.z );
        }
    }
    return;
}

void sub_23019()
{
    if (NOT (l_U1058 == -1))
    {
        SET_TEXT_RENDER_ID( l_U1058 );
        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    }
    return;
}

void sub_23163()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( l_U1074 ))
    {
        FREEZE_CAR_POSITION( l_U1074, 0 );
        GET_CAR_COORDINATES( l_U1074, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        uVar2._fU8 += 50.00000000;
        uVar2._fU4 += 1000.00000000;
        if (NOT (IS_CHAR_INJURED( l_U1064 )))
        {
            CLEAR_CHAR_TASKS( l_U1064 );
            OPEN_SEQUENCE_TASK( ref l_U1073 );
            TASK_HELI_MISSION( 0, l_U1074, 0, 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 4, 10, 5, -1, ROUND( uVar2._fU8 ), 50 );
            CLOSE_SEQUENCE_TASK( l_U1073 );
            TASK_PERFORM_SEQUENCE( l_U1064, l_U1073 );
            CLEAR_SEQUENCE_TASK( l_U1073 );
        }
    }
    return;
}

int sub_23546(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_14296( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_14296( "\n speech is not playing" );
    }
    return 0;
}

int sub_24089(unknown uParam0)
{
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (((((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_close_out_ds" )) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_close_out_ds_angry" ))) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_close_out_ps" ))) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_out_ds" ))) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_out_ps" )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_24334(unknown uParam0)
{
    int iVar3;
    int I;
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_PLAYER_PLAYING( sub_515() ))
        {
            if (DOES_GROUP_EXIST( sub_12448() ))
            {
                GET_GROUP_SIZE( sub_12448(), ref I, ref iVar3 );
                if (iVar3 > 0)
                {
                    for ( I = 0; I < iVar3; I++ )
                    {
                        GET_GROUP_MEMBER( sub_12448(), I, ref uVar5 );
                        if (NOT (IS_CHAR_INJURED( uVar5 )))
                        {
                            if (IS_CHAR_IN_CAR( uVar5, uParam0 ))
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_24505(unknown uParam0)
{
    int iVar3;
    int I;
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_PLAYER_PLAYING( sub_515() ))
        {
            if (DOES_GROUP_EXIST( sub_12448() ))
            {
                GET_GROUP_SIZE( sub_12448(), ref I, ref iVar3 );
                if (iVar3 > 0)
                {
                    for ( I = 0; I < iVar3; I++ )
                    {
                        GET_GROUP_MEMBER( sub_12448(), I, ref uVar5 );
                        if (NOT (IS_CHAR_INJURED( uVar5 )))
                        {
                            if (sub_24089( uVar5 ))
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_25075()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (l_U850._fU48)
    {
        if (l_U811 == 0)
        {
            if (IS_PLAYER_PLAYING( sub_515() ))
            {
                if (LOCATE_CHAR_ON_FOOT_3D( sub_810(), l_U850._fU32._fU0, l_U850._fU32._fU4, l_U850._fU32._fU8, 1.00000000, 1.00000000, 1.00000000, 1 ))
                {
                    if (IS_PLAYER_PLAYING( sub_515() ))
                    {
                        SET_PLAYER_CONTROL( sub_515(), 0 );
                    }
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    if (IS_PLAYER_PLAYING( sub_515() ))
                    {
                        uVar2 = {l_U850._fU16};
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8 + 1.00000000, ref uVar2._fU8 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
                        SET_CHAR_COORDINATES( sub_810(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        SET_CHAR_HEADING( sub_810(), l_U850._fU28 );
                        REQUEST_COLLISION_AT_POSN( l_U837._fU16._fU0, l_U837._fU16._fU4, l_U837._fU16._fU8 );
                        LOAD_ALL_OBJECTS_NOW();
                        LOAD_SCENE( l_U850._fU16._fU0, l_U850._fU16._fU4, l_U850._fU16._fU8 );
                        WAIT( 0 );
                    }
                    if (IS_PLAYER_PLAYING( sub_515() ))
                    {
                        uVar2 = {l_U850._fU16};
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8 + 1.00000000, ref uVar2._fU8 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
                        SET_CHAR_COORDINATES( sub_810(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                        SET_CHAR_HEADING( sub_810(), l_U850._fU28 );
                    }
                    if (IS_PLAYER_PLAYING( sub_515() ))
                    {
                        if (DOES_BLIP_EXIST( l_U810 ))
                        {
                            REMOVE_BLIP( l_U810 );
                        }
                        SET_CAM_BEHIND_PED( sub_810() );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    if (IS_PLAYER_PLAYING( sub_515() ))
                    {
                        SET_PLAYER_CONTROL( sub_515(), 1 );
                    }
                    l_U811 = 1;
                }
                else if (NOT (DOES_BLIP_EXIST( l_U810 )))
                {
                    ADD_BLIP_FOR_COORD( l_U850._fU32._fU0, l_U850._fU32._fU4, l_U850._fU32._fU8, ref l_U810 );
                    CHANGE_BLIP_COLOUR( l_U810, 6 );
                }
            }
        }
        else if (IS_PLAYER_PLAYING( sub_515() ))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_810(), l_U850._fU32._fU0, l_U850._fU32._fU4, l_U850._fU32._fU8, 2.00000000, 2.00000000, 5.00000000, 0 )))
            {
                l_U811 = 0;
            }
        }
    }
    return;
}

int sub_25879()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_PLAYER_PLAYING( sub_515() ))
    {
        if (l_U850._fU48)
        {
            GET_CHAR_COORDINATES( sub_810(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (l_U850._fU0._fU8 < l_U850._fU32._fU8)
            {
                uVar5 = l_U850._fU0._fU8;
            }
            else
            {
                uVar5 = l_U850._fU32._fU8;
            }
            if ((uVar5 - uVar2._fU8) > 3.00000000)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_26274()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (IS_PLAYER_PLAYING( sub_515() ))
    {
        if (l_U837._fU48)
        {
            GET_CHAR_COORDINATES( sub_810(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (l_U837._fU0._fU8 < l_U837._fU32._fU8)
            {
                uVar5 = l_U837._fU0._fU8;
            }
            else
            {
                uVar5 = l_U837._fU32._fU8;
            }
            if ((uVar5 - uVar2._fU8) > 3.00000000)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_26446()
{
    if (l_U819)
    {
        if ((((((((((((((((((NOT (IS_CONTROL_PRESSED( 2, 77 ))) AND (NOT (IS_CONTROL_PRESSED( 2, 78 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 2 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 3 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 81 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 83 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 82 )))) AND (NOT (IS_CONTROL_PRESSED( 2, 84 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 8 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 11 )))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_UP_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_DOWN_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_RIGHT_PRESSED( 0 )))) AND (NOT (IS_GAME_KEYBOARD_NAV_LEFT_PRESSED( 0 )))) AND (NOT (sub_17265( 1 )))) AND (NOT (sub_17346( 1 ))))
        {
            l_U819 = 0;
        }
    }
    return;
}

void sub_26683()
{
    if ((l_U832) AND (NOT sub_26697()))
    {
        if (IS_CONTROL_JUST_PRESSED( 2, 52 ))
        {
            RETUNE_RADIO_UP();
        }
        else if (IS_CONTROL_JUST_PRESSED( 2, 53 ))
        {
            RETUNE_RADIO_DOWN();
        }
    }
    return;
}

int sub_26697()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_26919(unknown uParam0, unknown uParam1)
{
    sub_26932( uParam0, uParam1 );
    return;
}

void sub_26932(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 8;
    iVar5 = 8;
    sub_26951( iVar4, uParam1 );
    if (bParam0)
    {
        sub_32368( iVar5 );
    }
    return;
}

void sub_26951(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    if (NOT g_U22274[uParam0]._fU500._fU0)
    {
        return;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return;
    }
    uVar4 = sub_27013( uParam0 );
    if (g_U13391[uVar4]._fU80._fU0 == 1)
    {
        sub_27410( uVar4 );
    }
    if (g_U13391[uVar4]._fU0._fU0 == 1)
    {
        sub_31828( uVar4 );
    }
    if (g_U13391[uVar4]._fU160._fU0)
    {
        if (g_U13391[uVar4]._fU160._fU8)
        {
            g_U15946[uParam0]._fU8[0]._fU0[3] = 0;
        }
        g_U13391[uVar4]._fU160._fU108._fU0 = 0;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U22274[uParam0]._fU500._fU4 = 1;
    g_U22274[uParam0]._fU500._fU168 = iVar5 + g_U22274[uParam0]._fU500._fU164;
    g_U22274[uParam0]._fU500._fU184 = uParam1;
    sub_32334( "CONTACT HOSPITALISED\n" );
    return;
}

int sub_27013(unknown uParam0)
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
    sub_6826( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

void sub_27410(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU80._fU0 = 0;
        sub_27531( uParam0 );
        sub_29977( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_30265( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU80._fU0 = 6;
        sub_30265( uParam0, iVar4 );
        break;
        case 6:
        sub_30265( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_30714( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_6826( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_27531(unknown uParam0)
{
    if ((NOT (g_U13391[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU80._fU0 == 1)))
    {
        sub_27588( uParam0 );
        sub_27734( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_27588( uParam0 );
        sub_27924( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 0)
    {
        sub_27734( uParam0 );
    }
    if ((NOT (g_U13391[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U13391[uParam0]._fU0._fU0 == 1)))
    {
        sub_27588( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_29209( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_27588( uParam0 );
    }
    return;
}

void sub_27588(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
    g_U13391[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU0._fU68;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_27734(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
    g_U13391[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU80._fU68;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_27924(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_27734( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU80._fU4;
        iVar8 = sub_28107( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU80._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_6826( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U431 );
        if ((NOT g_U32896._fU4) || (NOT g_U13391[uParam0]._fU80._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U13391[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U432 );
        sub_28764( g_U13391[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

int sub_28107(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_6826( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_28764(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 1:
        sub_28856( ref uParam0, 827.41800000, -288.99640000, 14.75330000, 179.76500000 );
        break;
        case 17:
        sub_28856( ref uParam0, -150.38910000, -795.66570000, 4.20110000, 271.69380000 );
        break;
        case 18:
        sub_28856( ref uParam0, -160.31520000, -796.40800000, 5.20610000, 270.00000000 );
        break;
        case 24:
        sub_28856( ref uParam0, -126.75380000, -263.66190000, 11.56380000, 0.00000000 );
        break;
        case 29:
        sub_28856( ref uParam0, -905.43880000, 908.73140000, 12.59760000, 0.74970000 );
        break;
        case 32:
        sub_28856( ref uParam0, 341.41760000, -454.50700000, 3.60780000, 0.74970000 );
        break;
    }
    return;
}

void sub_28856(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_29209(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_27588( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU0._fU4;
        iVar8 = sub_28107( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU0._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_6826( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U431 );
        if ((NOT g_U32896._fU4) || (NOT g_U13391[uParam0]._fU0._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U432 );
        if (l_U457)
        {
            FLASH_BLIP( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U457 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U457 = 1;
        }
        sub_28764( g_U13391[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_29977(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
        }
    }
    g_U13391[uParam0]._fU80._fU0 = 0;
    g_U13391[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU80._fU24, "", 32 );
    g_U13391[uParam0]._fU80._fU56 = 10;
    g_U13391[uParam0]._fU80._fU60 = nil;
    g_U13391[uParam0]._fU80._fU64 = nil;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U13391[uParam0]._fU80._fU72 = 1;
    g_U13391[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_30265(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU80._fU24 );
        sub_29977( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU0._fU24 );
    sub_30403( uParam0, 0 );;
    sub_27531( uParam0 );
    return;
}

void sub_30403(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
        }
    }
    g_U13391[uParam0]._fU0._fU0 = 0;
    g_U13391[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU0._fU24, "", 32 );
    g_U13391[uParam0]._fU0._fU56 = 10;
    g_U13391[uParam0]._fU0._fU60 = nil;
    g_U13391[uParam0]._fU0._fU64 = nil;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U13391[uParam0]._fU0._fU72 = 1;
    g_U13391[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_30714(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U13391[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U13391[iParam0]._fU80._fU60 );
        }
        sub_29977( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U13391[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U13391[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U13391[iParam0]._fU0._fU56;
    if ((iVar5 == 5) || (iVar5 == 6))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U10981[iParam0]._fU28 = 1;
    }
    sub_30403( iParam0, 0 );
    if (bVar4)
    {
        sub_30923();
    }
    g_U10981[iParam0]._fU12 = 0;;
    if (iParam0 == 23)
    {
        sub_30979();
        return;
    }
    sub_27531( iParam0 );
    if (bVar4)
    {
        g_U10978 = 0;
    }
    if (bVar4)
    {
        sub_31626( iParam0 );
    }
    if (g_U2)
    {
        if (g_U3)
        {
            WAIT( 1500 );
            g_U4 = 1;
        }
    }
    return;
}

void sub_30923()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_30979()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_515() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_810() ))
        {
            if (NOT (g_U15936._fU24 == -1))
            {
                uVar3 = g_U32697[g_U15936._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_810(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15936._fU24;
    sub_31091();
    if (bVar2)
    {
        g_U15936._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_810(), ref g_U15936._fU32 );
        g_U15936._fU24 = uVar4;
    }
    l_U456 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_515(), 0 );
    sub_31246();
    if (IS_PLAYER_PLAYING( sub_515() ))
    {
        SET_PLAYER_CONTROL( sub_515(), 1 );
    }
    return;
}

void sub_31091()
{
    g_U15936._fU0 = 0;
    g_U15936._fU4 = 0;
    g_U15936._fU8 = 0;
    g_U15936._fU12 = 0;
    g_U15936._fU16 = 0;
    g_U15936._fU20 = 0;
    g_U15936._fU24 = -1;
    g_U15936._fU32 = nil;
    g_U15936._fU28 = 0;
    return;
}

void sub_31246()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_515() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_810() ))
    {
        l_U456 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_515(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_810() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_810(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_810(), 837858166 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_810(), -488123221 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15936._fU20)
                {
                    bVar4 = true;
                }
                else
                {
                    bVar4 = false;
                }
            }
            else
            {
                bVar4 = true;
            }
        }
        else
        {
            bVar4 = true;
        }
    }
    else
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        if (l_U456)
        {
            return;
        }
        l_U456 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_515(), 1 );
    }
    else if (NOT l_U456)
    {
        return;
    }
    l_U456 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_515(), 0 );;
    return;
}

void sub_31626(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_31828(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU0._fU0 = 0;
        sub_27531( uParam0 );
        sub_30403( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_30265( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_30265( uParam0, iVar4 );
        break;
        case 6:
        sub_30265( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_30714( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_6826( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_32334(unknown uParam0)
{
    return;
}

void sub_32368(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        sub_32577( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_33674( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_32577(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_32588( uParam1 );
    sub_32762( uParam0, 0, uParam2 );
    sub_32762( uParam0, 1, uParam3 );
    sub_32762( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_33534();
    return;
}

void sub_32588(unknown uParam0)
{
    ADD_SCORE( sub_515(), uParam0 );
    sub_32613( uParam0 );
    return;
}

void sub_32613(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_6826( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_32762(unknown uParam0, int iParam1, int iParam2)
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
        sub_32919( uParam0 );
    }
    return;
}

void sub_32919(unknown uParam0)
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

void sub_33534()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U803[I] = 4;
    }
    return;
}

void sub_33674(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}
