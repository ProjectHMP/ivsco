void main()
{
    int iVar2;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;
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
    float fVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    float fVar28;
    float fVar29;
    int iVar30;
    int iVar31;

    l_U17 = 0.00000000;
    l_U18 = 0.00000000;
    l_U19 = 0.00000000;
    l_U20 = -1;
    l_U21 = 1;
    l_U22 = 0;
    l_U220 = 86.00000000;
    l_U221 = 274.00000000;
    l_U222 = 0;
    l_U223 = 0;
    l_U224 = 0;
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 0;
    l_U229 = -1;
    l_U230 = 0;
    l_U231 = 0;
    l_U232 = 0;
    l_U234 = 0;
    l_U235 = 1;
    l_U236 = 0;
    l_U237 = 0;
    l_U238 = 0;
    l_U239 = 0;
    l_U240 = 0;
    l_U241 = 0;
    l_U242 = 0;
    l_U243 = 0;
    l_U244 = 0;
    l_U245 = 0;
    l_U246 = 0;
    l_U247 = 0.00000000;
    l_U248 = 0.00000000;
    l_U249 = 0.00000000;
    l_U250 = 0.00000000;
    l_U251 = -60.00000000;
    l_U252 = -80.00000000;
    l_U253 = -50.00000000;
    l_U254 = -7.00000000;
    l_U255 = -5.50000000;
    l_U256 = -12.00000000;
    l_U257 = 0.00000000;
    l_U258 = 1000.00000000;
    l_U259 = 0.00000000;
    l_U260 = 0.00000000;
    l_U261 = 0.00000000;
    l_U262 = 0.00000000;
    l_U263 = 0.00000000;
    l_U264 = 0;
    l_U265 = 0;
    l_U266 = 0;
    l_U267 = 0;
    l_U268 = 0;
    l_U270 = 0;
    l_U276 = {0.00000000, -1.00000000, 0.20000000};
    l_U279 = {-1.00000000, 2.00000000, 0.60000000};
    l_U282 = {-1.00000000, 0.90000000, 0.60000000};
    l_U285 = {-1.00000000, 0.90000000, 0.60000000};
    l_U288 = {-0.84000000, 0.67000000, -0.01000000};
    l_U291 = {-0.60000000, 0.13000000, -0.15000000};
    l_U303 = {0.00000000, -8.00000000, -3.50000000};
    l_U306 = {0.00000000, 0.00000000, 2.00000000};
    l_U309 = 7.50000000;
    l_U310 = 85.00000000;
    l_U311 = 0.00000000;
    l_U312 = 50.00000000;
    l_U313 = 1.00000000;
    l_U314 = 0;
    l_U315 = 0;
    l_U319 = 0;
    l_U320 = 0;
    l_U321 = 0.00000000;
    l_U322 = 0.00000000;
    sub_687();
    while (true)
    {
        WAIT( 0 );
        if (IS_CHAR_DEAD( sub_810() ))
        {
            sub_864( 0 );
            sub_889( 0 );
        }
        if (g_U2[GET_PLAYER_ID()]._fU4 == 5)
        {
            if (NOT (IS_CHAR_DEAD( sub_810() )))
            {
                if (IS_CHAR_ON_FIRE( sub_810() ))
                {
                    GET_CHAR_HEALTH( sub_810(), ref iVar2 );
                    if (iVar2 <= 105)
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
                        SWITCH_PED_TO_RAGDOLL( sub_810(), 1, 100, 1, 0, 1, 1 );
                        CREATE_NM_MESSAGE( 1, 246 );
                        SEND_NM_MESSAGE( sub_810() );
                        SET_CHAR_HEALTH( sub_810(), 0 );
                        sub_864( 0 );
                        sub_889( 0 );
                    }
                }
            }
            if (NOT (IS_CHAR_DEAD( sub_810() )))
            {
                GET_CHAR_COORDINATES( sub_810(), ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
            }
            if (NOT l_U236)
            {
                if (REQUEST_AMBIENT_AUDIO_BANK( "EP2_SFX\PARACHUTE" ))
                {
                    l_U236 = 1;
                }
            }
            if ((NOT g_U3540[0]._fU56) || (IS_CHAR_DEAD( sub_810() )))
            {
                sub_889( 0 );
            }
            if (NOT (IS_CHAR_DEAD( sub_810() )))
            {
                if ((g_U3540[0]._fU4 != 0) AND (g_U3540[0]._fU4 != 1))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_810() ))
                    {
                        sub_889( 0 );
                    }
                }
            }
            if (((sub_2782()) AND (g_U3540[0]._fU56)) AND (NOT g_U3540[0]._fU68))
            {
                DISABLE_INTERMEZZO_CAMS();
                if (l_U251 != g_U3540[0]._fU48)
                {
                    l_U251 = g_U3540[0]._fU48;
                    l_U252 = l_U251 - (-60.00000000 - -80.00000000);
                    l_U253 = l_U251 + (-50.00000000 - -60.00000000);
                }
                if (l_U254 != g_U3540[0]._fU52)
                {
                    l_U254 = g_U3540[0]._fU52;
                    l_U255 = l_U254 + (-5.50000000 - -7.00000000);
                    l_U256 = l_U254 - (-7.00000000 - -12.00000000);
                    if (l_U255 > -2.00000000)
                    {
                        l_U255 = -2.00000000;
                    }
                }
                if (NOT (IS_CHAR_DEAD( sub_810() )))
                {
                    if (NOT IS_PAUSE_MENU_ACTIVE())
                    {
                        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U223, ref l_U224, ref uVar14, ref uVar15 );
                        if (USING_STANDARD_CONTROLS())
                        {
                            l_U225 = GET_CONTROL_VALUE( 0, 6 );
                            l_U226 = GET_CONTROL_VALUE( 0, 4 );
                        }
                        else
                        {
                            l_U225 = GET_CONTROL_VALUE( 0, 4 );
                            l_U226 = GET_CONTROL_VALUE( 0, 6 );
                        }
                        if (NOT IS_USING_CONTROLLER())
                        {
                            l_U225 = GET_CONTROL_VALUE( 0, 137 );
                            l_U226 = GET_CONTROL_VALUE( 0, 138 );
                            GET_KEYBOARD_MOVE_INPUT( ref l_U223, ref l_U224 );
                        }
                    }
                    switch (g_U3540[0]._fU4)
                    {
                        case 0:
                        if (NOT (IS_CHAR_DEAD( sub_810() )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( sub_810() )))
                            {
                                if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "CLIMB_STD", "Ladder_Slide" )))
                                {
                                    GET_CHAR_HEIGHT_ABOVE_GROUND( sub_810(), ref fVar3 );
                                    if (NOT l_U238)
                                    {
                                        sub_3446();
                                    }
                                    if ((((fVar3 > 20.00000000) || (g_U3632)) || (l_U238)) || (l_U222 == 1))
                                    {
                                        GET_CHAR_VELOCITY( sub_810(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                                        if ((l_U238) || (l_U222 == 1))
                                        {
                                            l_U239 = 1;
                                            sub_5173( uVar4 );
                                        }
                                        else if (uVar4._fU8 < -4.00000000)
                                        {
                                            l_U239 = 0;
                                            sub_5173( uVar4 );
                                        }
                                    }
                                }
                            }
                            else
                            {
                                l_U240 = 0;
                                l_U269 = 0;
                                l_U244 = 0;
                                l_U266 = 0;
                                l_U268 = 0;
                                g_U3540[0]._fU4 = 1;
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_810(), ref l_U275 );
                            }
                        }
                        break;
                        case 1:
                        if ((NOT (IS_CHAR_DEAD( sub_810() ))) AND (NOT (IS_CAR_DEAD( l_U275 ))))
                        {
                            GET_CHAR_VELOCITY( sub_810(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            GET_CHAR_HEIGHT_ABOVE_GROUND( sub_810(), ref fVar3 );
                            if (NOT l_U244)
                            {
                                if (((IS_CHAR_ON_ANY_BIKE( sub_810() )) AND ((IS_BUTTON_JUST_PRESSED( 0, 15 )) || (IS_CONTROL_JUST_PRESSED( 2, 43 )))) AND (NOT IS_PAUSE_MENU_ACTIVE()))
                                {
                                    if (IS_CAR_IN_AIR_PROPER( sub_10519( sub_810() ) ))
                                    {
                                        if (fVar3 > 20.00000000)
                                        {
                                            PRINTSTRING( "PARA Player: jump from bike! \n" );
                                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_810(), 0.00000000, 0.00000000, -0.50000000, ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
                                            if (WAS_PED_SKELETON_UPDATED( sub_810() ))
                                            {
                                                GET_PED_BONE_POSITION( sub_810(), 0, -0.50000000, 0.00000000, 0.00000000, ref uVar16 );
                                            }
                                            else
                                            {
                                                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_810(), 0.00000000, 0.00000000, -0.50000000, ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
                                            }
                                            GET_GROUND_Z_FOR_3D_COORD( uVar16._fU0, uVar16._fU4, uVar16._fU8, ref uVar19 );
                                            GET_CAR_SPEED_VECTOR( sub_10519( sub_810() ), ref uVar4, 0 );
                                            GET_CHAR_HEADING( sub_810(), ref uVar20 );
                                            WARP_CHAR_FROM_CAR_TO_COORD( sub_810(), uVar16._fU0, uVar16._fU4, uVar16._fU8 );
                                            SET_CHAR_HEADING( sub_810(), uVar20 );
                                            SET_CHAR_COLLISION( sub_810(), 0 );
                                            sub_5173( uVar4 );
                                            l_U244 = 1;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                sub_5173( uVar4 );
                            }
                            if (NOT l_U240)
                            {
                                if (((IS_CHAR_IN_ANY_HELI( sub_810() )) AND (IS_PLAYER_CONTROL_ON( sub_10928() ))) AND (g_U3642))
                                {
                                    if (((IS_BUTTON_JUST_PRESSED( 0, 15 )) || (IS_CONTROL_JUST_PRESSED( 2, 43 ))) AND (NOT IS_PAUSE_MENU_ACTIVE()))
                                    {
                                        GET_CHAR_HEIGHT_ABOVE_GROUND( sub_810(), ref fVar3 );
                                        l_U268 = sub_11035( sub_810(), ref l_U275 );
                                        if (fVar3 > 25.00000000)
                                        {
                                            if (HAS_CONTROL_OF_NETWORK_ID( sub_9179( l_U275 ) ))
                                            {
                                                if (NOT (sub_11311( sub_9179( l_U275 ) )))
                                                {
                                                    if (NOT (IS_CAR_DEAD( l_U275 )))
                                                    {
                                                        if (NOT (IS_CAR_A_MISSION_CAR( l_U275 )))
                                                        {
                                                            SET_CAR_AS_MISSION_CAR( l_U275 );
                                                            PRINTSTRING( "PARA Player: IV Setting heli as mission car. \n" );
                                                        }
                                                    }
                                                    else
                                                    {
                                                        PRINTSTRING( "PARA Player: IV Not setting heli as mission car as it is dead \n" );
                                                    }
                                                }
                                                else
                                                {
                                                    PRINTSTRING( "PARA Player: IV Not setting heli as mission car as it is already in another players cleanup BD \n" );
                                                }
                                            }
                                            else
                                            {
                                                PRINTSTRING( "PARA Player: IV Not setting heli as mission car as I do not have control \n" );
                                            }
                                            GET_CHAR_HEADING( sub_810(), ref l_U260 );
                                            SET_CHAR_COLLISION( sub_810(), 0 );
                                            SET_CHAR_VISIBLE( sub_810(), 0 );
                                            if ((l_U268 == 0) || (l_U268 == 1))
                                            {
                                                if (IS_CAR_MODEL( l_U275, 837858166 ))
                                                {
                                                    l_U294 = {l_U279};
                                                }
                                                else if (IS_CAR_MODEL( l_U275, 788747387 ))
                                                {
                                                    l_U294 = {l_U282};
                                                }
                                                else
                                                {
                                                    IS_CAR_MODEL( l_U275, 353883353 );
                                                    l_U294 = {l_U285};
                                                }
                                            }
                                            else if ((l_U268 == 2) || (l_U268 == 3))
                                            {
                                                if (IS_CAR_MODEL( l_U275, 837858166 ))
                                                {
                                                    l_U294 = {l_U288};
                                                }
                                                else
                                                {
                                                    IS_CAR_MODEL( l_U275, 353883353 );
                                                    l_U294 = {l_U291};
                                                }
                                            }
                                            if ((l_U268 == 1) || (l_U268 == 3))
                                            {
                                                l_U294._fU0 *= -1;
                                            }
                                            WARP_CHAR_FROM_CAR_TO_COORD( sub_810(), l_U294._fU0, l_U294._fU4, l_U294._fU8 );
                                            if ((l_U268 == 2) || (l_U268 == 3))
                                            {
                                                ATTACH_PED_TO_CAR( sub_810(), l_U275, 0, l_U294, l_U260, 360.00000000, 0, 0 );
                                            }
                                            else
                                            {
                                                ATTACH_PED_TO_CAR( sub_810(), l_U275, 0, l_U294, 0.00000000, 0.00000000, 0, 0 );
                                            }
                                            OPEN_SEQUENCE_TASK( ref l_U271 );
                                            if (l_U268 == 0)
                                            {
                                                TASK_PLAY_ANIM_WITH_FLAGS( 0, "jump_out_ds", "PARACHUTE", 1000.00000000, 0, 64 );
                                            }
                                            else if (l_U268 == 1)
                                            {
                                                TASK_PLAY_ANIM_WITH_FLAGS( 0, "jump_out_ps", "PARACHUTE", 1000.00000000, 0, 64 );
                                            }
                                            else if (l_U268 == 2)
                                            {
                                                TASK_PLAY_ANIM_WITH_FLAGS( 0, "jump_out_bds", "PARACHUTE", 1000.00000000, 0, 64 );
                                            }
                                            else if (l_U268 == 3)
                                            {
                                                TASK_PLAY_ANIM_WITH_FLAGS( 0, "jump_out_bps", "PARACHUTE", 1000.00000000, 0, 64 );
                                            };;;;
                                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Free_Fall", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                                            CLOSE_SEQUENCE_TASK( l_U271 );
                                            TASK_PERFORM_SEQUENCE( sub_810(), l_U271 );
                                            CLEAR_SEQUENCE_TASK( l_U271 );
                                            l_U240 = 1;
                                        }
                                    }
                                }
                            }
                            if ((l_U240) || (l_U222 == 1))
                            {
                                if (NOT (IS_CHAR_DEAD( sub_810() )))
                                {
                                    if (((((IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "jump_out_ds" )) AND (IS_VEH_DRIVEABLE( l_U275 ))) || ((IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "jump_out_ps" )) AND (IS_VEH_DRIVEABLE( l_U275 )))) || ((IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "jump_out_bds" )) AND (IS_VEH_DRIVEABLE( l_U275 )))) || ((IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "jump_out_bps" )) AND (IS_VEH_DRIVEABLE( l_U275 ))))
                                    {
                                        if (l_U268 == 0)
                                        {
                                            GET_CHAR_ANIM_CURRENT_TIME( sub_810(), "PARACHUTE", "jump_out_ds", ref fVar24 );
                                        }
                                        else if (l_U268 == 1)
                                        {
                                            GET_CHAR_ANIM_CURRENT_TIME( sub_810(), "PARACHUTE", "jump_out_ps", ref fVar24 );
                                        }
                                        else if (l_U268 == 2)
                                        {
                                            GET_CHAR_ANIM_CURRENT_TIME( sub_810(), "PARACHUTE", "jump_out_bds", ref fVar24 );
                                        }
                                        else if (l_U268 == 3)
                                        {
                                            GET_CHAR_ANIM_CURRENT_TIME( sub_810(), "PARACHUTE", "jump_out_bps", ref fVar24 );
                                        };;;;
                                        if ((fVar24 > 0.00000000) AND (fVar24 < 0.20000000))
                                        {
                                            if (NOT (IS_CHAR_VISIBLE( sub_810() )))
                                            {
                                                SET_CHAR_VISIBLE( sub_810(), 1 );
                                            }
                                            if (l_U268 == 0)
                                            {
                                                CONTROL_CAR_DOOR( l_U275, 0, 0, fVar24 / 0.20000000 );
                                            }
                                            else if (l_U268 == 1)
                                            {
                                                CONTROL_CAR_DOOR( l_U275, 1, 0, fVar24 / 0.20000000 );
                                            }
                                        }
                                    }
                                }
                                GET_CHAR_VELOCITY( sub_810(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                                l_U239 = 1;
                                sub_5173( uVar4 );
                            }
                            else if ((NOT (IS_CHAR_IN_ANY_CAR( sub_810() ))) AND (l_U266 == 0))
                            {
                                GET_GAME_TIMER( ref l_U266 );
                            }
                            if (l_U266 != 0)
                            {
                                GET_GAME_TIMER( ref iVar13 );
                                if ((iVar13 - l_U266) > 1000)
                                {
                                    g_U3540[0]._fU4 = 0;
                                }
                            }
                        }
                        else
                        {
                            g_U3540[0]._fU4 = 0;
                        }
                        break;
                        case 2:
                        if (NOT (IS_CHAR_DEAD( sub_810() )))
                        {
                            if (NOT (IS_CHAR_IN_ANY_CAR( sub_810() )))
                            {
                                GET_CHAR_VELOCITY( sub_810(), ref uVar25._fU0, ref uVar25._fU4, ref uVar25._fU8 );
                                sub_5173( uVar25 );
                            }
                        }
                        break;
                        case 3:
                        sub_13505();
                        sub_19176( g_U3540[0]._fU36 );
                        break;
                        case 4:
                        if (NOT (IS_CHAR_DEAD( sub_810() )))
                        {
                            if (NOT sub_898())
                            {
                                PRINTSTRING( "PARA Player: Creating para obj 1 \n" );
                                g_U741 = 1;
                            }
                            g_U3540[0]._fU36._fU0 = 0;
                            g_U3540[0]._fU36._fU4 = 0;
                            GET_CHAR_HEADING( sub_810(), ref g_U3540[0]._fU36._fU8 );
                            GET_CHAR_VELOCITY( sub_810(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            l_U247 = VMAG( uVar4._fU0, uVar4._fU4, 0.00000000 );
                            l_U250 = 0.00000000;
                            l_U248 = uVar4._fU8;
                            l_U321 = 0.00000000;
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( sub_810(), 1 );
                            sub_5629();
                            sub_6032( 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                            l_U235 = 1;
                            GET_CURRENT_CHAR_WEAPON( sub_810(), ref l_U319 );
                            GIVE_WEAPON_TO_CHAR( sub_810(), 0, 0, 1 );
                            BLOCK_PED_WEAPON_SWITCHING( sub_810(), 1 );
                            l_U229 = GET_SOUND_ID();
                            PLAY_SOUND_FROM_PED( l_U229, "PARACHUTE_DESCEND", sub_810() );
                            if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Hang_Idle" )))
                            {
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Hang_Idle", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                            }
                            g_U3540[0]._fU4 = 5;
                        }
                        sub_19176( g_U3540[0]._fU36 );
                        break;
                        case 5:
                        sub_19715();
                        sub_19176( g_U3540[0]._fU36 );
                        if (IS_CHAR_DEAD( sub_810() ))
                        {
                            g_U3540[0]._fU4 = 8;
                        }
                        break;
                        case 7:
                        if (sub_898())
                        {
                            while (NOT sub_971())
                            {
                                PRINTSTRING( "RPARA_STATE_LANDED Stealing control of my para back...... \n" );
                                WAIT( 0 );
                            }
                            GET_OBJECT_COORDINATES( sub_1288(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                            SLIDE_OBJECT( sub_1288(), uVar7._fU0, uVar7._fU4, uVar7._fU8 + 20.00000000, 0.00000000, 0.00000000, 0.40000000, 0 );
                            if (NOT (IS_OBJECT_PLAYING_ANIM( sub_1288(), "obj_crumple", "PARACHUTE" )))
                            {
                                l_U267 += 10;
                                if (l_U267 > 255)
                                {
                                    l_U267 = 255;
                                }
                                SET_OBJECT_ALPHA( sub_1288(), 255 - l_U267 );
                                if (l_U267 >= 255)
                                {
                                    PRINTSTRING( "PARA_STATE_LANDED Para faded out, calling RESET_PARACHUTE_PED() \n" );
                                    sub_889( 0 );
                                }
                            }
                        }
                        if (g_U3540[0]._fU64)
                        {
                            PRINTSTRING( "PARA_STATE_LANDED g_para_peds[0].b_is_opening_chute was true, calling RESET_PARACHUTE_PED() \n" );
                            sub_889( 0 );
                        }
                        if (NOT (IS_CHAR_DEAD( sub_810() )))
                        {
                            if (((((NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Land" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Land_Safe" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Land_Fast" )))) AND (NOT (IS_PED_RAGDOLL( sub_810() )))) AND (NOT (IS_CHAR_GETTING_UP( sub_810() ))))
                            {
                                PRINTSTRING( "PARA_STATE_LANDED calling RESET_PARACHUTE_PED() \n" );
                                sub_889( 0 );
                            }
                            if (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Land" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( sub_810(), "PARACHUTE", "Land", ref fVar28 );
                                if (fVar28 > 0.40000000)
                                {
                                    if ((l_U223 != 0) || (l_U224 != 0))
                                    {
                                        CLEAR_CHAR_TASKS( sub_810() );
                                        CLEAR_CHAR_SECONDARY_TASK( sub_810() );
                                    }
                                }
                            }
                        }
                        break;
                        case 8:
                        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            CLEAR_HELP();
                        }
                        g_U742 = 1;
                        if (sub_898())
                        {
                            while (NOT sub_971())
                            {
                                PRINTSTRING( "PARA_STATE_CRASHED Stealing control of my para back...... \n" );
                                WAIT( 0 );
                            }
                            GET_OBJECT_COORDINATES( sub_1288(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                            SLIDE_OBJECT( sub_1288(), uVar7._fU0, uVar7._fU4, uVar7._fU8 + 20.00000000, 0.00000000, 0.00000000, 0.25000000, 0 );
                            if (NOT (IS_OBJECT_PLAYING_ANIM( sub_1288(), "obj_crumple", "PARACHUTE" )))
                            {
                                l_U267 += 10;
                                if (l_U267 > 255)
                                {
                                    l_U267 = 255;
                                }
                                SET_OBJECT_ALPHA( sub_1288(), 255 - l_U267 );
                                if (l_U267 >= 255)
                                {
                                    sub_1239( ref g_U2[GET_PLAYER_ID()]._fU48 );
                                    sub_889( 0 );
                                }
                            }
                        }
                        if (((uVar10._fU8 < -2.00000000) || (IS_CHAR_IN_WATER( sub_810() ))) || (g_U3540[0]._fU64))
                        {
                            PRINTSTRING( "PARA Player: I crashed. \n" );
                            if (NOT (IS_PED_RAGDOLL( sub_810() )))
                            {
                                sub_889( 0 );
                            }
                        }
                        else
                        {
                            GET_CHAR_VELOCITY( sub_810(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            GET_CHAR_HEIGHT_ABOVE_GROUND( sub_810(), ref fVar3 );
                            if (((uVar4._fU8 > -1.00000000) AND (l_U230 != 0)) AND ((fVar3 < 1.50000000) || (uVar10._fU8 > 1.10000000)))
                            {
                                GET_GAME_TIMER( ref iVar13 );
                                fVar29 = (TO_FLOAT( iVar13 - l_U230 )) / 3000.00000000;
                                if (NOT l_U242)
                                {
                                    SET_CHAR_INVINCIBLE( sub_810(), 0 );
                                    if (fVar29 < 1.00000000)
                                    {
                                        if (fVar29 > 0.10000000)
                                        {
                                            PLAY_SOUND_FROM_PED( -1, "PED_COLLISIONS_BODY_COLLISION", sub_810() );
                                            GET_CHAR_HEALTH( sub_810(), ref iVar2 );
                                            if (iVar30 > 0)
                                            {
                                                GET_CHAR_HEALTH( sub_810(), ref iVar31 );
                                                iVar31 -= ROUND( fVar29 * 100.00000000 );
                                                if (iVar31 > 0)
                                                {
                                                    SET_CHAR_HEALTH( sub_810(), iVar31 - (ROUND( fVar29 * 100.00000000 )) );
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        PLAY_SOUND_FROM_PED( -1, "PED_COLLISIONS_CRUSH_COMPONENTS", sub_810() );
                                        SET_CHAR_HEALTH( sub_810(), 0 );
                                        sub_889( 0 );
                                    }
                                    l_U242 = 1;
                                }
                                else if (NOT (IS_PED_RAGDOLL( sub_810() )))
                                {
                                    if (NOT l_U246)
                                    {
                                        g_U3540[0]._fU4 = 7;
                                    }
                                    else
                                    {
                                        sub_889( 1 );
                                    }
                                }
                            }
                        }
                        break;
                    }
                    if (sub_898())
                    {
                        if ((g_U3540[0]._fU4 == 3) || (g_U3540[0]._fU4 == 5))
                        {
                            ATTACH_PARACHUTE_MODEL_TO_PLAYER( sub_810(), sub_1288() );
                        }
                    }
                    l_U227 = l_U223;
                    l_U228 = l_U224;
                }
            }
        }
        else if (g_U2[GET_PLAYER_ID()]._fU4 > 5)
        {
            sub_864( 0 );
            sub_889( 0 );
        }
    }
    return;
}

void sub_687()
{
    g_U3540[0]._fU60 = 1;
    g_U3540[0]._fU36 = {0.00000000, 0.00000000, 0.00000000};
    g_U3540[0]._fU24 = {0.00000000, 0.00000000, 0.00000000};
    sub_763();
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    return;
}

void sub_763()
{
    return;
}

void sub_810()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_864(unknown uParam0)
{
    g_U3638 = uParam0;
    return;
}

void sub_889(boolean bParam0)
{
    if (sub_898())
    {
        while (NOT sub_971())
        {
            PRINTSTRING( "RESET_PARACHUTE_PED Stealing control of my para back...... \n" );
            WAIT( 0 );
        }
        sub_1239( ref g_U2[GET_PLAYER_ID()]._fU48 );
        g_U2[GET_PLAYER_ID()]._fU48 = nil;
    }
    else
    {
        g_U2[GET_PLAYER_ID()]._fU48 = nil;
    }
    g_U741 = 0;
    if (DOES_CHAR_EXIST( sub_810() ))
    {
        BLOCK_PED_WEAPON_SWITCHING( sub_810(), 0 );
        UNLOCK_RAGDOLL( sub_810(), 1 );
    }
    CLEAR_HELP();
    SET_GAME_CAMERA_CONTROLS_ACTIVE( 1 );
    sub_1597();
    if (NOT (IS_CHAR_DEAD( sub_810() )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( sub_810(), 0 );
    }
    else if (((g_U3540[0]._fU4 != 5) AND (g_U3540[0]._fU4 != 7)) AND (NOT g_U3540[0]._fU64))
    {
        GIVE_WEAPON_TO_CHAR( sub_810(), 41, 1, 0 );
    }
    SET_CHAR_INVINCIBLE( sub_810(), 0 );
    if (l_U229 != -1)
    {
        STOP_SOUND( l_U229 );
        RELEASE_SOUND_ID( l_U229 );
        l_U229 = -1;
    }
    sub_1851();
    g_U3540[0]._fU4 = 0;
    g_U3540[0]._fU12 = {0.00000000, 0.00000000, 0.00000000};
    g_U3540[0]._fU36 = {0.00000000, 0.00000000, 0.00000000};
    g_U3540[0]._fU24 = {0.00000000, 0.00000000, 0.00000000};
    g_U3540[0]._fU64 = 0;
    g_U3540[0]._fU68 = 0;
    if ((NOT g_U3638) AND (NOT bParam0))
    {
        g_U3540[0]._fU60 = 0;
        g_U3540[0]._fU56 = 0;
        g_U3540[0]._fU8 = 0;
        g_U3540[0]._fU48 = -60.00000000;
        g_U3540[0]._fU52 = -7.00000000;
        g_U3540[0]._fU0 = nil;
        g_U3632 = 0;
        sub_2375();
        UNREGISTER_SCRIPT_WITH_AUDIO();
        ALLOW_STUNT_JUMPS_TO_TRIGGER( 1 );
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

int sub_898()
{
    if (g_U2[GET_PLAYER_ID()]._fU48 != nil)
    {
        return DOES_OBJECT_EXIST_WITH_NETWORK_ID( g_U2[GET_PLAYER_ID()]._fU48 );
    }
    return 0;
}

int sub_971()
{
    if (sub_898())
    {
        if (NOT (HAS_CONTROL_OF_NETWORK_ID( g_U2[GET_PLAYER_ID()]._fU48 )))
        {
            REQUEST_CONTROL_OF_NETWORK_ID( g_U2[GET_PLAYER_ID()]._fU48 );
        }
        return HAS_CONTROL_OF_NETWORK_ID( g_U2[GET_PLAYER_ID()]._fU48 );
    }
    PRINTSTRING( "STEAL_CONTROL_OF_NET_ID netId does not exist. \n" );
    return 1;
}

void sub_1239(unknown uParam0)
{
    if ((uParam0^) != nil)
    {
        if (sub_898())
        {
            sub_1269();
            sub_1454( sub_1313( (uParam0^) ) );
        }
        (uParam0^) = nil;
    }
    return;
}

void sub_1269()
{
    if (sub_898())
    {
        if (IS_OBJECT_ATTACHED( sub_1288() ))
        {
            PRINTSTRING( "DETACH_PARA_OBJ Para object was attached, removing. \n" );
            DETACH_OBJECT( sub_1288(), 1 );
        }
    }
    return;
}

void sub_1288()
{
    return sub_1313( g_U2[GET_PLAYER_ID()]._fU48 );
}

void sub_1313(unknown uParam0)
{
    unknown Result;

    GET_OBJECT_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_1454(unknown uParam0)
{
    DELETE_OBJECT( ref uParam0 );
    return;
}

void sub_1597()
{
    int iVar2;

    if (DOES_CAM_EXIST( l_U274 ))
    {
        DESTROY_CAM( l_U274 );
    }
    if (DOES_CAM_EXIST( l_U273 ))
    {
        DESTROY_CAM( l_U273 );
    }
    iVar2 = COUNT_SCRIPT_CAMS();
    if (iVar2 == 0)
    {
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    return;
}

void sub_1851()
{
    l_U222 = 0;
    l_U270 = 0;
    l_U227 = 0;
    l_U228 = 0;
    l_U229 = -1;
    l_U264 = 0;
    l_U265 = 0;
    l_U266 = 0;
    l_U267 = 0;
    l_U234 = 0;
    l_U235 = 1;
    l_U236 = 0;
    l_U237 = 0;
    l_U238 = 0;
    l_U239 = 0;
    l_U240 = 0;
    l_U241 = 0;
    l_U242 = 0;
    l_U243 = 0;
    l_U244 = 0;
    l_U245 = 0;
    l_U246 = 0;
    l_U247 = 0.00000000;
    l_U248 = 0.00000000;
    l_U249 = 0.00000000;
    l_U250 = 0.00000000;
    l_U261 = 0.00000000;
    l_U262 = 0.00000000;
    l_U263 = 0.00000000;
    l_U310 = 85.00000000;
    l_U311 = 0.00000000;
    l_U312 = 50.00000000;
    l_U313 = 1.00000000;
    l_U314 = 0;
    l_U315 = 0;
    l_U319 = 0;
    l_U320 = 0;
    l_U321 = 0.00000000;
    l_U322 = 0.00000000;
    return;
}

void sub_2375()
{
    return;
}

int sub_2782()
{
    if ((HAS_MODEL_LOADED( 1490460832 )) AND (HAVE_ANIMS_LOADED( "PARACHUTE" )))
    {
        return 1;
    }
    return 0;
}

void sub_3446()
{
    int iVar2;
    int iVar3;
    float fVar4;
    unknown uVar5;
    float fVar6;
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
    int I;
    int iVar18;
    float fVar19;

    l_U238 = 0;
    iVar2 = 1;
    iVar3 = 0;
    I = 0;
    if (NOT (IS_CHAR_DEAD( sub_810() )))
    {
        if ((IS_CONTROL_JUST_PRESSED( 2, 2 )) AND (NOT IS_PAUSE_MENU_ACTIVE()))
        {
            l_U237 = 1;
        }
        if (l_U237)
        {
            iVar18 = sub_3528();
            if (iVar18 != 0)
            {
                fVar19 = sub_3766();
                if (fVar19 > 0.10000000)
                {
                    GET_CHAR_COORDINATES( sub_810(), ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                    GET_CHAR_VELOCITY( sub_810(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    fVar6 = VMAG( uVar8._fU0, uVar8._fU4, 0.00000000 );
                    for ( I = 0; I < 100; I++ )
                    {
                        uVar14 = {uVar11};
                        uVar14._fU0 += (uVar8._fU0 / fVar6) * (I * 0.03300000);
                        uVar14._fU4 += (uVar8._fU4 / fVar6) * (I * 0.03300000);
                        GET_GROUND_Z_FOR_3D_COORD( uVar14._fU0, uVar14._fU4, uVar14._fU8 + 100.00000000, ref uVar5 );
                        fVar4 = uVar14._fU8 - uVar5;
                        if (I != 99)
                        {
                            if (fVar4 < 1.00000000)
                            {
                                iVar2 = 0;
                            }
                        }
                        else if (fVar4 > 30.00000000)
                        {
                            iVar3 = 1;
                        }
                    }
                    if ((iVar3) AND (((NOT IS_INTERIOR_SCENE()) AND (iVar2)) || (g_U3639)))
                    {
                        if (iVar18 == 2)
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "jump_takeoff_l", "PARACHUTE", 8.00000000, 0, 1, 1, 0, 0 );
                        }
                        else if (iVar18 == 1)
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "jump_takeoff_r", "PARACHUTE", 8.00000000, 0, 1, 1, 0, 0 );
                        }
                        l_U238 = 1;
                    }
                    l_U237 = 0;
                }
            }
        }
        else if (((((((g_U3639) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "JUMP_STD", "Jump_TakeOff_R" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "JUMP_RIFLE", "Jump_TakeOff_R" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "JUMP_STD", "Jump_TakeOff_L" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "JUMP_RIFLE", "Jump_TakeOff_L" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "jump_takeoff_l" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "jump_takeoff_r" ))))
        {
            GET_CHAR_COORDINATES( sub_810(), ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
            GET_CHAR_VELOCITY( sub_810(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            if (uVar11._fU0 > -244.30000000)
            {
                fVar6 = VMAG( uVar8._fU0, uVar8._fU4, 0.00000000 );
                GET_CHAR_HEADING( sub_810(), ref uVar7 );
                if ((fVar6 > 0.00000000) AND ((ABSF( uVar7 - 270.00000000 )) < 45.00000000))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "jump_takeoff_l", "PARACHUTE", 8.00000000, 0, 1, 1, 0, 0 );
                    l_U238 = 1;
                }
            }
        }
    }
    return;
}

int sub_3528()
{
    if (NOT (IS_CHAR_DEAD( sub_810() )))
    {
        if ((IS_CHAR_PLAYING_ANIM( sub_810(), "JUMP_STD", "Jump_TakeOff_R" )) || (IS_CHAR_PLAYING_ANIM( sub_810(), "JUMP_RIFLE", "Jump_TakeOff_R" )))
        {
            return 1;
        }
        else if ((IS_CHAR_PLAYING_ANIM( sub_810(), "JUMP_STD", "Jump_TakeOff_L" )) || (IS_CHAR_PLAYING_ANIM( sub_810(), "JUMP_RIFLE", "Jump_TakeOff_L" )))
        {
            return 2;
        }
    }
    return 0;
}

void sub_3766()
{
    float Result;

    Result = -1.00000000;
    if (NOT (IS_CHAR_DEAD( sub_810() )))
    {
        if (IS_CHAR_PLAYING_ANIM( sub_810(), "JUMP_STD", "Jump_TakeOff_R" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_810(), "JUMP_STD", "Jump_TakeOff_R", ref Result );
        }
        else if (IS_CHAR_PLAYING_ANIM( sub_810(), "JUMP_RIFLE", "Jump_TakeOff_R" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_810(), "JUMP_RIFLE", "Jump_TakeOff_R", ref Result );
        }
        else if (IS_CHAR_PLAYING_ANIM( sub_810(), "JUMP_STD", "Jump_TakeOff_L" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_810(), "JUMP_STD", "Jump_TakeOff_L", ref Result );
        }
        else if (IS_CHAR_PLAYING_ANIM( sub_810(), "JUMP_RIFLE", "Jump_TakeOff_L" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_810(), "JUMP_RIFLE", "Jump_TakeOff_L", ref Result );
        };;;;
    }
    return Result;
}

void sub_5173(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    string sVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_DEAD( sub_810() )))
    {
        switch (l_U222)
        {
            case 0:
            if (NOT l_U239)
            {
                if (IS_PED_RAGDOLL( sub_810() ))
                {
                    BLEND_FROM_NM_WITH_ANIM( sub_810(), "PARACHUTE", "Free_Fall", 0, 0, 0, 0 );
                    SWITCH_PED_TO_ANIMATED( sub_810(), 1 );
                }
                else if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Free_Fall" )))
                {
                    if (g_U3634)
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Free_Fall", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                    }
                    else
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Free_Fall", "PARACHUTE", 0.75000000, 1, 1, 1, 0, 0 );
                    }
                }
            }
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( sub_810(), 1 );
            l_U247 = VMAG( uParam0._fU0, uParam0._fU4, 0.00000000 );
            l_U250 = 0.00000000;
            l_U248 = uParam0._fU8;
            g_U3540[0]._fU36._fU0 = 0;
            g_U3540[0]._fU36._fU4 = 0;
            GET_CHAR_HEADING( sub_810(), ref g_U3540[0]._fU36._fU8 );
            GET_CHAR_COORDINATES( sub_810(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            l_U257 = uVar5._fU8;
            CLEAR_THIS_PRINT( "PARA_WARN" );
            sub_5629();
            sub_6032( 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
            l_U235 = 1;
            GET_CURRENT_CHAR_WEAPON( sub_810(), ref l_U319 );
            GIVE_WEAPON_TO_CHAR( sub_810(), 0, 0, 1 );
            BLOCK_PED_WEAPON_SWITCHING( sub_810(), 1 );
            if (NOT l_U239)
            {
                SET_CHAR_COLLISION( sub_810(), 1 );
                GET_GAME_TIMER( ref l_U232 );
                g_U3540[0]._fU4 = 3;
                sub_7632();
            }
            else
            {
                l_U222 = 1;
            }
            break;
            case 1:
            if (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "jump_takeoff_r" ))
            {
                sVar9 = "jump_takeoff_r";
            }
            else if (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "jump_takeoff_l" ))
            {
                sVar9 = "jump_takeoff_l";
            }
            if ((IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "jump_takeoff_r" )) || (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "jump_takeoff_l" )))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_810(), "PARACHUTE", sVar9, ref fVar8 );
                if (fVar8 > 0.80000000)
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Free_Fall", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                    l_U247 = 5.00000000;
                    l_U248 = 1.00000000;
                    sub_7632();
                }
            }
            else if (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Free_Fall" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_810(), "PARACHUTE", "Free_Fall", ref fVar8 );
                if (fVar8 > 0.00000000)
                {
                    if (NOT (IS_CHAR_VISIBLE( sub_810() )))
                    {
                        SET_CHAR_VISIBLE( sub_810(), 1 );
                    }
                    if (l_U240)
                    {
                        if ((l_U268 == 0) || (l_U268 == 2))
                        {
                            g_U3540[0]._fU36._fU8 = l_U260 + 90.00000000;
                            if (g_U3540[0]._fU36._fU8 > 180.00000000)
                            {
                                g_U3540[0]._fU36._fU8 = -180.00000000 + (g_U3540[0]._fU36._fU8 - 180.00000000);
                            }
                        }
                        else if ((l_U268 == 1) || (l_U268 == 3))
                        {
                            g_U3540[0]._fU36._fU8 = l_U260 - 90.00000000;
                            if (g_U3540[0]._fU36._fU8 < -180.00000000)
                            {
                                g_U3540[0]._fU36._fU8 = 180.00000000 + (g_U3540[0]._fU36._fU8 + 180.00000000);
                            }
                        }
                        DETACH_PED( sub_810(), 1 );
                        if (IS_PED_RAGDOLL( sub_810() ))
                        {
                            PRINTSTRING( "PARA P: EF: Ped was ragdoll before set heading \n" );
                            SWITCH_PED_TO_ANIMATED( sub_810(), 1 );
                        }
                        SET_CHAR_HEADING( sub_810(), g_U3540[0]._fU36._fU8 );
                        if (IS_VEH_DRIVEABLE( l_U275 ))
                        {
                            GET_CAR_SPEED_VECTOR( l_U275, ref uVar10, 0 );
                            GET_CAR_HEADING( l_U275, ref uVar13 );
                        }
                        l_U247 = ((uVar10._fU0 * (-COS( uVar13 ))) + (uVar10._fU4 * (-SIN( uVar13 )))) + 3.00000000;
                        l_U249 = (uVar10._fU4 * (COS( uVar13 ))) + (uVar10._fU0 * (-SIN( uVar13 )));
                        l_U248 = uVar10._fU8 - 4.00000000;
                    }
                    else
                    {
                        l_U247 = (VMAG( uParam0._fU0, uParam0._fU4, 0.00000000 )) + 3.00000000;
                        l_U248 = uParam0._fU8;
                    }
                    if (DOES_VEHICLE_EXIST( l_U275 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U275 )))
                        {
                            if (IS_CAR_A_MISSION_CAR( l_U275 ))
                            {
                                if ((HAS_CONTROL_OF_NETWORK_ID( sub_9179( l_U275 ) )) || (IS_THIS_MACHINE_THE_SERVER()))
                                {
                                    PRINTSTRING( "--> PARA Player: EF I am host or have conttrol of heli. Marking dive veh as no longer needed \n" );
                                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U275 );
                                }
                                else
                                {
                                    sub_9358( sub_9179( l_U275 ) );
                                }
                            }
                            else
                            {
                                PRINTSTRING( "--> PARA Player: EF veh_dive is NOT a mission car, not attempting to cleanup. \n" );
                            }
                        }
                        else
                        {
                            PRINTSTRING( "--> PARA Player: EF veh dead, not attempting to cleanup. \n" );
                        }
                    }
                    else
                    {
                        PRINTSTRING( "--> PARA Player: EF veh does not exist, not attempting to cleanup. \n" );
                    }
                    SET_CHAR_COLLISION( sub_810(), 1 );
                    GET_GAME_TIMER( ref l_U233 );
                    SET_CHAR_INVINCIBLE( sub_810(), 1 );
                    l_U233 += 1000;
                    g_U3540[0]._fU4 = 3;
                    l_U222 = 0;
                    sub_7632();
                }
            }
            break;
        }
    }
    return;
}

void sub_5629()
{
    unknown uVar2;

    if (NOT (DOES_CAM_EXIST( l_U272 )))
    {
        GET_GAME_CAM( ref l_U272 );
    }
    GET_CAM_POS( l_U272, ref l_U297._fU0, ref l_U297._fU4, ref l_U297._fU8 );
    GET_CAM_ROT( l_U272, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    GET_CAM_FOV( l_U272, ref uVar2 );
    if (NOT (DOES_CAM_EXIST( l_U273 )))
    {
        CREATE_CAM( 14, ref l_U273 );
        SET_CAM_MOTION_BLUR( l_U273, 0.10000000 );
        ATTACH_CAM_TO_PED( l_U273, sub_810() );
        SET_CAM_ATTACH_OFFSET( l_U273, l_U303._fU0, l_U303._fU4, l_U303._fU8 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U273, 0 );
        POINT_CAM_AT_PED( l_U273, sub_810() );
        SET_CAM_POINT_OFFSET( l_U273, l_U306._fU0, l_U306._fU4, l_U306._fU8 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U273, 1 );
    }
    if (NOT (DOES_CAM_EXIST( l_U274 )))
    {
        CREATE_CAM( 14, ref l_U274 );
    }
    SET_CAM_POS( l_U274, l_U297._fU0, l_U297._fU4, l_U297._fU8 );
    POINT_CAM_AT_PED( l_U274, sub_810() );
    return;
}

void sub_6032(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    vector vVar9;
    unknown uVar12;
    int iVar13;

    switch (l_U320)
    {
        case 1:
        l_U310 = 85.00000000;
        break;
        default:
    }
    UNATTACH_CAM( l_U274 );
    UNPOINT_CAM( l_U274 );
    SET_CAM_ACTIVE( l_U274, 0 );
    SET_CAM_PROPAGATE( l_U274, 0 );
    l_U243 = 0;
    iVar13 = COUNT_SCRIPT_CAMS();
    if (iVar13 <= 2)
    {
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    switch (uParam0)
    {
        case 1:
        GET_CAM_ROT( l_U272, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
        l_U310 = ABSF( l_U300._fU0 );
        l_U311 = ABSF( l_U300._fU0 );
        break;
        case 3:
        GENERATE_RANDOM_FLOAT_IN_RANGE( -20.00000000, 20.00000000, ref l_U316._fU0 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -20.00000000, 20.00000000, ref l_U316._fU4 );
        l_U316._fU0 += uParam4._fU0 * 3.00000000;
        l_U316._fU4 += uParam4._fU4 * 3.00000000;
        vVar9 = {uParam1._fU0 + l_U316._fU0, uParam1._fU4 + l_U316._fU4, uParam1._fU8 - 10.00000000};
        if (sub_6428( vVar9, 1084227584 ))
        {
            GET_GROUND_Z_FOR_3D_COORD( vVar9.x, vVar9.y, vVar9.z + 1000.00000000, ref uVar12 );
            vVar9.z = uVar12 + 5.00000000;
            l_U243 = 1;
        }
        SET_CAM_POS( l_U274, vVar9.x, vVar9.y, vVar9.z );
        SET_CAM_FOV( l_U274, 45.00000000 );
        POINT_CAM_AT_PED( l_U274, sub_810() );
        SET_CAM_POINT_OFFSET( l_U274, 0.00000000, 0.00000000, 0.00000000 );
        sub_6642( l_U274, 1 );
        GET_GAME_TIMER( ref l_U315 );
        break;
        case 4:
        GENERATE_RANDOM_FLOAT_IN_RANGE( -4.00000000, 4.00000000, ref l_U316._fU0 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -4.00000000, 4.00000000, ref l_U316._fU4 );
        vVar9 = {uParam1._fU0 + l_U316._fU0, uParam1._fU4 + l_U316._fU4, uParam1._fU8 - 50.00000000};
        if (sub_6428( vVar9, 20.00000000 ))
        {
            GET_GROUND_Z_FOR_3D_COORD( vVar9.x, vVar9.y, vVar9.z + 1000.00000000, ref uVar12 );
            vVar9.z = uVar12 + 5.00000000;
            l_U243 = 1;
        }
        SET_CAM_POS( l_U274, vVar9.x, vVar9.y, vVar9.z );
        POINT_CAM_AT_PED( l_U274, sub_810() );
        SET_CAM_POINT_OFFSET( l_U274, 0.00000000, 0.00000000, 0.00000000 );
        sub_6642( l_U274, 1 );
        GET_GAME_TIMER( ref l_U315 );
        break;
        case 5:
        while ((ABSF( l_U316._fU0 )) < 3.00000000)
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( -5.00000000, 5.00000000, ref l_U316._fU0 );
        }
        GENERATE_RANDOM_FLOAT_IN_RANGE( -3.00000000, 3.00000000, ref l_U316._fU4 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( 1.00000000, 2.00000000, ref l_U316._fU8 );
        ATTACH_CAM_TO_PED( l_U274, sub_810() );
        SET_CAM_ATTACH_OFFSET( l_U274, l_U316._fU0, l_U316._fU4, l_U316._fU8 );
        POINT_CAM_AT_PED( l_U274, sub_810() );
        SET_CAM_POINT_OFFSET( l_U274, 0.00000000, 0.00000000, 0.00000000 );
        sub_6642( l_U274, 1 );
        GET_GAME_TIMER( ref l_U315 );
        break;
        case 6:
        GENERATE_RANDOM_FLOAT_IN_RANGE( -20.00000000, 20.00000000, ref l_U316._fU0 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -20.00000000, 20.00000000, ref l_U316._fU4 );
        l_U316._fU0 += uParam4._fU0 * 3.00000000;
        l_U316._fU4 += uParam4._fU4 * 3.00000000;
        l_U316._fU8 = -10.00000000;
        vVar9 = {uParam1._fU0 + l_U316._fU0, uParam1._fU4 + l_U316._fU4, uParam1._fU8 + l_U316._fU8};
        if (sub_6428( vVar9, 1084227584 ))
        {
            GET_GROUND_Z_FOR_3D_COORD( vVar9.x, vVar9.y, vVar9.z + 1000.00000000, ref uVar12 );
            vVar9.z = uVar12 + 5.00000000;
            l_U243 = 1;
        }
        SET_CAM_POS( l_U274, vVar9.x, vVar9.y, vVar9.z );
        SET_CAM_FOV( l_U274, 45.00000000 );
        POINT_CAM_AT_PED( l_U274, sub_810() );
        SET_CAM_POINT_OFFSET( l_U274, 0.00000000, 0.00000000, 0.00000000 );
        sub_6642( l_U274, 1 );
        GET_GAME_TIMER( ref l_U315 );
        break;
    }
    l_U320 = uParam0;
    return;
}

int sub_6428(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GROUND_Z_FOR_3D_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8 + 1000.00000000, ref uVar6 );
    if ((uVar6 + uParam3) > uParam0._fU8)
    {
        return 1;
    }
    return 0;
}

void sub_6642(unknown uParam0, unknown uParam1)
{
    SET_CAM_ACTIVE( uParam0, uParam1 );
    SET_CAM_PROPAGATE( uParam0, uParam1 );
    ACTIVATE_SCRIPTED_CAMS( uParam1, uParam1 );
    return;
}

void sub_7632()
{
    float fVar2;
    float fVar3;

    fVar2 = 0.00000000;
    fVar3 = 0.00000000;
    if (g_U3540[0]._fU4 == 3)
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -1.00000000, 1.00000000, ref fVar2 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.50000000, 0.50000000, ref fVar3 );
        SHAKE_PAD( 0, 200, ROUND( fVar2 * 128.00000000 ) );
    }
    else if (g_U3540[0]._fU4 == 5)
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.50000000, 0.50000000, ref fVar2 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.50000000, 0.50000000, ref fVar3 );
    }
    if (NOT (IS_CHAR_DEAD( sub_810() )))
    {
        SET_CHAR_ROTATION( sub_810(), g_U3540[0]._fU36._fU0, g_U3540[0]._fU36._fU4, g_U3540[0]._fU36._fU8 );
        g_U3540[0]._fU24._fU0 = ((l_U247 * (-SIN( g_U3540[0]._fU36._fU8 ))) + (l_U249 * (COS( g_U3540[0]._fU36._fU8 )))) + fVar2;
        g_U3540[0]._fU24._fU4 = ((l_U247 * (COS( g_U3540[0]._fU36._fU8 ))) + (l_U249 * (SIN( g_U3540[0]._fU36._fU8 )))) + fVar3;
        g_U3540[0]._fU24._fU8 = l_U248;
        SET_CHAR_VELOCITY( sub_810(), g_U3540[0]._fU24._fU0, g_U3540[0]._fU24._fU4, g_U3540[0]._fU24._fU8 );
    }
    return;
}

void sub_9179(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_VEHICLE( uParam0, ref Result );
    return Result;
}

void sub_9358(int iParam0)
{
    int[0] iVar3;
    int I;

    if (sub_9369( iParam0 ))
    {
        array(ref iVar3, 5);
        iVar3[0] = g_U2[GET_PLAYER_ID()]._fU56;
        iVar3[1] = g_U2[GET_PLAYER_ID()]._fU60;
        iVar3[2] = g_U2[GET_PLAYER_ID()]._fU64;
        iVar3[3] = g_U2[GET_PLAYER_ID()]._fU68;
        iVar3[4] = g_U2[GET_PLAYER_ID()]._fU72;
        for ( I = 0; I < iVar3; I++ )
        {
            if (NOT (sub_9369( iVar3[I] )))
            {
                if (iVar3[I] == iParam0)
                {
                    PRINTSTRING( "---> ADD_VEH_TO_CLEANUP_BD: Veh already in BD cleanup list \n" );
                }
                else
                {
                    iVar3[I] = iParam0;
                    PRINTSTRING( "---> ADD_VEH_TO_CLEANUP_BD: Successfully added veh to cleanup list \n" );
                }
                return;
            }
        }
    }
    PRINTSTRING( "--> ADD_VEH_TO_CLEANUP_BD: Unable to add veh to BD cleanup list.  \n" );
    SCRIPT_ASSERT( "--> ADD_VEH_TO_CLEANUP_BD: Unable to add veh to BD cleanup list. " );
    return;
}

int sub_9369(unknown uParam0)
{
    if (DOES_PED_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        return 1;
    }
    else if (DOES_VEHICLE_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        return 1;
    }
    else if (DOES_OBJECT_EXIST_WITH_NETWORK_ID( uParam0 ))
    {
        return 1;
    };;;
    return 0;
}

void sub_10519(unknown uParam0)
{
    unknown Result;

    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref Result );
        return Result;
    }
    return nil;
}

void sub_10928()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_11035(int iParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (IS_CHAR_IN_ANY_CAR( iParam0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, uParam1 );
        GET_DRIVER_OF_CAR( (uParam1^), ref iVar5 );
        if (iParam0 == iVar5)
        {
            return 0;
        }
        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( (uParam1^), 0 )))
        {
            GET_CHAR_IN_CAR_PASSENGER_SEAT( (uParam1^), 0, ref iVar5 );
            if (iParam0 == iVar5)
            {
                return 1;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( (uParam1^), ref iVar4 );
        if (iVar4 > 1)
        {
            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( (uParam1^), 1 )))
            {
                GET_CHAR_IN_CAR_PASSENGER_SEAT( (uParam1^), 1, ref iVar5 );
                if (iParam0 == iVar5)
                {
                    return 2;
                }
            }
            if (iVar4 > 2)
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( (uParam1^), 2 )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( (uParam1^), 2, ref iVar5 );
                    if (iParam0 == iVar5)
                    {
                        return 3;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_11311(int iParam0)
{
    int J;
    int I;
    int[0] iVar5;
    unknown uVar11;

    array(ref iVar5, 5);
    if (sub_9369( iParam0 ))
    {
        for ( J = 0; J < 32; J++ )
        {
            if (IS_NETWORK_PLAYER_ACTIVE( J ))
            {
                iVar5[0] = g_U2[J]._fU56;
                iVar5[1] = g_U2[J]._fU60;
                iVar5[2] = g_U2[J]._fU64;
                iVar5[3] = g_U2[J]._fU68;
                iVar5[4] = g_U2[J]._fU72;
                for ( I = 0; I < iVar5; I++ )
                {
                    if (sub_9369( iVar5[I] ))
                    {
                        if (iVar5[I] == iParam0)
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_13505()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    unknown uVar9;
    float fVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    int iVar21;
    int iVar22;

    iVar12 = 0;
    GET_FRAME_TIME( ref uVar9 );
    GET_GAME_TIMER( ref iVar11 );
    if (l_U231 == 0)
    {
        l_U231 = iVar11;
    }
    if (NOT (IS_CHAR_DEAD( sub_810() )))
    {
        if (l_U233 != 0)
        {
            if (iVar11 > l_U233)
            {
                PRINTSTRING( "MANAGE_FREE_FALL_MOVEMENT Setting char not INVINCIBLE \n" );
                SET_CHAR_INVINCIBLE( sub_810(), 0 );
                l_U233 = 0;
            }
        }
        GET_CHAR_COORDINATES( sub_810(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        GET_CHAR_VELOCITY( sub_810(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        GET_CHAR_HEIGHT_ABOVE_GROUND( sub_810(), ref fVar8 );
    }
    iVar13 = 0;
    if ((uVar2._fU8 > -5.00000000) AND ((ABSF( uVar2._fU8 - l_U248 )) > 10.00000000))
    {
        iVar13 = 1;
    }
    fVar10 = -10.00000000;
    if (WAS_PED_SKELETON_UPDATED( sub_810() ))
    {
        GET_PED_BONE_POSITION( sub_810(), 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar15 );
        GET_GROUND_Z_FOR_3D_COORD( uVar15._fU0, uVar15._fU4, uVar15._fU8 + 100.00000000, ref uVar14 );
        fVar10 = uVar15._fU8 - uVar14;
    }
    if ((fVar10 != -10.00000000) AND (fVar10 < 1.00000000))
    {
        iVar12 = 1;
    }
    if (NOT g_U3540[0]._fU64)
    {
        if (l_U224 < 0)
        {
            sub_13993( ref l_U248, -60.00000000 - (((TO_FLOAT( l_U224 )) / 128.00000000) * (-80.00000000 - -60.00000000)), 0.40000000 );
            sub_13993( ref l_U247, 1.00000000 - (((TO_FLOAT( l_U224 )) / 128.00000000) * (25.00000000 - 1.00000000)), 0.40000000 );
            sub_14211( ref g_U3540[0]._fU36._fU0, ((TO_FLOAT( l_U224 )) / 128.00000000) * 45.00000000, 45.00000000, 0.05000000, 2.50000000, 1065353216 );
        }
        else if (l_U224 > 0)
        {
            sub_13993( ref l_U248, -60.00000000 - (((TO_FLOAT( l_U224 )) / 128.00000000) * (-60.00000000 - -50.00000000)), 0.40000000 );
            sub_13993( ref l_U247, 1.00000000, 0.30000000 );
            sub_14211( ref g_U3540[0]._fU36._fU0, 0.00000000, 45.00000000, 0.05000000, 2.50000000, 1065353216 );
        }
        else
        {
            sub_13993( ref l_U248, -60.00000000, 0.40000000 );
            sub_13993( ref l_U247, 1.00000000, 0.30000000 );
            sub_14211( ref g_U3540[0]._fU36._fU0, 0.00000000, 45.00000000, 0.05000000, 2.50000000, 1065353216 );
        }
        fVar18 = (TO_FLOAT( l_U223 )) / 128.00000000;
        sub_13993( ref l_U250, -fVar18 * 1.25000000, 0.10000000 );
        g_U3540[0]._fU36._fU8 += (l_U250 * uVar9) * 30.00000000;
        if (g_U3540[0]._fU36._fU8 > 180)
        {
            g_U3540[0]._fU36._fU8 -= 360;
        }
        else if (g_U3540[0]._fU36._fU8 < 65356)
        {
            g_U3540[0]._fU36._fU8 += 360;
        }
        sub_14211( ref g_U3540[0]._fU36._fU4, (fVar18 * 45.00000000) / 2.00000000, 45.00000000, 0.05000000, 2.50000000, 1065353216 );
        if (NOT (IS_CHAR_DEAD( sub_810() )))
        {
            if (NOT (IS_PED_RAGDOLL( sub_810() )))
            {
                if (NOT g_U3645)
                {
                    if (l_U224 < 65416)
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Free_Fall_Fast" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Free_Fall_Fast", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                        }
                    }
                    else if (l_U224 > 120)
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "free_fall_deccelerate" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "free_fall_deccelerate", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                        }
                    }
                    else if (l_U223 > 10)
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Free_Fall_Veer_Right" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Free_Fall_Veer_Right", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                        }
                    }
                    else if (l_U223 < -10)
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Free_Fall_Veer_left" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Free_Fall_Veer_Left", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                        }
                    }
                    else if (((ABSI( l_U227 )) < 10) AND ((ABSI( l_U228 )) < 10))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Free_Fall" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Free_Fall", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                        }
                    };;;;;
                }
                else if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Free_Fall" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Free_Fall", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                }
            }
        }
        if ((((IS_CONTROL_JUST_PRESSED( 0, 1 )) || (IS_CONTROL_JUST_PRESSED( 0, 137 ))) AND (IS_PLAYER_CONTROL_ON( sub_10928() ))) AND (NOT IS_PAUSE_MENU_ACTIVE()))
        {
            if ((iVar11 - l_U231) > 500)
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Open_chute", "PARACHUTE", 10.00000000, 0, 1, 1, 0, 0 );
                CLEAR_HELP();
                l_U259 = fVar8;
                g_U3540[0]._fU64 = 1;
            }
        }
    }
    else
    {
        sub_15701( uVar5 );
    }
    if ((g_U740 <= 2) AND (NOT g_U3540[0]._fU64))
    {
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PARA_FALL_MP" )))
        {
            CLEAR_HELP();
            PRINT_HELP( "PARA_FALL_MP" );
        }
    }
    if (NOT (IS_CHAR_INJURED( sub_810() )))
    {
        fVar19 = (l_U248 / -80.00000000) * 1.25000000;
        if (fVar19 < 0.10000000)
        {
            fVar19 = 0.10000000;
        }
        else if (fVar19 > 0.20000000)
        {
            fVar19 = 0.20000000;
        }
        SET_PED_WINDY_CLOTHING_SCALE( sub_810(), fVar19 );
    }
    sub_16976( g_U3540[0]._fU4, uVar5, uVar2 );
    sub_17194( uVar5, uVar2 );
    if (NOT (IS_CHAR_DEAD( sub_810() )))
    {
        if ((IS_CHAR_IN_WATER( sub_810() )) || (uVar5._fU8 < -2.00000000))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
            SET_CHAR_HEADING( sub_810(), g_U3540[0]._fU36._fU8 );
            l_U248 /= 20.00000000;
            SHAKE_PAD( 0, 200, 255 );
            if (g_U3540[0]._fU64)
            {
                sub_889( 0 );
            }
            else
            {
                sub_889( 1 );
            }
        }
    }
    sub_13993( ref l_U249, 0.00000000, 0.30000000 );
    sub_7632();
    if ((((fVar8 < 2.00000000) || (iVar12)) AND (iVar13)) || ((uVar2._fU8 > -1.00000000) AND ((l_U257 - uVar5._fU8) > 5.00000000)))
    {
        fVar20 = l_U257 - uVar5._fU8;
        if (NOT (IS_CHAR_DEAD( sub_810() )))
        {
            SET_CHAR_HEADING( sub_810(), g_U3540[0]._fU36._fU8 );
            SET_CHAR_VELOCITY( sub_810(), l_U247 * (-SIN( g_U3540[0]._fU36._fU8 )), l_U247 * (COS( g_U3540[0]._fU36._fU8 )), l_U248 );
            GET_CHAR_HEALTH( sub_810(), ref iVar21 );
            if (iVar21 > 0)
            {
                iVar22 = ROUND( (100.00000000 * (fVar20 - 5.00000000)) / 25.00000000 );
                iVar21 -= iVar22;
                if (iVar21 < 10)
                {
                    iVar21 = 0;
                }
                UNLOCK_RAGDOLL( sub_810(), 1 );
                if (iVar21 > 0)
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
                    SWITCH_PED_TO_RAGDOLL( sub_810(), 1, 2000, 2, 0, 1, 0 );
                    l_U246 = 1;
                }
                SET_CHAR_HEALTH( sub_810(), iVar21 );
            }
            PLAY_SOUND_FROM_PED( -1, "PARACHUTE_SPLAT", sub_810() );
            sub_6032( 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
            GET_GAME_TIMER( ref l_U230 );
            g_U3540[0]._fU4 = 8;
        }
        SHAKE_PAD( 0, 200, 255 );
    }
    return;
}

void sub_13993(unknown uParam0, float fParam1, unknown uParam2)
{
    unknown uVar5;
    float fVar6;

    if ((uParam0^) != fParam1)
    {
        GET_FRAME_TIME( ref uVar5 );
        fVar6 = (uParam2 * 30.00000000) * uVar5;
        if (((uParam0^) - fParam1) > fVar6)
        {
            (uParam0^) -= fVar6;
        }
        else if (((uParam0^) - fParam1) < -fVar6)
        {
            (uParam0^) += fVar6;
        }
        else
        {
            (uParam0^) = fParam1;
        }
    }
    return;
}

void sub_14211(unknown uParam0, float fParam1, unknown uParam2, float fParam3, unknown uParam4, float fParam5)
{
    float fVar8;
    float fVar9;

    if ((uParam0^) != fParam1)
    {
        fVar8 = (ABSF( (uParam0^) - fParam1 )) / uParam2;
        fVar9 = uParam4;
        if (fVar8 < fParam5)
        {
            fVar9 = (fVar8 / fParam5) * uParam4;
        }
        if (fVar9 < fParam3)
        {
            fVar9 = fParam3;
        }
        sub_13993( uParam0, fParam1, fVar9 );
    }
    return;
}

void sub_15701(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    if ((NOT (IS_CHAR_DEAD( sub_810() ))) AND (g_U3540[0]._fU4 == 3))
    {
        if (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Open_Chute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_810(), "PARACHUTE", "Open_Chute", ref fVar5 );
            if (fVar5 < 0.30000000)
            {
                sub_13993( ref l_U248, -60.00000000, 0.40000000 );
                sub_13993( ref l_U247, 1.00000000, 0.30000000 );
            }
            else if (l_U248 > -60.00000000)
            {
                sub_13993( ref l_U248, -7.00000000, 1.50000000 * 2.00000000 );
            }
            else
            {
                sub_13993( ref l_U248, -7.00000000, 1.50000000 );
            }
            sub_13993( ref l_U247, 13.00000000, 0.30000000 );
            if (NOT l_U234)
            {
                PLAY_SOUND_FROM_PED( -1, "PARACHUTE_OPEN", sub_810() );
                l_U234 = 1;
                l_U229 = GET_SOUND_ID();
                PLAY_SOUND_FROM_PED( l_U229, "PARACHUTE_DESCEND", sub_810() );
            }
            if (fVar5 > 0.20000000)
            {
                if (NOT sub_898())
                {
                    PRINTSTRING( "PARA Player: Creating para obj 2 \n" );
                    g_U741 = 1;
                }
                else
                {
                    while (NOT sub_971())
                    {
                        PRINTSTRING( "MANAGE_PARACHUTE_OPENING Stealing control of my para back...... 1 \n" );
                        WAIT( 0 );
                    }
                    if (NOT (IS_OBJECT_PLAYING_ANIM( sub_1288(), "obj_wind_low", "PARACHUTE" )))
                    {
                        if (fVar5 > 0.65000000)
                        {
                            PLAY_OBJECT_ANIM( sub_1288(), "obj_wind_low", "PARACHUTE", 10.00000000, 1, 0 );
                        }
                    }
                }
            }
            if (fVar5 > 0.95000000)
            {
                if (sub_898())
                {
                    while (NOT sub_971())
                    {
                        PRINTSTRING( "MANAGE_PARACHUTE_OPENING Stealing control of my para back...... 2 \n" );
                        WAIT( 0 );
                    }
                }
                if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Hang_Idle" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Hang_Idle", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                }
                l_U235 = 1;
                l_U314 = 0;
                sub_6032( 0, uParam0, 0.00000000, 0.00000000, 0.00000000 );
                l_U258 = uParam0._fU8;
                g_U3540[0]._fU4 = 5;
            }
        }
        else
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Open_chute", "PARACHUTE", 10.00000000, 0, 1, 1, 0, 0 );
        }
    }
    sub_14211( ref g_U3540[0]._fU36._fU0, 0.00000000, 45.00000000, 0.05000000, 2.50000000, 1065353216 );
    sub_14211( ref g_U3540[0]._fU36._fU4, 0.00000000, 45.00000000, 0.05000000, 2.50000000, 1065353216 );
    sub_13993( ref l_U250, 0.00000000, 0.10000000 );
    return;
}

void sub_16976(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if (((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 0, 59 ))) || (((IS_CONTROL_PRESSED( 2, 0 )) AND (NOT IS_PAUSE_MENU_ACTIVE())) AND (NOT sub_17022())))
    {
        iVar9 = COUNT_SCRIPT_CAMS();
        if (iVar9 <= 2)
        {
            if ((NOT l_U314) AND (l_U320 != 3))
            {
                if (iParam0 != 5)
                {
                    sub_6032( 4, uParam1, uParam4 );
                }
                else
                {
                    sub_6032( 6, uParam1, uParam4 );
                }
                l_U314 = 1;
            }
        }
    }
    else if (l_U314)
    {
        sub_6032( 0, uParam1, uParam4 );
        l_U314 = 0;
    }
    return;
}

int sub_17022()
{
    if (g_U1407 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_17194(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    int iVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    float fVar16;

    GET_GAME_TIMER( ref iVar12 );
    switch (l_U320)
    {
        case 1:
        sub_14211( ref l_U310, l_U312, l_U311, 0.01000000, l_U313, 1065353216 );
        SET_FOLLOW_PED_PITCH_LIMIT_DOWN( l_U310 );
        break;
        case 3:
        GET_CAM_POS( l_U274, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
        if (NOT l_U243)
        {
            SET_CAM_POS( l_U274, uVar13._fU0, uVar13._fU4, uVar13._fU8 - 0.05000000 );
        }
        GET_CAM_FOV( l_U274, ref fVar11 );
        if (((VDIST2( uVar13, uParam0 )) > 3000.00000000) AND (fVar11 > 15.00000000))
        {
            SET_CAM_FOV( l_U274, fVar11 - 1.00000000 );
        }
        sub_17494( l_U274, 0.00000000, 0.00000000, 0.00000000, -1.00000000, 1.00000000, 0.05000000, 0.10000000 );
        if ((iVar12 - l_U315) > 8000)
        {
            GET_CHAR_HEIGHT_ABOVE_GROUND( sub_810(), ref fVar16 );
            if (fVar16 > 150.00000000)
            {
                sub_6032( 3, uParam0, uParam3 );
            }
        }
        break;
        case 4:
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.05000000, 0.05000000, ref uVar8 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.05000000, 0.05000000, ref uVar9 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.05000000, 0.05000000, ref uVar10 );
        GET_CAM_POS( l_U274, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
        l_U316._fU0 += uVar8;
        l_U316._fU4 += uVar9;
        l_U316._fU8 += uVar10;
        if (NOT l_U243)
        {
            SET_CAM_POS( l_U274, uParam0._fU0 + l_U316._fU0, uParam0._fU4 + l_U316._fU4, uVar13._fU8 - 0.50000000 );
        }
        sub_17494( l_U274, 0.00000000, 0.00000000, 0.00000000, -0.50000000, 0.50000000, 0.05000000, 0.10000000 );
        if ((iVar12 - l_U315) > 3000)
        {
            sub_6032( 5, uParam0, uParam3 );
        }
        break;
        case 5:
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.05000000, 0.05000000, ref uVar9 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.05000000, 0.05000000, ref uVar10 );
        l_U316._fU4 += uVar9;
        l_U316._fU8 += uVar10;
        SET_CAM_ATTACH_OFFSET( l_U274, l_U316._fU0, l_U316._fU4, l_U316._fU8 );
        sub_17494( l_U274, 0.00000000, 0.00000000, 0.00000000, -0.25000000, 0.25000000, 0.05000000, 0.10000000 );
        if ((iVar12 - l_U315) > 4000)
        {
            sub_6032( 4, uParam0, uParam3 );
        }
        break;
        case 6:
        GET_CAM_POS( l_U274, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
        if (NOT l_U243)
        {
            SET_CAM_POS( l_U274, uVar13._fU0, uVar13._fU4, uVar13._fU8 - 0.05000000 );
        }
        GET_CAM_FOV( l_U274, ref fVar11 );
        if (((VDIST2( uVar13, uParam0 )) > 3000.00000000) AND (fVar11 > 15.00000000))
        {
            SET_CAM_FOV( l_U274, fVar11 - 1.00000000 );
        }
        sub_17494( l_U274, 0.00000000, 0.00000000, 0.00000000, -1.00000000, 1.00000000, 0.05000000, 0.10000000 );
        if ((iVar12 - l_U315) > 8000)
        {
            sub_6032( 6, uParam0, uParam3 );
        }
        break;
    }
    return;
}

void sub_17494(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    if (((l_U0._fU0 != uParam1._fU0) || (l_U0._fU4 != uParam1._fU4)) || (l_U0._fU8 != uParam1._fU8))
    {
        l_U0 = {uParam1};
        l_U6 = {0.00000000, 0.00000000, 0.00000000};
        l_U3 = {0.00000000, 0.00000000, 0.00000000};
    }
    if (((l_U6._fU0 == l_U3._fU0) AND (l_U6._fU4 == l_U3._fU4)) AND (l_U6._fU8 == l_U3._fU8))
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( uParam4, uParam5, ref l_U3._fU0 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( uParam4, uParam5, ref l_U3._fU4 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( uParam4, uParam5, ref l_U3._fU8 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( uParam6, uParam7, ref l_U16 );
    }
    else
    {
        sub_13993( ref l_U6._fU0, l_U3._fU0, l_U16 );
        sub_13993( ref l_U6._fU4, l_U3._fU4, l_U16 );
        sub_13993( ref l_U6._fU8, l_U3._fU8, l_U16 );
    }
    SET_CAM_POINT_OFFSET( uParam0, uParam1._fU0 + l_U6._fU0, uParam1._fU4 + l_U6._fU4, uParam1._fU8 + l_U6._fU8 );
    return;
}

void sub_19176(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U2[GET_PLAYER_ID()]._fU24 = {uParam0};
    return;
}

void sub_19715()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;
    boolean bVar10;
    boolean bVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    unknown uVar19;
    unknown uVar20;
    float fVar21;
    float fVar22;
    int iVar23;
    float fVar24;
    unknown uVar25;
    int iVar26;
    boolean bVar27;
    boolean bVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;

    GET_GAME_TIMER( ref iVar9 );
    if (sub_898())
    {
        while (NOT sub_971())
        {
            PRINTSTRING( "MANAGE_PARACHUTE_MOVEMENT() Request control of my para obj.... \n" );
            WAIT( 0 );
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_810() )))
    {
        GET_CHAR_COORDINATES( sub_810(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if ((IS_CHAR_IN_WATER( sub_810() )) || (uVar3._fU8 < 0.00000000))
        {
            PLAY_SOUND_FROM_PED( -1, "PARACHUTE_LAND_WATER", sub_810() );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
            SET_CHAR_HEADING( sub_810(), g_U3540[0]._fU36._fU8 );
            sub_889( 0 );
            return;
        }
        GET_CHAR_VELOCITY( sub_810(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_CHAR_HEIGHT_ABOVE_GROUND( sub_810(), ref fVar2 );
    }
    bVar10 = false;
    bVar11 = false;
    if ((uVar6._fU8 > -1.00000000) AND ((ABSF( uVar6._fU8 - l_U248 )) > 3.00000000))
    {
        bVar10 = true;
    }
    if ((l_U247 - (VMAG( uVar6._fU0, uVar6._fU4, 0.00000000 ))) > 5.00000000)
    {
        bVar11 = true;
    }
    fVar12 = (TO_FLOAT( l_U226 - l_U225 )) / 255.00000000;
    fVar13 = (TO_FLOAT( l_U223 )) / 128.00000000;
    fVar14 = ((fVar12 * 1.10000000) + (fVar13 * 0.90000000)) / 2.00000000;
    sub_13993( ref l_U249, 0.00000000, 0.30000000 );
    GET_FRAME_TIME( ref uVar19 );
    fVar15 = fVar14 * 0.40000000;
    fVar16 = (g_U3540[0]._fU36._fU4 / 75.00000000) * 0.40000000;
    fVar17 = l_U321 * 0.10000000;
    fVar18 = (fVar15 - fVar16) - fVar17;
    l_U321 += fVar18;
    g_U3540[0]._fU36._fU4 += (l_U321 * uVar19) * 30.00000000;
    l_U250 = (g_U3540[0]._fU36._fU4 / 75.00000000) * 4.50000000;
    if ((l_U226 == 255) AND (l_U225 == 255))
    {
        sub_13993( ref l_U248, -5.50000000, 0.25000000 );
        sub_13993( ref l_U247, 3.50000000, 0.30000000 );
        sub_14211( ref g_U3540[0]._fU36._fU0, 20.00000000 / 2.00000000, 20.00000000 * 2.00000000, 0.05000000, 2.50000000, 1065353216 );
        l_U261 = -7.00000000 - l_U248;
        l_U262 = 13.00000000 - l_U247;
        l_U263 = g_U3540[0]._fU36._fU0;
    }
    else
    {
        sub_13993( ref l_U261, 0.00000000, 0.25000000 );
        sub_13993( ref l_U262, 0.00000000, 0.30000000 );
        sub_14211( ref l_U263, 0.00000000, 20.00000000 * 2.00000000, 0.05000000, 2.50000000, 1065353216 );
        fVar15 = (l_U224 / 128.00000000) * 0.30000000;
        fVar16 = (g_U3540[0]._fU36._fU0 / 20.00000000) * 0.30000000;
        fVar17 = l_U322 * 0.15000000;
        fVar18 = (fVar15 - fVar16) - fVar17;
        l_U322 += fVar18;
        g_U3540[0]._fU36._fU0 += (l_U322 * uVar19) * 30.00000000;
        uVar20 = ABSF( g_U3540[0]._fU36._fU0 / 20.00000000 );
        if (g_U3540[0]._fU36._fU0 < 0.00000000)
        {
            l_U248 = -7.00000000 - (uVar20 * (-7.00000000 - -12.00000000));
            l_U247 = 13.00000000 - (uVar20 * (13.00000000 - 10.00000000));
        }
        else if (g_U3540[0]._fU36._fU0 > 0.00000000)
        {
            l_U248 = -7.00000000 - (uVar20 * (-7.00000000 - -4.50000000));
            l_U247 = 13.00000000 - (uVar20 * (13.00000000 - 14.00000000));
        }
        else
        {
            l_U248 = -7.00000000;
            l_U247 = 13.00000000;
        }
        l_U248 -= l_U261;
        l_U247 -= l_U262;
    }
    fVar21 = 75.00000000 * 0.60000000;
    if ((ABSF( g_U3540[0]._fU36._fU4 )) > fVar21)
    {
        fVar22 = ((ABSF( g_U3540[0]._fU36._fU4 )) - fVar21) / (75.00000000 - fVar21);
        l_U248 -= fVar22 * (-7.00000000 - -20.00000000);
        l_U247 -= fVar22 * (13.00000000 - 10.00000000);
        if (l_U248 < -20.00000000)
        {
            l_U248 = -20.00000000;
        }
        if (l_U247 < 3.50000000)
        {
            l_U247 = 3.50000000;
        }
    }
    if ((ABSF( l_U250 )) > (4.50000000 * 0.95000000))
    {
        if (l_U264 == 0)
        {
            GET_GAME_TIMER( ref l_U264 );
        }
        if ((iVar9 - l_U264) > 1500)
        {
            if (l_U320 != 3)
            {
                sub_6032( 3, uVar3, uVar6 );
                l_U265 = 0;
            }
        }
    }
    else if (l_U320 == 3)
    {
        if (l_U265 == 0)
        {
            GET_GAME_TIMER( ref l_U265 );
        }
        if ((iVar9 - l_U265) > 1000)
        {
            sub_6032( 0, uVar3, uVar6 );
            l_U314 = 0;
        }
    }
    l_U264 = 0;;
    g_U3540[0]._fU36._fU8 -= (l_U250 * uVar19) * 30.00000000;
    if (g_U3540[0]._fU36._fU8 > 180)
    {
        g_U3540[0]._fU36._fU8 -= 360;
    }
    else if (g_U3540[0]._fU36._fU8 < 65356)
    {
        g_U3540[0]._fU36._fU8 += 360;
    }
    if (l_U320 != 3)
    {
        sub_16976( g_U3540[0]._fU4, uVar3, uVar6 );
    }
    if (l_U320 == 0)
    {
        if (l_U248 > -7.00000000)
        {
            sub_6032( 1, uVar3, uVar6 );
        }
        else if (l_U248 < -7.00000000)
        {
            sub_6032( 2, uVar3, uVar6 );
        }
    }
    else if (l_U320 == 1)
    {
        if (l_U248 <= -7.00000000)
        {
            sub_6032( 0, uVar3, uVar6 );
        }
    }
    else if (l_U320 == 2)
    {
        if (l_U248 >= -7.00000000)
        {
            sub_6032( 0, uVar3, uVar6 );
        }
    };;;
    sub_17194( uVar3, uVar6 );
    if (g_U740 <= 2)
    {
        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PAR_FLT_MP" ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PAR_CLSC_MP" ))))
        {
            GET_GAME_TIMER( ref iVar23 );
            if (l_U270 == 0)
            {
                l_U270 = iVar23 + 10000;
                CLEAR_HELP();
                if (USING_STANDARD_CONTROLS())
                {
                    PRINT_HELP( "PAR_FLT_MP" );
                }
                else
                {
                    PRINT_HELP( "PAR_CLSC_MP" );
                }
            }
            else if ((iVar23 > l_U270) AND (NOT (l_U270 == -1)))
            {
                l_U270 = -1;
                CLEAR_HELP();
            }
        }
    }
    SET_VARIABLE_ON_SOUND( l_U229, "Velocity", 0.50000000 + (((l_U248 - -5.50000000) / (-20.00000000 - -5.50000000)) * 0.50000000) );
    if (NOT (IS_CHAR_DEAD( sub_810() )))
    {
        fVar24 = (l_U248 / -20.00000000) * 1.40000000;
        if (fVar24 > 1.00000000)
        {
            fVar24 = 1.00000000;
        }
        else if (fVar24 < 0.70000000)
        {
            fVar24 = 0.70000000;
        }
        SET_PED_WINDY_CLOTHING_SCALE( sub_810(), fVar24 );
    }
    sub_7632();
    if (NOT (IS_CHAR_INJURED( sub_810() )))
    {
        uVar25 = GET_CLOSEST_CAR( uVar3, 5.00000000, 0, 127 );
        if ((fVar2 < 1.20000000) || (bVar10))
        {
            GET_CHAR_HEALTH( sub_810(), ref iVar26 );
            SET_CHAR_VELOCITY( sub_810(), uVar6._fU0 / 2.00000000, uVar6._fU4 / 2.00000000, uVar6._fU8 );
            CLEAR_CHAR_SECONDARY_TASK( sub_810() );
            TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( sub_810(), "Land_Fast", "PARACHUTE", 4.00000000, 0, 3328, 0.80000000 );
            STOP_SOUND( l_U229 );
            RELEASE_SOUND_ID( l_U229 );
            l_U229 = -1;
            if (sub_898())
            {
                DETACH_OBJECT( sub_1288(), 1 );
                SET_OBJECT_COLLISION( sub_1288(), 0 );
                SET_OBJECT_DYNAMIC( sub_1288(), 1 );
                PLAY_OBJECT_ANIM( sub_1288(), "obj_crumple", "PARACHUTE", 8.00000000, 0, 1 );
            }
            PLAY_SOUND_FROM_PED( -1, "PARACHUTE_LAND", sub_810() );
            bVar27 = false;
            bVar28 = false;
            if (DOES_VEHICLE_EXIST( uVar25 ))
            {
                if (bVar10)
                {
                    if (IS_VEH_DRIVEABLE( uVar25 ))
                    {
                        GET_CAR_SPEED( uVar25, ref fVar29 );
                        if (((fVar29 > 2.00000000) AND (fVar2 > 1.00000000)) AND (NOT g_U3637))
                        {
                            bVar27 = true;
                        }
                    }
                }
            }
            if (((ABSF( g_U3540[0]._fU36._fU4 )) > 30.00000000) || ((l_U248 < (-12.00000000 * 1.10000000)) AND ((NOT g_U3637) || ((g_U3637) AND (NOT (DOES_VEHICLE_EXIST( uVar25 )))))))
            {
                bVar27 = true;
            }
            if (l_U248 < -12.00000000)
            {
                if (uVar3._fU8 > 1.20000000)
                {
                    bVar28 = true;
                }
            }
            if (bVar27)
            {
                if (NOT (IS_CHAR_DEAD( sub_810() )))
                {
                    SET_CHAR_INVINCIBLE( sub_810(), 1 );
                    UNLOCK_RAGDOLL( sub_810(), 1 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
                    SWITCH_PED_TO_RAGDOLL( sub_810(), 500, 2000, 2, 0, 1, 0 );
                }
                if (bVar28)
                {
                    if (iVar26 > 0)
                    {
                        iVar26 -= FLOOR( (-12.00000000 - l_U248) * 20.00000000 );
                        if (iVar26 < 0)
                        {
                            iVar26 = 0;
                        }
                        SET_CHAR_HEALTH( sub_810(), iVar26 );
                    }
                }
            }
            else
            {
                SET_CHAR_HEADING( sub_810(), g_U3540[0]._fU36._fU8 );
                if (g_U3633)
                {
                    if ((l_U248 >= -5.50000000) AND (l_U247 < 13.00000000))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Land_Safe" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Land_Safe", "PARACHUTE", 4.00000000, 0, 1, 1, 0, 0 );
                            TASK_PLAY_ANIM_WITH_FLAGS( sub_810(), "Land_Safe", "PARACHUTE", 4.00000000, 0, 3328 );
                        }
                    }
                    else if (l_U248 >= (-7.00000000 - 2.00000000))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Land" )))
                        {
                            TASK_PLAY_ANIM( sub_810(), "Land", "PARACHUTE", 4.00000000, 0, 1, 1, 0, 0 );
                        }
                    }
                    else if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Land_Fast" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Land_Fast", "PARACHUTE", 4.00000000, 0, 1, 1, 0, 0 );
                    };;;
                }
                else if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Land_Safe" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Land_Safe", "PARACHUTE", 4.00000000, 0, 1, 1, 0, 0 );
                    TASK_PLAY_ANIM_WITH_FLAGS( sub_810(), "Land_Safe", "PARACHUTE", 4.00000000, 0, 3328 );
                }
            }
            if (iVar26 >= 100)
            {
                sub_6032( 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                g_U3540[0]._fU4 = 7;
            }
            else
            {
                PRINTSTRING( "MANAGE_PARACHUTE_MOVEMENT Calling RESET_PARACHUTE_PED() \n" );
                sub_889( 0 );
            }
        }
        else if (NOT (IS_PED_RAGDOLL( sub_810() )))
        {
            fVar30 = ABSF( ATAN2( TO_FLOAT( l_U223 ), TO_FLOAT( l_U224 ) ) );
            fVar31 = TO_FLOAT( (l_U223 * l_U223) + (l_U224 * l_U224) );
            fVar32 = g_U3540[0]._fU36._fU4 / 45.00000000;
            fVar33 = g_U3540[0]._fU36._fU0 / 20.00000000;
            if (NOT g_U3645)
            {
                if (((fVar30 > 100.00000000) AND (fVar31 > 10000.00000000)) AND (fVar33 < -0.20000000))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Accelerate_Loop" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Accelerate_Loop", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    }
                }
                else if (((fVar30 < 80.00000000) AND (fVar31 > 10000.00000000)) AND (fVar33 > 0.20000000))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "deccelerate" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "deccelerate", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    }
                }
                else if ((fVar32 > 0.85000000) AND (l_U223 > 20))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Steer_R" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Steer_R", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    }
                }
                else if ((fVar32 < -0.85000000) AND (l_U223 < 65516))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Steer_L" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Steer_L", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    }
                }
                else if ((fVar32 > 0.20000000) AND (l_U223 > 20))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Steer_R_less" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Steer_R_less", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    }
                }
                else if ((fVar32 < -0.20000000) AND (l_U223 < 65516))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Steer_L_less" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Steer_L_less", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    }
                }
                else if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Hang_Idle" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Hang_Idle", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                };;;;;;;
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Hang_Idle" )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_810(), "Hang_Idle", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
            }
            if ((l_U226 == 255) AND (l_U225 == 255))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Full_Brake_Loop" )))
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( sub_810(), "Full_Brake_Loop", "PARACHUTE", 4.00000000, 0, 3344 );
                }
                if (sub_898())
                {
                    if (l_U248 < (-12.00000000 * 0.80000000))
                    {
                        if (NOT (IS_OBJECT_PLAYING_ANIM( sub_1288(), "obj_wind_high", "PARACHUTE" )))
                        {
                            PLAY_OBJECT_ANIM( sub_1288(), "obj_wind_high", "PARACHUTE", 4.00000000, 1, 0 );
                        }
                    }
                    else if (l_U248 >= -7.00000000)
                    {
                        if (NOT (IS_OBJECT_PLAYING_ANIM( sub_1288(), "obj_wind_low", "PARACHUTE" )))
                        {
                            PLAY_OBJECT_ANIM( sub_1288(), "obj_wind_low", "PARACHUTE", 4.00000000, 1, 0 );
                        }
                    }
                }
            }
            else if ((fVar32 > 0.20000000) AND (l_U226 > 10))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Steer_AB_R" )))
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( sub_810(), "Steer_AB_R", "PARACHUTE", 4.00000000, 0, 3344 );
                }
            }
            else if ((fVar32 < -0.20000000) AND (l_U225 > 10))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Steer_AB_L" )))
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( sub_810(), "Steer_AB_L", "PARACHUTE", 4.00000000, 0, 3344 );
                }
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( sub_810(), "PARACHUTE", "Hang_Idle2" )))
            {
                TASK_PLAY_ANIM_WITH_FLAGS( sub_810(), "Hang_Idle2", "PARACHUTE", 4.00000000, 0, 3344 );
            }
            if (sub_898())
            {
                if (l_U248 < (-12.00000000 * 0.80000000))
                {
                    if (NOT (IS_OBJECT_PLAYING_ANIM( sub_1288(), "obj_wind_high", "PARACHUTE" )))
                    {
                        PLAY_OBJECT_ANIM( sub_1288(), "obj_wind_high", "PARACHUTE", 4.00000000, 1, 0 );
                    }
                }
                else if (l_U248 >= -7.00000000)
                {
                    if (NOT (IS_OBJECT_PLAYING_ANIM( sub_1288(), "obj_wind_low", "PARACHUTE" )))
                    {
                        PLAY_OBJECT_ANIM( sub_1288(), "obj_wind_low", "PARACHUTE", 4.00000000, 1, 0 );
                    }
                }
            };;;;
        }
        if ((((IS_BUTTON_JUST_PRESSED( 0, 15 )) || (IS_CONTROL_JUST_PRESSED( 2, 3 ))) || ((fVar2 > 3.00000000) AND (bVar11))) AND (NOT IS_PAUSE_MENU_ACTIVE()))
        {
            STOP_SOUND( l_U229 );
            RELEASE_SOUND_ID( l_U229 );
            l_U229 = -1;
            if (bVar11)
            {
                if (l_U248 < -12.00000000)
                {
                    PLAY_SOUND_FROM_PED( -1, "PARACHUTE_PED_HIT_BUILDING_FAST", sub_810() );
                }
                else if (l_U248 <= -7.00000000)
                {
                    PLAY_SOUND_FROM_PED( -1, "PARACHUTE_PED_HIT_BUILDING_MED", sub_810() );
                }
                else
                {
                    PLAY_SOUND_FROM_PED( -1, "PARACHUTE_PED_HIT_BUILDING_SLOW", sub_810() );
                }
            }
            PLAY_SOUND_FROM_PED( -1, "PARACHUTE_UNCLIP", sub_810() );
            UNLOCK_RAGDOLL( sub_810(), 1 );
            if (NOT (IS_CHAR_DEAD( sub_810() )))
            {
                sub_25839();
                SET_CHAR_INVINCIBLE( sub_810(), 1 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_810() );
                SWITCH_PED_TO_RAGDOLL( sub_810(), 1, 100, 1, 0, 1, 1 );
                CREATE_NM_MESSAGE( 1, 246 );
                SEND_NM_MESSAGE( sub_810() );
            }
            if (sub_898())
            {
                DETACH_OBJECT( sub_1288(), 1 );
                SET_OBJECT_COLLISION( sub_1288(), 0 );
                SET_OBJECT_DYNAMIC( sub_1288(), 1 );
                PLAY_OBJECT_ANIM( sub_1288(), "obj_crumple", "PARACHUTE", 8.00000000, 0, 1 );
            }
            sub_6032( 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
            g_U3540[0]._fU4 = 8;
            GET_GAME_TIMER( ref l_U230 );
        }
    }
    return;
}

void sub_25839()
{
    int iVar2;

    if (HAS_CHAR_GOT_WEAPON( sub_810(), 41 ))
    {
        GET_CURRENT_CHAR_WEAPON( sub_810(), ref iVar2 );
        REMOVE_WEAPON_FROM_CHAR( sub_810(), 41 );
        if (iVar2 != 41)
        {
            SET_CURRENT_CHAR_WEAPON( sub_810(), iVar2, 0 );
        }
    }
    return;
}
