void main()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
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
    float fVar23;
    float fVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    float fVar28;
    float fVar29;
    int iVar30;

    l_U17 = 0.00000000;
    l_U18 = 0.00000000;
    l_U19 = 0.00000000;
    l_U20 = 0;
    l_U22 = 0;
    l_U23 = 0;
    l_U24 = 0;
    l_U25 = 0;
    l_U26 = 0;
    l_U27 = 0;
    l_U28 = -1;
    l_U29 = 0;
    l_U30 = 0;
    l_U31 = 0;
    l_U32 = 0;
    l_U33 = 1;
    l_U34 = 0;
    l_U35 = 0;
    l_U36 = 0;
    l_U37 = 0;
    l_U38 = 0;
    l_U39 = 0;
    l_U40 = 0;
    l_U41 = 0;
    l_U42 = 0;
    l_U43 = 0;
    l_U44 = 0;
    l_U45 = 0.00000000;
    l_U46 = 0.00000000;
    l_U47 = 0.00000000;
    l_U48 = 0.00000000;
    l_U49 = -60.00000000;
    l_U50 = -80.00000000;
    l_U51 = -50.00000000;
    l_U52 = -7.00000000;
    l_U53 = -5.50000000;
    l_U54 = -12.00000000;
    l_U55 = 0.00000000;
    l_U56 = 1000.00000000;
    l_U57 = 0.00000000;
    l_U58 = 0.00000000;
    l_U59 = 0.00000000;
    l_U60 = 0.00000000;
    l_U61 = 0.00000000;
    l_U62 = 0;
    l_U63 = 0;
    l_U64 = 0;
    l_U65 = 0;
    l_U77 = {0.00000000, -8.00000000, -3.50000000};
    l_U80 = {0.00000000, 0.00000000, 2.00000000};
    l_U83 = 7.50000000;
    l_U84 = 85.00000000;
    l_U85 = 0.00000000;
    l_U86 = 50.00000000;
    l_U87 = 1.00000000;
    l_U88 = 0;
    l_U89 = 0;
    l_U93 = 0;
    l_U94 = 0;
    l_U95 = 0.00000000;
    l_U96 = 0.00000000;
    sub_487();
    if (HAS_DEATHARREST_EXECUTED())
    {
        if (g_U2692[0]._fU56)
        {
            sub_634( 0 );
            if (IS_CHAR_INJURED( sub_658() ))
            {
                if ((NOT (IS_CHAR_DEAD( sub_658() ))) AND ((g_U2692[0]._fU4 == 3) || (g_U2692[0]._fU4 == 5)))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_658() );
                    SET_CHAR_HEALTH( sub_658(), 0 );
                }
            }
            sub_781( 0 );
        }
    }
    while (true)
    {
        WAIT( 0 );
        if (NOT (IS_CHAR_INJURED( sub_658() )))
        {
            GET_CHAR_COORDINATES( sub_658(), ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
        }
        if (NOT l_U34)
        {
            if (REQUEST_AMBIENT_AUDIO_BANK( "EP2_SFX\PARACHUTE" ))
            {
                l_U34 = 1;
            }
        }
        if ((NOT g_U2692[0]._fU56) || (IS_CHAR_INJURED( sub_658() )))
        {
            sub_781( 0 );
        }
        if (NOT (IS_CHAR_INJURED( sub_658() )))
        {
            if ((g_U2692[0]._fU4 != 0) AND (g_U2692[0]._fU4 != 1))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_658() ))
                {
                    sub_781( 0 );
                }
            }
        }
        if (((sub_2001()) AND (g_U2692[0]._fU56)) AND (NOT g_U2692[0]._fU68))
        {
            DISABLE_INTERMEZZO_CAMS();
            if (l_U49 != g_U2692[0]._fU48)
            {
                l_U49 = g_U2692[0]._fU48;
                l_U50 = l_U49 - (-60.00000000 - -80.00000000);
                l_U51 = l_U49 + (-50.00000000 - -60.00000000);
            }
            if (l_U52 != g_U2692[0]._fU52)
            {
                l_U52 = g_U2692[0]._fU52;
                l_U53 = l_U52 + (-5.50000000 - -7.00000000);
                l_U54 = l_U52 - (-7.00000000 - -12.00000000);
                if (l_U53 > -2.00000000)
                {
                    l_U53 = -2.00000000;
                }
            }
            if (NOT (IS_CHAR_INJURED( sub_658() )))
            {
                GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U22, ref l_U23, ref uVar13, ref uVar14 );
                if (USING_STANDARD_CONTROLS())
                {
                    l_U24 = GET_CONTROL_VALUE( 0, 6 );
                    l_U25 = GET_CONTROL_VALUE( 0, 4 );
                }
                else
                {
                    l_U24 = GET_CONTROL_VALUE( 0, 4 );
                    l_U25 = GET_CONTROL_VALUE( 0, 6 );
                }
                if (NOT IS_USING_CONTROLLER())
                {
                    l_U24 = GET_CONTROL_VALUE( 0, 137 );
                    l_U25 = GET_CONTROL_VALUE( 0, 138 );
                    GET_KEYBOARD_MOVE_INPUT( ref l_U22, ref l_U23 );
                }
                switch (g_U2692[0]._fU4)
                {
                    case 0:
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_658() )))
                    {
                        if (((NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "CLIMB_STD", "Ladder_Slide" ))) AND (NOT (IS_CHAR_ON_FIRE( sub_658() )))) AND (NOT (sub_2604( sub_658() ))))
                        {
                            GET_CHAR_HEIGHT_ABOVE_GROUND( sub_658(), ref fVar2 );
                            if (NOT l_U36)
                            {
                                sub_2781();
                            }
                            if ((((fVar2 > 20.00000000) || ((g_U2784) AND (fVar2 > 4.00000000))) || (l_U36)) || (l_U20 == 1))
                            {
                                if (NOT (IS_CHAR_ON_FIRE( sub_658() )))
                                {
                                    GET_CHAR_VELOCITY( sub_658(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                                    if ((l_U36) || (l_U20 == 1))
                                    {
                                        l_U37 = 1;
                                        sub_4486( uVar3 );
                                    }
                                    else if (uVar3._fU8 < -4.00000000)
                                    {
                                        l_U37 = 0;
                                        sub_4486( uVar3 );
                                    }
                                }
                                else
                                {
                                    SWITCH_PED_TO_RAGDOLL( sub_658(), 500, 2000, 2, 0, 1, 0 );
                                    GET_GAME_TIMER( ref l_U29 );
                                    g_U2692[0]._fU4 = 8;
                                }
                            }
                        }
                    }
                    else
                    {
                        l_U38 = 0;
                        l_U64 = 0;
                        g_U2692[0]._fU4 = 1;
                    }
                    break;
                    case 1:
                    if (NOT l_U38)
                    {
                        if ((((IS_CHAR_IN_ANY_HELI( sub_658() )) AND (IS_PLAYER_CONTROL_ON( sub_8507() ))) AND (g_U2794)) AND (NOT (sub_2604( sub_658() ))))
                        {
                            if (IS_CONTROL_JUST_PRESSED( 2, 43 ))
                            {
                                GET_CHAR_HEIGHT_ABOVE_GROUND( sub_658(), ref fVar2 );
                                if (fVar2 > 25.00000000)
                                {
                                    l_U43 = 0;
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_658(), ref l_U70 );
                                    if (NOT (IS_CAR_A_MISSION_CAR( l_U70 )))
                                    {
                                        SET_CAR_AS_MISSION_CAR( l_U70 );
                                    }
                                    else
                                    {
                                        l_U43 = 1;
                                    }
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U70, 0.00000000, -1.00000000, 0.20000000, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8 );
                                    GET_CHAR_HEADING( sub_658(), ref l_U58 );
                                    SET_CHAR_COLLISION( sub_658(), 0 );
                                    SET_CHAR_VISIBLE( sub_658(), 0 );
                                    WARP_CHAR_FROM_CAR_TO_COORD( sub_658(), uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                                    ATTACH_PED_TO_CAR( sub_658(), l_U70, 0, -1.00000000, 0.90000000, 0.60000000, 0.00000000, 0.00000000, 0, 0 );
                                    OPEN_SEQUENCE_TASK( ref l_U66 );
                                    TASK_PLAY_ANIM_WITH_FLAGS( 0, "jump_out_ds", "PARACHUTE", 1000.00000000, 0, 64 );
                                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Free_Fall", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                                    CLOSE_SEQUENCE_TASK( l_U66 );
                                    TASK_PERFORM_SEQUENCE( sub_658(), l_U66 );
                                    CLEAR_SEQUENCE_TASK( l_U66 );
                                    l_U38 = 1;
                                    g_U2802 = 1;
                                }
                            }
                        }
                    }
                    if (NOT l_U42)
                    {
                        if (((IS_CHAR_ON_ANY_BIKE( sub_658() )) AND (IS_CONTROL_JUST_PRESSED( 2, 43 ))) AND (NOT (sub_2604( sub_658() ))))
                        {
                            l_U43 = 0;
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_658(), ref l_U70 );
                            if (NOT (IS_CAR_A_MISSION_CAR( l_U70 )))
                            {
                                SET_CAR_AS_MISSION_CAR( l_U70 );
                            }
                            else
                            {
                                l_U43 = 1;
                            }
                            if ((IS_VEH_DRIVEABLE( l_U70 )) AND (IS_CAR_IN_AIR_PROPER( l_U70 )))
                            {
                                GET_CHAR_HEIGHT_ABOVE_GROUND( sub_658(), ref fVar23 );
                                if (fVar23 > 20.00000000)
                                {
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_658(), 0.00000000, 0.00000000, -0.50000000, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
                                    if (WAS_PED_SKELETON_UPDATED( sub_658() ))
                                    {
                                        GET_PED_BONE_POSITION( sub_658(), 0, -0.50000000, 0.00000000, 0.00000000, ref uVar18 );
                                    }
                                    else
                                    {
                                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_658(), 0.00000000, 0.00000000, -0.50000000, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
                                    }
                                    GET_GROUND_Z_FOR_3D_COORD( uVar18._fU0, uVar18._fU4, uVar18._fU8, ref uVar21 );
                                    GET_CAR_SPEED_VECTOR( l_U70, ref uVar3, 0 );
                                    GET_CHAR_HEADING( sub_658(), ref uVar22 );
                                    WARP_CHAR_FROM_CAR_TO_COORD( sub_658(), uVar18._fU0, uVar18._fU4, uVar18._fU8 - 0.50000000 );
                                    SET_CHAR_HEADING( sub_658(), uVar22 );
                                    l_U42 = 1;
                                    g_U2802 = 1;
                                    SET_CHAR_VELOCITY( sub_658(), uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                                    SET_CAR_COLLISION( l_U70, 0 );
                                    SET_CHAR_COLLISION( sub_658(), 0 );
                                    sub_4486( uVar3 );
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_4486( uVar3 );
                    }
                    if ((l_U38) || (l_U20 == 1))
                    {
                        if (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "jump_out_ds" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( sub_658(), "PARACHUTE", "jump_out_ds", ref fVar24 );
                            if ((fVar24 > 0.00000000) AND (fVar24 < 0.20000000))
                            {
                                if (NOT (IS_CHAR_VISIBLE( sub_658() )))
                                {
                                    SET_CHAR_VISIBLE( sub_658(), 1 );
                                }
                                if (IS_VEH_DRIVEABLE( l_U70 ))
                                {
                                    CONTROL_CAR_DOOR( l_U70, 0, 0, fVar24 / 0.20000000 );
                                }
                            }
                        }
                        GET_CHAR_VELOCITY( sub_658(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        l_U37 = 1;
                        sub_4486( uVar3 );
                    }
                    else if ((NOT (IS_CHAR_IN_ANY_CAR( sub_658() ))) AND (l_U64 == 0))
                    {
                        GET_GAME_TIMER( ref l_U64 );
                    }
                    if (l_U64 != 0)
                    {
                        GET_GAME_TIMER( ref iVar12 );
                        if ((iVar12 - l_U64) > 1000)
                        {
                            g_U2692[0]._fU4 = 0;
                        }
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( sub_658() )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( sub_658() )))
                        {
                            GET_CHAR_VELOCITY( sub_658(), ref uVar25._fU0, ref uVar25._fU4, ref uVar25._fU8 );
                            sub_4486( uVar25 );
                        }
                    }
                    break;
                    case 3:
                    sub_9868();
                    break;
                    case 4:
                    if (NOT (IS_CHAR_INJURED( sub_658() )))
                    {
                        g_U2692[0]._fU36._fU0 = 0;
                        g_U2692[0]._fU36._fU4 = 0;
                        GET_CHAR_HEADING( sub_658(), ref g_U2692[0]._fU36._fU8 );
                        GET_CHAR_VELOCITY( sub_658(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        l_U45 = VMAG( uVar3._fU0, uVar3._fU4, 0.00000000 );
                        l_U48 = 0.00000000;
                        l_U46 = uVar3._fU8;
                        l_U95 = 0.00000000;
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_658() );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( sub_658(), 1 );
                        sub_4940();
                        sub_5343( 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                        l_U33 = 1;
                        GET_CURRENT_CHAR_WEAPON( sub_658(), ref l_U93 );
                        GIVE_WEAPON_TO_CHAR( sub_658(), 0, 0, 1 );
                        BLOCK_PED_WEAPON_SWITCHING( sub_658(), 1 );
                        l_U28 = GET_SOUND_ID();
                        PLAY_SOUND_FROM_PED( l_U28, "PARACHUTE_DESCEND", sub_658() );
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Hang_Idle" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Hang_Idle", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                        }
                        if (NOT (DOES_OBJECT_EXIST( l_U21 )))
                        {
                            CREATE_OBJECT( 1490460832, uVar9._fU0, uVar9._fU4, uVar9._fU8 + 2.00000000, ref l_U21, 1 );
                            ATTACH_OBJECT_TO_PED( l_U21, sub_658(), 0, 0.02500000, -0.12500000, 5.45000000, 0.00000000, 0.00000000, 0.00000000, 1 );
                        }
                        g_U2692[0]._fU4 = 5;
                    }
                    break;
                    case 5:
                    sub_15703();
                    break;
                    case 7:
                    if (DOES_OBJECT_EXIST( l_U21 ))
                    {
                        GET_OBJECT_COORDINATES( l_U21, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                        SLIDE_OBJECT( l_U21, uVar6._fU0, uVar6._fU4, uVar6._fU8 + 20.00000000, 0.00000000, 0.00000000, 0.40000000, 0 );
                        if (NOT (IS_OBJECT_PLAYING_ANIM( l_U21, "obj_crumple", "PARACHUTE" )))
                        {
                            l_U65 += 10;
                            if (l_U65 > 255)
                            {
                                l_U65 = 255;
                            }
                            SET_OBJECT_ALPHA( l_U21, 255 - l_U65 );
                            if (l_U65 >= 255)
                            {
                                DELETE_OBJECT( ref l_U21 );
                            }
                        }
                    }
                    if (((((NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Land" ))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Land_Safe" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Land_Fast" )))) AND (NOT (IS_PED_RAGDOLL( sub_658() )))) AND (NOT (IS_CHAR_GETTING_UP( sub_658() ))))
                    {
                        sub_781( 0 );
                    }
                    if (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Land" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_658(), "PARACHUTE", "Land", ref fVar28 );
                        if (fVar28 > 0.40000000)
                        {
                            if ((l_U22 != 0) || (l_U23 != 0))
                            {
                                CLEAR_CHAR_TASKS( sub_658() );
                                CLEAR_CHAR_SECONDARY_TASK( sub_658() );
                            }
                        }
                    }
                    break;
                    case 8:
                    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
                    {
                        CLEAR_HELP();
                    }
                    if (DOES_OBJECT_EXIST( l_U21 ))
                    {
                        GET_OBJECT_COORDINATES( l_U21, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                        SLIDE_OBJECT( l_U21, uVar6._fU0, uVar6._fU4, uVar6._fU8 + 20.00000000, 0.00000000, 0.00000000, 0.25000000, 0 );
                        if (NOT (IS_OBJECT_PLAYING_ANIM( l_U21, "obj_crumple", "PARACHUTE" )))
                        {
                            l_U65 += 10;
                            if (l_U65 > 255)
                            {
                                l_U65 = 255;
                            }
                            SET_OBJECT_ALPHA( l_U21, 255 - l_U65 );
                            if (l_U65 >= 255)
                            {
                                DELETE_OBJECT( ref l_U21 );
                            }
                        }
                    }
                    if ((uVar9._fU8 < -2.00000000) || (IS_CHAR_IN_WATER( sub_658() )))
                    {
                        if (NOT (IS_PED_RAGDOLL( sub_658() )))
                        {
                            sub_781( 0 );
                        }
                    }
                    else
                    {
                        GET_CHAR_VELOCITY( sub_658(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                        GET_CHAR_HEIGHT_ABOVE_GROUND( sub_658(), ref fVar2 );
                        if ((uVar3._fU8 > -1.00000000) AND ((fVar2 < 1.50000000) || (uVar9._fU8 > 1.10000000)))
                        {
                            if (l_U29 != 0)
                            {
                                GET_GAME_TIMER( ref iVar12 );
                                if ((iVar12 - l_U29) > 500)
                                {
                                    fVar29 = (TO_FLOAT( iVar12 - l_U29 )) / 3000.00000000;
                                    if (NOT l_U40)
                                    {
                                        if (fVar29 < 1.00000000)
                                        {
                                            if (fVar29 > 0.10000000)
                                            {
                                                PLAY_SOUND_FROM_PED( -1, "PED_COLLISIONS_BODY_COLLISION", sub_658() );
                                                GET_CHAR_HEALTH( sub_658(), ref iVar30 );
                                                SET_CHAR_HEALTH( sub_658(), iVar30 - (ROUND( fVar29 * 100.00000000 )) );
                                            }
                                        }
                                        else
                                        {
                                            PLAY_SOUND_FROM_PED( -1, "PED_COLLISIONS_CRUSH_COMPONENTS", sub_658() );
                                            SET_CHAR_HEALTH( sub_658(), 0 );
                                            sub_781( 0 );
                                        }
                                        l_U40 = 1;
                                    }
                                    else if (NOT (IS_PED_RAGDOLL( sub_658() )))
                                    {
                                        SET_CHAR_INVINCIBLE( sub_658(), 0 );
                                        g_U2692[0]._fU4 = 7;
                                    }
                                }
                            }
                            else if (NOT (IS_PED_RAGDOLL( sub_658() )))
                            {
                                if (NOT l_U44)
                                {
                                    g_U2692[0]._fU4 = 7;
                                }
                                else
                                {
                                    l_U44 = 0;
                                    sub_781( 1 );
                                }
                            }
                        }
                    }
                    break;
                }
                if (DOES_OBJECT_EXIST( l_U21 ))
                {
                    if ((g_U2692[0]._fU4 == 3) || (g_U2692[0]._fU4 == 5))
                    {
                        if (IS_OBJECT_ATTACHED( l_U21 ))
                        {
                            ATTACH_PARACHUTE_MODEL_TO_PLAYER( sub_658(), l_U21 );
                        }
                    }
                }
                if (l_U31 != 0)
                {
                    if (IS_VEH_DRIVEABLE( l_U70 ))
                    {
                        GET_GAME_TIMER( ref iVar12 );
                        if ((iVar12 - l_U31) > 1500)
                        {
                            SET_CAR_COLLISION( l_U70, 1 );
                            if (NOT l_U43)
                            {
                                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U70 );
                            }
                            l_U31 = 0;
                        }
                    }
                    else
                    {
                        l_U31 = 0;
                    }
                }
                l_U26 = l_U22;
                l_U27 = l_U23;
            }
        }
    }
    return;
}

void sub_487()
{
    g_U2692[0]._fU60 = 1;
    g_U2692[0]._fU36 = {0.00000000, 0.00000000, 0.00000000};
    g_U2692[0]._fU24 = {0.00000000, 0.00000000, 0.00000000};
    sub_563();
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    ALLOW_STUNT_JUMPS_TO_TRIGGER( 0 );
    return;
}

void sub_563()
{
    return;
}

void sub_634(unknown uParam0)
{
    g_U2790 = uParam0;
    return;
}

void sub_658()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_781(boolean bParam0)
{
    if (DOES_CHAR_EXIST( sub_658() ))
    {
        BLOCK_PED_WEAPON_SWITCHING( sub_658(), 0 );
        UNLOCK_RAGDOLL( sub_658(), 1 );
    }
    CLEAR_HELP();
    SET_GAME_CAMERA_CONTROLS_ACTIVE( 1 );
    sub_848();
    if (NOT (IS_CHAR_INJURED( sub_658() )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( sub_658(), 0 );
        SET_CHAR_INVINCIBLE( sub_658(), 0 );
        sub_994();
    }
    else if (((g_U2692[0]._fU4 != 5) AND (g_U2692[0]._fU4 != 7)) AND (NOT g_U2692[0]._fU64))
    {
        GIVE_WEAPON_TO_CHAR( sub_658(), 41, 1, 0 );
    }
    if (l_U28 != -1)
    {
        STOP_SOUND( l_U28 );
        RELEASE_SOUND_ID( l_U28 );
        l_U28 = -1;
    }
    if (DOES_OBJECT_EXIST( l_U21 ))
    {
        DETACH_OBJECT( l_U21, 0 );
        DELETE_OBJECT( ref l_U21 );
    }
    if (IS_VEH_DRIVEABLE( l_U70 ))
    {
        if (NOT l_U43)
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U70 );
        }
    }
    l_U70 = nil;
    sub_1225();
    g_U2692[0]._fU4 = 0;
    g_U2692[0]._fU12 = {0.00000000, 0.00000000, 0.00000000};
    g_U2692[0]._fU36 = {0.00000000, 0.00000000, 0.00000000};
    g_U2692[0]._fU24 = {0.00000000, 0.00000000, 0.00000000};
    g_U2692[0]._fU64 = 0;
    g_U2692[0]._fU68 = 0;
    g_U2802 = 0;
    if ((NOT g_U2790) AND (NOT bParam0))
    {
        g_U2692[0]._fU60 = 0;
        g_U2692[0]._fU56 = 0;
        g_U2692[0]._fU8 = 0;
        g_U2692[0]._fU48 = -60.00000000;
        g_U2692[0]._fU52 = -7.00000000;
        g_U2692[0]._fU0 = nil;
        g_U2784 = 0;
        sub_1741();
        UNREGISTER_SCRIPT_WITH_AUDIO();
        ALLOW_STUNT_JUMPS_TO_TRIGGER( 1 );
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_848()
{
    int iVar2;

    if (DOES_CAM_EXIST( l_U69 ))
    {
        DESTROY_CAM( l_U69 );
    }
    if (DOES_CAM_EXIST( l_U68 ))
    {
        DESTROY_CAM( l_U68 );
    }
    iVar2 = COUNT_SCRIPT_CAMS();
    if (iVar2 == 0)
    {
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    return;
}

void sub_994()
{
    if ((l_U55 - l_U56) > 760.00000000)
    {
        AWARD_ACHIEVEMENT( 62 );
    }
    return;
}

void sub_1225()
{
    l_U20 = 0;
    l_U26 = 0;
    l_U27 = 0;
    l_U28 = -1;
    l_U62 = 0;
    l_U63 = 0;
    l_U64 = 0;
    l_U65 = 0;
    l_U32 = 0;
    l_U33 = 1;
    l_U34 = 0;
    l_U35 = 0;
    l_U36 = 0;
    l_U37 = 0;
    l_U38 = 0;
    l_U39 = 0;
    l_U40 = 0;
    l_U41 = 0;
    l_U42 = 0;
    l_U43 = 0;
    l_U44 = 0;
    l_U45 = 0.00000000;
    l_U46 = 0.00000000;
    l_U47 = 0.00000000;
    l_U48 = 0.00000000;
    l_U59 = 0.00000000;
    l_U60 = 0.00000000;
    l_U61 = 0.00000000;
    l_U84 = 85.00000000;
    l_U85 = 0.00000000;
    l_U86 = 50.00000000;
    l_U87 = 1.00000000;
    l_U88 = 0;
    l_U89 = 0;
    l_U93 = 0;
    l_U94 = 0;
    l_U95 = 0.00000000;
    l_U96 = 0.00000000;
    return;
}

void sub_1741()
{
    return;
}

int sub_2001()
{
    if ((HAS_MODEL_LOADED( 1490460832 )) AND (HAVE_ANIMS_LOADED( "PARACHUTE" )))
    {
        return 1;
    }
    return 0;
}

int sub_2604(int iParam0)
{
    if (iParam0 == nil)
    {
        return 0;
    }
    if ((sub_2629( iParam0 )) == -1)
    {
        return 0;
    }
    return 1;
}

int sub_2629(int iParam0)
{
    int Result;

    if (iParam0 == nil)
    {
        return -1;
    }
    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (NOT (g_U9105[Result]._fU0 == -1))
        {
            if (iParam0 == g_U9105[Result]._fU4)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_2781()
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

    l_U36 = 0;
    iVar2 = 1;
    iVar3 = 0;
    I = 0;
    if (NOT (IS_CHAR_INJURED( sub_658() )))
    {
        if (IS_CONTROL_JUST_PRESSED( 2, 2 ))
        {
            l_U35 = 1;
        }
        if (l_U35)
        {
            iVar18 = sub_2854();
            if (iVar18 != 0)
            {
                fVar19 = sub_3074();
                if (fVar19 > 0.10000000)
                {
                    GET_CHAR_COORDINATES( sub_658(), ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                    GET_CHAR_VELOCITY( sub_658(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
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
                    if ((iVar3) AND (((NOT IS_INTERIOR_SCENE()) AND (iVar2)) || (g_U2791)))
                    {
                        if (iVar18 == 2)
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "jump_takeoff_l", "PARACHUTE", 8.00000000, 0, 1, 1, 0, 0 );
                        }
                        else if (iVar18 == 1)
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "jump_takeoff_r", "PARACHUTE", 8.00000000, 0, 1, 1, 0, 0 );
                        }
                        l_U36 = 1;
                    }
                    l_U35 = 0;
                }
            }
        }
        else if (((((((g_U2791) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "JUMP_STD", "Jump_TakeOff_R" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "JUMP_RIFLE", "Jump_TakeOff_R" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "JUMP_STD", "Jump_TakeOff_L" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "JUMP_RIFLE", "Jump_TakeOff_L" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "jump_takeoff_l" )))) AND (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "jump_takeoff_r" ))))
        {
            GET_CHAR_COORDINATES( sub_658(), ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
            GET_CHAR_VELOCITY( sub_658(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            if (uVar11._fU0 > -244.30000000)
            {
                fVar6 = VMAG( uVar8._fU0, uVar8._fU4, 0.00000000 );
                GET_CHAR_HEADING( sub_658(), ref uVar7 );
                if ((fVar6 > 0.00000000) AND ((ABSF( uVar7 - 270.00000000 )) < 45.00000000))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "jump_takeoff_l", "PARACHUTE", 8.00000000, 0, 1, 1, 0, 0 );
                    l_U36 = 1;
                }
            }
        }
    }
    return;
}

int sub_2854()
{
    if ((IS_CHAR_PLAYING_ANIM( sub_658(), "JUMP_STD", "Jump_TakeOff_R" )) || (IS_CHAR_PLAYING_ANIM( sub_658(), "JUMP_RIFLE", "Jump_TakeOff_R" )))
    {
        return 1;
    }
    else if ((IS_CHAR_PLAYING_ANIM( sub_658(), "JUMP_STD", "Jump_TakeOff_L" )) || (IS_CHAR_PLAYING_ANIM( sub_658(), "JUMP_RIFLE", "Jump_TakeOff_L" )))
    {
        return 2;
    }
    return 0;
}

void sub_3074()
{
    float Result;

    Result = -1.00000000;
    if (IS_CHAR_PLAYING_ANIM( sub_658(), "JUMP_STD", "Jump_TakeOff_R" ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_658(), "JUMP_STD", "Jump_TakeOff_R", ref Result );
    }
    else if (IS_CHAR_PLAYING_ANIM( sub_658(), "JUMP_RIFLE", "Jump_TakeOff_R" ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_658(), "JUMP_RIFLE", "Jump_TakeOff_R", ref Result );
    }
    else if (IS_CHAR_PLAYING_ANIM( sub_658(), "JUMP_STD", "Jump_TakeOff_L" ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_658(), "JUMP_STD", "Jump_TakeOff_L", ref Result );
    }
    else if (IS_CHAR_PLAYING_ANIM( sub_658(), "JUMP_RIFLE", "Jump_TakeOff_L" ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( sub_658(), "JUMP_RIFLE", "Jump_TakeOff_L", ref Result );
    };;;;
    return Result;
}

void sub_4486(unknown uParam0, unknown uParam1, unknown uParam2)
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

    if (NOT (IS_CHAR_INJURED( sub_658() )))
    {
        switch (l_U20)
        {
            case 0:
            if (NOT l_U37)
            {
                if (IS_PED_RAGDOLL( sub_658() ))
                {
                    BLEND_FROM_NM_WITH_ANIM( sub_658(), "PARACHUTE", "Free_Fall", 0, 0, 0, 0 );
                    SWITCH_PED_TO_ANIMATED( sub_658(), 1 );
                }
                else if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Free_Fall" )))
                {
                    if (g_U2786)
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Free_Fall", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                    }
                    else
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Free_Fall", "PARACHUTE", 0.75000000, 1, 1, 1, 0, 0 );
                    }
                }
            }
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( sub_658(), 1 );
            l_U45 = VMAG( uParam0._fU0, uParam0._fU4, 0.00000000 );
            l_U48 = 0.00000000;
            l_U46 = uParam0._fU8;
            g_U2692[0]._fU36._fU0 = 0;
            g_U2692[0]._fU36._fU4 = 0;
            GET_CHAR_HEADING( sub_658(), ref g_U2692[0]._fU36._fU8 );
            GET_CHAR_COORDINATES( sub_658(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            l_U55 = uVar5._fU8;
            CLEAR_THIS_PRINT( "PARA_WARN" );
            sub_4940();
            sub_5343( 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
            l_U33 = 1;
            GET_CURRENT_CHAR_WEAPON( sub_658(), ref l_U93 );
            GIVE_WEAPON_TO_CHAR( sub_658(), 0, 0, 1 );
            BLOCK_PED_WEAPON_SWITCHING( sub_658(), 1 );
            if (NOT l_U37)
            {
                SET_CHAR_COLLISION( sub_658(), 1 );
                GET_GAME_TIMER( ref l_U31 );
                g_U2802 = 0;
                g_U2692[0]._fU4 = 3;
                sub_6947();
            }
            else
            {
                l_U20 = 1;
            }
            break;
            case 1:
            if (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "jump_takeoff_r" ))
            {
                sVar9 = "jump_takeoff_r";
            }
            else if (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "jump_takeoff_l" ))
            {
                sVar9 = "jump_takeoff_l";
            }
            if ((IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "jump_takeoff_r" )) || (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "jump_takeoff_l" )))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_658(), "PARACHUTE", sVar9, ref fVar8 );
                if (fVar8 > 0.80000000)
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Free_Fall", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                    l_U45 = 5.00000000;
                    l_U46 = 1.00000000;
                    sub_6947();
                }
            }
            else if (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Free_Fall" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_658(), "PARACHUTE", "Free_Fall", ref fVar8 );
                if (l_U38)
                {
                    if (IS_VEH_DRIVEABLE( l_U70 ))
                    {
                        SET_CAR_COLLISION( l_U70, 0 );
                    }
                }
                if (fVar8 > 0.00000000)
                {
                    if (l_U38)
                    {
                        g_U2692[0]._fU36._fU8 = l_U58 + 90.00000000;
                        if (g_U2692[0]._fU36._fU8 > 180.00000000)
                        {
                            g_U2692[0]._fU36._fU8 = -180.00000000 + (g_U2692[0]._fU36._fU8 - 180.00000000);
                        }
                        if (IS_VEH_DRIVEABLE( l_U70 ))
                        {
                            SET_CAR_COLLISION( l_U70, 0 );
                        }
                        if (IS_PED_RAGDOLL( sub_658() ))
                        {
                            SWITCH_PED_TO_ANIMATED( sub_658(), 1 );
                        }
                        SET_CHAR_HEADING( sub_658(), g_U2692[0]._fU36._fU8 );
                        if (IS_VEH_DRIVEABLE( l_U70 ))
                        {
                            GET_CAR_SPEED_VECTOR( l_U70, ref uVar10, 0 );
                            GET_CAR_HEADING( l_U70, ref uVar13 );
                        }
                        l_U45 = ((uVar10._fU0 * (-COS( uVar13 ))) + (uVar10._fU4 * (-SIN( uVar13 )))) + 3.00000000;
                        l_U47 = (uVar10._fU4 * (COS( uVar13 ))) + (uVar10._fU0 * (-SIN( uVar13 )));
                        l_U46 = uVar10._fU8 - 4.00000000;
                    }
                    else
                    {
                        l_U45 = (VMAG( uParam0._fU0, uParam0._fU4, 0.00000000 )) + 3.00000000;
                        l_U46 = uParam0._fU8;
                    }
                    if (IS_VEH_DRIVEABLE( l_U70 ))
                    {
                        GET_GAME_TIMER( ref l_U31 );
                        l_U31 -= 1000;
                        SET_CAR_COLLISION( l_U70, 0 );
                    }
                    SET_CHAR_COLLISION( sub_658(), 1 );
                    g_U2692[0]._fU4 = 3;
                    g_U2802 = 0;
                    l_U20 = 0;
                    sub_6947();
                }
            }
            break;
        }
    }
    return;
}

void sub_4940()
{
    unknown uVar2;

    if (NOT (DOES_CAM_EXIST( l_U67 )))
    {
        GET_GAME_CAM( ref l_U67 );
    }
    GET_CAM_POS( l_U67, ref l_U71._fU0, ref l_U71._fU4, ref l_U71._fU8 );
    GET_CAM_ROT( l_U67, ref l_U74._fU0, ref l_U74._fU4, ref l_U74._fU8 );
    GET_CAM_FOV( l_U67, ref uVar2 );
    if (NOT (DOES_CAM_EXIST( l_U68 )))
    {
        CREATE_CAM( 14, ref l_U68 );
        SET_CAM_MOTION_BLUR( l_U68, 0.10000000 );
        ATTACH_CAM_TO_PED( l_U68, sub_658() );
        SET_CAM_ATTACH_OFFSET( l_U68, l_U77._fU0, l_U77._fU4, l_U77._fU8 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U68, 0 );
        POINT_CAM_AT_PED( l_U68, sub_658() );
        SET_CAM_POINT_OFFSET( l_U68, l_U80._fU0, l_U80._fU4, l_U80._fU8 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U68, 1 );
    }
    if (NOT (DOES_CAM_EXIST( l_U69 )))
    {
        CREATE_CAM( 14, ref l_U69 );
    }
    SET_CAM_POS( l_U69, l_U71._fU0, l_U71._fU4, l_U71._fU8 );
    POINT_CAM_AT_PED( l_U69, sub_658() );
    return;
}

void sub_5343(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    vector vVar9;
    unknown uVar12;
    int iVar13;

    switch (l_U94)
    {
        case 1:
        l_U84 = 85.00000000;
        break;
        default:
    }
    UNATTACH_CAM( l_U69 );
    UNPOINT_CAM( l_U69 );
    SET_CAM_ACTIVE( l_U69, 0 );
    SET_CAM_PROPAGATE( l_U69, 0 );
    l_U41 = 0;
    iVar13 = COUNT_SCRIPT_CAMS();
    if (iVar13 <= 2)
    {
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    switch (uParam0)
    {
        case 1:
        GET_CAM_ROT( l_U67, ref l_U74._fU0, ref l_U74._fU4, ref l_U74._fU8 );
        l_U84 = ABSF( l_U74._fU0 );
        l_U85 = ABSF( l_U74._fU0 );
        break;
        case 3:
        GENERATE_RANDOM_FLOAT_IN_RANGE( -20.00000000, 20.00000000, ref l_U90._fU0 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -20.00000000, 20.00000000, ref l_U90._fU4 );
        l_U90._fU0 += uParam4._fU0 * 3.00000000;
        l_U90._fU4 += uParam4._fU4 * 3.00000000;
        vVar9 = {uParam1._fU0 + l_U90._fU0, uParam1._fU4 + l_U90._fU4, uParam1._fU8 - 10.00000000};
        if (sub_5739( vVar9, 1084227584 ))
        {
            GET_GROUND_Z_FOR_3D_COORD( vVar9.x, vVar9.y, vVar9.z + 1000.00000000, ref uVar12 );
            vVar9.z = uVar12 + 5.00000000;
            l_U41 = 1;
        }
        SET_CAM_POS( l_U69, vVar9.x, vVar9.y, vVar9.z );
        SET_CAM_FOV( l_U69, 45.00000000 );
        POINT_CAM_AT_PED( l_U69, sub_658() );
        SET_CAM_POINT_OFFSET( l_U69, 0.00000000, 0.00000000, 0.00000000 );
        sub_5953( l_U69, 1 );
        GET_GAME_TIMER( ref l_U89 );
        break;
        case 4:
        GENERATE_RANDOM_FLOAT_IN_RANGE( -4.00000000, 4.00000000, ref l_U90._fU0 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -4.00000000, 4.00000000, ref l_U90._fU4 );
        vVar9 = {uParam1._fU0 + l_U90._fU0, uParam1._fU4 + l_U90._fU4, uParam1._fU8 - 50.00000000};
        if (sub_5739( vVar9, 20.00000000 ))
        {
            GET_GROUND_Z_FOR_3D_COORD( vVar9.x, vVar9.y, vVar9.z + 1000.00000000, ref uVar12 );
            vVar9.z = uVar12 + 5.00000000;
            l_U41 = 1;
        }
        SET_CAM_POS( l_U69, vVar9.x, vVar9.y, vVar9.z );
        POINT_CAM_AT_PED( l_U69, sub_658() );
        SET_CAM_POINT_OFFSET( l_U69, 0.00000000, 0.00000000, 0.00000000 );
        sub_5953( l_U69, 1 );
        GET_GAME_TIMER( ref l_U89 );
        break;
        case 5:
        while ((ABSF( l_U90._fU0 )) < 3.00000000)
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( -5.00000000, 5.00000000, ref l_U90._fU0 );
        }
        GENERATE_RANDOM_FLOAT_IN_RANGE( -3.00000000, 3.00000000, ref l_U90._fU4 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( 1.00000000, 2.00000000, ref l_U90._fU8 );
        ATTACH_CAM_TO_PED( l_U69, sub_658() );
        SET_CAM_ATTACH_OFFSET( l_U69, l_U90._fU0, l_U90._fU4, l_U90._fU8 );
        POINT_CAM_AT_PED( l_U69, sub_658() );
        SET_CAM_POINT_OFFSET( l_U69, 0.00000000, 0.00000000, 0.00000000 );
        sub_5953( l_U69, 1 );
        GET_GAME_TIMER( ref l_U89 );
        break;
        case 6:
        GENERATE_RANDOM_FLOAT_IN_RANGE( -20.00000000, 20.00000000, ref l_U90._fU0 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -20.00000000, 20.00000000, ref l_U90._fU4 );
        l_U90._fU0 += uParam4._fU0 * 3.00000000;
        l_U90._fU4 += uParam4._fU4 * 3.00000000;
        l_U90._fU8 = -10.00000000;
        vVar9 = {uParam1._fU0 + l_U90._fU0, uParam1._fU4 + l_U90._fU4, uParam1._fU8 + l_U90._fU8};
        if (sub_5739( vVar9, 1084227584 ))
        {
            GET_GROUND_Z_FOR_3D_COORD( vVar9.x, vVar9.y, vVar9.z + 1000.00000000, ref uVar12 );
            vVar9.z = uVar12 + 5.00000000;
            l_U41 = 1;
        }
        SET_CAM_POS( l_U69, vVar9.x, vVar9.y, vVar9.z );
        SET_CAM_FOV( l_U69, 45.00000000 );
        POINT_CAM_AT_PED( l_U69, sub_658() );
        SET_CAM_POINT_OFFSET( l_U69, 0.00000000, 0.00000000, 0.00000000 );
        sub_5953( l_U69, 1 );
        GET_GAME_TIMER( ref l_U89 );
        break;
    }
    l_U94 = uParam0;
    return;
}

int sub_5739(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GROUND_Z_FOR_3D_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8 + 1000.00000000, ref uVar6 );
    if ((uVar6 + uParam3) > uParam0._fU8)
    {
        return 1;
    }
    return 0;
}

void sub_5953(unknown uParam0, unknown uParam1)
{
    SET_CAM_ACTIVE( uParam0, uParam1 );
    SET_CAM_PROPAGATE( uParam0, uParam1 );
    ACTIVATE_SCRIPTED_CAMS( uParam1, uParam1 );
    return;
}

void sub_6947()
{
    float fVar2;
    float fVar3;

    fVar2 = 0.00000000;
    fVar3 = 0.00000000;
    if (g_U2692[0]._fU4 == 3)
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -1.00000000, 1.00000000, ref fVar2 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.50000000, 0.50000000, ref fVar3 );
        SHAKE_PAD( 0, 200, ROUND( fVar2 * 128.00000000 ) );
    }
    else if (g_U2692[0]._fU4 == 5)
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.50000000, 0.50000000, ref fVar2 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.50000000, 0.50000000, ref fVar3 );
    }
    if (NOT (IS_CHAR_INJURED( sub_658() )))
    {
        SET_CHAR_ROTATION( sub_658(), g_U2692[0]._fU36._fU0, g_U2692[0]._fU36._fU4, g_U2692[0]._fU36._fU8 );
        g_U2692[0]._fU24._fU0 = ((l_U45 * (-SIN( g_U2692[0]._fU36._fU8 ))) + (l_U47 * (COS( g_U2692[0]._fU36._fU8 )))) + fVar2;
        g_U2692[0]._fU24._fU4 = ((l_U45 * (COS( g_U2692[0]._fU36._fU8 ))) + (l_U47 * (SIN( g_U2692[0]._fU36._fU8 )))) + fVar3;
        g_U2692[0]._fU24._fU8 = l_U46;
        SET_CHAR_VELOCITY( sub_658(), g_U2692[0]._fU24._fU0, g_U2692[0]._fU24._fU4, g_U2692[0]._fU24._fU8 );
    }
    return;
}

void sub_8507()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_9868()
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
    if (l_U30 == 0)
    {
        l_U30 = iVar11;
    }
    if (NOT (IS_CHAR_INJURED( sub_658() )))
    {
        GET_CHAR_COORDINATES( sub_658(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        GET_CHAR_VELOCITY( sub_658(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        GET_CHAR_HEIGHT_ABOVE_GROUND( sub_658(), ref fVar8 );
    }
    iVar13 = 0;
    if ((uVar2._fU8 > -5.00000000) AND ((ABSF( uVar2._fU8 - l_U46 )) > 10.00000000))
    {
        iVar13 = 1;
    }
    fVar10 = -10.00000000;
    if (WAS_PED_SKELETON_UPDATED( sub_658() ))
    {
        GET_PED_BONE_POSITION( sub_658(), 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar15 );
        GET_GROUND_Z_FOR_3D_COORD( uVar15._fU0, uVar15._fU4, uVar15._fU8 + 100.00000000, ref uVar14 );
        fVar10 = uVar15._fU8 - uVar14;
    }
    if ((fVar10 != -10.00000000) AND (fVar10 < 1.00000000))
    {
        iVar12 = 1;
    }
    if (NOT g_U2692[0]._fU64)
    {
        if (l_U23 < 0)
        {
            sub_10238( ref l_U46, -60.00000000 - (((TO_FLOAT( l_U23 )) / 128.00000000) * (-80.00000000 - -60.00000000)), 0.40000000 );
            sub_10238( ref l_U45, 1.00000000 - (((TO_FLOAT( l_U23 )) / 128.00000000) * (25.00000000 - 1.00000000)), 0.40000000 );
            sub_10452( ref g_U2692[0]._fU36._fU0, ((TO_FLOAT( l_U23 )) / 128.00000000) * 45.00000000, 45.00000000, 0.05000000, 2.50000000, 1065353216 );
        }
        else if (l_U23 > 0)
        {
            sub_10238( ref l_U46, -60.00000000 - (((TO_FLOAT( l_U23 )) / 128.00000000) * (-60.00000000 - -50.00000000)), 0.40000000 );
            sub_10238( ref l_U45, 1.00000000, 0.30000000 );
            sub_10452( ref g_U2692[0]._fU36._fU0, 0.00000000, 45.00000000, 0.05000000, 2.50000000, 1065353216 );
        }
        else
        {
            sub_10238( ref l_U46, -60.00000000, 0.40000000 );
            sub_10238( ref l_U45, 1.00000000, 0.30000000 );
            sub_10452( ref g_U2692[0]._fU36._fU0, 0.00000000, 45.00000000, 0.05000000, 2.50000000, 1065353216 );
        }
        fVar18 = (TO_FLOAT( l_U22 )) / 128.00000000;
        sub_10238( ref l_U48, -fVar18 * 1.25000000, 0.10000000 );
        g_U2692[0]._fU36._fU8 += (l_U48 * uVar9) * 30.00000000;
        if (g_U2692[0]._fU36._fU8 > 180)
        {
            g_U2692[0]._fU36._fU8 -= 360;
        }
        else if (g_U2692[0]._fU36._fU8 < 65356)
        {
            g_U2692[0]._fU36._fU8 += 360;
        }
        sub_10452( ref g_U2692[0]._fU36._fU4, (fVar18 * 45.00000000) / 2.00000000, 45.00000000, 0.05000000, 2.50000000, 1065353216 );
        if (NOT (IS_CHAR_INJURED( sub_658() )))
        {
            if (NOT (IS_PED_RAGDOLL( sub_658() )))
            {
                if (NOT g_U2797)
                {
                    if (l_U23 < 65416)
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Free_Fall_Fast" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Free_Fall_Fast", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                        }
                    }
                    else if (l_U23 > 120)
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "free_fall_deccelerate" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "free_fall_deccelerate", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                        }
                    }
                    else if (l_U22 > 10)
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Free_Fall_Veer_Right" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Free_Fall_Veer_Right", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                        }
                    }
                    else if (l_U22 < -10)
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Free_Fall_Veer_left" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Free_Fall_Veer_Left", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                        }
                    }
                    else if (((ABSI( l_U26 )) < 10) AND ((ABSI( l_U27 )) < 10))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Free_Fall" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Free_Fall", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                        }
                    };;;;;
                }
                else if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Free_Fall" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Free_Fall", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                }
            }
        }
        if (((IS_CONTROL_JUST_PRESSED( 0, 1 )) || (IS_CONTROL_JUST_PRESSED( 0, 137 ))) AND (IS_PLAYER_CONTROL_ON( sub_8507() )))
        {
            if ((iVar11 - l_U30) > 500)
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Open_chute", "PARACHUTE", 10.00000000, 0, 1, 1, 0, 0 );
                CLEAR_HELP();
                l_U57 = fVar8;
                g_U2692[0]._fU64 = 1;
            }
        }
    }
    else
    {
        sub_11913( uVar5 );
    }
    if (((g_U2783) AND (l_U33)) AND (NOT g_U2692[0]._fU64))
    {
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PARA_FALL" )))
        {
            CLEAR_HELP();
            PRINT_HELP( "PARA_FALL" );
            l_U33 = 0;
        }
    }
    if (NOT (IS_CHAR_INJURED( sub_658() )))
    {
        fVar19 = (l_U46 / -80.00000000) * 1.25000000;
        if (fVar19 < 0.10000000)
        {
            fVar19 = 0.10000000;
        }
        else if (fVar19 > 0.20000000)
        {
            fVar19 = 0.20000000;
        }
        SET_PED_WINDY_CLOTHING_SCALE( sub_658(), fVar19 );
    }
    sub_13051( g_U2692[0]._fU4, uVar5, uVar2 );
    sub_13224( uVar5, uVar2 );
    if (NOT (IS_CHAR_INJURED( sub_658() )))
    {
        if ((IS_CHAR_IN_WATER( sub_658() )) || (uVar5._fU8 < -2.00000000))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_658() );
            SET_CHAR_HEADING( sub_658(), g_U2692[0]._fU36._fU8 );
            l_U46 /= 20.00000000;
            SHAKE_PAD( 0, 200, 255 );
            if (g_U2692[0]._fU64)
            {
                sub_781( 0 );
            }
            else
            {
                sub_781( 1 );
            }
        }
    }
    sub_10238( ref l_U47, 0.00000000, 0.30000000 * 2.00000000 );
    sub_6947();
    if ((((fVar8 < 2.00000000) || (iVar12)) AND (iVar13)) || ((uVar2._fU8 > -1.00000000) AND ((l_U55 - uVar5._fU8) > 5.00000000)))
    {
        fVar20 = l_U55 - uVar5._fU8;
        if (NOT (IS_CHAR_INJURED( sub_658() )))
        {
            SET_CHAR_HEADING( sub_658(), g_U2692[0]._fU36._fU8 );
            SET_CHAR_VELOCITY( sub_658(), l_U45 * (-SIN( g_U2692[0]._fU36._fU8 )), l_U45 * (COS( g_U2692[0]._fU36._fU8 )), l_U46 );
            GET_CHAR_HEALTH( sub_658(), ref iVar21 );
            iVar22 = ROUND( (100.00000000 * (fVar20 - 5.00000000)) / 25.00000000 );
            iVar21 -= iVar22;
            if (iVar21 < 10)
            {
                iVar21 = 0;
            }
            UNLOCK_RAGDOLL( sub_658(), 1 );
            if (iVar21 > 0)
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_658() );
                SWITCH_PED_TO_RAGDOLL( sub_658(), 1, 2000, 2, 0, 1, 0 );
                l_U44 = 1;
            }
            PLAY_SOUND_FROM_PED( -1, "PARACHUTE_SPLAT", sub_658() );
            SET_CHAR_HEALTH( sub_658(), iVar21 );
            sub_5343( 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
            l_U29 = 0;
            g_U2692[0]._fU4 = 8;
        }
        SHAKE_PAD( 0, 200, 255 );
    }
    return;
}

void sub_10238(unknown uParam0, float fParam1, unknown uParam2)
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

void sub_10452(unknown uParam0, float fParam1, unknown uParam2, float fParam3, unknown uParam4, float fParam5)
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
        sub_10238( uParam0, fParam1, fVar9 );
    }
    return;
}

void sub_11913(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    if ((NOT (IS_CHAR_INJURED( sub_658() ))) AND (g_U2692[0]._fU4 == 3))
    {
        if (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Open_Chute" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_658(), "PARACHUTE", "Open_Chute", ref fVar5 );
            if (fVar5 < 0.30000000)
            {
                sub_10238( ref l_U46, -60.00000000, 0.40000000 );
                sub_10238( ref l_U45, 1.00000000, 0.30000000 );
            }
            else if (l_U46 > -60.00000000)
            {
                sub_10238( ref l_U46, -7.00000000, 1.50000000 * 2.00000000 );
            }
            else
            {
                sub_10238( ref l_U46, -7.00000000, 1.50000000 );
            }
            sub_10238( ref l_U45, 13.00000000, 0.30000000 );
            if (NOT l_U32)
            {
                PLAY_SOUND_FROM_PED( -1, "PARACHUTE_OPEN", sub_658() );
                l_U32 = 1;
                l_U28 = GET_SOUND_ID();
                PLAY_SOUND_FROM_PED( l_U28, "PARACHUTE_DESCEND", sub_658() );
            }
            if (fVar5 > 0.20000000)
            {
                if (NOT (DOES_OBJECT_EXIST( l_U21 )))
                {
                    CREATE_OBJECT( 1490460832, uParam0._fU0, uParam0._fU4, uParam0._fU8 + 2.00000000, ref l_U21, 1 );
                    ATTACH_OBJECT_TO_PED( l_U21, sub_658(), 0, 0.02500000, -0.12500000, 5.45000000, 0.00000000, 0.00000000, 0.00000000, 1 );
                    PLAY_OBJECT_ANIM( l_U21, "obj_deploy", "PARACHUTE", 1000.00000000, 0, 1 );
                }
                else if (NOT (IS_OBJECT_PLAYING_ANIM( l_U21, "obj_wind_low", "PARACHUTE" )))
                {
                    if (fVar5 > 0.65000000)
                    {
                        PLAY_OBJECT_ANIM( l_U21, "obj_wind_low", "PARACHUTE", 10.00000000, 1, 0 );
                    }
                }
            }
            if (fVar5 > 0.95000000)
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Hang_Idle" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Hang_Idle", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                }
                l_U33 = 1;
                l_U88 = 0;
                sub_5343( 0, uParam0, 0.00000000, 0.00000000, 0.00000000 );
                l_U56 = uParam0._fU8;
                g_U2692[0]._fU4 = 5;
            }
        }
        else
        {
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Open_chute", "PARACHUTE", 10.00000000, 0, 1, 1, 0, 0 );
        }
    }
    sub_10452( ref g_U2692[0]._fU36._fU0, 0.00000000, 45.00000000, 0.05000000, 2.50000000, 1065353216 );
    sub_10452( ref g_U2692[0]._fU36._fU4, 0.00000000, 45.00000000, 0.05000000, 2.50000000, 1065353216 );
    sub_10238( ref l_U48, 0.00000000, 0.10000000 );
    return;
}

void sub_13051(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if (((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 0, 59 ))) || (IS_CONTROL_PRESSED( 2, 0 )))
    {
        iVar9 = COUNT_SCRIPT_CAMS();
        if (iVar9 <= 2)
        {
            if ((NOT l_U88) AND (l_U94 != 3))
            {
                if (iParam0 != 5)
                {
                    sub_5343( 4, uParam1, uParam4 );
                }
                else
                {
                    sub_5343( 6, uParam1, uParam4 );
                }
                l_U88 = 1;
            }
        }
    }
    else if (l_U88)
    {
        sub_5343( 0, uParam1, uParam4 );
        l_U88 = 0;
    }
    return;
}

void sub_13224(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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
    switch (l_U94)
    {
        case 1:
        sub_10452( ref l_U84, l_U86, l_U85, 0.01000000, l_U87, 1065353216 );
        SET_FOLLOW_PED_PITCH_LIMIT_DOWN( l_U84 );
        break;
        case 3:
        GET_CAM_POS( l_U69, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
        if (NOT l_U41)
        {
            SET_CAM_POS( l_U69, uVar13._fU0, uVar13._fU4, uVar13._fU8 - 0.05000000 );
        }
        GET_CAM_FOV( l_U69, ref fVar11 );
        if (((VDIST2( uVar13, uParam0 )) > 3000.00000000) AND (fVar11 > 15.00000000))
        {
            SET_CAM_FOV( l_U69, fVar11 - 1.00000000 );
        }
        sub_13524( l_U69, 0.00000000, 0.00000000, 0.00000000, -1.00000000, 1.00000000, 0.05000000, 0.10000000 );
        if ((iVar12 - l_U89) > 8000)
        {
            GET_CHAR_HEIGHT_ABOVE_GROUND( sub_658(), ref fVar16 );
            if (fVar16 > 150.00000000)
            {
                sub_5343( 3, uParam0, uParam3 );
            }
        }
        break;
        case 4:
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.05000000, 0.05000000, ref uVar8 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.05000000, 0.05000000, ref uVar9 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.05000000, 0.05000000, ref uVar10 );
        GET_CAM_POS( l_U69, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
        l_U90._fU0 += uVar8;
        l_U90._fU4 += uVar9;
        l_U90._fU8 += uVar10;
        if (NOT l_U41)
        {
            SET_CAM_POS( l_U69, uParam0._fU0 + l_U90._fU0, uParam0._fU4 + l_U90._fU4, uVar13._fU8 - 0.50000000 );
        }
        sub_13524( l_U69, 0.00000000, 0.00000000, 0.00000000, -0.50000000, 0.50000000, 0.05000000, 0.10000000 );
        if ((iVar12 - l_U89) > 3000)
        {
            sub_5343( 5, uParam0, uParam3 );
        }
        break;
        case 5:
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.05000000, 0.05000000, ref uVar9 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.05000000, 0.05000000, ref uVar10 );
        l_U90._fU4 += uVar9;
        l_U90._fU8 += uVar10;
        SET_CAM_ATTACH_OFFSET( l_U69, l_U90._fU0, l_U90._fU4, l_U90._fU8 );
        sub_13524( l_U69, 0.00000000, 0.00000000, 0.00000000, -0.25000000, 0.25000000, 0.05000000, 0.10000000 );
        if ((iVar12 - l_U89) > 4000)
        {
            sub_5343( 4, uParam0, uParam3 );
        }
        break;
        case 6:
        GET_CAM_POS( l_U69, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
        if (NOT l_U41)
        {
            SET_CAM_POS( l_U69, uVar13._fU0, uVar13._fU4, uVar13._fU8 - 0.05000000 );
        }
        GET_CAM_FOV( l_U69, ref fVar11 );
        if (((VDIST2( uVar13, uParam0 )) > 3000.00000000) AND (fVar11 > 15.00000000))
        {
            SET_CAM_FOV( l_U69, fVar11 - 1.00000000 );
        }
        sub_13524( l_U69, 0.00000000, 0.00000000, 0.00000000, -1.00000000, 1.00000000, 0.05000000, 0.10000000 );
        if ((iVar12 - l_U89) > 8000)
        {
            sub_5343( 6, uParam0, uParam3 );
        }
        break;
    }
    return;
}

void sub_13524(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
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
        sub_10238( ref l_U6._fU0, l_U3._fU0, l_U16 );
        sub_10238( ref l_U6._fU4, l_U3._fU4, l_U16 );
        sub_10238( ref l_U6._fU8, l_U3._fU8, l_U16 );
    }
    SET_CAM_POINT_OFFSET( uParam0, uParam1._fU0 + l_U6._fU0, uParam1._fU4 + l_U6._fU4, uParam1._fU8 + l_U6._fU8 );
    return;
}

void sub_15703()
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
    float fVar23;
    unknown uVar24;
    int iVar25;
    boolean bVar26;
    boolean bVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;

    GET_GAME_TIMER( ref iVar9 );
    if (NOT (IS_CHAR_INJURED( sub_658() )))
    {
        GET_CHAR_COORDINATES( sub_658(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if ((IS_CHAR_IN_WATER( sub_658() )) || (uVar3._fU8 < 0.00000000))
        {
            PLAY_SOUND_FROM_PED( -1, "PARACHUTE_LAND_WATER", sub_658() );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_658() );
            SET_CHAR_HEADING( sub_658(), g_U2692[0]._fU36._fU8 );
            sub_781( 0 );
            return;
        }
        GET_CHAR_VELOCITY( sub_658(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_CHAR_HEIGHT_ABOVE_GROUND( sub_658(), ref fVar2 );
    }
    bVar10 = false;
    bVar11 = false;
    if ((uVar6._fU8 > -1.00000000) AND ((ABSF( uVar6._fU8 - l_U46 )) > 3.00000000))
    {
        bVar10 = true;
    }
    if ((l_U45 - (VMAG( uVar6._fU0, uVar6._fU4, 0.00000000 ))) > 5.00000000)
    {
        bVar11 = true;
    }
    fVar12 = (TO_FLOAT( l_U25 - l_U24 )) / 255.00000000;
    fVar13 = (TO_FLOAT( l_U22 )) / 128.00000000;
    fVar14 = ((fVar12 * 1.10000000) + (fVar13 * 0.90000000)) / 2.00000000;
    sub_10238( ref l_U47, 0.00000000, 0.30000000 );
    GET_FRAME_TIME( ref uVar19 );
    fVar15 = fVar14 * 0.40000000;
    fVar16 = (g_U2692[0]._fU36._fU4 / 75.00000000) * 0.40000000;
    fVar17 = l_U95 * 0.10000000;
    fVar18 = (fVar15 - fVar16) - fVar17;
    l_U95 += fVar18;
    g_U2692[0]._fU36._fU4 += (l_U95 * uVar19) * 30.00000000;
    l_U48 = (g_U2692[0]._fU36._fU4 / 75.00000000) * 4.50000000;
    if ((l_U25 == 255) AND (l_U24 == 255))
    {
        sub_10238( ref l_U46, -5.50000000, 0.25000000 );
        sub_10238( ref l_U45, 3.50000000, 0.30000000 );
        sub_10452( ref g_U2692[0]._fU36._fU0, 20.00000000 / 2.00000000, 20.00000000 * 2.00000000, 0.05000000, 2.50000000, 1065353216 );
        l_U59 = -7.00000000 - l_U46;
        l_U60 = 13.00000000 - l_U45;
        l_U61 = g_U2692[0]._fU36._fU0;
    }
    else
    {
        sub_10238( ref l_U59, 0.00000000, 0.25000000 );
        sub_10238( ref l_U60, 0.00000000, 0.30000000 );
        sub_10452( ref l_U61, 0.00000000, 20.00000000 * 2.00000000, 0.05000000, 2.50000000, 1065353216 );
        fVar15 = (l_U23 / 128.00000000) * 0.30000000;
        fVar16 = (g_U2692[0]._fU36._fU0 / 20.00000000) * 0.30000000;
        fVar17 = l_U96 * 0.15000000;
        fVar18 = (fVar15 - fVar16) - fVar17;
        l_U96 += fVar18;
        g_U2692[0]._fU36._fU0 += (l_U96 * uVar19) * 30.00000000;
        uVar20 = ABSF( g_U2692[0]._fU36._fU0 / 20.00000000 );
        if (g_U2692[0]._fU36._fU0 < 0.00000000)
        {
            l_U46 = -7.00000000 - (uVar20 * (-7.00000000 - -12.00000000));
            l_U45 = 13.00000000 - (uVar20 * (13.00000000 - 10.00000000));
        }
        else if (g_U2692[0]._fU36._fU0 > 0.00000000)
        {
            l_U46 = -7.00000000 - (uVar20 * (-7.00000000 - -4.50000000));
            l_U45 = 13.00000000 - (uVar20 * (13.00000000 - 14.00000000));
        }
        else
        {
            l_U46 = -7.00000000;
            l_U45 = 13.00000000;
        }
        l_U46 -= l_U59;
        l_U45 -= l_U60;
    }
    fVar21 = 75.00000000 * 0.60000000;
    if ((ABSF( g_U2692[0]._fU36._fU4 )) > fVar21)
    {
        fVar22 = ((ABSF( g_U2692[0]._fU36._fU4 )) - fVar21) / (75.00000000 - fVar21);
        l_U46 -= fVar22 * (-7.00000000 - -20.00000000);
        l_U45 -= fVar22 * (13.00000000 - 10.00000000);
        if (l_U46 < -20.00000000)
        {
            l_U46 = -20.00000000;
        }
        if (l_U45 < 3.50000000)
        {
            l_U45 = 3.50000000;
        }
    }
    if ((ABSF( l_U48 )) > (4.50000000 * 0.95000000))
    {
        if (l_U62 == 0)
        {
            GET_GAME_TIMER( ref l_U62 );
        }
        if ((iVar9 - l_U62) > 1500)
        {
            if (l_U94 != 3)
            {
                sub_5343( 3, uVar3, uVar6 );
                l_U63 = 0;
            }
        }
    }
    else if (l_U94 == 3)
    {
        if (l_U63 == 0)
        {
            GET_GAME_TIMER( ref l_U63 );
        }
        if ((iVar9 - l_U63) > 1000)
        {
            sub_5343( 0, uVar3, uVar6 );
            l_U88 = 0;
        }
    }
    l_U62 = 0;;
    g_U2692[0]._fU36._fU8 -= (l_U48 * uVar19) * 30.00000000;
    if (g_U2692[0]._fU36._fU8 > 180)
    {
        g_U2692[0]._fU36._fU8 -= 360;
    }
    else if (g_U2692[0]._fU36._fU8 < 65356)
    {
        g_U2692[0]._fU36._fU8 += 360;
    }
    if (l_U94 != 3)
    {
        sub_13051( g_U2692[0]._fU4, uVar3, uVar6 );
    }
    if (l_U94 == 0)
    {
        if (l_U46 > -7.00000000)
        {
            sub_5343( 1, uVar3, uVar6 );
        }
        else if (l_U46 < -7.00000000)
        {
            sub_5343( 2, uVar3, uVar6 );
        }
    }
    else if (l_U94 == 1)
    {
        if (l_U46 <= -7.00000000)
        {
            sub_5343( 0, uVar3, uVar6 );
        }
    }
    else if (l_U94 == 2)
    {
        if (l_U46 >= -7.00000000)
        {
            sub_5343( 0, uVar3, uVar6 );
        }
    };;;
    sub_13224( uVar3, uVar6 );
    if ((g_U2783) AND (l_U33))
    {
        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PARA_FLOAT" ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PARA_CLASSIC" ))))
        {
            CLEAR_HELP();
            if (USING_STANDARD_CONTROLS())
            {
                PRINT_HELP( "PARA_FLOAT" );
            }
            else
            {
                PRINT_HELP( "PARA_CLASSIC" );
            }
            l_U33 = 0;
        }
    }
    SET_VARIABLE_ON_SOUND( l_U28, "Velocity", 0.50000000 + (((l_U46 - -5.50000000) / (-20.00000000 - -5.50000000)) * 0.50000000) );
    if (NOT (IS_CHAR_INJURED( sub_658() )))
    {
        fVar23 = (l_U46 / -20.00000000) * 1.40000000;
        if (fVar23 > 1.00000000)
        {
            fVar23 = 1.00000000;
        }
        else if (fVar23 < 0.70000000)
        {
            fVar23 = 0.70000000;
        }
        SET_PED_WINDY_CLOTHING_SCALE( sub_658(), fVar23 );
    }
    sub_6947();
    if (NOT (IS_CHAR_INJURED( sub_658() )))
    {
        uVar24 = GET_CLOSEST_CAR( uVar3, 5.00000000, 0, 127 );
        if ((fVar2 < 1.20000000) || (bVar10))
        {
            GET_CHAR_HEALTH( sub_658(), ref iVar25 );
            SET_CHAR_VELOCITY( sub_658(), uVar6._fU0 / 2.00000000, uVar6._fU4 / 2.00000000, uVar6._fU8 );
            CLEAR_CHAR_SECONDARY_TASK( sub_658() );
            TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( sub_658(), "Land_Fast", "PARACHUTE", 4.00000000, 0, 3328, 0.80000000 );
            STOP_SOUND( l_U28 );
            RELEASE_SOUND_ID( l_U28 );
            l_U28 = -1;
            if (DOES_OBJECT_EXIST( l_U21 ))
            {
                DETACH_OBJECT( l_U21, 1 );
                SET_OBJECT_COLLISION( l_U21, 0 );
                SET_OBJECT_DYNAMIC( l_U21, 1 );
                PLAY_OBJECT_ANIM( l_U21, "obj_crumple", "PARACHUTE", 8.00000000, 0, 1 );
            }
            PLAY_SOUND_FROM_PED( -1, "PARACHUTE_LAND", sub_658() );
            bVar26 = false;
            bVar27 = false;
            if (DOES_VEHICLE_EXIST( uVar24 ))
            {
                if (bVar10)
                {
                    if (IS_VEH_DRIVEABLE( uVar24 ))
                    {
                        GET_CAR_SPEED( uVar24, ref fVar28 );
                        if (((fVar28 > 2.00000000) AND (fVar2 > 1.00000000)) AND (NOT g_U2789))
                        {
                            bVar26 = true;
                        }
                    }
                }
            }
            if (((ABSF( g_U2692[0]._fU36._fU4 )) > 30.00000000) || ((l_U46 < (-12.00000000 * 1.10000000)) AND ((NOT g_U2789) || ((g_U2789) AND (NOT (DOES_VEHICLE_EXIST( uVar24 )))))))
            {
                bVar26 = true;
            }
            if (l_U46 < -12.00000000)
            {
                if (uVar3._fU8 > 1.20000000)
                {
                    bVar27 = true;
                }
            }
            if (bVar26)
            {
                if (NOT (IS_CHAR_INJURED( sub_658() )))
                {
                    SET_CHAR_INVINCIBLE( sub_658(), 1 );
                    UNLOCK_RAGDOLL( sub_658(), 1 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_658() );
                    SWITCH_PED_TO_RAGDOLL( sub_658(), 500, 2000, 2, 0, 1, 0 );
                }
                if (bVar27)
                {
                    iVar25 -= FLOOR( (-12.00000000 - l_U46) * 10.00000000 );
                    if (iVar25 < 0)
                    {
                        iVar25 = 0;
                    }
                    SET_CHAR_HEALTH( sub_658(), iVar25 );
                }
            }
            else
            {
                SET_CHAR_HEADING( sub_658(), g_U2692[0]._fU36._fU8 );
                if (g_U2785)
                {
                    if ((l_U46 >= -5.50000000) AND (l_U45 < 13.00000000))
                    {
                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Land_Safe" )))
                        {
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Land_Safe", "PARACHUTE", 4.00000000, 0, 1, 1, 0, 0 );
                            TASK_PLAY_ANIM_WITH_FLAGS( sub_658(), "Land_Safe", "PARACHUTE", 4.00000000, 0, 3328 );
                        }
                    }
                    else if (l_U46 >= (-7.00000000 - 2.00000000))
                    {
                        if ((((uVar3._fU8 <= 1.20000000) AND (fVar2 != uVar3._fU8)) AND (fVar2 < 1.50000000)) || (uVar3._fU8 > 1.20000000))
                        {
                            if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Land" )))
                            {
                                TASK_PLAY_ANIM( sub_658(), "Land", "PARACHUTE", 4.00000000, 0, 1, 1, 0, 0 );
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Land_Fast" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Land_Fast", "PARACHUTE", 4.00000000, 0, 1, 1, 0, 0 );
                    };;;
                }
                else if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Land_Safe" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Land_Safe", "PARACHUTE", 4.00000000, 0, 1, 1, 0, 0 );
                    TASK_PLAY_ANIM_WITH_FLAGS( sub_658(), "Land_Safe", "PARACHUTE", 4.00000000, 0, 3328 );
                }
            }
            if (iVar25 >= 100)
            {
                if (NOT bVar26)
                {
                    fVar29 = GET_FLOAT_STAT( 208 );
                    if ((l_U57 != 0.00000000) AND ((l_U57 < fVar29) || (fVar29 == 0.00000000)))
                    {
                        SET_FLOAT_STAT( 208, l_U57 );
                    }
                }
                sub_5343( 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
                g_U2692[0]._fU4 = 7;
            }
            else
            {
                sub_781( 0 );
            }
        }
        else if (NOT (IS_PED_RAGDOLL( sub_658() )))
        {
            fVar30 = ABSF( ATAN2( TO_FLOAT( l_U22 ), TO_FLOAT( l_U23 ) ) );
            fVar31 = TO_FLOAT( (l_U22 * l_U22) + (l_U23 * l_U23) );
            fVar32 = g_U2692[0]._fU36._fU4 / 45.00000000;
            fVar33 = g_U2692[0]._fU36._fU0 / 20.00000000;
            if (NOT g_U2797)
            {
                if (((fVar30 > 100.00000000) AND (fVar31 > 10000.00000000)) AND (fVar33 < -0.20000000))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Accelerate_Loop" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Accelerate_Loop", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    }
                }
                else if (((fVar30 < 80.00000000) AND (fVar31 > 10000.00000000)) AND (fVar33 > 0.20000000))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "deccelerate" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "deccelerate", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    }
                }
                else if ((fVar32 > 0.85000000) AND (l_U22 > 20))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Steer_R" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Steer_R", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    }
                }
                else if ((fVar32 < -0.85000000) AND (l_U22 < 65516))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Steer_L" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Steer_L", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    }
                }
                else if ((fVar32 > 0.20000000) AND (l_U22 > 20))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Steer_R_less" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Steer_R_less", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    }
                }
                else if ((fVar32 < -0.20000000) AND (l_U22 < 65516))
                {
                    if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Steer_L_less" )))
                    {
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Steer_L_less", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                    }
                }
                else if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Hang_Idle" )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Hang_Idle", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
                };;;;;;;
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Hang_Idle" )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_658(), "Hang_Idle", "PARACHUTE", 4.00000000, 1, 1, 1, 0, 0 );
            }
            if ((l_U25 == 255) AND (l_U24 == 255))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Full_Brake_Loop" )))
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( sub_658(), "Full_Brake_Loop", "PARACHUTE", 4.00000000, 0, 3344 );
                }
                if (DOES_OBJECT_EXIST( l_U21 ))
                {
                    if (l_U46 < (-12.00000000 * 0.80000000))
                    {
                        if (NOT (IS_OBJECT_PLAYING_ANIM( l_U21, "obj_wind_high", "PARACHUTE" )))
                        {
                            PLAY_OBJECT_ANIM( l_U21, "obj_wind_high", "PARACHUTE", 4.00000000, 1, 0 );
                        }
                    }
                    else if (l_U46 >= -7.00000000)
                    {
                        if (NOT (IS_OBJECT_PLAYING_ANIM( l_U21, "obj_wind_low", "PARACHUTE" )))
                        {
                            PLAY_OBJECT_ANIM( l_U21, "obj_wind_low", "PARACHUTE", 4.00000000, 1, 0 );
                        }
                    }
                }
            }
            else if ((fVar32 > 0.20000000) AND (l_U25 > 10))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Steer_AB_R" )))
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( sub_658(), "Steer_AB_R", "PARACHUTE", 4.00000000, 0, 3344 );
                }
            }
            else if ((fVar32 < -0.20000000) AND (l_U24 > 10))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Steer_AB_L" )))
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( sub_658(), "Steer_AB_L", "PARACHUTE", 4.00000000, 0, 3344 );
                }
            }
            else if (NOT (IS_CHAR_PLAYING_ANIM( sub_658(), "PARACHUTE", "Hang_Idle2" )))
            {
                TASK_PLAY_ANIM_WITH_FLAGS( sub_658(), "Hang_Idle2", "PARACHUTE", 4.00000000, 0, 3344 );
            }
            if (DOES_OBJECT_EXIST( l_U21 ))
            {
                if (l_U46 < (-12.00000000 * 0.80000000))
                {
                    if (NOT (IS_OBJECT_PLAYING_ANIM( l_U21, "obj_wind_high", "PARACHUTE" )))
                    {
                        PLAY_OBJECT_ANIM( l_U21, "obj_wind_high", "PARACHUTE", 4.00000000, 1, 0 );
                    }
                }
                else if (l_U46 >= -7.00000000)
                {
                    if (NOT (IS_OBJECT_PLAYING_ANIM( l_U21, "obj_wind_low", "PARACHUTE" )))
                    {
                        PLAY_OBJECT_ANIM( l_U21, "obj_wind_low", "PARACHUTE", 4.00000000, 1, 0 );
                    }
                }
            };;;;
        }
        if (((IS_BUTTON_JUST_PRESSED( 0, 15 )) || (IS_CONTROL_JUST_PRESSED( 2, 3 ))) || ((fVar2 > 3.00000000) AND (bVar11)))
        {
            STOP_SOUND( l_U28 );
            RELEASE_SOUND_ID( l_U28 );
            l_U28 = -1;
            if (bVar11)
            {
                if (l_U46 < -12.00000000)
                {
                    PLAY_SOUND_FROM_PED( -1, "PARACHUTE_PED_HIT_BUILDING_FAST", sub_658() );
                }
                else if (l_U46 <= -7.00000000)
                {
                    PLAY_SOUND_FROM_PED( -1, "PARACHUTE_PED_HIT_BUILDING_MED", sub_658() );
                }
                else
                {
                    PLAY_SOUND_FROM_PED( -1, "PARACHUTE_PED_HIT_BUILDING_SLOW", sub_658() );
                }
            }
            PLAY_SOUND_FROM_PED( -1, "PARACHUTE_UNCLIP", sub_658() );
            UNLOCK_RAGDOLL( sub_658(), 1 );
            if (NOT (IS_CHAR_INJURED( sub_658() )))
            {
                SET_CHAR_INVINCIBLE( sub_658(), 1 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_658() );
                SWITCH_PED_TO_RAGDOLL( sub_658(), 1, 100, 1, 0, 1, 1 );
                CREATE_NM_MESSAGE( 1, 246 );
                SEND_NM_MESSAGE( sub_658() );
            }
            if (DOES_OBJECT_EXIST( l_U21 ))
            {
                DETACH_OBJECT( l_U21, 1 );
                SET_OBJECT_COLLISION( l_U21, 0 );
                SET_OBJECT_DYNAMIC( l_U21, 1 );
                PLAY_OBJECT_ANIM( l_U21, "obj_crumple", "PARACHUTE", 8.00000000, 0, 1 );
            }
            sub_5343( 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
            g_U2692[0]._fU4 = 8;
            GET_GAME_TIMER( ref l_U29 );
        }
    }
    return;
}
