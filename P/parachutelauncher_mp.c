void main()
{
    unknown uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    float fVar6;
    int iVar7;
    int I;
    int iVar9;
    float fVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U23 = 0.00000000;
    l_U24 = 0.00000000;
    l_U25 = 0.00000000;
    l_U26 = -1;
    l_U27 = 1;
    l_U28 = 0;
    l_U255 = 0;
    l_U256 = 0;
    l_U257 = 0;
    l_U259 = 0;
    while (true)
    {
        WAIT( 0 );
        if (IS_NETWORK_GAME_RUNNING())
        {
            if (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() ))
            {
                sub_130();
                if (g_U2[GET_PLAYER_ID()]._fU4 == 5)
                {
                    GET_NETWORK_TIMER( ref uVar2 );
                    sub_1250();
                    sub_2264();
                    if (NOT (IS_CHAR_DEAD( sub_2282() )))
                    {
                        sub_3316( g_U3540[0]._fU4 );
                        if (IS_CHAR_IN_ANY_HELI( sub_2282() ))
                        {
                            if (NOT g_U3540[0]._fU56)
                            {
                                sub_3384();
                                SET_CHAR_COMPONENT_VARIATION( sub_2282(), 8, 1, 0 );
                                sub_3659( sub_2282() );
                                sub_4165();
                            }
                        }
                        if (NOT g_U3540[0]._fU56)
                        {
                            if (g_U3540[0]._fU4 == 0)
                            {
                                if (NOT (HAS_CHAR_GOT_WEAPON( sub_2282(), 41 )))
                                {
                                    if (NOT (IS_PED_RAGDOLL( sub_2282() )))
                                    {
                                        GET_CHAR_HEIGHT_ABOVE_GROUND( sub_2282(), ref fVar6 );
                                        if (fVar6 < 5)
                                        {
                                            PRINTSTRING( "PARA L: Given para weapon to player....... \n" );
                                            sub_4408();
                                        }
                                    }
                                }
                            }
                        }
                        GET_CURRENT_CHAR_WEAPON( sub_2282(), ref iVar5 );
                        if (iVar5 == 41)
                        {
                            if ((NOT g_U3644) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                            {
                                PRINT_HELP( "PARA_EQUIP" );
                                g_U3644 = 1;
                            }
                            if ((((IS_CONTROL_JUST_PRESSED( 0, 4 )) AND (sub_4574( 4, 0 ))) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_2282() )))) AND (NOT g_U3540[0]._fU56))
                            {
                                REMOVE_WEAPON_FROM_CHAR( sub_2282(), 41 );
                                SET_CHAR_COMPONENT_VARIATION( sub_2282(), 8, 1, 0 );
                                sub_3659( sub_2282() );
                            }
                        }
                        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "PARA_EQUIP" ))
                        {
                            CLEAR_HELP();
                        }
                        if (sub_4996( GET_PLAYER_ID() ))
                        {
                            sub_3384();
                        }
                        if ((sub_1340( GET_PLAYER_ID() )) != iVar3)
                        {
                            if ((sub_1340( GET_PLAYER_ID() )) == 3)
                            {
                                PRINTSTRING( "PARA Starting to fall. \n" );
                                g_U740++;
                            }
                            else if ((sub_1340( GET_PLAYER_ID() )) == 5)
                            {
                                PRINTSTRING( "PARA L: Just open.. \n" );
                                if (g_U3540[0]._fU56)
                                {
                                    if (g_U742)
                                    {
                                        PRINTSTRING( "PARA L: g_bCrashed set to false. \n" );
                                        g_U742 = 0;
                                    }
                                }
                                sub_3596( uVar2 );
                            }
                            iVar3 = sub_1340( GET_PLAYER_ID() );
                        }
                    }
                    else
                    {
                        g_U742 = 0;
                        sub_3384();
                    }
                    if (g_U3640)
                    {
                        if (DOES_OBJECT_EXIST( l_U258 ))
                        {
                            DELETE_OBJECT( ref l_U258 );
                        }
                        sub_5342();
                        SET_CHAR_COMPONENT_VARIATION( sub_2282(), 8, 0, 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( sub_2282() )))
                    {
                        ;
                    }
                    iVar7 = 0;
                    I = 0;
                    for ( I = 0; I < g_U3540; I++ )
                    {
                        if (((g_U3540[I]._fU56) || (g_U3540[I]._fU64)) || (g_U3540[0]._fU4 >= 4))
                        {
                            if ((NOT (HAS_MODEL_LOADED( 1490460832 ))) || (NOT (HAVE_ANIMS_LOADED( "PARACHUTE" ))))
                            {
                                sub_5859();
                            }
                            else if (NOT g_U3540[I]._fU60)
                            {
                                if (I == 0)
                                {
                                    if (DOES_OBJECT_EXIST( l_U258 ))
                                    {
                                        DELETE_OBJECT( ref l_U258 );
                                    }
                                    if (HAS_SCRIPT_LOADED( "parachute_player_mp" ))
                                    {
                                        START_NEW_SCRIPT( "parachute_player_mp", 512 );
                                    }
                                    else
                                    {
                                        REQUEST_SCRIPT( "parachute_player_mp" );
                                    }
                                }
                            }
                            iVar7++;
                        }
                    }
                    if (iVar7 == 0)
                    {
                        if (NOT (DOES_OBJECT_EXIST( l_U258 )))
                        {
                            sub_6135();
                        }
                    }
                    else
                    {
                        sub_5859();
                    }
                    if (NOT (IS_CHAR_DEAD( sub_2282() )))
                    {
                        if (g_U3540[0]._fU56)
                        {
                            if (NOT g_U3635)
                            {
                                sub_6281( 1 );
                            }
                            if (NOT (DOES_OBJECT_EXIST( l_U258 )))
                            {
                                if ((((g_U3540[0]._fU4 == 3) || (g_U3540[0]._fU4 == 5)) || (g_U3540[0]._fU4 == 7)) || (g_U3540[0]._fU4 == 8))
                                {
                                    sub_6697();
                                }
                            }
                        }
                        else
                        {
                            GET_GAME_TIMER( ref iVar9 );
                            if (DOES_OBJECT_EXIST( l_U258 ))
                            {
                                if (NOT IS_SCREEN_FADED_OUT())
                                {
                                    if (NOT (IS_CHAR_IN_WATER( sub_2282() )))
                                    {
                                        if (HAVE_ANIMS_LOADED( "PARACHUTE" ))
                                        {
                                            if (g_U3635)
                                            {
                                                if (NOT l_U255)
                                                {
                                                    if (iVar4 == 0)
                                                    {
                                                        PRINTSTRING( "PARA L: iDetachStartTime set.... \n" );
                                                        iVar4 = iVar9 + 300;
                                                    }
                                                    if (iVar9 > iVar4)
                                                    {
                                                        if ((sub_4574( 4, 0 )) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_2282() ))))
                                                        {
                                                            PRINTSTRING( "PARA L: DETACH_BACKPACK_OBJECT() Calling... \n" );
                                                            sub_7144();
                                                            iVar4 = 0;
                                                            PRINTSTRING( "PARA L: DETACH_BACKPACK_OBJECT() called.... \n" );
                                                            l_U255 = 1;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        PRINTSTRING( "PARA L: Waiting for detach \n" );
                                                    }
                                                }
                                                else if (l_U259 == 0)
                                                {
                                                    SET_CHAR_COMPONENT_VARIATION( sub_2282(), 8, 0, 0 );
                                                    if (IS_OBJECT_PLAYING_ANIM( l_U258, "obj_chute_off", "PARACHUTE" ))
                                                    {
                                                        GET_OBJECT_ANIM_CURRENT_TIME( l_U258, "obj_chute_off", "PARACHUTE", ref fVar10 );
                                                        if (fVar10 > 0.95000000)
                                                        {
                                                            DETACH_OBJECT( l_U258, 1 );
                                                            PLAY_OBJECT_ANIM( l_U258, "obj_chute_off_idle", "PARACHUTE", 8.00000000, 1, 0 );
                                                            GET_GAME_TIMER( ref l_U259 );
                                                        }
                                                        if (NOT (IS_CHAR_PLAYING_ANIM( sub_2282(), "PARACHUTE", "chute_off" )))
                                                        {
                                                            sub_7843();
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    GET_OBJECT_COORDINATES( l_U258, ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
                                                    GET_GROUND_Z_FOR_3D_COORD( uVar13._fU0, uVar13._fU4, uVar13._fU8 + 1000.00000000, ref uVar12 );
                                                    if (uVar13._fU8 < (uVar12 + 1.00000000))
                                                    {
                                                        FREEZE_OBJECT_POSITION( l_U258, 1 );
                                                    }
                                                    iVar11 = iVar9 - l_U259;
                                                    if (iVar11 > 2000)
                                                    {
                                                        sub_7843();
                                                    }
                                                    else if (iVar11 > 1000)
                                                    {
                                                        SET_OBJECT_ALPHA( l_U258, 255 - (ROUND( ((TO_FLOAT( iVar11 - 1000 )) / 1000.00000000) * 255.00000000 )) );
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                sub_7843();
                                            }
                                        }
                                        else
                                        {
                                            sub_7843();
                                        }
                                    }
                                    else
                                    {
                                        PRINTSTRING( "PARA L: I have hit the water. \n" );
                                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2282() );
                                        sub_7843();
                                    }
                                }
                                else
                                {
                                    sub_7843();
                                }
                            }
                            else if (g_U3635)
                            {
                                sub_6281( 0 );
                            }
                        }
                    }
                    else
                    {
                        sub_7843();
                    }
                    sub_8212();
                }
            }
        }
    }
    return;
}

void sub_130()
{
    int J;
    int I;
    int[0] iVar4;
    unknown uVar10;

    sub_139();
    array(ref iVar4, 5);
    for ( J = 0; J < 32; J++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( J ))
        {
            iVar4[0] = g_U2[J]._fU56;
            iVar4[1] = g_U2[J]._fU60;
            iVar4[2] = g_U2[J]._fU64;
            iVar4[3] = g_U2[J]._fU68;
            iVar4[4] = g_U2[J]._fU72;
            for ( I = 0; I < iVar4; I++ )
            {
                if (sub_276( iVar4[I] ))
                {
                    if (HAS_CONTROL_OF_NETWORK_ID( iVar4[I] ))
                    {
                        uVar10 = sub_369( iVar4[I] );
                        if (NOT (IS_CAR_DEAD( uVar10 )))
                        {
                            if (IS_CAR_A_MISSION_CAR( uVar10 ))
                            {
                                PRINTSTRING( "---> MAINTAIN_ALL_PLAYER_VEH_CLEANUP Car NetID a mission entity, have control, marking as no longer need for palyer = " );
                                PRINTINT( J );
                                PRINTSTRING( " iVeh = " );
                                PRINTINT( I );
                                PRINTNL();
                                MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_139()
{
    unknown uVar2;
    int I;
    int[0] iVar4;
    unknown uVar10;

    array(ref iVar4, 5);
    iVar4[0] = g_U2[GET_PLAYER_ID()]._fU56;
    iVar4[1] = g_U2[GET_PLAYER_ID()]._fU60;
    iVar4[2] = g_U2[GET_PLAYER_ID()]._fU64;
    iVar4[3] = g_U2[GET_PLAYER_ID()]._fU68;
    iVar4[4] = g_U2[GET_PLAYER_ID()]._fU72;
    for ( I = 0; I < iVar4; I++ )
    {
        if (sub_276( iVar4[I] ))
        {
            uVar10 = sub_369( iVar4[I] );
            if (NOT (IS_CAR_DEAD( uVar10 )))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( uVar10 )))
                {
                    PRINTSTRING( "---> MAINTAIN_MY_PLAYER_VEH_CLEANUP Car NetID no longer mission entity, clearing BD for iVeh = " );
                    PRINTINT( I );
                    PRINTNL();
                    iVar4[I] = nil;
                }
            }
            else
            {
                PRINTSTRING( "---> MAINTAIN_MY_PLAYER_VEH_CLEANUP Car NetID is now dead, clearing BD for iVeh = " );
                PRINTINT( I );
                PRINTNL();
                iVar4[I] = nil;
            }
        }
    }
    g_U2[GET_PLAYER_ID()]._fU56 = iVar4[0];
    g_U2[GET_PLAYER_ID()]._fU60 = iVar4[1];
    g_U2[GET_PLAYER_ID()]._fU64 = iVar4[2];
    g_U2[GET_PLAYER_ID()]._fU68 = iVar4[3];
    g_U2[GET_PLAYER_ID()]._fU72 = iVar4[4];
    return;
}

int sub_276(unknown uParam0)
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

void sub_369(unknown uParam0)
{
    unknown Result;

    GET_VEHICLE_FROM_NETWORK_ID( uParam0, ref Result );
    return Result;
}

void sub_1250()
{
    int I;

    for ( I = 0; I < 32; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (NOT (IS_CHAR_DEAD( sub_1289( I ) )))
            {
                if ((((sub_1340( I )) == 3) || ((sub_1340( I )) == 4)) || ((sub_1340( I )) == 5))
                {
                    SET_NETWORK_PED_USING_PARACHUTE( sub_1400( sub_1289( I ) ) );
                    sub_1467( I, sub_1440( I ) );
                    l_U193[I] = 1;
                }
                else if (l_U193[I])
                {
                    PRINTSTRING( "MAINTAIN_PARA_PLAYER_NET_UPDATES Player " );
                    PRINTINT( I );
                    PRINTSTRING( " has used the para, calling RESET_PLAYER_CHAR_ROTATION \n" );
                    sub_2000( I );
                    l_U193[I] = 0;
                }
            }
            else
            {
                sub_2000( I );
            }
        }
    }
    return;
}

void sub_1289(unknown uParam0)
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( uParam0 ), ref Result );
    return Result;
}

void sub_1340(unknown uParam0)
{
    return g_U2[uParam0]._fU20;
}

void sub_1400(unknown uParam0)
{
    unknown Result;

    GET_NETWORK_ID_FROM_PED( uParam0, ref Result );
    return Result;
}

void sub_1440(unknown uParam0)
{
    return g_U2[uParam0]._fU24;
}

void sub_1467(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    if (NOT (IS_CHAR_DEAD( sub_1289( iParam0 ) )))
    {
        if (GET_PLAYER_ID() != iParam0)
        {
            uVar6 = {sub_1440( iParam0 )};
            uVar9 = {l_U30[iParam0]};
            sub_1538( iParam0, uVar6 );
            sub_1604( ref uVar9._fU0, uVar6._fU0, g_U739 );
            sub_1604( ref uVar9._fU4, uVar6._fU4, g_U739 );
            sub_1604( ref uVar9._fU8, uVar6._fU8, g_U739 );
            SET_CHAR_ROTATION( sub_1289( iParam0 ), uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            l_U30[iParam0] = {uVar9};
            sub_1794( iParam0 );
        }
    }
    return;
}

void sub_1538(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT l_U127[uParam0])
    {
        l_U30[uParam0] = {uParam1};
        l_U127[uParam0] = 1;
    }
    return;
}

void sub_1604(unknown uParam0, float fParam1, unknown uParam2)
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

void sub_1794(int iParam0)
{
    if (GET_PLAYER_ID() != iParam0)
    {
        l_U160[iParam0] = 0;
    }
    return;
}

void sub_2000(int iParam0)
{
    if (GET_PLAYER_ID() != iParam0)
    {
        if (NOT l_U160[iParam0])
        {
            if (IS_NETWORK_PLAYER_ACTIVE( iParam0 ))
            {
                if (NOT (IS_CHAR_DEAD( sub_1289( iParam0 ) )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_1289( iParam0 ) )))
                    {
                        PRINTSTRING( "RESET_PLAYER_CHAR_ROTATION Called for player = " );
                        PRINTINT( iParam0 );
                        PRINTNL();
                        SET_CHAR_ROTATION( sub_1289( iParam0 ), 0.00000000, 0.00000000, 0.00000000 );
                    }
                }
            }
            l_U127[iParam0] = 0;
            l_U160[iParam0] = 1;
        }
    }
    return;
}

void sub_2264()
{
    int I;
    int iVar3;

    sub_2273();
    for ( I = 0; I < 32; I++ )
    {
        if (IS_NETWORK_PLAYER_ACTIVE( I ))
        {
            if (NOT (IS_CHAR_DEAD( sub_1289( I ) )))
            {
                if ((((sub_1340( I )) == 3) || ((sub_1340( I )) == 4)) || ((sub_1340( I )) == 5))
                {
                    if (sub_2646( I ))
                    {
                        if (NOT (sub_2683( I )))
                        {
                            PRINTSTRING( "MAINTAIN_PARA_PLAYER_SMOKE:  START_PTFX_ON_PED_BONE called for palyer = " );
                            PRINTINT( I );
                            PRINTNL();
                            iVar3 = START_PTFX_ON_PED_BONE( "E2_mp_para_smoke", sub_1289( I ), l_U260, l_U263, 420, 1065353216 );
                            if (iVar3 > 0)
                            {
                                sub_2885( I, iVar3 );
                                sub_3040( I, iVar3 );
                            }
                            else
                            {
                                PRINTSTRING( "MAINTAIN_PARA_PLAYER_SMOKE:  START_PTFX_ON_PED_BONE failed for palyer = " );
                                PRINTINT( I );
                                PRINTNL();
                            }
                        }
                    }
                    else
                    {
                        sub_3180( I );
                    }
                }
                else
                {
                    sub_3180( I );
                }
            }
            else
            {
                sub_3180( I );
            }
        }
    }
    return;
}

void sub_2273()
{
    float fVar2;

    if (NOT (IS_CHAR_DEAD( sub_2282() )))
    {
        if ((((sub_1340( GET_PLAYER_ID() )) == 3) || ((sub_1340( GET_PLAYER_ID() )) == 4)) || ((sub_1340( GET_PLAYER_ID() )) == 5))
        {
            if (NOT IS_PAUSE_MENU_ACTIVE())
            {
                GET_CHAR_HEIGHT_ABOVE_GROUND( sub_2282(), ref fVar2 );
                if (fVar2 > 1)
                {
                    if ((IS_BUTTON_JUST_PRESSED( 0, 18 )) || (IS_CONTROL_JUST_PRESSED( 0, 20 )))
                    {
                        g_U2[GET_PLAYER_ID()]._fU52._fU0 = NOT g_U2[GET_PLAYER_ID()]._fU52._fU0;
                    }
                }
                else
                {
                    g_U2[GET_PLAYER_ID()]._fU52._fU0 = 0;
                }
            }
        }
        else
        {
            g_U2[GET_PLAYER_ID()]._fU52._fU0 = 0;
        }
    }
    else
    {
        g_U2[GET_PLAYER_ID()]._fU52._fU0 = 0;
    }
    return;
}

void sub_2282()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2646(unknown uParam0)
{
    return g_U2[uParam0]._fU52._fU0;
}

boolean sub_2683(unknown uParam0)
{
    return l_U266[uParam0]._fU0 > 0;
}

void sub_2885(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam1 > 0)
    {
        GET_PLAYER_RGB_COLOUR( sub_2905( uParam0 ), ref uVar4, ref uVar5, ref uVar6 );
        UPDATE_PTFX_TINT( iParam1, uVar4 / 255.00000000, uVar5 / 255.00000000, uVar6 / 255.00000000, 255 );
    }
    else
    {
        SCRIPT_ASSERT( "SET_PARA_PTFX_COLOUR Bad iPtfxId" );
    }
    return;
}

void sub_2905(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

void sub_3040(unknown uParam0, unknown uParam1)
{
    l_U266[uParam0]._fU0 = uParam1;
    return;
}

void sub_3180(unknown uParam0)
{
    if (l_U266[uParam0]._fU0 > 0)
    {
        STOP_PTFX( l_U266[uParam0]._fU0 );
        l_U266[uParam0]._fU0 = 0;
    }
    return;
}

void sub_3316(unknown uParam0)
{
    g_U2[GET_PLAYER_ID()]._fU20 = uParam0;
    return;
}

void sub_3384()
{
    if (sub_3400( GET_PLAYER_ID() ))
    {
        sub_3460( 0 );
    }
    if ((sub_3542( GET_PLAYER_ID() )) != -1)
    {
        sub_3596( -1 );
    }
    return;
}

int sub_3400(unknown uParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( uParam0 ))
    {
        return IS_BIT_SET( g_U2[uParam0]._fU76, 1 );
    }
    return 0;
}

void sub_3460(boolean bParam0)
{
    if (bParam0)
    {
        SET_BIT( ref g_U2[GET_PLAYER_ID()]._fU76, 1 );
    }
    else
    {
        CLEAR_BIT( ref g_U2[GET_PLAYER_ID()]._fU76, 1 );
    }
    return;
}

int sub_3542(unknown uParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( uParam0 ))
    {
        return g_U2[uParam0]._fU40;
    }
    return -1;
}

void sub_3596(unknown uParam0)
{
    g_U2[GET_PLAYER_ID()]._fU40 = uParam0;
    return;
}

void sub_3659(int iParam0)
{
    int iVar3;
    int I;

    iVar3 = sub_3670( iParam0 );
    if (iVar3 == -1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            if (iParam0 != sub_2282())
            {
                I = 1;
                for ( I = 0; I < g_U3540; I++ )
                {
                    if (NOT g_U3540[I]._fU56)
                    {
                        iVar3 = I;
                    }
                }
            }
            else
            {
                iVar3 = 0;
            }
            if (iVar3 != -1)
            {
                if (NOT g_U3540[iVar3]._fU56)
                {
                    g_U3540[iVar3]._fU0 = iParam0;
                    g_U3540[iVar3]._fU4 = 0;
                    g_U3540[iVar3]._fU8 = 0;
                    g_U3540[iVar3]._fU12 = {0.00000000, 0.00000000, 0.00000000};
                    g_U3540[iVar3]._fU56 = 1;
                    g_U3540[iVar3]._fU60 = 0;
                    g_U3540[iVar3]._fU64 = 0;
                    g_U3540[iVar3]._fU48 = -60.00000000;
                    g_U3540[iVar3]._fU52 = -7.00000000;
                    g_U3639 = 0;
                    g_U3637 = 0;
                    g_U3633 = 1;
                    g_U3632 = 0;
                    g_U3631 = 0;
                    g_U3634 = 0;
                    g_U3638 = 0;
                }
            }
            else
            {
                SCRIPT_ASSERT( "GIVE_PED_A_PARACHUTE: All AI parachute ped slots are currently in use." );
            }
        }
    }
    return;
}

int sub_3670(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < g_U3540; Result++ )
    {
        if (g_U3540[Result]._fU0 == iParam0)
        {
            if (g_U3540[Result]._fU56)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_4165()
{
    int iVar2;

    if (HAS_CHAR_GOT_WEAPON( sub_2282(), 41 ))
    {
        GET_CURRENT_CHAR_WEAPON( sub_2282(), ref iVar2 );
        REMOVE_WEAPON_FROM_CHAR( sub_2282(), 41 );
        if (iVar2 != 41)
        {
            SET_CURRENT_CHAR_WEAPON( sub_2282(), iVar2, 0 );
        }
    }
    return;
}

void sub_4408()
{
    unknown uVar2;

    if (NOT (HAS_CHAR_GOT_WEAPON( sub_2282(), 41 )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_2282(), ref uVar2 );
        GIVE_WEAPON_TO_CHAR( sub_2282(), 41, 1, 0 );
        SET_CURRENT_CHAR_WEAPON( sub_2282(), uVar2, 1 );
    }
    return;
}

int sub_4574(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_4583() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_4583() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_4583() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U10048)))
                {
                    if (NOT sub_4696())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_2282() )) == nil)
                        {
                            if (g_U11382 <= iParam0)
                            {
                                if (g_U11383 == 0)
                                {
                                    if (sub_4781())
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

void sub_4583()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_4696()
{
    if (g_U1407 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_4781()
{
    return sub_4792( 0, 0 );
}

int sub_4792(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U942._fU104 = 1;
    }
    if ((uParam1) AND (g_U1407 != 9))
    {
        g_U942._fU100 = 1;
    }
    return 1;
}

int sub_4996(unknown uParam0)
{
    if (IS_NETWORK_PLAYER_ACTIVE( uParam0 ))
    {
        return (sub_1340( uParam0 )) == 0;
    }
    return 0;
}

void sub_5342()
{
    int I;

    g_U3631 = 1;
    g_U3632 = 0;
    g_U3633 = 1;
    g_U3634 = 0;
    g_U3635 = 0;
    g_U3643 = 0;
    g_U3636 = 0;
    g_U3637 = 0;
    g_U3638 = 0;
    g_U3639 = 0;
    g_U3637 = 0;
    g_U3640 = 0;
    g_U3642 = 1;
    g_U3645 = 0;
    g_U3646 = 0;
    g_U3647 = 0;
    g_U3648 = 0;
    g_U3649 = 0;
    g_U3650 = 0;
    I = 0;
    for ( I = 0; I < g_U3540; I++ )
    {
        g_U3540[I]._fU0 = nil;
        g_U3540[I]._fU4 = 0;
        g_U3540[I]._fU8 = 0;
        g_U3540[I]._fU12 = {0.00000000, 0.00000000, 0.00000000};
        g_U3540[I]._fU24 = {0.00000000, 0.00000000, 0.00000000};
        g_U3540[I]._fU36 = {0.00000000, 0.00000000, 0.00000000};
        g_U3540[I]._fU48 = -60.00000000;
        g_U3540[I]._fU52 = -7.00000000;
        g_U3540[I]._fU56 = 0;
        g_U3540[I]._fU60 = 0;
        g_U3540[I]._fU64 = 0;
        g_U3540[I]._fU68 = 0;
    }
    return;
}

void sub_5859()
{
    if (NOT (HAS_MODEL_LOADED( 1490460832 )))
    {
        REQUEST_MODEL( 1490460832 );
    }
    REQUEST_ANIMS( "PARACHUTE" );
    return;
}

void sub_6135()
{
    if (HAS_MODEL_LOADED( 1490460832 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1490460832 );
    }
    if (HAVE_ANIMS_LOADED( "PARACHUTE" ))
    {
        REMOVE_ANIMS( "PARACHUTE" );
    }
    return;
}

void sub_6281(boolean bParam0)
{
    if (NOT bParam0)
    {
        SET_CHAR_COMPONENT_VARIATION( sub_2282(), 8, 0, 0 );
        g_U3635 = 0;
    }
    else if (NOT sub_6324())
    {
        sub_6394();
    }
    SET_CHAR_COMPONENT_VARIATION( sub_2282(), 8, 1, 0 );
    g_U3635 = 1;;
    return;
}

int sub_6324()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( sub_2282() )))
    {
        iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_2282(), 8 );
        if (iVar2 == 0)
        {
            return 0;
        }
    }
    return 1;
}

void sub_6394()
{
    unknown uVar2;

    uVar2 = sub_6403();
    SET_CHAR_COMPONENT_VARIATION( sub_2282(), 8, uVar2, 0 );
    if (NOT g_U3635)
    {
        SET_DRAW_PLAYER_COMPONENT( 8, 0 );
    }
    return;
}

int sub_6403()
{
    unknown uVar2;

    if (NOT (IS_CHAR_INJURED( sub_2282() )))
    {
        uVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_2282(), 1 );
        switch (uVar2)
        {
            case 0:
            return 1;
            break;
            case 1:
            return 2;
            break;
            case 2:
            return 2;
            break;
            case 3:
            return 1;
            break;
            case 4:
            return 1;
            break;
        }
    }
    return 1;
}

void sub_6697()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (HAS_MODEL_LOADED( 1276771907 )))
    {
        REQUEST_MODEL( 1276771907 );
    }
    else if (NOT (IS_CHAR_DEAD( sub_2282() )))
    {
        GET_CHAR_COORDINATES( sub_2282(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        CREATE_OBJECT_NO_OFFSET( 1276771907, uVar2._fU0, uVar2._fU4, -25.00000000, ref l_U258, 0 );
        SET_OBJECT_DYNAMIC( l_U258, 0 );
        SET_OBJECT_COLLISION( l_U258, 0 );
        SET_OBJECT_VISIBLE( l_U258, 0 );
        SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U258, 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1276771907 );
    }
    return;
}

void sub_7144()
{
    if (DOES_OBJECT_EXIST( l_U258 ))
    {
        SET_OBJECT_DYNAMIC( l_U258, 1 );
        SET_OBJECT_COLLISION( l_U258, 1 );
        SET_OBJECT_VISIBLE( l_U258, 1 );
        ATTACH_OBJECT_TO_PED( l_U258, sub_2282(), 1202, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1 );
        PLAY_OBJECT_ANIM( l_U258, "obj_chute_off", "PARACHUTE", 1000.00000000, 0, 1 );
        if (HAVE_ANIMS_LOADED( "PARACHUTE" ))
        {
            if (NOT (IS_CHAR_DEAD( sub_2282() )))
            {
                TASK_PLAY_ANIM_WITH_FLAGS( sub_2282(), "chute_off", "PARACHUTE", 4.00000000, 0, 1280 );
            }
        }
        else
        {
            PRINTSTRING( "--> DETACH_BACKPACK_OBJECT() HAVE_ANIMS_LOADED(PARACHUTE) = FALSE\n" );
        }
    }
    return;
}

void sub_7843()
{
    if (DOES_OBJECT_EXIST( l_U258 ))
    {
        DELETE_OBJECT( ref l_U258 );
        l_U259 = 0;
        l_U255 = 0;
    }
    return;
}

void sub_8212()
{
    if (NOT (IS_CHAR_DEAD( sub_2282() )))
    {
        if (((((g_U3540[0]._fU56) AND ((g_U3540[0]._fU4 == 3) || (g_U3540[0]._fU4 == 5))) || (IS_CHAR_IN_ANY_HELI( sub_2282() ))) AND (NOT ARE_WIDESCREEN_BORDERS_ACTIVE())) AND (IS_HUD_PREFERENCE_SWITCHED_ON()))
        {
            DISPLAY_ALTIMETER_THIS_FRAME();
        }
    }
    return;
}
