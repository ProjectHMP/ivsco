void main()
{
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
    l_U484 = 0.40000000;
    l_U485 = 0;
    l_U489 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U521 = 0;
    l_U526 = 0;
    l_U527 = 0;
    l_U538 = {-1000.69700000, 1223.56300000, 27.41770000};
    l_U572 = "GM3_BARR";
    l_U579 = "GM3_PHOT";
    l_U586 = "GM3_BOUT";
    l_U593 = "GM3_BPAS";
    l_U600 = "GM3_BFAI1";
    l_U607 = "GM3_BFAI2";
    l_U614 = "GM3_SOB";
    l_U621 = "GM3_HANGB";
    l_U628 = "GM3_HANGA";
    l_U635 = "GM3_BALLS";
    l_U642 = "GM3_BACK";
    l_U649 = "GM3_SLAP";
    l_U651 = 0;
    l_U652 = 0;
    l_U653 = 0;
    l_U654 = 0;
    l_U655 = 0;
    l_U656 = 0;
    l_U657 = 0;
    l_U658 = 0;
    l_U659 = 13;
    l_U660 = 52;
    l_U661 = 27;
    l_U662 = -481308474;
    l_U663 = 523869589;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    if (HAS_DEATHARREST_EXECUTED())
    {
        g_U9151 = 1;
        sub_468();
    }
    sub_1262();
    while (true)
    {
        WAIT( 0 );
        if (l_U651 == 1)
        {
            sub_1673();
        }
        if (l_U652 == 1)
        {
            sub_15518();
        }
        sub_17307();
        sub_17432();
        if (IS_PLAYER_PLAYING( sub_3524() ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U494._fU0, l_U494._fU4, l_U494._fU8, 50.00000000, 50.00000000, 50.00000000, 0 ))
            {
                sub_17606();
                switch (l_U491)
                {
                    case 0:
                    if (((LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U547._fU0, l_U547._fU4, l_U547._fU8, 10.00000000, 10.00000000, 10.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U544._fU0, l_U544._fU4, l_U544._fU8, 10.00000000, 10.00000000, 10.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U550._fU0, l_U550._fU4, l_U550._fU8, 10.00000000, 10.00000000, 5.00000000, 0 )))
                    {
                        if (l_U522 == 0)
                        {
                            if (DOES_BLIP_EXIST( l_U675 ))
                            {
                                REMOVE_BLIP( l_U675 );
                            }
                            if (DOES_BLIP_EXIST( l_U679 ))
                            {
                                CHANGE_BLIP_DISPLAY( l_U679, 4 );
                            }
                            else
                            {
                                ADD_BLIP_FOR_COORD( l_U541._fU0, l_U541._fU4, l_U541._fU8, ref l_U679 );
                                if (DOES_BLIP_EXIST( l_U679 ))
                                {
                                    CHANGE_BLIP_SPRITE( l_U679, 72 );
                                    CHANGE_BLIP_DISPLAY( l_U679, 4 );
                                }
                            }
                            sub_18865();
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U550._fU0, l_U550._fU4, l_U550._fU8, 10.00000000, 10.00000000, 6.00000000, 0 ))
                            {
                                PRINT_NOW( "gerry3c_down", 7500, 1 );
                            }
                            else
                            {
                                PRINT_NOW( "gerry3c_dest", 7500, 1 );
                            }
                            l_U491 = 1;
                        }
                        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U538._fU0, l_U538._fU4, l_U538._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
                        {
                            PRINT_NOW( "gerry3c_wanted", 1000, 1 );
                        }
                        if (DOES_BLIP_EXIST( l_U679 ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U679, 0 );
                        }
                        if (DOES_BLIP_EXIST( l_U675 ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U675, 0 );
                        }
                    }
                    else if (l_U522 == 0)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U675 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U541._fU0, l_U541._fU4, l_U541._fU8, ref l_U675 );
                            if (DOES_BLIP_EXIST( l_U675 ))
                            {
                                CHANGE_BLIP_SPRITE( l_U675, 72 );
                            }
                        }
                        else
                        {
                            CHANGE_BLIP_DISPLAY( l_U675, 4 );
                        }
                        if (DOES_BLIP_EXIST( l_U679 ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U679, 0 );
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U679 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U679, 0 );
                    }
                    if (DOES_BLIP_EXIST( l_U675 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U675, 0 );
                    };;;
                    break;
                    case 1:
                    if (l_U522 == 0)
                    {
                        if ((((sub_20434( l_U661 )) AND (sub_20434( l_U660 ))) AND (HAS_MODEL_LOADED( l_U662 ))) AND (HAVE_ANIMS_LOADED( "missgerry3c" )))
                        {
                            g_U9151 = 0;
                            l_U491 = 2;
                        }
                    }
                    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U538._fU0, l_U538._fU4, l_U538._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
                    {
                        PRINT_NOW( "gerry3c_wanted", 7500, 1 );
                    }
                    sub_20615();
                    if (DOES_BLIP_EXIST( l_U679 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U679, 0 );
                    }
                    if (DOES_BLIP_EXIST( l_U675 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U675, 0 );
                    }
                    g_U9151 = 1;
                    l_U491 = 0;;
                    break;
                    case 2:
                    if (l_U522 == 0)
                    {
                        sub_21162();
                    }
                    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U538._fU0, l_U538._fU4, l_U538._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
                    {
                        PRINT_NOW( "gerry3c_wanted", 7500, 1 );
                    }
                    sub_20615();
                    if (DOES_BLIP_EXIST( l_U679 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U679, 0 );
                    }
                    if (DOES_BLIP_EXIST( l_U675 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U675, 0 );
                    }
                    g_U9151 = 1;
                    l_U491 = 0;;
                    break;
                    case 3:
                    if (l_U522 == 0)
                    {
                        sub_24628();
                    }
                    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U538._fU0, l_U538._fU4, l_U538._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
                    {
                        PRINT_NOW( "gerry3c_wanted", 7500, 1 );
                    }
                    sub_20615();
                    if (DOES_BLIP_EXIST( l_U679 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U679, 0 );
                    }
                    if (DOES_BLIP_EXIST( l_U675 ))
                    {
                        CHANGE_BLIP_DISPLAY( l_U675, 0 );
                    }
                    g_U9151 = 1;
                    l_U491 = 0;;
                    break;
                    case 4:
                    if (NOT (IS_CHAR_INJURED( l_U667 )))
                    {
                        GET_INTERIOR_FROM_CHAR( l_U667, ref l_U674 );
                    }
                    GET_INTERIOR_FROM_CHAR( sub_16732(), ref l_U673 );
                    sub_26343();
                    if (l_U673 == l_U674)
                    {
                        g_U9080 = 1;
                        if (l_U658 == 0)
                        {
                            SET_WANTED_MULTIPLIER( 0.00000000 );
                            l_U658 = 1;
                        }
                        if (l_U522 != 0)
                        {
                            sub_26569();
                            l_U521 = 0;
                            g_U9151 = 1;
                            sub_20615();
                            l_U491 = 0;
                        }
                        else
                        {
                            sub_26970();
                            sub_27593();
                        }
                    }
                    else if (l_U522 != 0)
                    {
                        if (l_U658 == 1)
                        {
                            SET_WANTED_MULTIPLIER( 1.00000000 );
                            l_U658 = 0;
                        }
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U538._fU0, l_U538._fU4, l_U538._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
                        {
                            PRINT_NOW( "gerry3c_wanted", 7500, 1 );
                        }
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U538._fU0, l_U538._fU4, l_U538._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
                        {
                            sub_26569();
                        }
                        g_U9151 = 1;
                        sub_20615();
                        l_U491 = 0;
                    }
                    else if (l_U658 == 1)
                    {
                        SET_WANTED_MULTIPLIER( 1.00000000 );
                        l_U658 = 0;
                    }
                    if (((LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U544._fU0, l_U544._fU4, l_U544._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U547._fU0, l_U547._fU4, l_U547._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U550._fU0, l_U550._fU4, l_U550._fU8, 1.50000000, 1.50000000, 1.00000000, 0 )))
                    {
                        if (DOES_BLIP_EXIST( l_U676 ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U676, 0 );
                        }
                        if (DOES_BLIP_EXIST( l_U675 ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U675, 4 );
                        }
                        sub_20615();
                        l_U491 = 0;
                    };;;
                    break;
                    case 5:
                    sub_26970();
                    sub_31355();
                    break;
                }
            }
            else if (l_U491 == 5)
            {
                l_U651 = 1;
            }
            else
            {
                sub_20615();
                if (l_U522 == 0)
                {
                    if (NOT (DOES_BLIP_EXIST( l_U675 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U541._fU0, l_U541._fU4, l_U541._fU8, ref l_U675 );
                        if (DOES_BLIP_EXIST( l_U675 ))
                        {
                            CHANGE_BLIP_SPRITE( l_U675, 72 );
                        }
                    }
                    else
                    {
                        CHANGE_BLIP_DISPLAY( l_U675, 4 );
                    }
                }
                else if (DOES_BLIP_EXIST( l_U679 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U679, 0 );
                }
                if (DOES_BLIP_EXIST( l_U675 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U675, 0 );
                }
                l_U491 = 0;
            }
        }
        else
        {
            sub_15518();
        }
    }
    return;
}

void sub_468()
{
    REMOVE_ANIMS( "missgerry3c" );
    if (DOES_BLIP_EXIST( l_U676 ))
    {
        REMOVE_BLIP( l_U676 );
    }
    if (DOES_BLIP_EXIST( l_U675 ))
    {
        REMOVE_BLIP( l_U675 );
    }
    if (DOES_BLIP_EXIST( l_U677 ))
    {
        REMOVE_BLIP( l_U677 );
    }
    if (DOES_BLIP_EXIST( l_U678 ))
    {
        REMOVE_BLIP( l_U678 );
    }
    if (DOES_CHAR_EXIST( l_U667 ))
    {
        DELETE_CHAR( ref l_U667 );
    }
    if (DOES_CHAR_EXIST( l_U668 ))
    {
        DELETE_CHAR( ref l_U668 );
    }
    if (DOES_OBJECT_EXIST( l_U664 ))
    {
        DELETE_OBJECT( ref l_U664 );
    }
    if (DOES_OBJECT_EXIST( l_U665 ))
    {
        DELETE_OBJECT( ref l_U665 );
    }
    if (DOES_OBJECT_EXIST( l_U666 ))
    {
        DELETE_OBJECT( ref l_U666 );
    }
    if (sub_760( l_U566 ))
    {
        sub_944( ref l_U566, 0 );
    }
    if (sub_760( l_U573 ))
    {
        sub_944( ref l_U573, 0 );
    }
    if (sub_760( l_U580 ))
    {
        sub_944( ref l_U580, 0 );
    }
    sub_1135( "gerry3c_slap" );
    sub_1135( "gerry3c_takeit" );
    sub_1135( "gerry3c_send" );
    g_U9080 = 0;
    g_U9082 = 0;
    g_U9079 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_760(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_872( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_872( "\n speech is not playing" );
    }
    return 0;
}

void sub_872(unknown uParam0)
{
    return;
}

void sub_944(int iParam0, unknown uParam1)
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

void sub_1135(unknown uParam0)
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

void sub_1262()
{
    l_U494 = {-1005.02200000, 1226.00500000, 27.39760000};
    l_U497 = 357.99870000;
    l_U498 = {-1006.75300000, 1222.50400000, 27.40000000};
    l_U501 = 90.00000000;
    l_U541 = {-1002.25700000, 1223.28400000, 28.41760000};
    l_U544 = {-999.04210000, 1234.48500000, 24.12140000};
    l_U550 = {-999.28280000, 1225.32000000, 39.36920000};
    l_U547 = {-1000.08300000, 1219.67800000, 24.10840000};
    if (NOT (DOES_BLIP_EXIST( l_U675 )))
    {
        ADD_BLIP_FOR_COORD( l_U541._fU0, l_U541._fU4, l_U541._fU8, ref l_U675 );
        if (DOES_BLIP_EXIST( l_U675 ))
        {
            CHANGE_BLIP_SPRITE( l_U675, 72 );
        }
        FLASH_BLIP( l_U675, 1 );
        CHANGE_BLIP_PRIORITY( l_U675, l_U6 );
        GET_GAME_TIMER( ref l_U514 );
    }
    if (NOT (DOES_BLIP_EXIST( l_U679 )))
    {
        ADD_BLIP_FOR_COORD( l_U541._fU0, l_U541._fU4, l_U541._fU8, ref l_U679 );
        if (DOES_BLIP_EXIST( l_U679 ))
        {
            CHANGE_BLIP_SPRITE( l_U679, 72 );
            CHANGE_BLIP_DISPLAY( l_U679, 0 );
        }
    }
    return;
}

void sub_1673()
{
    int iVar2;

    iVar2 = 0;
    if ((g_U22274[13]._fU16) AND (g_U22274[13]._fU20))
    {
        iVar2 = 1;
    }
    sub_1718();
    sub_14663();
    sub_14718( 1 );
    if (iVar2 == 0)
    {
        g_U10981[13]._fU28 = 1;
        sub_14901( l_U659, l_U593, "GM3CAUD", 0 );
    }
    g_U9151 = 1;
    sub_468();
    return;
}

void sub_1718()
{
    sub_1727();
    return;
}

void sub_1727()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_1745();
    sub_1804( iVar2, iVar3, iVar4 );
    return;
}

void sub_1745()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_1804(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 15;
    sub_1837( iVar5, uParam0, uParam1, uParam2, "Contact_18" );
    return;
}

void sub_1837(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_1933( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_1933( ref cVar9 );
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
            sub_1933( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_1933( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_1933( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_1933( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_2510( iParam0, iVar7 );;;
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
                sub_2928( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_2928( 0, 4 );
            }
        }
    }
    if (NOT (sub_3017( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3524(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3524() );
    }
    sub_12275();
    bVar27 = true;
    uVar28 = sub_2510( iParam0, iVar7 );
    uVar29 = sub_12917( iParam0 );
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
                sub_13448( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_13878();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_13963( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_14020( iParam0 );
                sub_14155( 0 );
                sub_14236( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_14341();
        }
    }
    if (bParam2)
    {
        sub_13878();
        sub_14429();
        sub_14155( 0 );
    }
    if (bParam3)
    {
        sub_13878();
        sub_14469();
        sub_14155( 0 );
        sub_14236( uVar29, 0 );
    }
    sub_14520();
    return;
}

void sub_1933(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_2510(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_2584( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_2584(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2928(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_3017(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_3225( uParam1 );
        break;
        case 1:
        bVar8 = sub_5329( uParam1 );
        break;
        case 2:
        bVar8 = sub_5555( uParam1 );
        break;
        case 3:
        bVar8 = sub_5705( uParam1 );
        break;
        case 4:
        bVar8 = sub_5983( uParam1 );
        break;
        case 5:
        bVar8 = sub_6286( uParam1 );
        break;
        case 6:
        bVar8 = sub_6485( uParam1 );
        break;
        case 7:
        bVar8 = sub_6711( uParam1 );
        break;
        case 8:
        bVar8 = sub_6946( uParam1 );
        break;
        case 9:
        bVar8 = sub_7321( uParam1 );
        break;
        case 10:
        bVar8 = sub_7568( uParam1 );
        break;
        case 11:
        bVar8 = sub_7707( uParam1 );
        break;
        case 12:
        bVar8 = sub_8006( uParam1 );
        break;
        case 13:
        bVar8 = sub_8234( uParam1 );
        break;
        case 14:
        bVar8 = sub_8521( uParam1 );
        break;
        case 15:
        bVar8 = sub_8803( uParam1 );
        break;
        case 16:
        bVar8 = sub_9085( uParam1 );
        break;
        case 17:
        bVar8 = sub_9286( uParam1 );
        break;
        case 18:
        bVar8 = sub_9359( uParam1 );
        break;
        case 19:
        bVar8 = sub_9573( uParam1 );
        break;
        case 20:
        bVar8 = sub_9826( uParam1 );
        break;
        case 21:
        bVar8 = sub_10073( uParam1 );
        break;
        case 22:
        bVar8 = sub_10274( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_4934( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_2510( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_10597( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_3225(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_3504( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_3504( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_3504( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_3504( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_3504( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_3504( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_3504( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_3504( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_3504( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_3504( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_3504( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_3504( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_3504( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_3504( iVar3, 0, 3, 1, 0, 0 );
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
        sub_3504( iVar3, 0, sub_4812(), sub_5078(), 0, 0 );
        break;
        default:
        sub_5237( "Friend 1", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Friend 1", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_3504(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_3515( uParam1 );
    sub_3715( uParam0, 0, uParam2 );
    sub_3715( uParam0, 1, uParam3 );
    sub_3715( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_1745();
    return;
}

void sub_3515(unknown uParam0)
{
    ADD_SCORE( sub_3524(), uParam0 );
    sub_3566( uParam0 );
    return;
}

void sub_3524()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3566(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_2584( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_3715(unknown uParam0, int iParam1, int iParam2)
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
        sub_3872( uParam0 );
    }
    return;
}

void sub_3872(unknown uParam0)
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

int sub_4812()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_4934( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_4934(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_5078()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_4934( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_5237(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_5329(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3504( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_5237( "Contact 2", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 2", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5555(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_3504( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_5237( "Girl 3", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Girl 3", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5705(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_3504( iVar3, 0, sub_4812(), sub_5078(), 0, 0 );
        break;
        default:
        sub_5237( "Friend 4", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Friend 4", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5983(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3504( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3504( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_3504( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_3504( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_5237( "Contact 5", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 5", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6286(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_5237( "Contact 7", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 7", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6485(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3504( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_5237( "Contact 7b", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 7b", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6711(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_3504( iVar3, 0, sub_4812(), sub_5078(), 0, 0 );
        break;
        default:
        sub_5237( "Friend 8", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Friend 8", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6946(unknown uParam0)
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
        sub_3504( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_3504( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_3504( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_3504( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_3504( iVar3, 0, sub_4812(), sub_5078(), 0, 0 );
        break;
        default:
        sub_5237( "Friend 9", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Friend 9", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7321(unknown uParam0)
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
        sub_3504( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_3504( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_3504( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_5237( "Contact 10", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_5237( "Contact 10", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7568(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_5237( "Girl 11", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Girl 11", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7707(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3504( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3504( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_3504( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_3504( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_3504( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_5237( "Contact 12", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 12", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8006(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3504( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_5237( "Contact 13", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 13", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8234(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_3504( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_3504( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_3504( iVar3, 0, sub_4812(), sub_5078(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_5237( "Friend 15", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Friend 15", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8521(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3504( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3504( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_3504( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_5237( "Contact 16", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 16", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8803(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3504( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_3504( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_3504( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_5237( "Contact 18", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 18", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9085(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_5237( "Contact 19", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 19", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9286(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_5237( "Girl 20", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9359(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_5237( "Contact 21", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 21", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9573(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3504( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_3504( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_5237( "Contact 22", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 22", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9826(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_3504( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_3504( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_3504( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_5237( "Contact 24", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 24", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10073(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_3504( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_3504( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_3504( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_5237( "Contact 25", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5237( "Contact 25", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10274(unknown uParam0)
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
        sub_3504( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_5237( "Girl 26", 1 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_5237( "Girl 26", 0 );
        sub_3504( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_10597(int iParam0, int iParam1)
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
    if (sub_10645( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_11376( iParam1 );
    }
    return;
}

int sub_10645(int iParam0, int iParam1)
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
            sub_10785( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_10785(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_10967( 0 );
    return;
}

void sub_10967(boolean bParam0)
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
        sub_11222();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_11222()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_11376(int iParam0)
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
        sub_11709( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_11709( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_11709( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_11709( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_11709( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_11709( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_11709( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_11709( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_11709( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_11709( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_11709( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_11709( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_11709( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_11709( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_11709( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_11709( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_11709( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_11709( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_11709( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_11709(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_12275()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_12313( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_12313( 1, g_U569[I] )) != 0)
            {
                sub_12599( I );
            }
        }
    }
    if (NOT sub_12765())
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

int sub_12313(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_12599(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_12684( g_U569 - 1 );
    return;
}

void sub_12684(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_12765()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_12313( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_12917(unknown uParam0)
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
    sub_2584( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_13448(unknown uParam0, unknown uParam1)
{
    sub_13467( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_13467(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_13878()
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

int sub_13963(int iParam0, int iParam1)
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

void sub_14020(unknown uParam0)
{
    sub_14029();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_14029()
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

void sub_14155(unknown uParam0)
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

void sub_14236(int iParam0, boolean bParam1)
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

void sub_14341()
{
    sub_14350();
    return;
}

void sub_14350()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_14429()
{
    sub_14350();
    return;
}

void sub_14469()
{
    sub_14350();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_14520()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_14542();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_14542()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_14663()
{
    if (IS_PLAYER_PLAYING( sub_3524() ))
    {
        CLEAR_WANTED_LEVEL( sub_3524() );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

void sub_14718(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 4) AND (g_U8392 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_14901(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_14945( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_14945(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_15518()
{
    switch (l_U517)
    {
        case 0:
        CLEAR_PRINTS();
        GET_GAME_TIMER( ref l_U508 );
        l_U517++;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U509 );
        l_U510 = l_U509 - l_U508;
        if (l_U510 > 2000)
        {
            l_U517++;
        }
        break;
        case 2:
        CLEAR_PRINTS();
        sub_14718( 0 );
        sub_15694( 0 );
        sub_15834();
        sub_15851();
        DO_SCREEN_FADE_OUT( 3000 );
        l_U517++;
        break;
        case 3:
        if (IS_SCREEN_FADED_OUT())
        {
            SET_CHAR_COORDINATES( sub_16732(), -999.17130000, 1235.97100000, 23.15520000 );
            SET_CHAR_HEADING( sub_16732(), 0.00000000 );
            SET_CAM_BEHIND_PED( sub_16732() );
            SET_PLAYER_CONTROL( sub_3524(), 1 );
            if (DOES_BLIP_EXIST( l_U676 ))
            {
                REMOVE_BLIP( l_U676 );
            }
            if (DOES_BLIP_EXIST( l_U675 ))
            {
                REMOVE_BLIP( l_U675 );
            }
            if (DOES_BLIP_EXIST( l_U677 ))
            {
                REMOVE_BLIP( l_U677 );
            }
            if (DOES_BLIP_EXIST( l_U678 ))
            {
                REMOVE_BLIP( l_U678 );
            }
            sub_16959( sub_16732() );
            WAIT( 1000 );
            l_U517++;
        }
        break;
        case 4:
        DO_SCREEN_FADE_IN( 3000 );
        l_U517++;
        break;
        case 5:
        if (IS_SCREEN_FADED_IN())
        {
            g_U10981[13]._fU28 = 1;
            if (l_U653 == 1)
            {
                sub_17112( 27, l_U667, 15 );
                PRINT_NOW( "gerry3c_kill", 7000, 1 );
                sub_14901( l_U659, l_U600, "GM3CAUD", 0 );
            }
            else if (l_U654 == 1)
            {
                PRINT_NOW( "gerry3c_goon", 7000, 1 );
                sub_14901( l_U659, l_U607, "GM3CAUD", 0 );
            }
            g_U9151 = 1;
            sub_468();
        }
        break;
    }
    return;
}

void sub_15694(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 1) AND (g_U8392 <= 3))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_15834()
{
    return;
}

void sub_15851()
{
    sub_15860();
    return;
}

void sub_15860()
{
    int iVar2;

    iVar2 = 15;
    sub_15874( iVar2 );
    sub_16401( iVar2 );
    return;
}

void sub_15874(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3524(), 150 );
    CLEAR_HELP();
    sub_15928( uParam0 );
    return;
}

void sub_15928(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_15972();
        sub_16133();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_16241();
            sub_16280();
        }
    }
    sub_14029();
    sub_14520();
    uVar5 = sub_12917( uParam0 );
    sub_14236( uVar5, 0 );
    return;
}

void sub_15972()
{
    sub_15986( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_16086();
    }
    return;
}

void sub_15986(int iParam0)
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

void sub_16086()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_16133()
{
    sub_16142();
    return;
}

void sub_16142()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_16241()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_16280()
{
    sub_16289();
    return;
}

void sub_16289()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_16401(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_12275();
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
        sub_16566();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_16566()
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

void sub_16732()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_16959(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_ON_FIRE( uParam0 ))
        {
            EXTINGUISH_CHAR_FIRE( uParam0 );
        }
    }
    return;
}

void sub_17112(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_17307()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U651 = 1;
    }
    if (IS_KEYBOARD_KEY_PRESSED( 33 ))
    {
        l_U652 = 1;
    }
    if (NOT (IS_CHAR_INJURED( l_U667 )))
    {
        g_U9079 = 1;
    }
    else
    {
        g_U9079 = 0;
    }
    if (IS_PLAYER_PLAYING( sub_3524() ))
    {
        STORE_WANTED_LEVEL( sub_3524(), ref l_U522 );
    }
    return;
}

void sub_17432()
{
    GET_GAME_TIMER( ref l_U515 );
    l_U516 = l_U515 - l_U514;
    if (l_U516 > 10000)
    {
        if (DOES_BLIP_EXIST( l_U675 ))
        {
            CHANGE_BLIP_PRIORITY( l_U675, l_U5 );
            FLASH_BLIP( l_U675, 0 );
        }
    }
    return;
}

void sub_17606()
{
    int iVar2;

    if (DOES_CHAR_EXIST( l_U667 ))
    {
        if ((IS_CHAR_DEAD( l_U667 )) || (IS_CHAR_INJURED( l_U667 )))
        {
            sub_14718( 0 );
            if (DOES_BLIP_EXIST( l_U676 ))
            {
                CHANGE_BLIP_DISPLAY( l_U676, 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U667 )))
            {
                if (IS_CHAR_INJURED( l_U667 ))
                {
                    REVIVE_INJURED_PED( l_U667 );
                }
                if (NOT (IS_CHAR_INJURED( l_U667 )))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U667, "girl_ko", "missgerry3c", 1.00000000, 1, 0, 0, 0, -2 );
                }
            }
            l_U653 = 1;
            l_U652 = 1;
        }
        if (NOT (IS_CHAR_INJURED( l_U667 )))
        {
            if (NOT (IS_CHAR_ON_FIRE( l_U667 )))
            {
                if ((GET_NUMBER_OF_FIRES_IN_RANGE( l_U529._fU0, l_U529._fU4, l_U529._fU8, 1.00000000 )) > 0)
                {
                    START_CHAR_FIRE( l_U667 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U667, "girl_ko", "missgerry3c", 1.00000000, 1, 0, 0, 0, -2 );
                    l_U653 = 1;
                    l_U652 = 1;
                }
            }
        }
    }
    if (l_U491 >= 4)
    {
        if (g_U9893._fU12 == 0)
        {
            sub_17994();
        }
    }
    if (DOES_CHAR_EXIST( l_U668 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U668 )))
        {
            if (l_U491 >= 4)
            {
                GET_SCRIPT_TASK_STATUS( l_U668, 111, ref iVar2 );
                if (iVar2 != 1)
                {
                    TASK_SIT_DOWN_ON_OBJECT( l_U668, 0, 0, l_U665, 0.00000000, -0.15000000, -0.09000000, 0.00000000, -2, 0 );
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U668 )))
        {
            if (IS_CHAR_INJURED( l_U668 ))
            {
                REVIVE_INJURED_PED( l_U668 );
                l_U527 = 1;
            }
            if (l_U527 == 1)
            {
                if (NOT (IS_CHAR_INJURED( l_U668 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U668, 0 );
                    SWITCH_PED_TO_RAGDOLL( l_U668, 0, 10000, 0, 1, 1, 0 );
                    SET_CHAR_HEALTH( l_U668, 0 );
                    l_U654 = 1;
                    l_U652 = 1;
                }
            }
        }
        if (IS_CHAR_DEAD( l_U668 ))
        {
            l_U654 = 1;
            l_U652 = 1;
        }
    }
    return;
}

void sub_17994()
{
    sub_16566();
    sub_18016( ref g_U9893._fU68 );
    sub_18065();
    return;
}

void sub_18016(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_18065()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_12313( 1, g_U569[I] )) == 0)
        {
            sub_12599( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_12765())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

void sub_18865()
{
    sub_18879( l_U661 );
    sub_18879( l_U660 );
    REQUEST_MODEL( l_U662 );
    REQUEST_MODEL( l_U663 );
    REQUEST_ANIMS( "missgerry3c" );
    sub_19637();
    sub_19662( "GM3c", 4 );
    sub_19815( "GM3CAUD" );
    return;
}

void sub_18879(unknown uParam0)
{
    REQUEST_MODEL( sub_18890( uParam0 ) );
    return;
}

int sub_18890(unknown uParam0)
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
    sub_2584( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_19637()
{
    return;
}

void sub_19662(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_19698())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_19698()
{
    int I;

    for ( I = 0; I <= (8 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_19815(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_19834();
    return;
}

void sub_19834()
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

void sub_20434(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_18890( uParam0 ) );
}

void sub_20615()
{
    REMOVE_ANIMS( "missgerry3c" );
    if (DOES_BLIP_EXIST( l_U676 ))
    {
        REMOVE_BLIP( l_U676 );
    }
    if (DOES_BLIP_EXIST( l_U677 ))
    {
        REMOVE_BLIP( l_U677 );
    }
    if (DOES_BLIP_EXIST( l_U679 ))
    {
        REMOVE_BLIP( l_U679 );
    }
    if (DOES_BLIP_EXIST( l_U678 ))
    {
        REMOVE_BLIP( l_U678 );
    }
    if (DOES_CHAR_EXIST( l_U667 ))
    {
        DELETE_CHAR( ref l_U667 );
    }
    if (DOES_CHAR_EXIST( l_U668 ))
    {
        DELETE_CHAR( ref l_U668 );
    }
    if (DOES_OBJECT_EXIST( l_U664 ))
    {
        DELETE_OBJECT( ref l_U664 );
    }
    if (DOES_OBJECT_EXIST( l_U665 ))
    {
        DELETE_OBJECT( ref l_U665 );
    }
    if (DOES_OBJECT_EXIST( l_U666 ))
    {
        DELETE_OBJECT( ref l_U666 );
    }
    if (sub_760( l_U566 ))
    {
        sub_944( ref l_U566, 0 );
    }
    if (sub_760( l_U573 ))
    {
        sub_944( ref l_U573, 0 );
    }
    if (sub_760( l_U580 ))
    {
        sub_944( ref l_U580, 0 );
    }
    sub_1135( "gerry3c_slap" );
    sub_1135( "gerry3c_takeit" );
    sub_1135( "gerry3c_send" );
    g_U9080 = 0;
    g_U9082 = 0;
    g_U9079 = 0;
    g_U9151 = 1;
    return;
}

void sub_21162()
{
    vector vVar2;

    if (HAS_MODEL_LOADED( l_U662 ))
    {
        if (sub_20434( l_U661 ))
        {
            if (HAS_MODEL_LOADED( l_U663 ))
            {
                if (HAVE_ANIMS_LOADED( "missgerry3c" ))
                {
                    CREATE_OBJECT( l_U662, l_U494._fU0, l_U494._fU4, l_U494._fU8, ref l_U664, 1 );
                    if (DOES_OBJECT_EXIST( l_U664 ))
                    {
                        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U664, "Room_safe1" );
                        FREEZE_OBJECT_POSITION( l_U664, 1 );
                    }
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U664, -0.92770000, -0.95640000, 0.52000000, ref l_U529._fU0, ref l_U529._fU4, ref l_U529._fU8 );
                    sub_21426( l_U661, ref l_U667, l_U529._fU0, l_U529._fU4, l_U529._fU8, l_U497 - 180 );
                    if (NOT (IS_CHAR_INJURED( l_U667 )))
                    {
                        SET_ROOM_FOR_CHAR_BY_NAME( l_U667, "Room_safe1" );
                        SET_CHAR_HEADING( l_U667, l_U497 - 180 );
                        SET_CHAR_COMPONENT_VARIATION( l_U667, 8, 1, 0 );
                        SET_CHAR_COMPONENT_VARIATION( l_U667, 0, 0, 0 );
                        SET_CHAR_COMPONENT_VARIATION( l_U667, 1, 0, 0 );
                        SET_CHAR_COMPONENT_VARIATION( l_U667, 2, 0, 0 );
                        BLOCK_CHAR_VISEME_ANIMS( l_U667, 1 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U667, "girl_tiedup_01", "missgerry3c", 8.00000000, 1, 0, 0, 0, -2 );
                    }
                    vVar2 = {0.00000000, 0.07000000, 0.58000000};
                    if ((NOT (IS_CHAR_INJURED( l_U667 ))) AND (DOES_OBJECT_EXIST( l_U664 )))
                    {
                        ATTACH_PED_TO_OBJECT( l_U667, l_U664, 0, vVar2, 180.00000000, 360.00000000, 0, 0 );
                        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U667, 0.00000000, 0.00000000, 3.00000000, ref l_U532._fU0, ref l_U532._fU4, ref l_U532._fU8 );
                    }
                    CREATE_OBJECT( l_U663, l_U498._fU0, l_U498._fU4, l_U498._fU8 + 0.02000000, ref l_U665, 1 );
                    if (DOES_OBJECT_EXIST( l_U665 ))
                    {
                        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U665, "Room_safe1" );
                        SET_OBJECT_HEADING( l_U665, l_U501 );
                        FREEZE_OBJECT_POSITION( l_U665, 1 );
                    }
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U665, 0.45000000, -0.70000000, 0.00000000, ref l_U535._fU0, ref l_U535._fU4, ref l_U535._fU8 );
                    sub_21426( l_U660, ref l_U668, l_U535._fU0, l_U535._fU4, l_U535._fU8, l_U501 - 180 );
                    if (NOT (IS_CHAR_INJURED( l_U668 )))
                    {
                        SET_ROOM_FOR_CHAR_BY_NAME( l_U668, "Room_safe1" );
                        TASK_SIT_DOWN_ON_OBJECT( l_U668, 0, 0, l_U665, 0.00000000, -0.65000000, -0.04000000, 0.00000000, -2, 1 );
                        SET_CHAR_COMPONENT_VARIATION( l_U668, 0, 0, 0 );
                        SET_CHAR_COMPONENT_VARIATION( l_U668, 1, 0, 0 );
                        SET_CHAR_COMPONENT_VARIATION( l_U668, 2, 0, 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U668, 1 );
                        SET_CHAR_HEADING( l_U668, l_U501 - 180 );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U676 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U667, ref l_U676 );
                        if (DOES_BLIP_EXIST( l_U676 ))
                        {
                            CHANGE_BLIP_COLOUR( l_U676, 3 );
                            CHANGE_BLIP_DISPLAY( l_U676, 0 );
                        }
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U677 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U547._fU0, l_U547._fU4, l_U547._fU8, ref l_U677 );
                        if (DOES_BLIP_EXIST( l_U677 ))
                        {
                            CHANGE_BLIP_COLOUR( l_U677, 5 );
                            CHANGE_BLIP_DISPLAY( l_U677, 0 );
                        }
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U678 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U544._fU0, l_U544._fU4, l_U544._fU8, ref l_U678 );
                        if (DOES_BLIP_EXIST( l_U678 ))
                        {
                            CHANGE_BLIP_COLOUR( l_U678, 5 );
                            CHANGE_BLIP_DISPLAY( l_U678, 0 );
                        }
                    }
                    sub_24044( 0, sub_16732(), "NIKO", 0 );
                    sub_24044( 1, l_U667, "GRACIE", 0 );
                    sub_24044( 2, l_U668, "GORDON", 0 );
                    l_U491 = 3;
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U538._fU0, l_U538._fU4, l_U538._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                LOAD_ALL_OBJECTS_NOW();
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U538._fU0, l_U538._fU4, l_U538._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
        {
            LOAD_ALL_OBJECTS_NOW();
        }
    }
    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U538._fU0, l_U538._fU4, l_U538._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
    {
        LOAD_ALL_OBJECTS_NOW();
    }
    return;
}

void sub_21426(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_18890( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_21476( uParam0, (uParam1^) );
    return;
}

void sub_21476(unknown uParam0, unknown uParam1)
{
    sub_21488( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_21488(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_21582( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_22126( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_21582(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_22126(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_21582( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_21582( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_21582( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_21582( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_21582( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_21582( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_21582( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_21582( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_21582( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_21582( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_21582( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_21582( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_21582( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_24044(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_24128( "\n PED NUMBER ", uParam0 );
    sub_24168( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_24128(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_24168(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_24628()
{
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U541._fU0, l_U541._fU4, l_U541._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
    {
        if (GET_MISSION_FLAG() == 0)
        {
            if (g_U9893._fU12 == 0)
            {
                sub_17994();
            }
        }
        if (DOES_BLIP_EXIST( l_U675 ))
        {
            CHANGE_BLIP_DISPLAY( l_U675, 0 );
        }
        if (DOES_BLIP_EXIST( l_U679 ))
        {
            CHANGE_BLIP_DISPLAY( l_U679, 0 );
        }
        if (DOES_BLIP_EXIST( l_U676 ))
        {
            CHANGE_BLIP_DISPLAY( l_U676, 4 );
        }
        if (IS_CHAR_SITTING_IDLE( l_U668 ))
        {
            CHANGE_CHAR_SIT_IDLE_ANIM( l_U668, "missgerry3c", "sit_loop", 1 );
        }
        while (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            WAIT( 0 );
        }
        PRINT_NOW( "gerry3c_photo", 7500, 1 );
        GET_GAME_TIMER( ref l_U508 );
        l_U491 = 4;
    }
    else if (sub_24948( l_U667 ))
    {
        if (NOT (sub_760( l_U608 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U541._fU0, l_U541._fU4, l_U541._fU8, 4.00000000, 4.00000000, 2.00000000, 0 ))
            {
                sub_25130( l_U614, ref l_U608, 1, 1 );
            }
        }
    }
    else if (sub_760( l_U608 ))
    {
        sub_944( ref l_U608, 0 );
    };;;
    return;
}

int sub_24948(unknown uParam0)
{
    int iVar3;

    GET_INTERIOR_FROM_CHAR( sub_16732(), ref iVar3 );
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (iVar3 != nil)
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_16732(), uParam0, 9.00000000, 9.00000000, 9.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_25130(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_25153( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_25153(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_25207( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_25207(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_25229( iParam1 )))
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
    sub_25909( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_25229(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_872( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_872( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_872( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_25909(int iParam0, int iParam1)
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

void sub_26343()
{
    unknown uVar2;
    int iVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;

    GET_GROUP_SIZE( sub_26352(), ref uVar4, ref iVar3 );
    if (iVar3 == 1)
    {
        GET_GROUP_MEMBER( sub_26352(), 0, ref uVar2 );
        if (NOT (IS_CHAR_INJURED( l_U667 )))
        {
            if (NOT (IS_CHAR_INJURED( uVar2 )))
            {
                GET_INTERIOR_FROM_CHAR( l_U667, ref iVar6 );
                GET_INTERIOR_FROM_CHAR( uVar2, ref iVar5 );
                if (iVar5 == iVar6)
                {
                    g_U9081 = 1;
                }
            }
        }
    }
    return;
}

void sub_26352()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_26569()
{
    SET_PLAYER_CONTROL( sub_3524(), 0 );
    if ((IS_SCREEN_FADED_IN()) || (IS_SCREEN_FADING_IN()))
    {
        DO_SCREEN_FADE_OUT( 3000 );
    }
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    SET_CHAR_COORDINATES( sub_16732(), -1000.23900000, 1223.57100000, 27.41760000 );
    SET_CHAR_HEADING( sub_16732(), 308.97450000 );
    if (DOES_BLIP_EXIST( l_U679 ))
    {
        CHANGE_BLIP_DISPLAY( l_U679, 0 );
    }
    if (DOES_BLIP_EXIST( l_U675 ))
    {
        CHANGE_BLIP_DISPLAY( l_U675, 0 );
    }
    SET_GAME_CAM_HEADING( 0.00000000 );
    if ((IS_SCREEN_FADED_OUT()) || (IS_SCREEN_FADING_OUT()))
    {
        DO_SCREEN_FADE_IN( 3000 );
    }
    while (NOT IS_SCREEN_FADED_IN())
    {
        WAIT( 0 );
    }
    sub_20615();
    SET_PLAYER_CONTROL( sub_3524(), 1 );
    if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U538._fU0, l_U538._fU4, l_U538._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
    {
        PRINT_NOW( "gerry3c_wanted", 7500, 1 );
    }
    CLEAR_HELP();
    CLEAR_PRINTS();
    return;
}

void sub_26970()
{
    if (l_U653 == 0)
    {
        switch (l_U518)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U667 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U541._fU0, l_U541._fU4, l_U541._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U667, "girl_tiedup_02", "missgerry3c", 8.00000000, 0, 0, 0, 1, -2 );
                    l_U518++;
                }
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U667 )))
            {
                if (HAS_CHAR_ANIM_FINISHED( l_U667, "missgerry3c", "girl_tiedup_02" ))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U667, "girl_tiedup_01", "missgerry3c", 8.00000000, 1, 0, 0, 0, -2 );
                    l_U518++;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U667 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U494._fU0, l_U494._fU4, l_U494._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U667, "girl_tiedup_02", "missgerry3c", 8.00000000, 0, 0, 0, 1, -2 );
                    l_U518++;
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( l_U667 )))
            {
                if (HAS_CHAR_ANIM_FINISHED( l_U667, "missgerry3c", "girl_tiedup_02" ))
                {
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U667, "girl_tiedup_01", "missgerry3c", 8.00000000, 1, 0, 0, 0, -2 );
                    l_U518 = 2;
                }
            }
            break;
        }
    }
    return;
}

void sub_27593()
{
    sub_27602();
    if (NOT (IS_CHAR_INJURED( l_U667 )))
    {
        GET_INTERIOR_FROM_CHAR( l_U667, ref l_U674 );
    }
    GET_INTERIOR_FROM_CHAR( sub_16732(), ref l_U673 );
    if (l_U493 == 0)
    {
        if (NOT (sub_760( l_U566 )))
        {
            GET_GAME_TIMER( ref l_U509 );
            l_U510 = l_U509 - l_U508;
            if (l_U510 > 9500)
            {
                if (sub_25130( l_U572, ref l_U566, 2, 1 ))
                {
                    GET_GAME_TIMER( ref l_U508 );
                    GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref l_U523 );
                    l_U493 = 1;
                }
            }
        }
    }
    switch (l_U521)
    {
        case 0:
        if (l_U493 == 1)
        {
            if (NOT (sub_760( l_U566 )))
            {
                GET_GAME_TIMER( ref l_U509 );
                l_U510 = l_U509 - l_U508;
                if (NOT (sub_760( l_U573 )))
                {
                    if (NOT (sub_760( l_U615 )))
                    {
                        if (l_U510 > l_U523)
                        {
                            if (sub_25130( l_U621, ref l_U615, 2, 1 ))
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref l_U523 );
                                GET_GAME_TIMER( ref l_U508 );
                            }
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U508 );
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U508 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U508 );
            }
        }
        if (sub_28319())
        {
            if (l_U674 == l_U673)
            {
                if (sub_25130( l_U579, ref l_U573, 3, 1 ))
                {
                    l_U521++;
                }
            }
        }
        sub_28411();
        break;
        case 1:
        if (IS_PED_LOOKING_AT_PED( l_U667, sub_16732() ))
        {
            if (sub_30011( l_U667 ))
            {
                sub_30082( l_U659 );
                if (DOES_BLIP_EXIST( l_U676 ))
                {
                    CHANGE_BLIP_DISPLAY( l_U676, 0 );
                }
                PRINT_HELP_FOREVER( "gerry3c_send" );
                l_U521++;
            }
            else if (sub_28319())
            {
                PRINT_HELP_FOREVER( "gerry3c_takeit" );
            }
            else
            {
                CLEAR_HELP();
            }
            if (sub_30269())
            {
                CLEAR_HELP();
                PRINT_NOW( "gerry3c_notake", 7500, 1 );
            }
        }
        else if (sub_30269())
        {
            PRINT_NOW( "gerry3c_notake", 7500, 1 );
        }
        sub_28411();
        break;
        case 2:
        if (sub_30405( l_U659 ))
        {
            if (sub_30464( l_U659 ))
            {
                CLEAR_HELP();
                l_U491 = 5;
            }
        }
        if (sub_28319())
        {
            CLEAR_HELP();
            if (DOES_BLIP_EXIST( l_U676 ))
            {
                CHANGE_BLIP_DISPLAY( l_U676, 4 );
            }
            sub_30580();
            PRINT_NOW( "gerry3c_notsent", 7500, 1 );
            l_U521 = 1;
        }
        break;
    }
    if (((LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U544._fU0, l_U544._fU4, l_U544._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U547._fU0, l_U547._fU4, l_U547._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U550._fU0, l_U550._fU4, l_U550._fU8, 1.50000000, 1.50000000, 1.00000000, 0 )))
    {
        if (DOES_BLIP_EXIST( l_U676 ))
        {
            CHANGE_BLIP_DISPLAY( l_U676, 0 );
        }
        if (DOES_BLIP_EXIST( l_U675 ))
        {
            CHANGE_BLIP_DISPLAY( l_U675, 4 );
        }
        sub_20615();
        l_U491 = 0;
    }
    return;
}

void sub_27602()
{
    if (NOT (IS_CHAR_INJURED( l_U667 )))
    {
        BLOCK_CHAR_VISEME_ANIMS( l_U667, 1 );
        switch (l_U519)
        {
            case 0:
            if (sub_24948( l_U667 ))
            {
                if (sub_25130( l_U614, ref l_U608, 1, 1 ))
                {
                    l_U519++;
                }
            }
            else if (sub_760( l_U608 ))
            {
                sub_944( ref l_U608, 0 );
            }
            break;
            case 1:
            if (NOT (sub_760( l_U608 )))
            {
                l_U519++;
            }
            break;
            case 2:
            GET_GAME_TIMER( ref l_U511 );
            GENERATE_RANDOM_INT_IN_RANGE( 4000, 10000, ref l_U520 );
            l_U519 = 0;
            break;
            case 3:
            GET_GAME_TIMER( ref l_U512 );
            l_U513 = l_U512 - l_U511;
            if (l_U513 > l_U520)
            {
                l_U519 = 0;
            }
            break;
        }
    }
    return;
}

int sub_28319()
{
    if (g_U91._fU0 == 1020)
    {
        return 1;
    }
    return 0;
}

void sub_28411()
{
    vector vVar2;
    float fVar5;

    vVar2 = {-1004.62100000, 1224.85200000, 27.43460000};
    fVar5 = 19.92820000;
    if (NOT (IS_CHAR_INJURED( l_U667 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U667, sub_16732(), 0 ))
        {
            TASK_LOOK_AT_CHAR( l_U667, sub_16732(), 15000, 68 );
            CLEAR_HELP();
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U667 );
            l_U525 = 0;
        }
    }
    switch (l_U525)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U667 )))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( l_U667, sub_16732() )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), vVar2.x, vVar2.y, vVar2.z, 2.00000000, 2.00000000, 2.00000000, 0 ))
                {
                    PRINT_HELP_FOREVER( "gerry3c_slap" );
                    if (sub_28695())
                    {
                        SET_PLAYER_CONTROL( sub_3524(), 0 );
                        sub_28749();
                        l_U525++;
                    }
                }
                else
                {
                    CLEAR_HELP();
                }
            }
        }
        break;
        case 1:
        if (sub_28899())
        {
            l_U525 = 0;
            sub_29076();
            SET_PLAYER_CONTROL( sub_3524(), 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U667 )))
        {
            CLEAR_HELP();
            l_U657 = 0;
            CLEAR_CHAR_TASKS( sub_16732() );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_16732(), 1 );
            TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( sub_16732(), vVar2.x, vVar2.y, vVar2.z, fVar5, 2.00000000, 200.00000000 );
            l_U525++;
        }
        break;
        case 2:
        if (sub_28899())
        {
            l_U525 = 0;
            sub_29076();
            SET_PLAYER_CONTROL( sub_3524(), 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U667 )))
        {
            GET_SCRIPT_TASK_STATUS( sub_16732(), 68, ref l_U650 );
            if (l_U650 == 7)
            {
                sub_25130( l_U649, ref l_U643, 3, 1 );
                l_U525++;
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U667 )))
        {
            CLEAR_CHAR_TASKS( l_U667 );
            TASK_PLAY_ANIM( sub_16732(), "give_slap", "missgerry3c", 8.00000000, 0, 0, 0, 0, -2 );
            TASK_PLAY_ANIM( l_U667, "take_slap", "missgerry3c", 8.00000000, 0, 0, 0, 1, -2 );
            g_U9082 = 1;
            if (sub_24948( l_U667 ))
            {
                sub_25130( l_U614, ref l_U608, 1, 1 );
            }
            else if (sub_760( l_U608 ))
            {
                sub_944( ref l_U608, 0 );
            }
            l_U650 = 0;
            l_U525++;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U667 )))
        {
            if (IS_CHAR_PLAYING_ANIM( sub_16732(), "missgerry3c", "give_slap" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_16732(), "missgerry3c", "give_slap", ref l_U528 );
            }
            if (l_U657 == 0)
            {
                if (l_U528 > 0.55000000)
                {
                    PLAY_AUDIO_EVENT_FROM_PED( "GM3C_PHOTOGRAPH_MOBSTERS_DAUGHTER_SLAP", l_U667 );
                    l_U657 = 1;
                }
            }
            GET_SCRIPT_TASK_STATUS( sub_16732(), 80, ref l_U650 );
            if (l_U650 == 7)
            {
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_16732(), 0 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U667, "girl_tiedup_01", "missgerry3c", 8.00000000, 1, 0, 0, 0, -2 );
                TASK_LOOK_AT_CHAR( l_U667, sub_16732(), 20000, 68 );
                sub_29076();
                SET_PLAYER_CONTROL( sub_3524(), 1 );
                l_U525 = 0;
            }
        }
        break;
    }
    return;
}

int sub_28695()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_28749()
{
    if (NOT (IS_CHAR_DEAD( sub_16732() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_16732(), ref l_U489 );
        if (l_U489 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_16732(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_16732(), 0, 1 );
        }
        if (l_U489 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_16732(), 0, 1 );
        }
    }
    return;
}

int sub_28899()
{
    if (((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 ))) || (sub_28947()))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_16732() );
        SET_PLAYER_CONTROL( sub_3524(), 1 );
        return 1;
    }
    return 0;
}

int sub_28947()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 > 100) || (iVar2 < 65436))
    {
        return 1;
    }
    if ((iVar3 > 100) || (iVar3 < 65436))
    {
        return 1;
    }
    return 0;
}

void sub_29076()
{
    if (NOT (IS_CHAR_DEAD( sub_16732() )))
    {
        if (l_U489 != 0)
        {
            if (l_U489 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_16732(), l_U489, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_16732(), 46 );
            }
        }
    }
    return;
}

int sub_30011(unknown uParam0)
{
    if (g_U91._fU0 == 1022)
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            return CELL_CAM_IS_CHAR_VISIBLE( uParam0 );
        }
    }
    return 0;
}

int sub_30082(unknown uParam0)
{
    if ((g_U91._fU0 == 1022) || (g_U91._fU0 == 1023))
    {
        g_U91._fU88 = 1;
        g_U91._fU60 = uParam0;
        return 1;
    }
    return 0;
}

int sub_30269()
{
    if (g_U91._fU0 == 1022)
    {
        return 1;
    }
    return 0;
}

int sub_30405(int iParam0)
{
    if ((g_U91._fU88) AND (iParam0 == g_U91._fU60))
    {
        return 1;
    }
    return 0;
}

int sub_30464(int iParam0)
{
    if ((g_U91._fU0 == 1024) AND (iParam0 == g_U91._fU60))
    {
        return 1;
    }
    return 0;
}

void sub_30580()
{
    g_U91._fU88 = 0;
    return;
}

void sub_31355()
{
    sub_27602();
    switch (l_U492)
    {
        case 0:
        if (NOT (sub_760( l_U573 )))
        {
            PRINT_NOW( "gerry3c_out", 7500, 1 );
            if (sub_24948( l_U667 ))
            {
                if (sub_25130( l_U614, ref l_U608, 1, 1 ))
                {
                    GET_GAME_TIMER( ref l_U508 );
                    l_U492 = 1;
                }
            }
            else if (sub_760( l_U608 ))
            {
                sub_944( ref l_U608, 0 );
            }
            GET_GAME_TIMER( ref l_U508 );
            l_U492 = 1;;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U667 )))
        {
            GET_INTERIOR_FROM_CHAR( l_U667, ref l_U674 );
        }
        GET_INTERIOR_FROM_CHAR( sub_16732(), ref l_U673 );
        if (l_U656 == 0)
        {
            if (l_U522 != 0)
            {
                if (l_U673 == l_U674)
                {
                    sub_26569();
                    g_U9151 = 1;
                    l_U651 = 1;
                }
            }
            if (l_U673 != l_U674)
            {
                if (l_U658 == 1)
                {
                    SET_WANTED_MULTIPLIER( 1.00000000 );
                    l_U658 = 0;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U541._fU0, l_U541._fU4, l_U541._fU8, 4.00000000, 4.00000000, 2.00000000, 0 )))
                {
                    if (l_U652 == 0)
                    {
                        if (sub_25130( l_U635, ref l_U629, 2, 1 ))
                        {
                            if (sub_760( l_U608 ))
                            {
                                sub_944( ref l_U608, 0 );
                            }
                            l_U656 = 1;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref l_U509 );
        l_U510 = l_U509 - l_U508;
        if (l_U510 > 7500)
        {
            GET_GAME_TIMER( ref l_U508 );
            l_U492 = 2;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U667 )))
        {
            GET_INTERIOR_FROM_CHAR( l_U667, ref l_U674 );
        }
        GET_INTERIOR_FROM_CHAR( sub_16732(), ref l_U673 );
        if (sub_760( l_U608 ))
        {
            sub_944( ref l_U608, 0 );
        }
        if (l_U656 == 0)
        {
            if (l_U673 != l_U674)
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U541._fU0, l_U541._fU4, l_U541._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
                {
                    if (sub_25130( l_U635, ref l_U629, 2, 1 ))
                    {
                        l_U656 = 1;
                    }
                }
            }
            if (l_U522 != 0)
            {
                sub_26569();
                g_U9151 = 1;
                l_U651 = 1;
            }
            if (l_U526 < 6)
            {
                GET_GAME_TIMER( ref l_U509 );
                l_U510 = l_U509 - l_U508;
                if (l_U510 > 8000)
                {
                    if (l_U673 == l_U674)
                    {
                        if (NOT (sub_760( l_U622 )))
                        {
                            if (sub_25130( l_U628, ref l_U622, 2, 1 ))
                            {
                                l_U526++;
                                GET_GAME_TIMER( ref l_U508 );
                            }
                        }
                    }
                }
            }
        }
        if (l_U656 == 1)
        {
            if (sub_760( l_U608 ))
            {
                sub_944( ref l_U608, 0 );
            }
            if (l_U673 == l_U674)
            {
                if (sub_25130( l_U642, ref l_U636, 2, 1 ))
                {
                    GET_GAME_TIMER( ref l_U508 );
                    l_U656 = 0;
                }
            }
            if (l_U522 != 0)
            {
                g_U9151 = 1;
                l_U651 = 1;
            }
        }
        break;
    }
    if (((LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U544._fU0, l_U544._fU4, l_U544._fU8, 1.00000000, 1.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U547._fU0, l_U547._fU4, l_U547._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))) || (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U550._fU0, l_U550._fU4, l_U550._fU8, 1.50000000, 1.50000000, 1.00000000, 0 )))
    {
        if (DOES_BLIP_EXIST( l_U677 ))
        {
            CHANGE_BLIP_DISPLAY( l_U677, 0 );
        }
        if (DOES_BLIP_EXIST( l_U678 ))
        {
            CHANGE_BLIP_DISPLAY( l_U678, 0 );
        }
        if (sub_760( l_U580 ))
        {
            sub_944( ref l_U580, 0 );
        }
        sub_15694( 0 );
        CLEAR_PRINTS();
        g_U9151 = 1;
        l_U651 = 1;
    }
    if (l_U673 != l_U674)
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_16732(), l_U541._fU0, l_U541._fU4, l_U541._fU8, 20.00000000, 20.00000000, 20.00000000, 0 )))
        {
            if (DOES_BLIP_EXIST( l_U677 ))
            {
                CHANGE_BLIP_DISPLAY( l_U677, 0 );
            }
            if (DOES_BLIP_EXIST( l_U678 ))
            {
                CHANGE_BLIP_DISPLAY( l_U678, 0 );
            }
            if (sub_760( l_U580 ))
            {
                sub_944( ref l_U580, 0 );
            }
            CLEAR_PRINTS();
            g_U9151 = 1;
            l_U651 = 1;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U667 )))
    {
        if (IS_CHAR_INJURED( l_U667 ))
        {
            REVIVE_INJURED_PED( l_U667 );
            if (NOT (IS_CHAR_INJURED( l_U667 )))
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U667, "girl_ko", "missgerry3c", 8.00000000, 1, 0, 0, 0, -2 );
            }
            l_U653 = 1;
            l_U652 = 1;
        }
    }
    return;
}