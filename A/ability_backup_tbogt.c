void main()
{
    boolean bVar2;
    float fVar3;
    unknown uVar4;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    vector vVar12;
    int I;
    int iVar16;
    unknown uVar17;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U110 = 999999.90000000;
    l_U111 = 0.00000000;
    l_U112 = 0.26000000;
    l_U113 = 0.65000000;
    l_U115 = 0;
    l_U118 = "amb@smoke_cig";
    l_U119 = "create_cig";
    l_U120 = "partial_smoke";
    l_U121 = "partial_smoke_car";
    l_U122 = "partial_stub_out";
    l_U123 = {0.01400000, -0.01900000, 0.01100000};
    l_U126 = {0.00000000, 0.00000000, 0.00000000};
    l_U129 = {0.14700000, -0.02900000, 0.00000000};
    l_U132 = {0.00000000, 0.00000000, 0.00000000};
    l_U135 = {0.00000000, 0.00000000, 1.00000000};
    l_U138 = 0;
    l_U139 = 0;
    l_U140 = 0;
    l_U141 = 0;
    l_U142 = 0;
    l_U144 = -1;
    l_U158 = 15.00000000;
    l_U159 = 35.00000000;
    l_U160 = 16.00000000;
    l_U161 = 0.00000000;
    l_U167 = 1000.00000000;
    l_U168 = 7500.00000000;
    l_U177 = 1;
    l_U178 = 30.00000000;
    l_U179 = 30.00000000;
    l_U180 = 2.00000000;
    l_U190 = 0.00000000;
    l_U191 = 0.00000000;
    l_U203 = 1;
    l_U204 = 0;
    l_U205 = -1;
    l_U206 = 1;
    l_U207 = -1;
    l_U208 = -1;
    l_U209 = 15.00000000;
    l_U236 = 0;
    l_U237 = -1949702649;
    l_U238 = 2075870698;
    l_U243 = 0.12000000;
    l_U291 = 1;
    l_U297 = 0;
    l_U298 = 0;
    l_U299 = 0;
    l_U302 = 0;
    l_U303 = 0;
    l_U304 = 1;
    l_U326 = 0.05000000;
    l_U327 = 15.00000000;
    l_U328 = 50.00000000;
    l_U340 = 25;
    HAS_RESPRAY_HAPPENED();
    if (NOT g_U11096)
    {
        SET_FLOAT_STAT( 168, g_U11141[0] );
        SET_FLOAT_STAT( 169, g_U11141[1] );
        g_U11096 = 1;
    }
    g_U11090 = 0;
    g_U11093 = 0;
    g_U11094 = 0;
    g_U11091 = 0;
    g_U11092 = 0;
    g_U11098 = 0;
    g_U11102 = 0;
    g_U11106 = 0;
    g_U11101 = 0;
    g_U11095 = 0;
    g_U11113 = 0;
    g_U11123[0] = 0;
    g_U11123[1] = 0;
    if (NOT g_U12303)
    {
        g_U11116 = 0;
    }
    l_U287 = 0;
    INCREMENT_INT_STAT( 167, 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "ABILITY BACKUP - dismissed due to death arrest \n" );
        sub_853( ref l_U371, 0 );
        sub_853( ref l_U365, 0 );
        sub_989( 0, 1 );
    }
    if (IS_PLAYER_PLAYING( sub_1055() ))
    {
        l_U318 = 0;
        for ( I = 0; I < g_U11028; I++ )
        {
            if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[I]._fU0, 40.00000000, 40.00000000, 40.00000000, 0 ))
                {
                    l_U318 = 1;
                }
            }
        }
    }
    while (true)
    {
        if ((IS_PLAYER_PLAYING( sub_1055() )) AND (NOT (((g_U11091) || (g_U11092)) AND (NOT g_U11101))))
        {
            GET_FRAME_TIME( ref fVar3 );
            fVar3 *= 1000.00000000;
            l_U324 += fVar3;
            l_U325 += fVar3;
            l_U330 += fVar3;
            l_U331 += fVar3;
            l_U334 += fVar3;
            l_U335 += fVar3;
            l_U338 += fVar3;
            l_U339 += fVar3;
            l_U336 += fVar3;
            l_U337 += fVar3;
            l_U332 += fVar3;
            if ((sub_1451()) || (sub_1629()))
            {
                l_U333 = 0.00000000;
            }
            else
            {
                l_U333 += fVar3;
            }
            if (g_U12303)
            {
                l_U281 = 1;
            }
            if ((l_U281) AND (NOT g_U12303))
            {
                PRINTSTRING( "ABILITY BACKUP - No longer on mission resetting global \n" );
                g_U11197 = nil;
                g_U11198 = nil;
                l_U281 = 0;
            }
            switch (l_U341)
            {
                case 0:
                switch (l_U342)
                {
                    case 0:
                    l_U362[0] = sub_1992( 6 );
                    l_U362[1] = sub_1992( 7 );
                    if (sub_2232())
                    {
                        if (NOT g_U11132)
                        {
                            PRINTSTRING( "ABILITY BACKUP - g_bBuddyBackupNextTimeCreatedWillBeCustom = " );
                            if (g_U11099)
                            {
                                PRINTSTRING( "TRUE \n" );
                            }
                            else
                            {
                                PRINTSTRING( "FALSE \n" );
                            }
                            l_U340 = 25;
                            l_U342++;
                        }
                    }
                    break;
                    case 1:
                    if (NOT g_U11099)
                    {
                        if (sub_2922( ref vVar6, ref fVar3, ref l_U340 ))
                        {
                            bVar2 = true;
                        }
                        else if (l_U340 > 500)
                        {
                            if (l_U322 > 0.00000000)
                            {
                                vVar6 = {l_U380};
                                fVar3 = l_U329;
                                bVar2 = true;
                            }
                            else
                            {
                                PRINT( "BB_REACH", 7500, 1 );
                                PRINTSTRING( "CLEANUP_BIKER_BACKUP_SCRIPT() - 1 \n" );
                                sub_3847();
                            }
                        }
                    }
                    if ((bVar2) || (g_U11099))
                    {
                        PRINTSTRING( "ABILITY BACKUP - About to create dudes \n" );
                        # -sub_C1FFC0-0xc214c8( 2, ref l_U320 );
                        LOAD_COMBAT_DECISION_MAKER( 8, ref l_U321 );
                        for ( I = 0; I < 2; I++ )
                        {
                            if (NOT l_U318)
                            {
                                g_U11028[I]._fU0 = nil;
                                g_U11028[I]._fU4 = nil;
                            }
                            if (g_U11099)
                            {
                                vVar6 = {g_U11183[I]};
                                fVar3 = g_U11159[I];
                            }
                            if (NOT g_U11126[I])
                            {
                                if (NOT l_U318)
                                {
                                    if (I == 0)
                                    {
                                        sub_6140( 6, vVar6, fVar3, ref g_U11028[I] );
                                    }
                                    else
                                    {
                                        sub_6140( 7, vVar6, fVar3, ref g_U11028[I] );
                                    }
                                    SET_CHAR_COMPONENT_VARIATION( g_U11028[I]._fU0, 0, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U11028[I]._fU0, 1, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U11028[I]._fU0, 2, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U11028[I]._fU0, 3, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U11028[I]._fU0, 4, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U11028[I]._fU0, 5, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U11028[I]._fU0, 6, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U11028[I]._fU0, 7, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U11028[I]._fU0, 8, 0, 0 );
                                    SET_CHAR_COMPONENT_VARIATION( g_U11028[I]._fU0, 9, 0, 0 );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( g_U11028[I]._fU4, 2.00000000, 0.00000000, 0.00000000, ref vVar6.x, ref vVar6.y, ref vVar6.z );
                                    SET_CAR_COORDINATES( g_U11028[I]._fU4, vVar6.x, vVar6.y, vVar6.z );
                                    SET_CAR_HEADING( g_U11028[I]._fU4, fVar3 );
                                    if ((g_U11099) AND (g_U11120[I]))
                                    {
                                        l_U273[I] = 1;
                                    }
                                    else
                                    {
                                        PRINTSTRING( "ABILITY_BACKUP - MARK_CAR_AS_NO_LONGER_NEEDED_KEEP_ID - after creation \n" );
                                        sub_10837( g_U11028[I]._fU4 );
                                    }
                                    SET_CHAR_DECISION_MAKER( g_U11028[I]._fU0, l_U320 );
                                    SET_COMBAT_DECISION_MAKER( g_U11028[I]._fU0, l_U321 );
                                    SET_CHAR_SUFFERS_CRITICAL_HITS( g_U11028[I]._fU0, 0 );
                                    SET_CHAR_PROVIDE_COVERING_FIRE( g_U11028[I]._fU0, 1 );
                                    BLOCK_PEEKING_IN_COVER( g_U11028[I]._fU0, 1 );
                                    BLOCK_COWERING_IN_COVER( g_U11028[I]._fU0, 1 );
                                    SET_CHAR_WEAPON_SKILL( g_U11028[I]._fU0, 2 );
                                    UNLOCK_RAGDOLL( g_U11028[I]._fU0, 0 );
                                    SET_CHAR_WILL_DO_DRIVEBYS( g_U11028[I]._fU0, 1 );
                                    sub_11060( ref g_U11028[I], 3 );
                                    SET_CHAR_DROPS_WEAPONS_WHEN_DEAD( g_U11028[I]._fU0, 0 );
                                    SET_PED_DIES_WHEN_INJURED( g_U11028[I]._fU0, 1 );
                                    if (NOT g_U11097)
                                    {
                                        if (NOT g_U11100)
                                        {
                                            sub_11230( ref g_U11028[I]._fU0, ref l_U254[I] );
                                        }
                                        sub_11343( g_U11028[I]._fU0, 0 );
                                        PRINTSTRING( "ABILITY BACKUP - Backup biker flags set \n" );
                                    }
                                    else
                                    {
                                        sub_11343( g_U11028[I]._fU0, 1 );
                                    }
                                    if (g_U11099)
                                    {
                                        if (g_U11120[I])
                                        {
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11028[I]._fU0 );
                                            SET_CHAR_COORDINATES( g_U11028[I]._fU0, g_U11190[I]._fU0, g_U11190[I]._fU4, g_U11190[I]._fU8 );
                                            SET_CHAR_HEADING( g_U11028[I]._fU0, g_U11162[I] );
                                        }
                                    }
                                    if (((g_U11099) || (g_U11120[I])) || (g_U11097))
                                    {
                                        l_U301 = 1;
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "Ability Backup - bBuddysWereCreatedElsewhere = TRUE \n" );
                                }
                            }
                            else
                            {
                                g_U11126[I] = 0;
                            }
                            g_U11081[I] = g_U11028[I]._fU0;
                            g_U11084[I] = g_U11028[I]._fU0;
                            g_U11087[I] = g_U11028[I]._fU4;
                            if (l_U273[I])
                            {
                                l_U383[I] = g_U11028[I]._fU4;
                            }
                            sub_13479( I );
                        }
                        l_U339 = 0.00000000;
                        l_U317 = 1;
                        if ((IS_CHAR_INJURED( g_U11197 )) || (sub_14696( g_U11197 )))
                        {
                            g_U11197 = nil;
                        }
                        if ((IS_CHAR_INJURED( g_U11198 )) || (sub_14696( g_U11198 )))
                        {
                            g_U11198 = nil;
                        }
                        l_U352 = 0;
                        l_U324 = 0.00000000;
                        sub_14825( 1 );
                    }
                    break;
                }
                break;
                case 1:
                if (g_U12303)
                {
                    g_U39147 = 1;
                }
                if (l_U317)
                {
                    if (l_U339 > 7000.00000000)
                    {
                        for ( I = 0; I < 2; I++ )
                        {
                            if (DOES_BLIP_EXIST( l_U257[I] ))
                            {
                                FLASH_BLIP( l_U257[I], 0 );
                            }
                        }
                        l_U317 = 0;
                    }
                    else
                    {
                        for ( I = 0; I < 2; I++ )
                        {
                            if (DOES_BLIP_EXIST( l_U257[I] ))
                            {
                                FLASH_BLIP( l_U257[I], 1 );
                            }
                        }
                    }
                }
                if (NOT g_U11090)
                {
                    if ((NOT g_U11233) AND (NOT l_U318))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT sub_1629())
                            {
                                if (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "jim1" )) > 0))
                                {
                                    PRINT_HELP( "TC_EXP" );
                                    g_U11233 = 1;
                                }
                            }
                        }
                    }
                }
                if (NOT g_U12303)
                {
                    l_U377 = 3;
                }
                else
                {
                    l_U377 = 1;
                }
                if (IS_PLAYER_PLAYING( sub_1055() ))
                {
                    if (g_U11090)
                    {
                        if (IS_WANTED_LEVEL_GREATER( sub_1055(), 0 ))
                        {
                            if (NOT l_U303)
                            {
                                for ( I = 0; I < 2; I++ )
                                {
                                    if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                                    {
                                        SET_CHAR_RELATIONSHIP( g_U11028[I]._fU0, 5, 3 );
                                    }
                                }
                                l_U303 = 1;
                            }
                        }
                        else if (l_U303)
                        {
                            for ( I = 0; I < 2; I++ )
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                                {
                                    CLEAR_CHAR_RELATIONSHIP( g_U11028[I]._fU0, 5, 3 );
                                    CLEAR_CHAR_TASKS( g_U11028[I]._fU0 );
                                }
                            }
                            l_U303 = 0;
                        }
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (HAS_MODEL_LOADED( l_U362[I] )))
                    {
                        REQUEST_MODEL( l_U362[I] );
                    }
                }
                if ((NOT l_U301) AND (NOT l_U318))
                {
                    if (IS_PLAYER_PLAYING( sub_1055() ))
                    {
                        for ( I = 0; I < 2; I++ )
                        {
                            if (NOT l_U301)
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                                {
                                    if (IS_VEH_DRIVEABLE( g_U11028[I]._fU4 ))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( g_U11028[I]._fU0, g_U11028[I]._fU4 ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_1147(), g_U11028[I]._fU4, 40.00000000, 40.00000000, 10.00000000, 0 ))
                                            {
                                                PLAY_AUDIO_EVENT_FROM_VEHICLE( "BACKUP_HORN", g_U11028[I]._fU4 );
                                                l_U301 = 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_PLAYER_PLAYING( sub_1055() ))
                {
                    if (NOT g_U11090)
                    {
                        if ((NOT g_U11097) AND (NOT l_U318))
                        {
                            for ( I = 0; I < 2; I++ )
                            {
                                if (NOT g_U11117[I])
                                {
                                    if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                                    {
                                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[I]._fU0, 10.00000000, 10.00000000, 2.00000000, 0 )) AND (sub_15909( g_U11028[I]._fU0 )))
                                        {
                                            l_U285 = 1;
                                            l_U351 = I;
                                            g_U11090 = 1;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            g_U11090 = 1;
                        }
                        if (g_U11090)
                        {
                            HAS_RESPRAY_HAPPENED();
                        }
                    }
                    else if (NOT l_U287)
                    {
                        if (NOT g_U12303)
                        {
                            l_U280 = 1;
                        }
                        if (NOT l_U318)
                        {
                            for ( I = 0; I < 2; I++ )
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                                {
                                    if (NOT g_U11117[I])
                                    {
                                        sub_11343( g_U11028[I]._fU0, 0 );
                                    }
                                }
                            }
                        }
                        g_U11093 = 0;
                        g_U11094 = 0;
                        g_U11097 = 0;
                        g_U11099 = 0;
                        g_U11101 = 0;
                        g_U11106 = 0;
                        l_U287 = 1;
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (l_U273[I])
                    {
                        if (IS_VEH_DRIVEABLE( l_U383[I] ))
                        {
                            if (NOT (sub_16324( l_U383[I] )))
                            {
                                PRINTSTRING( "ABILITY_BACKUP - bike marked as no longer needed because someone got on \n" );
                                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U383[I] );
                                l_U383[I] = nil;
                                l_U273[I] = 0;
                            }
                        }
                        else
                        {
                            PRINTSTRING( "ABILITY_BACKUP - bike marked as no longer needed because the veh is not driveable \n" );
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U383[I] );
                            l_U383[I] = nil;
                            l_U273[I] = 0;
                        }
                    }
                    else if (IS_VEH_DRIVEABLE( g_U11028[I]._fU4 ))
                    {
                        if (NOT (IS_CAR_A_MISSION_CAR( g_U11028[I]._fU4 )))
                        {
                            if (sub_16324( g_U11028[I]._fU4 ))
                            {
                                if (NOT (sub_16753( g_U11028[I]._fU4 )))
                                {
                                    PRINTSTRING( "ABILITY_BACKUP - bike marked as mission car because it is empty \n" );
                                    SET_CAR_AS_MISSION_CAR( g_U11028[I]._fU4 );
                                    l_U383[I] = g_U11028[I]._fU4;
                                    l_U273[I] = 1;
                                }
                            }
                        }
                    }
                }
                if (IS_CHAR_IN_ANY_CAR( sub_1147() ))
                {
                    if ((l_U292) || (g_U11114))
                    {
                        l_U292 = 0;
                        l_U293[0] = 0;
                        l_U293[1] = 0;
                        g_U11114 = 0;
                    }
                    if (NOT g_U11117[0])
                    {
                        if (NOT l_U293[0])
                        {
                            l_U297 = 0;
                            if (l_U299)
                            {
                                sub_11934( ref g_U11028[0], sub_1147() );
                                sub_12630( ref g_U11028[0], 2 );
                            }
                            else if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                            {
                                sub_11934( ref g_U11028[0], sub_1147() );
                                sub_12630( ref g_U11028[0], 1 );
                            }
                            else if (NOT (g_U11197 == g_U11028[0]._fU0))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11197 )))
                                {
                                    if (NOT (DOES_CHAR_EXIST( g_U11198 )))
                                    {
                                        sub_11934( ref g_U11028[0], sub_1147() );
                                        sub_12630( ref g_U11028[0], 0 );
                                    }
                                    else if (NOT (g_U11198 == g_U11028[0]._fU0))
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U11198 )))
                                        {
                                            sub_11934( ref g_U11028[0], sub_1147() );
                                            if (NOT l_U298)
                                            {
                                                sub_12630( ref g_U11028[0], 2 );
                                                l_U297 = 1;
                                                l_U293[1] = 0;
                                            }
                                            else
                                            {
                                                sub_12630( ref g_U11028[0], 3 );
                                            }
                                        }
                                        else
                                        {
                                            sub_11934( ref g_U11028[0], sub_1147() );
                                            sub_12630( ref g_U11028[0], 0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_11934( ref g_U11028[0], sub_1147() );
                                    sub_12630( ref g_U11028[0], 1 );
                                }
                            };;;
                            l_U293[0] = 1;
                        }
                    }
                    if (NOT g_U11117[1])
                    {
                        if (NOT l_U293[1])
                        {
                            l_U298 = 0;
                            if (l_U299)
                            {
                                sub_11934( ref g_U11028[1], sub_1147() );
                                sub_12630( ref g_U11028[1], 2 );
                            }
                            else if (NOT (DOES_CHAR_EXIST( g_U11198 )))
                            {
                                sub_11934( ref g_U11028[1], sub_1147() );
                                sub_12630( ref g_U11028[1], 0 );
                            }
                            else if (NOT (g_U11198 == g_U11028[1]._fU0))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11198 )))
                                {
                                    if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                                    {
                                        sub_11934( ref g_U11028[1], sub_1147() );
                                        sub_12630( ref g_U11028[1], 1 );
                                    }
                                    else if (NOT (g_U11197 == g_U11028[1]._fU0))
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U11198 )))
                                        {
                                            sub_11934( ref g_U11028[1], sub_1147() );
                                            if (NOT l_U297)
                                            {
                                                sub_12630( ref g_U11028[1], 2 );
                                                l_U298 = 1;
                                                l_U293[0] = 0;
                                            }
                                            else
                                            {
                                                sub_12630( ref g_U11028[1], 3 );
                                            }
                                        }
                                        else
                                        {
                                            sub_11934( ref g_U11028[1], sub_1147() );
                                            sub_12630( ref g_U11028[1], 1 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_11934( ref g_U11028[1], sub_1147() );
                                    sub_12630( ref g_U11028[1], 0 );
                                }
                            };;;
                            l_U293[1] = 1;
                        }
                    }
                }
                else if (NOT l_U292)
                {
                    for ( I = 0; I < 2; I++ )
                    {
                        if (NOT g_U11117[I])
                        {
                            if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                            {
                                sub_11934( ref g_U11028[I], sub_1147() );
                            }
                        }
                    }
                    if ((IS_CHAR_INJURED( g_U11197 )) || (sub_14696( g_U11197 )))
                    {
                        g_U11197 = nil;
                    }
                    if ((IS_CHAR_INJURED( g_U11198 )) || (sub_14696( g_U11198 )))
                    {
                        g_U11198 = nil;
                    }
                    l_U292 = 1;
                }
                if (g_U12303)
                {
                    if (NOT l_U305)
                    {
                        for ( I = 0; I < 2; I++ )
                        {
                            if (DOES_BLIP_EXIST( l_U254[I] ))
                            {
                                CHANGE_BLIP_DISPLAY( l_U254[I], 0 );
                            }
                        }
                        l_U305 = 1;
                    }
                }
                else if (l_U305)
                {
                    for ( I = 0; I < 2; I++ )
                    {
                        if (DOES_BLIP_EXIST( l_U254[I] ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U254[I], 1 );
                        }
                    }
                    l_U305 = 0;
                }
                if (sub_1629())
                {
                    for ( I = 0; I < 2; I++ )
                    {
                        if (DOES_BLIP_EXIST( l_U254[I] ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U254[I], 0 );
                        }
                    }
                }
                else
                {
                    for ( I = 0; I < 2; I++ )
                    {
                        if (DOES_BLIP_EXIST( l_U254[I] ))
                        {
                            CHANGE_BLIP_DISPLAY( l_U254[I], 1 );
                        }
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (DOES_CHAR_EXIST( g_U11028[I]._fU0 ))
                    {
                        if (IS_CHAR_INJURED( g_U11028[I]._fU0 ))
                        {
                            if (DOES_BLIP_EXIST( l_U254[I] ))
                            {
                                REMOVE_BLIP( l_U254[I] );
                            }
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U254[I] ))
                    {
                        REMOVE_BLIP( l_U254[I] );
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U254[I] ))
                    {
                        if (NOT (IS_CHAR_DEAD( g_U11028[I]._fU0 )))
                        {
                            GET_CHAR_COORDINATES( g_U11028[I]._fU0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
                        }
                        else
                        {
                            N_1363505769( g_U11028[I]._fU0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U257[I] )))
                        {
                            sub_18684( ref l_U257[I], vVar6, I );
                        }
                        else if (NOT l_U263[I])
                        {
                            bVar2 = false;
                            if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                            {
                                if (IS_PLAYER_PLAYING( sub_1055() ))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[I]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        bVar2 = true;
                                    }
                                }
                            }
                            if (bVar2)
                            {
                                sub_18684( ref l_U257[I], vVar6, I );
                            }
                            else if (DOES_BLIP_EXIST( l_U257[I] ))
                            {
                                if ((GET_BLIP_INFO_ID_TYPE( l_U257[I] )) == 4)
                                {
                                    GET_BLIP_COORDS( l_U257[I], ref vVar9 );
                                    vVar12 = {vVar6 - vVar9};
                                    vVar12.z = 0.00000000;
                                    fVar3 = VMAG( vVar12 );
                                    if (fVar3 < l_U327)
                                    {
                                        fVar3 = l_U327;
                                    }
                                    if (fVar3 < l_U328)
                                    {
                                        fVar3 = l_U328;
                                    }
                                    fVar3 -= l_U327;
                                    fVar3 /= l_U328 - l_U327;
                                    fVar3 *= 1.00000000 - l_U326;
                                    fVar3 -= 1.00000000;
                                    fVar3 *= -1.00000000;
                                    vVar12 = {vVar12 * l_U326};
                                    vVar9 = {vVar9 + vVar12};
                                    sub_18684( ref l_U257[I], vVar9, I );
                                }
                            }
                        }
                        else
                        {
                            sub_18684( ref l_U257[I], vVar6, I );
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U257[I] ))
                    {
                        REMOVE_BLIP( l_U257[I] );
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (g_U11100)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U260[I] )))
                        {
                            if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                            {
                                ADD_BLIP_FOR_CHAR( g_U11028[I]._fU0, ref l_U260[I] );
                                SET_BLIP_AS_FRIENDLY( l_U260[I], 1 );
                                CHANGE_BLIP_SCALE( l_U260[I], 0.50000000 );
                                CHANGE_BLIP_PRIORITY( l_U260[I], 0 );
                                CHANGE_BLIP_DISPLAY( l_U260[I], 5 );
                                SET_BLIP_AS_SHORT_RANGE( l_U260[I], 1 );
                                if (I == 0)
                                {
                                    CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U260[I], "BLIP_95" );
                                }
                                else
                                {
                                    CHANGE_BLIP_NAME_FROM_TEXT_FILE( l_U260[I], "BLIP_96" );
                                }
                            }
                        }
                        else if (IS_CHAR_INJURED( g_U11028[I]._fU0 ))
                        {
                            REMOVE_BLIP( l_U260[I] );
                        }
                    }
                    else if (DOES_BLIP_EXIST( l_U260[I] ))
                    {
                        REMOVE_BLIP( l_U260[I] );
                    }
                }
                if (l_U285)
                {
                    if (NOT (IS_CHAR_INJURED( g_U11028[l_U351]._fU0 )))
                    {
                        if (NOT l_U286)
                        {
                            if ((NOT sub_20174()) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[l_U351]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                HINT_CAM( 0.00000000, 0.00000000, 0.00000000, g_U11028[l_U351]._fU0, 0, 0, 3000 );
                                l_U325 = 0.00000000;
                                l_U286 = 1;
                            }
                        }
                        else if (IS_HINT_RUNNING())
                        {
                            if (l_U325 < 3000.00000000)
                            {
                                if (sub_20174())
                                {
                                    HINT_CAM( 0.00000000, 0.00000000, 0.00000000, g_U11028[l_U351]._fU0, 0, 0, 0 );
                                }
                            }
                        }
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (DOES_CHAR_EXIST( g_U11028[I]._fU0 ))
                    {
                        if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                        {
                            if (NOT l_U282[I])
                            {
                                if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1055(), g_U11028[I]._fU0 ))
                                {
                                    UNLOCK_RAGDOLL( g_U11028[I]._fU0, 1 );
                                    l_U282[I] = 1;
                                }
                            }
                            else if (NOT (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1055(), g_U11028[I]._fU0 )))
                            {
                                if (NOT (IS_PED_RAGDOLL( g_U11028[I]._fU0 )))
                                {
                                    UNLOCK_RAGDOLL( g_U11028[I]._fU0, 0 );
                                    l_U282[I] = 0;
                                }
                            }
                        }
                        else if (NOT l_U282[I])
                        {
                            UNLOCK_RAGDOLL( g_U11028[I]._fU0, 1 );
                            l_U282[I] = 1;
                        }
                    }
                }
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (IS_CHAR_DEAD( g_U11028[I]._fU0 )))
                    {
                        if (IS_CHAR_ON_FIRE( g_U11028[I]._fU0 ))
                        {
                            GET_CHAR_HEALTH( g_U11028[I]._fU0, ref iVar16 );
                            if (iVar16 > 1)
                            {
                                UNLOCK_RAGDOLL( g_U11028[I]._fU0, 1 );
                                PRINTSTRING( "Backup Biker was on fires, setting health low. \n" );
                                SET_CHAR_HEALTH( g_U11028[I]._fU0, 1 );
                            }
                        }
                    }
                }
                iVar16 = 0;
                for ( I = 0; I < 2; I++ )
                {
                    if (IS_CHAR_INJURED( g_U11028[I]._fU0 ))
                    {
                        iVar16++;
                    }
                }
                if (iVar16 == 2)
                {
                    PRINTSTRING( "Dissmiss Backup 1 \n" );
                    sub_989( 0, 0 );
                }
                if (g_U11090)
                {
                    if (IS_SCREEN_FADED_OUT())
                    {
                        if (HAS_RESPRAY_HAPPENED())
                        {
                            sub_989( 1, 1 );
                        }
                    }
                }
                switch (l_U357)
                {
                    case 0:
                    if (g_U11090)
                    {
                        if (l_U324 > 600000.00000000)
                        {
                            if ((NOT g_U12303) AND (NOT IS_MINIGAME_IN_PROGRESS()))
                            {
                                if (NOT sub_1629())
                                {
                                    bVar2 = true;
                                    for ( I = 0; I < 2; I++ )
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                                        {
                                            if ((IS_PED_IN_COMBAT( g_U11028[I]._fU0 )) || (IS_CHAR_SHOOTING( g_U11028[I]._fU0 )))
                                            {
                                                bVar2 = false;
                                            }
                                        }
                                    }
                                    if ((IS_PED_IN_COMBAT( sub_1147() )) || (IS_CHAR_SHOOTING( sub_1147() )))
                                    {
                                        bVar2 = false;
                                    }
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                    if (I == 0)
                                    {
                                        l_U306 = 1;
                                    }
                                    else
                                    {
                                        l_U306 = 0;
                                    }
                                    if (bVar2)
                                    {
                                        l_U357++;
                                    }
                                }
                            }
                        }
                    }
                    else if ((l_U324 > 180000.00000000) AND (NOT g_U11097))
                    {
                        PRINTSTRING( "Dissmiss Backup 3 \n" );
                        sub_989( 0, 0 );
                    }
                    break;
                    case 1:
                    if (NOT sub_1451())
                    {
                        if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                        {
                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                            {
                                if (sub_21644( "E1BEA", 7 ))
                                {
                                    if (l_U306)
                                    {
                                        if (sub_22128( "E1BE_8", ref l_U365, l_U377, 1 ))
                                        {
                                            l_U357++;
                                        }
                                    }
                                    else if (sub_22128( "E1BE_6", ref l_U365, l_U377, 1 ))
                                    {
                                        l_U357++;
                                    }
                                }
                            }
                        }
                        if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 ))
                            {
                                if (sub_21644( "E1BEA", 7 ))
                                {
                                    if (sub_22128( "E1BE_9", ref l_U365, l_U377, 1 ))
                                    {
                                        l_U357++;
                                    }
                                }
                            }
                        }
                        if ((NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))) AND (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 ))
                            {
                                if (sub_21644( "E1BEA", 7 ))
                                {
                                    if (sub_22128( "E1BE_7", ref l_U365, l_U377, 1 ))
                                    {
                                        l_U357 += 2;
                                    }
                                }
                            }
                        }
                    }
                    break;
                    case 2:
                    if (sub_23448( ref l_U365 ))
                    {
                        sub_989( 0, 1 );
                        l_U357 = 99;
                    }
                    else if (IS_CHAR_INJURED( g_U11028[0]._fU0 ))
                    {
                        sub_853( ref l_U365, 0 );
                    }
                    break;
                    case 3:
                    if (sub_23448( ref l_U365 ))
                    {
                        sub_989( 0, 1 );
                        l_U357 = 99;
                    }
                    else if (IS_CHAR_INJURED( g_U11028[1]._fU0 ))
                    {
                        sub_853( ref l_U365, 0 );
                    }
                    break;
                }
                if (l_U291)
                {
                    if (NOT l_U263[0])
                    {
                        sub_23665( g_U11028[0]._fU0 );
                    }
                }
                if (NOT l_U300)
                {
                    if (IS_MINIGAME_IN_PROGRESS())
                    {
                        PRINTSTRING( "BIKER BACKUP - Minigame is active \n" );
                        if ((g_U11117[0]) || (g_U11117[1]))
                        {
                            l_U319 = 1;
                        }
                        if (NOT l_U319)
                        {
                            sub_27595( 1 );
                        }
                        for ( I = 0; I < 2; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                            {
                                SET_CURRENT_CHAR_WEAPON( g_U11028[I]._fU0, 0, 1 );
                            }
                        }
                        l_U316 = 0;
                        if (NOT g_U11100)
                        {
                            g_U11100 = 1;
                            l_U316 = 1;
                        }
                        l_U300 = 1;
                    }
                }
                else if (NOT IS_MINIGAME_IN_PROGRESS())
                {
                    PRINTSTRING( "BIKER BACKUP - Minigame is finished \n" );
                    if (NOT l_U319)
                    {
                        sub_27595( 0 );
                    }
                    sub_27842( 1 );
                    if (l_U316)
                    {
                        g_U11100 = 0;
                        l_U316 = 0;
                    }
                    l_U300 = 0;
                }
                if ((NOT sub_1629()) AND (NOT g_U11091))
                {
                    switch (l_U352)
                    {
                        case 0:
                        if ((NOT g_U11116) AND (NOT l_U318))
                        {
                            if (g_U11090)
                            {
                                sub_28098( 1 );
                            }
                        }
                        else
                        {
                            sub_853( ref l_U365, 0 );
                            sub_28098( 2 );
                            l_U330 = -10000.00000000;
                        }
                        break;
                        case 1:
                        if ((l_U333 > 1000.00000000) AND (sub_28347( sub_1147() )))
                        {
                            if (NOT g_U11116)
                            {
                                if ((NOT sub_1451()) || (sub_28444()))
                                {
                                    if (l_U330 > 1000.00000000)
                                    {
                                        if (l_U330 < 5000.00000000)
                                        {
                                            if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                                            {
                                                if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 20.00000000, 20.00000000, 10.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 20.00000000, 20.00000000, 10.00000000, 0 )))
                                                {
                                                    if (sub_21644( "E1BEA", 7 ))
                                                    {
                                                        if (sub_22128( "E1BE_14", ref l_U365, l_U377, 1 ))
                                                        {
                                                            sub_28098( 2 );
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    sub_28098( 2 );
                                                }
                                            }
                                            else
                                            {
                                                sub_28098( 2 );
                                            }
                                        }
                                        else
                                        {
                                            sub_28098( 2 );
                                        }
                                    }
                                }
                            }
                            else
                            {
                                sub_853( ref l_U365, 0 );
                                sub_28098( 2 );
                                l_U330 = -10000.00000000;
                            }
                        }
                        break;
                        case 2:
                        if ((NOT sub_1451()) AND (sub_28347( sub_1147() )))
                        {
                            if ((l_U330 > 3000.00000000) AND (sub_23448( ref l_U365 )))
                            {
                                bVar2 = false;
                                if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                                {
                                    if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )))
                                    {
                                        sub_28098( 3 );
                                        bVar2 = true;
                                    }
                                }
                                if (NOT bVar2)
                                {
                                    if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                        {
                                            if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                            {
                                                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 15.00000000, 15.00000000, 10.00000000, 0 )))
                                                {
                                                    bVar2 = true;
                                                }
                                            }
                                            else
                                            {
                                                bVar2 = true;
                                            }
                                            if (bVar2)
                                            {
                                                sub_28098( 4 );
                                            }
                                        }
                                    }
                                }
                                if (NOT bVar2)
                                {
                                    if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                    {
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                        {
                                            if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
                                            {
                                                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 15.00000000, 15.00000000, 10.00000000, 0 )))
                                                {
                                                    bVar2 = true;
                                                }
                                            }
                                            else
                                            {
                                                bVar2 = true;
                                            }
                                            if (bVar2)
                                            {
                                                sub_28098( 5 );
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else if (l_U330 > 10000.00000000)
                        {
                            sub_28098( 7 );
                        }
                        break;
                        case 3:
                        switch (l_U354)
                        {
                            case 0:
                            if ((NOT sub_1451()) AND (l_U333 > 1000.00000000))
                            {
                                switch (g_U11137)
                                {
                                    case 0:
                                    l_U378 = "E1BB_JTC1";
                                    break;
                                    case 1:
                                    l_U378 = "E1BB_JTC2";
                                    break;
                                    case 2:
                                    l_U378 = "E1BB_JTC3";
                                    break;
                                    case 3:
                                    l_U378 = "E1BB_JTC4";
                                    break;
                                }
                                if (sub_21644( "E1BBAU", 7 ))
                                {
                                    if (sub_22128( l_U378, ref l_U365, l_U377, 1 ))
                                    {
                                        l_U354++;
                                    }
                                }
                            }
                            break;
                            case 1:
                            if ((NOT (sub_23448( ref l_U365 ))) || (sub_29583( l_U365 )))
                            {
                                if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                                {
                                    switch (l_U353)
                                    {
                                        case 0:
                                        if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 20.00000000, 20.00000000, 20.00000000, 0 ))) || (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 20.00000000, 20.00000000, 20.00000000, 0 ))))
                                        {
                                            l_U353 = 1;
                                            l_U338 = 0.00000000;
                                            sub_29792( ref l_U365 );
                                        }
                                        break;
                                        case 1:
                                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )))
                                        {
                                            if (l_U338 < 5000.00000000)
                                            {
                                                l_U353 = 2;
                                            }
                                            else
                                            {
                                                sub_853( ref l_U365, 0 );
                                            }
                                        }
                                        break;
                                        case 2:
                                        if (sub_23448( ref l_U371 ))
                                        {
                                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                            {
                                                if (sub_21644( "E1BBAU", 7 ))
                                                {
                                                    sub_30434( l_U378, ref l_U365, l_U377, 1 );
                                                    l_U353 = 0;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                }
                                else
                                {
                                    sub_853( ref l_U371, 0 );
                                    sub_853( ref l_U365, 0 );
                                }
                            }
                            else
                            {
                                g_U11137++;
                                if (g_U11137 > 3)
                                {
                                    g_U11137 = 0;
                                }
                                sub_28098( 7 );
                            }
                            break;
                        }
                        break;
                        case 4:
                        switch (l_U354)
                        {
                            case 0:
                            if ((NOT sub_1451()) AND (l_U333 > 1000.00000000))
                            {
                                if (NOT g_U15728[19])
                                {
                                    if ((g_U11135 == 2) || (g_U11135 == 3))
                                    {
                                        g_U11135 = 4;
                                    }
                                }
                                switch (g_U11135)
                                {
                                    case 0:
                                    l_U378 = "E1BB_JT1";
                                    break;
                                    case 1:
                                    l_U378 = "E1BB_JT2";
                                    break;
                                    case 2:
                                    l_U378 = "E1BB_JT3";
                                    break;
                                    case 3:
                                    l_U378 = "E1BB_JT4";
                                    break;
                                    case 4:
                                    l_U378 = "E1BB_JT5";
                                    break;
                                    case 5:
                                    l_U378 = "E1BB_JT6";
                                    break;
                                }
                                if (sub_21644( "E1BBAU", 7 ))
                                {
                                    if (sub_22128( l_U378, ref l_U365, l_U377, 1 ))
                                    {
                                        l_U354++;
                                    }
                                }
                            }
                            break;
                            case 1:
                            if ((NOT (sub_23448( ref l_U365 ))) || (sub_29583( l_U365 )))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
                                {
                                    switch (l_U353)
                                    {
                                        case 0:
                                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 20.00000000, 20.00000000, 20.00000000, 0 )))
                                        {
                                            l_U353 = 1;
                                            l_U338 = 0.00000000;
                                            sub_29792( ref l_U365 );
                                        }
                                        break;
                                        case 1:
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                        {
                                            if (l_U338 < 5000.00000000)
                                            {
                                                l_U353 = 2;
                                            }
                                            else
                                            {
                                                sub_853( ref l_U365, 0 );
                                            }
                                        }
                                        break;
                                        case 2:
                                        if (sub_23448( ref l_U371 ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 ))
                                            {
                                                if (sub_21644( "E1BBAU", 7 ))
                                                {
                                                    sub_30434( l_U378, ref l_U365, l_U377, 1 );
                                                    l_U353 = 0;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                }
                                else
                                {
                                    sub_853( ref l_U371, 0 );
                                    sub_853( ref l_U365, 0 );
                                }
                            }
                            else
                            {
                                g_U11135++;
                                if (g_U11135 > 5)
                                {
                                    g_U11135 = 0;
                                }
                                sub_28098( 7 );
                            }
                            break;
                        }
                        break;
                        case 5:
                        switch (l_U354)
                        {
                            case 0:
                            if ((NOT sub_1451()) AND (l_U333 > 1000.00000000))
                            {
                                switch (g_U11136)
                                {
                                    case 0:
                                    l_U378 = "E1BB_JC1";
                                    break;
                                    case 1:
                                    l_U378 = "E1BB_JC2";
                                    break;
                                    case 2:
                                    l_U378 = "E1BB_JC3";
                                    break;
                                    case 3:
                                    l_U378 = "E1BB_JC4";
                                    break;
                                    case 4:
                                    l_U378 = "E1BB_JC5";
                                    break;
                                    case 5:
                                    l_U378 = "E1BB_JC6";
                                    break;
                                }
                                if (sub_21644( "E1BBAU", 7 ))
                                {
                                    if (sub_22128( l_U378, ref l_U365, l_U377, 1 ))
                                    {
                                        l_U354++;
                                    }
                                }
                            }
                            break;
                            case 1:
                            if ((NOT (sub_23448( ref l_U365 ))) || (sub_29583( l_U365 )))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                {
                                    switch (l_U353)
                                    {
                                        case 0:
                                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 20.00000000, 20.00000000, 20.00000000, 0 )))
                                        {
                                            l_U353 = 1;
                                            l_U338 = 0.00000000;
                                            sub_29792( ref l_U365 );
                                        }
                                        break;
                                        case 1:
                                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                        {
                                            if (l_U338 < 5000.00000000)
                                            {
                                                l_U353 = 2;
                                            }
                                            else
                                            {
                                                sub_853( ref l_U365, 0 );
                                            }
                                        }
                                        break;
                                        case 2:
                                        if (sub_23448( ref l_U371 ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 ))
                                            {
                                                if (sub_21644( "E1BBAU", 7 ))
                                                {
                                                    sub_30434( l_U378, ref l_U365, l_U377, 1 );
                                                    l_U353 = 0;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                }
                                else
                                {
                                    sub_853( ref l_U371, 0 );
                                    sub_853( ref l_U365, 0 );
                                }
                            }
                            else
                            {
                                g_U11136++;
                                if (g_U11136 > 5)
                                {
                                    g_U11136 = 0;
                                }
                                sub_28098( 7 );
                            }
                            break;
                        }
                        break;
                        case 6:
                        switch (l_U354)
                        {
                            case 0:
                            if ((NOT sub_1451()) AND (l_U333 > 1000.00000000))
                            {
                                switch (g_U11138)
                                {
                                    case 0:
                                    l_U378 = "E1BB_CT1";
                                    break;
                                    case 1:
                                    l_U378 = "E1BB_CT2";
                                    break;
                                    case 2:
                                    l_U378 = "E1BB_CT3";
                                    break;
                                    case 3:
                                    l_U378 = "E1BB_CT4";
                                    break;
                                }
                                if (sub_21644( "E1BBAU", 7 ))
                                {
                                    if (sub_22128( l_U378, ref l_U365, l_U377, 1 ))
                                    {
                                        l_U354++;
                                    }
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_23448( ref l_U365 )))
                            {
                                if ((IS_CHAR_INJURED( g_U11028[0]._fU0 )) || (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                                else if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 ))) || (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 ))))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                            }
                            else
                            {
                                g_U11138++;
                                if (g_U11138 > 3)
                                {
                                    g_U11138 = 0;
                                }
                                sub_28098( 7 );
                            }
                            break;
                        }
                        break;
                        case 8:
                        switch (l_U354)
                        {
                            case 0:
                            if (l_U333 > 1000.00000000)
                            {
                                if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT sub_1451()))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        if (sub_21644( "E1BEA", 7 ))
                                        {
                                            if (sub_22128( "E1BE_15", ref l_U365, l_U377, 1 ))
                                            {
                                                l_U354++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        l_U354++;
                                    }
                                }
                                else
                                {
                                    l_U354++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_23448( ref l_U365 )))
                            {
                                if (IS_CHAR_INJURED( g_U11028[0]._fU0 ))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                            }
                            else
                            {
                                sub_28098( 7 );
                            }
                            break;
                        }
                        break;
                        case 9:
                        switch (l_U354)
                        {
                            case 0:
                            if (l_U333 > 1000.00000000)
                            {
                                if ((NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))) AND (NOT sub_1451()))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        if (sub_21644( "E1BEA", 7 ))
                                        {
                                            if (sub_22128( "E1BE_17", ref l_U365, l_U377, 1 ))
                                            {
                                                l_U354++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        l_U354++;
                                    }
                                }
                                else
                                {
                                    l_U354++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_23448( ref l_U365 )))
                            {
                                if (IS_CHAR_INJURED( g_U11028[1]._fU0 ))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                            }
                            else
                            {
                                sub_28098( 7 );
                            }
                            break;
                        }
                        break;
                        case 10:
                        switch (l_U354)
                        {
                            case 0:
                            if (l_U333 > 1000.00000000)
                            {
                                if ((NOT (IS_CHAR_INJURED( sub_1147() ))) AND (NOT sub_1451()))
                                {
                                    if (sub_21644( "E1BEA", 7 ))
                                    {
                                        if (sub_22128( "E1BE_16", ref l_U365, l_U377, 1 ))
                                        {
                                            l_U354++;
                                        }
                                    }
                                }
                                else
                                {
                                    l_U354++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_23448( ref l_U365 )))
                            {
                                if (IS_CHAR_INJURED( sub_1147() ))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                            }
                            else
                            {
                                sub_28098( 7 );
                            }
                            break;
                        }
                        break;
                        case 11:
                        switch (l_U354)
                        {
                            case 0:
                            if (l_U333 > 1000.00000000)
                            {
                                if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT sub_1451()))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        if (sub_21644( "E1BEA", 7 ))
                                        {
                                            if (sub_22128( "E1BE_18", ref l_U365, l_U377, 1 ))
                                            {
                                                PRINTSTRING( "Played terry smoke chat \n" );
                                                l_U354++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        PRINTSTRING( "terry smoke chat 1\n" );
                                        l_U354++;
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "terry smoke chat 2 \n" );
                                    l_U354++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_23448( ref l_U365 )))
                            {
                                if (IS_CHAR_INJURED( g_U11028[0]._fU0 ))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                            }
                            else
                            {
                                sub_28098( 7 );
                            }
                            break;
                        }
                        break;
                        case 12:
                        switch (l_U354)
                        {
                            case 0:
                            if (l_U333 > 1000.00000000)
                            {
                                if ((NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))) AND (NOT sub_1451()))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        if (sub_21644( "E1BEA", 7 ))
                                        {
                                            if (sub_22128( "E1BE_19", ref l_U365, l_U377, 1 ))
                                            {
                                                l_U354++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        l_U354++;
                                    }
                                }
                                else
                                {
                                    l_U354++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_23448( ref l_U365 )))
                            {
                                if (IS_CHAR_INJURED( g_U11028[1]._fU0 ))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                            }
                            else
                            {
                                sub_28098( 7 );
                            }
                            break;
                        }
                        break;
                        case 13:
                        switch (l_U354)
                        {
                            case 0:
                            if (l_U333 > 1000.00000000)
                            {
                                if ((NOT (IS_CHAR_INJURED( sub_1147() ))) AND (NOT sub_1451()))
                                {
                                    if (sub_21644( "E1BEA", 7 ))
                                    {
                                        if (sub_22128( "E1BE_20", ref l_U365, l_U377, 1 ))
                                        {
                                            l_U354++;
                                        }
                                    }
                                }
                                else
                                {
                                    l_U354++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_23448( ref l_U365 )))
                            {
                                if (IS_CHAR_INJURED( sub_1147() ))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                            }
                            else
                            {
                                sub_28098( 7 );
                            }
                            break;
                        }
                        break;
                        case 14:
                        switch (l_U354)
                        {
                            case 0:
                            if (l_U333 > 1000.00000000)
                            {
                                if ((NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))) AND (NOT sub_1451()))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 20.00000000, 20.00000000, 20.00000000, 0 ))
                                    {
                                        if (sub_21644( "E1BEA", 7 ))
                                        {
                                            if (sub_22128( "E1BE_4", ref l_U365, l_U377, 1 ))
                                            {
                                                l_U354++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        l_U354++;
                                    }
                                }
                                else
                                {
                                    l_U354++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_23448( ref l_U365 )))
                            {
                                if (IS_CHAR_INJURED( g_U11028[1]._fU0 ))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                            }
                            else
                            {
                                sub_28098( 7 );
                            }
                            break;
                        }
                        break;
                        case 15:
                        switch (l_U354)
                        {
                            case 0:
                            if (l_U333 > 1000.00000000)
                            {
                                if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT sub_1451()))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 20.00000000, 20.00000000, 20.00000000, 0 ))
                                    {
                                        if (sub_21644( "E1BEA", 7 ))
                                        {
                                            if (sub_22128( "E1BE_5", ref l_U365, l_U377, 1 ))
                                            {
                                                l_U354++;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        l_U354++;
                                    }
                                }
                                else
                                {
                                    l_U354++;
                                }
                            }
                            break;
                            case 1:
                            if (NOT (sub_23448( ref l_U365 )))
                            {
                                if (IS_CHAR_INJURED( g_U11028[0]._fU0 ))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                {
                                    sub_853( ref l_U365, 0 );
                                }
                            }
                            else
                            {
                                sub_28098( 7 );
                            }
                            break;
                        }
                        break;
                        case 7:
                        if (sub_35174())
                        {
                            if ((l_U334 > 10000.00000000) AND (NOT sub_1451()))
                            {
                                l_U379 = "";
                                if (l_U303)
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref I );
                                }
                                else
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref I );
                                }
                                switch (I)
                                {
                                    case 0:
                                    l_U379 = "SHOOT_AT_COPS";
                                    break;
                                    case 1:
                                    l_U379 = "KEEP_SHOOTING";
                                    break;
                                    case 2:
                                    l_U379 = "SHOOT_AT_ENEMY";
                                    break;
                                }
                                if (NOT (IS_STRING_NULL( l_U379 )))
                                {
                                    if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                                    {
                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                        if (I == 0)
                                        {
                                            SAY_AMBIENT_SPEECH( g_U11028[0]._fU0, l_U379, 1, 1, 2 );
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( g_U11028[1]._fU0, l_U379, 1, 1, 2 );
                                        }
                                        l_U334 = 0.00000000;
                                    }
                                    else if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                    {
                                        SAY_AMBIENT_SPEECH( g_U11028[0]._fU0, l_U379, 1, 1, 2 );
                                        l_U334 = 0.00000000;
                                    }
                                    else if ((IS_CHAR_INJURED( g_U11028[0]._fU0 )) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                                    {
                                        SAY_AMBIENT_SPEECH( g_U11028[1]._fU0, l_U379, 1, 1, 2 );
                                        l_U334 = 0.00000000;
                                    };;;
                                }
                            }
                        }
                        if (sub_35798())
                        {
                            if ((l_U335 > 10000.00000000) AND (NOT sub_1451()))
                            {
                                l_U379 = "";
                                GENERATE_RANDOM_INT_IN_RANGE( 1, 5, ref I );
                                switch (I)
                                {
                                    case 0:
                                    l_U379 = "BEEN_SHOT";
                                    break;
                                    case 1:
                                    l_U379 = "COME_UNDER_ATTACK";
                                    break;
                                    case 2:
                                    l_U379 = "COVER_ME";
                                    break;
                                    case 3:
                                    l_U379 = "TAKE_COVER";
                                    break;
                                    case 4:
                                    l_U379 = "SHIT";
                                    break;
                                }
                                if (NOT (IS_STRING_NULL( l_U379 )))
                                {
                                    if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                                    {
                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                        if (I == 0)
                                        {
                                            SAY_AMBIENT_SPEECH( g_U11028[0]._fU0, l_U379, 1, 1, 2 );
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( g_U11028[1]._fU0, l_U379, 1, 1, 2 );
                                        }
                                        l_U335 = 0.00000000;
                                    }
                                    else if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                    {
                                        SAY_AMBIENT_SPEECH( g_U11028[0]._fU0, l_U379, 1, 1, 2 );
                                        l_U335 = 0.00000000;
                                    }
                                    else if ((IS_CHAR_INJURED( g_U11028[0]._fU0 )) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                                    {
                                        SAY_AMBIENT_SPEECH( g_U11028[1]._fU0, l_U379, 1, 1, 2 );
                                        l_U335 = 0.00000000;
                                    };;;
                                }
                            }
                        }
                        if (IS_PLAYER_PLAYING( sub_1055() ))
                        {
                            if (IS_CHAR_SHOOTING( sub_1147() ))
                            {
                                if ((l_U336 > 20000.00000000) AND (NOT sub_1451()))
                                {
                                    l_U379 = "NICE_SHOOTING_JOHNNY";
                                    if (NOT (IS_STRING_NULL( l_U379 )))
                                    {
                                        if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                                        {
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                            if (I == 0)
                                            {
                                                SAY_AMBIENT_SPEECH( g_U11028[0]._fU0, l_U379, 1, 1, 2 );
                                            }
                                            else
                                            {
                                                SAY_AMBIENT_SPEECH( g_U11028[1]._fU0, l_U379, 1, 1, 2 );
                                            }
                                            l_U336 = 0.00000000;
                                        }
                                        else if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                        {
                                            SAY_AMBIENT_SPEECH( g_U11028[0]._fU0, l_U379, 1, 1, 2 );
                                            l_U336 = 0.00000000;
                                        }
                                        else if ((IS_CHAR_INJURED( g_U11028[0]._fU0 )) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                                        {
                                            SAY_AMBIENT_SPEECH( g_U11028[1]._fU0, l_U379, 1, 1, 2 );
                                            l_U336 = 0.00000000;
                                        };;;
                                    }
                                }
                            }
                        }
                        if (IS_PLAYER_PLAYING( sub_1055() ))
                        {
                            if (IS_CHAR_ON_FOOT( sub_1147() ))
                            {
                                GET_CHAR_SPEED( sub_1147(), ref fVar3 );
                                if (fVar3 > 4.00000000)
                                {
                                    if ((l_U337 > 20000.00000000) AND (NOT sub_1451()))
                                    {
                                        l_U379 = "WAIT_FOR_ME";
                                        if (NOT (IS_STRING_NULL( l_U379 )))
                                        {
                                            if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                                            {
                                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                                if (I == 0)
                                                {
                                                    if (IS_CHAR_ON_FOOT( g_U11028[0]._fU0 ))
                                                    {
                                                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( g_U11028[0]._fU0, sub_1147(), 15.00000000, 15.00000000, 5.00000000, 0 )))
                                                        {
                                                            SAY_AMBIENT_SPEECH( g_U11028[0]._fU0, l_U379, 1, 1, 2 );
                                                            l_U337 = 0.00000000;
                                                        }
                                                    }
                                                }
                                                else if (IS_CHAR_ON_FOOT( g_U11028[1]._fU0 ))
                                                {
                                                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( g_U11028[1]._fU0, sub_1147(), 15.00000000, 15.00000000, 5.00000000, 0 )))
                                                    {
                                                        SAY_AMBIENT_SPEECH( g_U11028[1]._fU0, l_U379, 1, 1, 2 );
                                                        l_U337 = 0.00000000;
                                                    }
                                                }
                                            }
                                            else if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                            {
                                                if (IS_CHAR_ON_FOOT( g_U11028[0]._fU0 ))
                                                {
                                                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( g_U11028[0]._fU0, sub_1147(), 15.00000000, 15.00000000, 5.00000000, 0 )))
                                                    {
                                                        SAY_AMBIENT_SPEECH( g_U11028[0]._fU0, l_U379, 1, 1, 2 );
                                                        l_U337 = 0.00000000;
                                                    }
                                                }
                                            }
                                            else if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                            {
                                                if (IS_CHAR_ON_FOOT( g_U11028[1]._fU0 ))
                                                {
                                                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( g_U11028[1]._fU0, sub_1147(), 15.00000000, 15.00000000, 5.00000000, 0 )))
                                                    {
                                                        SAY_AMBIENT_SPEECH( g_U11028[1]._fU0, l_U379, 1, 1, 2 );
                                                        l_U337 = 0.00000000;
                                                    }
                                                }
                                            };;;
                                        }
                                    }
                                }
                            }
                        }
                        switch (l_U356)
                        {
                            case 0:
                            if ((IS_CHAR_INJURED( g_U11028[0]._fU0 )) || (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                            {
                                l_U356++;
                            }
                            break;
                            case 1:
                            if (IS_CHAR_INJURED( g_U11028[0]._fU0 ))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 20.00000000, 20.00000000, 10.00000000, 0 ))
                                    {
                                        sub_28098( 14 );
                                        l_U356++;
                                    }
                                }
                            }
                            if (IS_CHAR_INJURED( g_U11028[1]._fU0 ))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 20.00000000, 20.00000000, 10.00000000, 0 ))
                                    {
                                        sub_28098( 15 );
                                        l_U356++;
                                    }
                                }
                            }
                            break;
                        }
                        if ((((l_U331 > 40000.00000000) AND (NOT sub_1451())) AND (l_U352 == 7)) AND (sub_28347( sub_1147() )))
                        {
                            bVar2 = false;
                            if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                            {
                                if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )))
                                {
                                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                    switch (I)
                                    {
                                        case 0:
                                        sub_28098( 6 );
                                        break;
                                        case 1:
                                        sub_28098( 10 );
                                        break;
                                    }
                                    bVar2 = true;
                                }
                            }
                            if (NOT bVar2)
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                        {
                                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 15.00000000, 15.00000000, 10.00000000, 0 )))
                                            {
                                                bVar2 = true;
                                            }
                                        }
                                        else
                                        {
                                            bVar2 = true;
                                        }
                                        if (bVar2)
                                        {
                                            sub_28098( 8 );
                                        }
                                    }
                                }
                            }
                            if (NOT bVar2)
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
                                        {
                                            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 15.00000000, 15.00000000, 10.00000000, 0 )))
                                            {
                                                bVar2 = true;
                                            }
                                        }
                                        else
                                        {
                                            bVar2 = true;
                                        }
                                        if (bVar2)
                                        {
                                            sub_28098( 9 );
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            GET_CHAR_SPEED( sub_1147(), ref fVar3 );
                            if (fVar3 > 2.00000000)
                            {
                                l_U331 = 0.00000000;
                            }
                            if (IS_CHAR_SHOOTING( sub_1147() ))
                            {
                                l_U331 = 0.00000000;
                            }
                            if (sub_1460())
                            {
                                l_U331 = 0.00000000;
                            }
                        }
                        if (l_U352 == 7)
                        {
                            switch (l_U355)
                            {
                                case 0:
                                if ((NOT sub_1451()) AND (l_U333 > 3000.00000000))
                                {
                                    if (sub_38638( g_U11028[0]._fU0 ))
                                    {
                                        bVar2 = false;
                                        if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) AND (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
                                        {
                                            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 )))
                                            {
                                                GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref I );
                                                switch (I)
                                                {
                                                    case 0:
                                                    sub_28098( 11 );
                                                    break;
                                                    case 1:
                                                    sub_28098( 12 );
                                                    break;
                                                    case 2:
                                                    sub_28098( 13 );
                                                    break;
                                                }
                                                bVar2 = true;
                                            }
                                        }
                                        if (NOT bVar2)
                                        {
                                            if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
                                            {
                                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[0]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                                                {
                                                    if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
                                                    {
                                                        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11028[1]._fU0, 15.00000000, 15.00000000, 10.00000000, 0 )))
                                                        {
                                                            bVar2 = true;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        bVar2 = true;
                                                    }
                                                    if (bVar2)
                                                    {
                                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                                                        switch (I)
                                                        {
                                                            case 0:
                                                            sub_28098( 8 );
                                                            break;
                                                            case 1:
                                                            sub_28098( 13 );
                                                            break;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        if (bVar2)
                                        {
                                            l_U332 = 0.00000000;
                                            l_U355++;
                                        }
                                    }
                                }
                                break;
                                case 1:
                                if (l_U332 > 60000.00000000)
                                {
                                    l_U355 = 0;
                                }
                                break;
                            }
                        }
                        break;
                    }
                }
                sub_39223();
                sub_45865();
                sub_47924( ref g_U11028 );
                break;
            }
        }
        else if (NOT (IS_PLAYER_PLAYING( sub_1055() )))
        {
            sub_853( ref l_U371, 0 );
            sub_853( ref l_U365, 0 );
        }
        for ( I = 0; I < 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
            {
                if (IS_GROUP_MEMBER( g_U11028[I]._fU0, sub_40248() ))
                {
                    REMOVE_CHAR_FROM_GROUP( g_U11028[I]._fU0 );
                }
            }
        }
        WAIT( 0 );
        if (g_U11113)
        {
            if (g_U11090)
            {
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                    {
                        g_U11123[I] = 1;
                    }
                }
            }
        }
        if (g_U11092)
        {
            for ( I = 0; I < 2; I++ )
            {
                if (NOT (sub_71253( g_U11028[I]._fU0 )))
                {
                    if (NOT l_U318)
                    {
                        DELETE_CHAR( ref g_U11028[I]._fU0 );
                    }
                }
                if (DOES_VEHICLE_EXIST( g_U11028[I]._fU4 ))
                {
                    if (NOT (sub_71392( g_U11028[I]._fU4 )))
                    {
                        if (NOT (IS_CAR_DEAD( g_U11028[I]._fU4 )))
                        {
                            if (NOT (IS_CAR_A_MISSION_CAR( g_U11028[I]._fU4 )))
                            {
                                sub_71542( g_U11028[I]._fU4 );
                                PRINTSTRING( "ABILITY_BACKUP - DELTE CAR 2!! \n" );
                                DELETE_CAR( ref g_U11028[I]._fU4 );
                            }
                        }
                    }
                }
                if (I == 0)
                {
                    sub_4967( g_U11028[I]._fU0, 0 );
                }
            }
        }
        if (IS_PLAYER_PLAYING( sub_1055() ))
        {
            if ((g_U11091) AND (NOT g_U11092))
            {
                if (NOT g_U11098)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref I );
                    if (I == 0)
                    {
                        l_U306 = 1;
                    }
                    else
                    {
                        l_U306 = 0;
                    }
                    SETTIMERA( 0 );
                    while (NOT sub_71900())
                    {
                        WAIT( 0 );
                    }
                }
            }
        }
        PRINTSTRING( "CLEANUP_BIKER_BACKUP_SCRIPT() - 2 \n" );
        sub_3847();;
        if (g_U11107)
        {
            if (NOT l_U302)
            {
                for ( I = 0; I < 2; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                    {
                        SET_CHAR_VISIBLE( g_U11028[I]._fU0, 0 );
                    }
                }
                l_U316 = 0;
                if (NOT g_U11100)
                {
                    g_U11100 = 1;
                    l_U316 = 1;
                }
                l_U302 = 1;
            }
        }
        else if (l_U302)
        {
            for ( I = 0; I < 2; I++ )
            {
                if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                {
                    SET_CHAR_VISIBLE( g_U11028[I]._fU0, 1 );
                }
            }
            if (l_U316)
            {
                g_U11100 = 0;
                l_U316 = 0;
            }
            l_U302 = 0;
        }
        for ( I = 0; I < 2; I++ )
        {
            if (NOT g_U11100)
            {
                if (NOT (DOES_BLIP_EXIST( l_U254[I] )))
                {
                    if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
                    {
                        sub_11230( ref g_U11028[I]._fU0, ref l_U254[I] );
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U254[I] ))
            {
                REMOVE_BLIP( l_U254[I] );
            }
        }
        if (g_U11106)
        {
            for ( I = 0; I < 2; I++ )
            {
                if (DOES_VEHICLE_EXIST( g_U11028[I]._fU4 ))
                {
                    bVar2 = true;
                    if (IS_CAR_A_MISSION_CAR( g_U11028[I]._fU4 ))
                    {
                        if (NOT l_U270[I])
                        {
                            bVar2 = false;
                        }
                        else if (NOT (l_U383[I] == g_U11028[I]._fU4))
                        {
                            bVar2 = false;
                        }
                    }
                    if (bVar2)
                    {
                        sub_71542( g_U11028[I]._fU4 );
                        PRINTSTRING( "ABILITY_BACKUP - DELTE CAR 3!! \n" );
                        DELETE_CAR( ref g_U11028[I]._fU4 );
                    }
                    g_U11028[I]._fU4 = nil;
                }
            }
            g_U11106 = 0;
        }
        for ( I = 0; I < 2; I++ )
        {
            g_U11087[I] = g_U11028[I]._fU4;
        }
        sub_72827( g_U11110 );
        if (NOT l_U269)
        {
            WAIT( 0 );
        }
        else
        {
            l_U269 = 0;
        }
    }
    return;
}

void sub_853(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_989(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11094) AND (NOT g_U11093))
    {
        if (bParam0)
        {
            g_U11092 = 1;
        }
        else
        {
            g_U11091 = 1;
        }
        g_U11098 = uParam1;
    }
    return;
}

void sub_1055()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1147()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1451()
{
    if (((sub_1460()) || (IS_MESSAGE_BEING_DISPLAYED())) || (IS_HELP_MESSAGE_BEING_DISPLAYED()))
    {
        return 1;
    }
    return 0;
}

int sub_1460()
{
    int I;

    if (NOT (IS_CHAR_INJURED( sub_1147() )))
    {
        if (IS_ANY_SPEECH_PLAYING( sub_1147() ))
        {
            return 1;
        }
    }
    for ( I = 0; I < g_U11028; I++ )
    {
        if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
        {
            if (IS_ANY_SPEECH_PLAYING( g_U11028[I]._fU0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_1629()
{
    if (NOT (IS_PLAYER_CONTROL_ON( sub_1055() )))
    {
        if ((ARE_WIDESCREEN_BORDERS_ACTIVE()) AND (sub_1663()))
        {
            return 1;
        }
        if (HAS_CUTSCENE_LOADED())
        {
            if (NOT HAS_CUTSCENE_FINISHED())
            {
                return 1;
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            return 1;
        }
    }
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        return 1;
    }
    return 0;
}

int sub_1663()
{
    if ((COUNT_SCRIPT_CAMS_BY_TYPE_AND_OR_STATE( 6, 1, 1 )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_1992(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -359167535;
        case 1: return -570033273;
        case 6: return -408052231;
        case 7: return -408052231;
        case 13: return -408052231;
        case 16: return -408052231;
        case 17: return -255678177;
        case 15: return -1759858085;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -570033273;
}

int sub_2232()
{
    REQUEST_MODEL( sub_1992( 6 ) );
    REQUEST_MODEL( sub_1992( 7 ) );
    REQUEST_MODEL( sub_2268( 6 ) );
    REQUEST_MODEL( sub_2268( 7 ) );
    REQUEST_SCRIPT( "ability_stats" );
    if (((((HAS_MODEL_LOADED( sub_1992( 6 ) )) AND (HAS_MODEL_LOADED( sub_1992( 7 ) ))) AND (HAS_MODEL_LOADED( sub_2268( 6 ) ))) AND (HAS_MODEL_LOADED( sub_2268( 7 ) ))) AND (HAS_SCRIPT_LOADED( "ability_stats" )))
    {
        return 1;
    }
    return 0;
}

int sub_2268(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_2567( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_2567(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_2922(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if ((uParam2^) == 25)
        {
            if (sub_2960( uParam0, uParam1, (uParam2^) ))
            {
                return 1;
            }
        }
        else if (sub_2960( uParam0, uParam1, -1 ))
        {
            return 1;
        }
        (uParam2^)++;
    }
    return 0;
}

int sub_2960(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    unknown uVar15;
    unknown uVar16;

    if (IS_PLAYER_PLAYING( sub_1055() ))
    {
        GET_CHAR_COORDINATES( sub_1147(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if (IS_CHAR_IN_WATER( sub_1147() ))
        {
            uVar5._fU8 = 1.00000000;
        }
    }
    uVar16 = GET_MAP_AREA_FROM_COORDS( uVar5 );
    if (NOT (iParam2 == -1))
    {
        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, iParam2, uVar16, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11, ref uVar15 );
    }
    else
    {
        GET_NEXT_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar16, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11 );
    }
    GET_DISTANCE_BETWEEN_COORDS_2D( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar12 );
    fVar14 = 1.00000000;
    if (NOT (sub_3181( uVar5, uVar8 )))
    {
        fVar14 *= 0.00000000;
    }
    fVar13 = uVar5._fU8 - uVar8._fU8;
    if (fVar13 < 0.00000000)
    {
        fVar13 *= -1.00000000;
    }
    if (NOT (fVar13 < 4.00000000))
    {
        if (fVar13 > 20.00000000)
        {
            fVar13 = 20.00000000;
        }
        fVar14 *= (20.00000000 - fVar13) / 20.00000000;
    }
    if (fVar12 < 100.00000000)
    {
        fVar14 *= fVar12 / 100.00000000;
    }
    if (sub_3413( uVar8._fU0, uVar8._fU4, uVar8._fU8, 5.00000000, 1128792064 ))
    {
        fVar14 *= 0.00000000;
    }
    if (fVar14 >= 1.00000000)
    {
        (uParam0^) = {uVar8};
        (uParam1^) = uVar11;
        return 1;
    }
    if (fVar14 > 0.00000000)
    {
        if (fVar14 > l_U322)
        {
            l_U380 = {uVar8};
            l_U329 = uVar11;
            l_U322 = fVar14;
        }
    }
    return 0;
}

int sub_3181(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    iVar9 = GET_MAP_AREA_FROM_COORDS( uParam3 );
    if (iVar8 == iVar9)
    {
        return 1;
    }
    return 0;
}

int sub_3413(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    GET_GAME_VIEWPORT_ID( ref uVar7 );
    if (CAM_IS_SPHERE_VISIBLE( uVar7, uParam0, uParam1, uParam2, uParam3 ))
    {
        if (IS_PLAYER_PLAYING( sub_1055() ))
        {
            GET_CHAR_COORDINATES( sub_1147(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {(vector( uParam2, uParam1, uParam0)) - vVar8};
            if ((VMAG( uVar11 )) < fParam4)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_3847()
{
    int I;
    unknown uVar3;

    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U362[0] );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U362[1] );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_2268( 6 ) );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_2268( 7 ) );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ability_stats" );
    for ( I = 0; I < 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
        {
            REMOVE_CHAR_FROM_GROUP( g_U11028[I]._fU0 );
            OPEN_SEQUENCE_TASK( ref uVar3 );
            if (DOES_VEHICLE_EXIST( g_U11028[I]._fU4 ))
            {
                if (IS_VEH_DRIVEABLE( g_U11028[I]._fU4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( g_U11028[I]._fU0, g_U11028[I]._fU4 )))
                    {
                        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( g_U11028[I]._fU0, g_U11028[I]._fU4, 20.00000000, 20.00000000, 5.00000000, 0 )))
                        {
                            TASK_GOTO_CAR( 0, g_U11028[I]._fU4, 9999999, 10.00000000 );
                        }
                        TASK_ENTER_CAR_AS_DRIVER( 0, g_U11028[I]._fU4, -2 );
                        TASK_CAR_DRIVE_WANDER( 0, g_U11028[I]._fU4, 25.00000000, 2 );
                    }
                    else
                    {
                        TASK_CAR_DRIVE_WANDER( 0, g_U11028[I]._fU4, 25.00000000, 2 );
                    }
                }
                else
                {
                    TASK_WANDER_STANDARD( 0 );
                }
            }
            else
            {
                TASK_WANDER_STANDARD( 0 );
            }
            CLOSE_SEQUENCE_TASK( uVar3 );
            TASK_PERFORM_SEQUENCE( g_U11028[I]._fU0, uVar3 );
            CLEAR_SEQUENCE_TASK( uVar3 );
            SET_CHAR_KEEP_TASK( g_U11028[I]._fU0, 1 );
        }
        if (NOT l_U318)
        {
            if (l_U273[I])
            {
                if (DOES_VEHICLE_EXIST( l_U383[I] ))
                {
                    PRINTSTRING( "ABILITY_BACKUP - MARK_CAR_AS_NO_LONGER_NEEDED - cleanup - bBackupBikerBikeSetAsTemporaryMissionCar \n" );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U383[I] );
                    l_U383[I] = nil;
                }
            }
            sub_4507( ref g_U11028[I], 0 );
        }
        g_U11081[I] = nil;
        g_U11087[I] = nil;
        g_U11117[I] = 0;
        PRINTSTRING( "ABILITY_BACKUP - MARK_CAR_AS_NO_LONGER_NEEDED - Cleanup \n" );
    }
    for ( I = 0; I < 2; I++ )
    {
        if (DOES_BLIP_EXIST( l_U257[I] ))
        {
            REMOVE_BLIP( l_U257[I] );
        }
        if (DOES_BLIP_EXIST( l_U254[I] ))
        {
            REMOVE_BLIP( l_U254[I] );
        }
        if (DOES_BLIP_EXIST( l_U260[I] ))
        {
            REMOVE_BLIP( l_U260[I] );
        }
    }
    sub_4967( g_U11028[0]._fU0, 1 );
    if (l_U296)
    {
        SET_RADAR_ZOOM( 0 );
        l_U296 = 0;
    }
    sub_5405( 1, "BB_WAYP_H1" );
    sub_5405( 1, "BB_WAYP_H2" );
    sub_5755( 1 );
    sub_5796();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_4507(int iParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( iParam0->_fU100 ))
    {
        REMOVE_BLIP( iParam0->_fU100 );
    }
    if ((DOES_VEHICLE_EXIST( iParam0->_fU4 )) AND (uParam1))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
    }
    if (DOES_CHAR_EXIST( iParam0->_fU0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            SET_CHAR_KEEP_TASK( iParam0->_fU0, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( iParam0 + 0 );
    }
    iParam0->_fU0 = nil;
    iParam0->_fU4 = nil;
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU36 = 4;
    return;
}

void sub_4967(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_OBJECT_EXIST( l_U116 ))
        {
            DELETE_OBJECT( ref l_U116 );
            l_U116 = nil;
        }
    }
    else if (DOES_OBJECT_EXIST( l_U116 ))
    {
        if (IS_OBJECT_ATTACHED( l_U116 ))
        {
            DETACH_OBJECT( l_U116, 1 );
        }
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U116 );
        l_U116 = nil;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (HAVE_ANIMS_LOADED( l_U118 ))
        {
            if (((IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U119 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U120 ))) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U121 )))
            {
                CLEAR_CHAR_SECONDARY_TASK( uParam0 );
            }
        }
    }
    if (HAVE_ANIMS_LOADED( l_U118 ))
    {
        REMOVE_ANIMS( l_U118 );
    }
    if (HAS_MODEL_LOADED( -268530289 ))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
    }
    l_U117 = nil;
    l_U111 = 0.00000000;
    if (l_U105)
    {
        sub_5283( ref l_U115 );
        l_U105 = 0;
    }
    return;
}

void sub_5283(unknown uParam0)
{
    if (sub_5295( (uParam0^) ))
    {
        STOP_PTFX( (uParam0^) );
    }
    (uParam0^) = 0;
    return;
}

int sub_5295(int iParam0)
{
    if (iParam0 > 0)
    {
        return 1;
    }
    return 0;
}

void sub_5405(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((g_U10468 == iParam0) AND (l_U5))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_5626();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_1055(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_5626()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_5755(boolean bParam0)
{
    if (bParam0)
    {
        g_U11112 = 0;
    }
    else
    {
        g_U11112 = 1;
    }
    return;
}

void sub_5796()
{
    g_U11091 = 0;
    g_U11092 = 0;
    g_U11090 = 0;
    g_U11093 = 0;
    g_U11094 = 0;
    g_U11097 = 0;
    g_U11098 = 0;
    g_U11099 = 0;
    g_U11100 = 0;
    g_U11101 = 0;
    g_U11102 = 0;
    g_U11116 = 0;
    g_U11132 = 0;
    g_U11133 = 0;
    return;
}

int sub_6140(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    if ((NOT (sub_6151( uParam0 ))) || (NOT (HAS_MODEL_LOADED( sub_1992( uParam0 ) ))))
    {
        sub_6206( uParam0 );
        REQUEST_MODEL( sub_1992( uParam0 ) );
        return 0;
    }
    sub_6277( uParam1, uParam4, sub_2268( uParam0 ), sub_1992( uParam0 ), iParam5, 1 );
    sub_7784( iParam5->_fU4, sub_1992( uParam0 ), uParam0 );
    SUPPRESS_CAR_MODEL( sub_1992( uParam0 ) );
    sub_9290( uParam0, iParam5->_fU0 );
    sub_10290( uParam0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_1992( uParam0 ) );
    }
    return 1;
}

void sub_6151(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_2268( uParam0 ) );
}

void sub_6206(unknown uParam0)
{
    REQUEST_MODEL( sub_2268( uParam0 ) );
    return;
}

void sub_6277(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7)
{
    unknown uVar10;

    sub_6311( vParam0 + (vector( 2.00000000, 0.00000000, 0.00000000)), uParam3, uParam4, iParam6 );
    uVar10 = sub_7736( vParam0, uParam3, uParam5 );
    WARP_CHAR_INTO_CAR( iParam6->_fU0, uVar10 );
    GIVE_PED_HELMET_WITH_OPTS( iParam6->_fU0, 1 );
    iParam6->_fU4 = uVar10;
    if (NOT bParam7)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
    }
    return;
}

void sub_6311(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_6909( sub_6321( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_7037( iParam5 );
    return;
}

void sub_6321(unknown uParam0)
{
    int Result;

    Result = 0;
    switch ((uParam0^))
    {
        case -159126838:
        case 301427732:
        case -570033273:
        case -408052231:
        case 584879743:
        case 802082487:
        case -359167535:
        case 1439613707:
        case 1737188996:
        case -411638179:
        case -2130437771:
        case -1832534792:
        case -1670328242:
        case 188410296:
        case 1414790133:
        case 630267504:
        case 1719115836:
        case 1914397972:
        case -2138439183:
        case 1215631816:
        case 1706970202:
        case 717510247:
        case 965080042:
        case 693982133:
        case 454735664:
        case 1409362172:
        case 767450539:
        case 1686719296:
        case 1917871822:
        case 422524045:
        Result = 1;
        break;
        case -571009320:
        case 2006142190:
        case -1606187161:
        case -77769032:
        case -618617997:
        case 977480632:
        case -1159156463:
        case 479817841:
        case 226415164:
        case 15972646:
        case -2107556865:
        case -150646512:
        case 690697563:
        case -504027408:
        Result = 2;
        break;
        case -114291515:
        case -891462355:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case 236691815:
        case 1590280898:
        Result = 3;
        break;
    }
    if (Result == 0)
    {
        if (((((((uParam0^) == (sub_2268( 0 ))) || ((uParam0^) == (sub_2268( 1 )))) || ((uParam0^) == (sub_2268( 6 )))) || ((uParam0^) == (sub_2268( 7 )))) || ((uParam0^) == (sub_2268( 13 )))) || ((uParam0^) == (sub_2268( 16 ))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_2268( 15 ))) || ((uParam0^) == (sub_2268( 17 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_6909(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 9;
        break;
        case 2:
        return 8;
        break;
    }
    return 25;
}

void sub_7037(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_7076( iParam0 + 0 );
    if (iVar3 == 1)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 0, 0 );
        SET_CHAR_NEVER_TARGETTED( iParam0->_fU0, 1 );
    }
    else if (iVar3 == 3)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 1, 0 );
    }
    else if (iVar3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_7246( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_7246( iVar3 ) );
    };;;
    SET_CHAR_PROOFS( iParam0->_fU0, 0, 0, 0, 1, 0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam0->_fU0, 1 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
    SET_PED_FALL_OFF_BIKES_WHEN_SHOT( iParam0->_fU0, 0 );
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU92 = 0;
    iParam0->_fU16 = {0, 0, 0};
    iParam0->_fU28 = 18.00000000;
    iParam0->_fU32 = 0;
    iParam0->_fU36 = 4;
    iParam0->_fU40 = 2;
    iParam0->_fU88 = 12;
    iParam0->_fU96 = 5;
    if (iVar3 == 1)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) == 0)
        {
            sub_7533( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_2268( 6 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_2268( 7 ) ))))
        {
            sub_7533( iParam0 );
        }
    }
    return;
}

void sub_7076(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_6321( ref uVar3 );
    }
    return Result;
}

int sub_7246(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 6;
        break;
        case 2:
        return 5;
        break;
    }
    return 22;
}

void sub_7533(int iParam0)
{
    if (l_U177)
    {
        ADD_BLIP_FOR_CHAR( iParam0->_fU0, iParam0 + 100 );
        SET_BLIP_AS_FRIENDLY( iParam0->_fU100, 1 );
        CHANGE_BLIP_PRIORITY( iParam0->_fU100, 0 );
        SET_BLIP_AS_SHORT_RANGE( iParam0->_fU100, 1 );
        CHANGE_BLIP_SCALE( iParam0->_fU100, 0.50000000 );
        CHANGE_BLIP_DISPLAY( iParam0->_fU100, 5 );
    }
    return;
}

void sub_7736(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_7784( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

void sub_7784(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

void sub_9290(unknown uParam0, unknown uParam1)
{
    sub_9302( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_9302(unknown uParam0, int iParam1)
{
    sub_9313( uParam0 );
    if (iParam1 == 22)
    {
        sub_9413( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_10072( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_9313(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_9413(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_1147()) AND (g_U15728[19]))
        {
            if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
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

void sub_10072(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_9413( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_9413( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_10290(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_2268( uParam0 ) );
    return;
}

void sub_10837(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_11060(int iParam0, unknown uParam1)
{
    iParam0->_fU88 = uParam1;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, sub_11104( iParam0, 1 ) );
    }
    return;
}

boolean sub_11104(int iParam0, unknown uParam1)
{
    return ((iParam0->_fU88) AND (uParam1)) > 0;
}

void sub_11230(unknown uParam0, unknown uParam1)
{
    ADD_BLIP_FOR_CHAR( (uParam0^), uParam1 );
    SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
    CHANGE_BLIP_COLOUR( (uParam1^), 3 );
    if (g_U12303)
    {
        CHANGE_BLIP_DISPLAY( (uParam1^), 0 );
        l_U305 = 1;
    }
    else
    {
        CHANGE_BLIP_DISPLAY( (uParam1^), 1 );
        l_U305 = 0;
    }
    return;
}

void sub_11343(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;

    if (bParam1)
    {
        if (sub_11359())
        {
            if (NOT sub_11417())
            {
                sub_11460();
            }
        }
    }
    if (DOES_CHAR_EXIST( iParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            for ( I = 0; I < 2; I++ )
            {
                if (g_U11028[I]._fU0 == iParam0)
                {
                    iVar5 = I;
                }
            }
            if (bParam1)
            {
                sub_11589( ref g_U11028[iVar5], ref g_U11081[iVar5], ref g_U11087[iVar5] );
            }
            else if (IS_PLAYER_PLAYING( sub_1055() ))
            {
                CLEAR_CHAR_TASKS( g_U11028[iVar5]._fU0 );
                sub_11934( ref g_U11028[iVar5], sub_1147() );
                if (g_U11090)
                {
                    sub_12961( ref g_U11028[iVar5], 4 );
                }
            }
            g_U11117[iVar5] = bParam1;
        }
    }
    return;
}

int sub_11359()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

void sub_11417()
{
    if (NOT sub_11359())
    {
        return 0;
    }
    return g_U11090;
}

void sub_11460()
{
    g_U11090 = 1;
    return;
}

void sub_11589(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_11654( iParam0 ) ))
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
        {
            g_U11114 = 1;
        }
        TASK_STAND_STILL( iParam0->_fU0, -2 );
    }
    return;
}

void sub_11654(int iParam0)
{
    unknown Result;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref Result );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            GET_DRIVER_OF_CAR( Result, ref iVar4 );
            if (iVar4 == iParam0->_fU0)
            {
                return Result;
            }
        }
    }
    return nil;
}

void sub_11934(int iParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (IS_CHAR_INJURED( iParam1 ))
    {
        return;
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                if (sub_12030( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam0->_fU8 == sub_1147()) AND (iParam1 != sub_1147()))
    {
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        if (DOES_CHAR_EXIST( g_U11197 ))
        {
            if ((g_U11197 == g_U11081[0]) || (g_U11197 == g_U11081[1]))
            {
                g_U11197 = nil;
            }
        }
        if (DOES_CHAR_EXIST( g_U11198 ))
        {
            if ((g_U11198 == g_U11081[0]) || (g_U11198 == g_U11081[1]))
            {
                g_U11198 = nil;
            }
        }
        g_U11114 = 1;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND ((iParam0->_fU8 != iParam1) || (iParam0->_fU36 != 1)))
    {
        TASK_PAUSE( iParam0->_fU0, 30 );
    }
    iParam0->_fU8 = iParam1;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_PED_IN_GROUP( iParam0->_fU0 ))
        {
            GET_PED_GROUP_INDEX( iParam0->_fU0, ref uVar5 );
            GET_GROUP_LEADER( uVar5, ref iVar6 );
            if (DOES_GROUP_EXIST( uVar5 ))
            {
                GET_GROUP_LEADER( uVar5, ref iVar6 );
                if (iVar6 != iParam0->_fU8)
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
            }
        }
        sub_12515( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_1147())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_12630( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_12630( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_12630( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_12630( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_12630( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_12030(unknown uParam0, unknown uParam1)
{
    return (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 )) AND (NOT (sub_12054( uParam0, uParam1 )));
}

boolean sub_12054(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_12515(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_12630(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_1147())
    {
        if (iParam1 == 1)
        {
            g_U11197 = iParam0->_fU0;
            if (g_U11198 == iParam0->_fU0)
            {
                g_U11198 = nil;
            }
        }
        if (iParam1 == 0)
        {
            g_U11198 = iParam0->_fU0;
            if (g_U11197 == iParam0->_fU0)
            {
                g_U11197 = nil;
            }
        }
    }
    if ((iParam0->_fU0 != g_U11081[0]) AND (iParam0->_fU0 != g_U11081[1]))
    {
        g_U11114 = 1;
    }
    iParam0->_fU40 = iParam1;
    return;
}

void sub_12961(int iParam0, int iParam1)
{
    iParam0->_fU88 = (iParam0->_fU88) || (iParam1);
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        }
    }
    return;
}

void sub_13479(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( g_U11081[uParam0] )))
    {
        SET_CHAR_MAX_HEALTH( g_U11081[uParam0], FLOOR( g_U11144[uParam0] ) );
        GET_CHAR_HEALTH( g_U11081[uParam0], ref iVar3 );
        iVar3 += FLOOR( g_U11165[uParam0] );
        SET_CHAR_HEALTH( g_U11081[uParam0], iVar3 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_13618( g_U11147[uParam0], uParam0 ), 30000, 0 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_14272( g_U11147[uParam0], uParam0 ), 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( g_U11081[uParam0], sub_14272( g_U11147[uParam0], uParam0 ), 0 );
        SET_CHAR_ACCURACY( g_U11081[uParam0], FLOOR( g_U11150[uParam0] ) );
        SET_CHAR_SHOOT_RATE( g_U11081[uParam0], FLOOR( g_U11153[uParam0] ) );
        SET_CHAR_FIRE_DAMAGE_MULTIPLIER( g_U11081[uParam0], g_U11156[uParam0] );
    }
    return;
}

int sub_13618(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned PISTOL \n" );
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned EPISODIC_7 \n" );
            return 27;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned UZI \n" );
            return 12;
        }
        break;
        case 1:
        if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned PISTOL \n" );
            return 7;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned EPISODIC 6 \n" );
            return 26;
        }
        break;
    }
    PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - returned default value \n" );
    return 7;
}

int sub_14272(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 27;
        }
        else if (fParam0 < 8.00000000)
        {
            return 12;
        }
        else if (fParam0 < 13.00000000)
        {
            return 14;
        }
        else
        {
            return 15;
        };;;;
        break;
        case 1:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 10;
        }
        else if (fParam0 < 8.00000000)
        {
            return 26;
        }
        else if (fParam0 < 13.00000000)
        {
            return 11;
        }
        else
        {
            return 22;
        };;;;
        break;
    }
    return 7;
}

int sub_14696(int iParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        if (iParam0 == g_U11028[I]._fU0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_14825(int iParam0)
{
    if (NOT (l_U341 == iParam0))
    {
        l_U341 = iParam0;
        l_U342 = 0;
        l_U269 = 1;
    }
    return;
}

int sub_15909(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_1055() ))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_1147() )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar3 );
                GET_KEY_FOR_CHAR_IN_ROOM( sub_1147(), ref iVar4 );
                if (iVar3 == iVar4)
                {
                    return 1;
                }
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_16324(unknown uParam0)
{
    unknown uVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
        if (NOT (DOES_CHAR_EXIST( uVar3 )))
        {
            if (IS_CAR_PASSENGER_SEAT_FREE( uParam0, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_16753(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, sub_16764() ))
    {
        return 1;
    }
    return 0;
}

int sub_16764()
{
    return 301427732;
}

void sub_18684(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    if (NOT g_U11100)
    {
        if (l_U304)
        {
            if (NOT (IS_CHAR_INJURED( g_U11028[iParam4]._fU0 )))
            {
                if (IS_CHAR_IN_ANY_CAR( g_U11028[iParam4]._fU0 ))
                {
                    if (DOES_BLIP_EXIST( (uParam0^) ))
                    {
                        if (NOT ((GET_BLIP_INFO_ID_TYPE( (uParam0^) )) == 4))
                        {
                            REMOVE_BLIP( (uParam0^) );
                        }
                    }
                    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
                    {
                        ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
                    }
                    if (DOES_BLIP_EXIST( (uParam0^) ))
                    {
                        SET_BLIP_COORDINATES( (uParam0^), uParam1 );
                    }
                }
                else if (DOES_BLIP_EXIST( (uParam0^) ))
                {
                    if ((GET_BLIP_INFO_ID_TYPE( (uParam0^) )) == 4)
                    {
                        REMOVE_BLIP( (uParam0^) );
                    }
                }
                if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
                {
                    ADD_BLIP_FOR_CHAR( g_U11028[iParam4]._fU0, uParam0 );
                }
            }
            if (DOES_BLIP_EXIST( (uParam0^) ))
            {
                CHANGE_BLIP_COLOUR( (uParam0^), 3 );
                if (iParam4 == 0)
                {
                    CHANGE_BLIP_SPRITE( (uParam0^), 95 );
                }
                else
                {
                    CHANGE_BLIP_SPRITE( (uParam0^), 96 );
                }
                if (NOT (sub_19029( g_U11028[iParam4]._fU0 )))
                {
                    CHANGE_BLIP_DISPLAY( (uParam0^), 2 );
                }
                else
                {
                    CHANGE_BLIP_DISPLAY( (uParam0^), 0 );
                }
                CHANGE_BLIP_PRIORITY( (uParam0^), 3 );
                if (iParam4 == 0)
                {
                    CHANGE_BLIP_NAME_FROM_TEXT_FILE( (uParam0^), "BLIP_95" );
                }
                else
                {
                    CHANGE_BLIP_NAME_FROM_TEXT_FILE( (uParam0^), "BLIP_96" );
                }
            }
        }
    }
    else if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        REMOVE_BLIP( (uParam0^) );
    }
    return;
}

int sub_19029(unknown uParam0)
{
    unknown uVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_PLAYER_PLAYING( sub_1055() ))
        {
            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1147() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1147(), ref uVar3 );
                if (NOT (IS_CAR_DEAD( uVar3 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam0, uVar3 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_20174()
{
    if ((((((((sub_20184( 4 )) || (sub_20184( 5 ))) || (sub_20184( 6 ))) || (sub_20184( 7 ))) || (sub_20184( 14 ))) || (sub_20184( 15 ))) || (sub_20184( 16 ))) || (sub_20184( 17 )))
    {
        return 1;
    }
    return 0;
}

int sub_20184(unknown uParam0)
{
    int iVar3;

    GET_PAD_STATE( 0, uParam0, ref iVar3 );
    if (iVar3 > 128)
    {
        return 1;
        break;
    }
    return 0;
}

int sub_21644(unknown uParam0, unknown uParam1)
{
    if (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 ))
    {
        sub_21671( uParam0 );
        if (NOT (IS_CHAR_INJURED( sub_1147() )))
        {
            sub_21810( 0, sub_1147(), "JOHNNY", 0 );
        }
        if (NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 )))
        {
            sub_21810( 1, g_U11028[0]._fU0, "TERRY", 0 );
        }
        if (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 )))
        {
            sub_21810( 2, g_U11028[1]._fU0, "CLAY", 0 );
        }
        return 1;
    }
    else if (NOT (IS_STREAMING_ADDITIONAL_TEXT( uParam1 )))
    {
        REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
    }
    return 0;
}

void sub_21671(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_21688();
    return;
}

void sub_21688()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U6._fU16[I]._fU0 = nil;
        StrCopy( ref l_U6._fU16[I]._fU4, "", 32 );
        l_U6._fU344[I] = 0;
    }
    return;
}

void sub_21810(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_21890( "\n PED NUMBER ", uParam0 );
    sub_21930( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_21890(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_21930(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_22128(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_22149( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_22149(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_22203( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_22203(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_22225( iParam1 )))
    {
        return 0;
    }
    l_U6._fU384 = 0;
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_22913( ref g_U8947, ref l_U6 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_22225(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_22302( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_22302( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_22302( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_22302(unknown uParam0)
{
    return;
}

void sub_22913(int iParam0, int iParam1)
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

int sub_23448(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            return 0;
        }
    }
    return 1;
}

void sub_23665(unknown uParam0)
{
    float fVar3;
    unknown uVar4;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if ((NOT IS_MINIGAME_IN_PROGRESS()) AND (IS_PED_A_MISSION_PED( uParam0 )))
            {
                GET_FRAME_TIME( ref fVar3 );
                l_U110 += fVar3 * 1000.00000000;
                l_U111 += fVar3 * 1000.00000000;
                if (l_U107)
                {
                    if (HAVE_ANIMS_LOADED( l_U118 ))
                    {
                        if ((((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U119 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U120 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U121 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U122 ))))
                        {
                            l_U110 = 0.00000000;
                            sub_23900( uParam0, 0 );
                            l_U107 = 0;
                        }
                    }
                    else
                    {
                        l_U110 = 0.00000000;
                        sub_23900( uParam0, 0 );
                        l_U107 = 0;
                    }
                }
                switch (l_U114)
                {
                    case 0:
                    if (NOT (sub_24019( uParam0 )))
                    {
                        l_U111 = 0.00000000;
                    }
                    if (l_U104)
                    {
                        sub_24997( uParam0 );
                    }
                    if (l_U111 > 5000.00000000)
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U118 )))
                        {
                            REQUEST_ANIMS( l_U118 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -268530289 )))
                        {
                            REQUEST_MODEL( -268530289 );
                        }
                        if (HAVE_ANIMS_LOADED( l_U118 ))
                        {
                            if ((NOT (IS_CHAR_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))))
                            {
                                sub_23900( uParam0, 1 );
                                TASK_CLEAR_LOOK_AT( uParam0 );
                                TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U119, l_U118, 8.00000000, -1, 3328 );
                                l_U109 = 0;
                                l_U107 = 1;
                                l_U110 = 0.00000000;
                                l_U114 = 1;
                            }
                            else
                            {
                                sub_24997( uParam0 );
                                l_U110 = 0.00000000;
                                l_U114 = 1;
                            }
                        }
                    }
                    else if (HAVE_ANIMS_LOADED( l_U118 ))
                    {
                        REMOVE_ANIMS( l_U118 );
                    }
                    if (HAS_MODEL_LOADED( -268530289 ))
                    {
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
                    }
                    break;
                    case 1:
                    if (sub_24030( uParam0 ))
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U118 )))
                        {
                            REQUEST_ANIMS( l_U118 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -268530289 )))
                        {
                            REQUEST_MODEL( -268530289 );
                        }
                        if (DOES_OBJECT_EXIST( l_U116 ))
                        {
                            if (HAVE_ANIMS_LOADED( l_U118 ))
                            {
                                if (((((((((((((NOT (IS_PED_RAGDOLL( uParam0 ))) AND (NOT (IS_CHAR_DUCKING( uParam0 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U119 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U120 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U121 )))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U122 )))) AND (NOT (IS_CHAR_GESTURING( uParam0 )))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 )))) AND (NOT (sub_25847( uParam0 )))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( uParam0 )))) AND (NOT (IS_SCRIPTED_SPEECH_PLAYING( uParam0 )))) AND (NOT (sub_24191( uParam0 )))) AND (NOT l_U109))
                                {
                                    if ((l_U111 > 60000.00000000) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))))
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_23900( uParam0, 1 );
                                        TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U122, l_U118, 8.00000000, -1, 3328 );
                                        l_U111 = 0.00000000;
                                        l_U107 = 1;
                                    }
                                    else if (l_U110 > 10000.00000000)
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_23900( uParam0, 1 );
                                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U120, l_U118, 8.00000000, -1, 3328 );
                                        }
                                        else
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U121, l_U118, 8.00000000, -1, 3328 );
                                        }
                                        l_U107 = 1;
                                        l_U110 = 0.00000000;
                                    }
                                }
                            }
                            if (NOT l_U109)
                            {
                                if (NOT l_U105)
                                {
                                    if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                                    {
                                        if (HAVE_ANIMS_LOADED( l_U118 ))
                                        {
                                            if (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U119 ))
                                            {
                                                GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U118, l_U119, ref fVar3 );
                                                if (fVar3 > l_U113)
                                                {
                                                    l_U115 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U116, l_U129, l_U132, 1065353216 );
                                                    l_U105 = 1;
                                                }
                                            }
                                            else
                                            {
                                                l_U115 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U116, l_U129, l_U132, 1065353216 );
                                                l_U105 = 1;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
                                        if (DOES_VEHICLE_EXIST( uVar4 ))
                                        {
                                            if (NOT (IS_CAR_DEAD( uVar4 )))
                                            {
                                                if (NOT (DOES_CAR_HAVE_ROOF( uVar4 )))
                                                {
                                                    if (NOT (sub_26473( uParam0 )))
                                                    {
                                                        l_U115 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U116, l_U129, l_U132, 1065353216 );
                                                        l_U105 = 1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else if ((sub_26630( uParam0 )) || (sub_26473( uParam0 )))
                                {
                                    sub_5283( ref l_U115 );
                                    l_U105 = 0;
                                }
                            }
                            if (HAVE_ANIMS_LOADED( l_U118 ))
                            {
                                if (NOT l_U109)
                                {
                                    if (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U122 ))
                                    {
                                        GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U118, l_U122, ref fVar3 );
                                        if (fVar3 > 0.84000000)
                                        {
                                            if (DOES_OBJECT_EXIST( l_U116 ))
                                            {
                                                if (IS_OBJECT_ATTACHED( l_U116 ))
                                                {
                                                    APPLY_FORCE_TO_OBJECT( l_U116, 1, l_U135, 0.00000000, 0.00000000, 0.00000000, 0, 1, 1, 1 );
                                                    DETACH_OBJECT( l_U116, 1 );
                                                    l_U109 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U122 )))
                                {
                                    sub_4967( uParam0, 1 );
                                    l_U114 = 0;
                                    l_U111 = -20000.00000000;
                                }
                            }
                        }
                        else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            if (HAVE_ANIMS_LOADED( l_U118 ))
                            {
                                if (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U119 ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U118, l_U119, ref fVar3 );
                                    if (NOT (DOES_OBJECT_EXIST( l_U116 )))
                                    {
                                        if (fVar3 > l_U112)
                                        {
                                            sub_24997( uParam0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_24997( uParam0 );
                                }
                            }
                        }
                        else
                        {
                            sub_24997( uParam0 );
                        }
                        if (sub_25847( uParam0 ))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( uParam0 );
                        }
                    }
                    else
                    {
                        l_U114 = 0;
                        l_U111 = 0.00000000;
                    }
                    break;
                }
            }
            else
            {
                sub_4967( uParam0, 0 );
                if (l_U108)
                {
                    PRINTSTRING( "REMOVE_CIGGY - 4 \n" );
                }
            }
        }
        else
        {
            sub_4967( uParam0, 1 );
            if (l_U108)
            {
                PRINTSTRING( "REMOVE_CIGGY - 5 \n" );
            }
        }
    }
    else
    {
        sub_4967( uParam0, 0 );
        if (l_U108)
        {
            PRINTSTRING( "REMOVE_CIGGY - 6 \n" );
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_OBJECT_EXIST( l_U116 ))
        {
            if (HAVE_ANIMS_LOADED( l_U118 ))
            {
                if (((IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U119 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U120 ))) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U118, l_U121 )))
                {
                    BLOCK_CHAR_HEAD_IK( uParam0, 1 );
                }
            }
        }
    }
    return;
}

void sub_23900(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( uParam0, uParam1 );
        BLOCK_CHAR_AMBIENT_ANIMS( uParam0, uParam1 );
    }
    return;
}

int sub_24019(unknown uParam0)
{
    float fVar3;

    if (NOT (sub_24030( uParam0 )))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 > 2.00000000)
        {
            return 0;
        }
        if (IS_CHAR_GESTURING( uParam0 ))
        {
            return 0;
        }
    }
    else
    {
        l_U111 = 999999.90000000;
    }
    if (IS_PLAYER_PLAYING( sub_1055() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_1147(), uParam0, 50.00000000, 50.00000000, 0 )))
        {
            return 0;
        }
    }
    if (sub_24191( uParam0 ))
    {
        return 0;
    }
    return 1;
}

int sub_24030(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (l_U104)
    {
        return 1;
    }
    if (l_U106)
    {
        sub_4967( uParam0, 1 );
        l_U106 = 0;
        if (l_U108)
        {
            PRINTSTRING( "REMOVE_CIGGY - 1 \n" );
        }
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            if ((((((IS_PED_IN_COMBAT( uParam0 )) || (IS_CHAR_IN_MELEE_COMBAT( uParam0 ))) || (IS_CHAR_SHOOTING( uParam0 ))) || (IS_CHAR_ARMED( uParam0, 7 ))) || (sub_24191( uParam0 ))) || (IS_CHAR_IN_WATER( uParam0 )))
            {
                sub_4967( uParam0, 1 );
                if (l_U108)
                {
                    PRINTSTRING( "REMOVE_CIGGY - 1B \n" );
                }
                return 0;
            }
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (DOES_VEHICLE_EXIST( uVar3 ))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    sub_4967( uParam0, 0 );
                    if (l_U108)
                    {
                        PRINTSTRING( "REMOVE_CIGGY - 2 \n" );
                    }
                    return 0;
                }
            }
            if (sub_24423( uParam0 ))
            {
                sub_4967( uParam0, 0 );
                if (l_U108)
                {
                    PRINTSTRING( "REMOVE_CIGGY - 3 \n" );
                }
                return 0;
            }
        }
    }
    else
    {
        sub_4967( uParam0, 1 );
        if (l_U108)
        {
            PRINTSTRING( "REMOVE_CIGGY - 3B \n" );
        }
        return 0;
    }
    return 1;
}

int sub_24191(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 83, ref iVar3 );
        if (NOT (iVar3 == 7))
        {
            return 1;
        }
    }
    return 0;
}

int sub_24423(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_24487( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
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

int sub_24487(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2784))
    {
        return 1;
    }
    return 0;
}

void sub_24997(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U116 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            CREATE_OBJECT( -268530289, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U116, 1 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar6 );
            if (NOT (iVar6 == 0))
            {
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U116, iVar6 );
            }
        }
        if (l_U104)
        {
            if (IS_OBJECT_ATTACHED( l_U116 ))
            {
                DETACH_OBJECT( l_U116, 1 );
            }
        }
        if (sub_25162( uParam0 ))
        {
            if (IS_OBJECT_ATTACHED( l_U116 ))
            {
                DETACH_OBJECT( l_U116, 1 );
            }
        }
        if (NOT (IS_OBJECT_ATTACHED( l_U116 )))
        {
            ATTACH_OBJECT_TO_PED( l_U116, uParam0, 1232, l_U123, l_U126, 0 );
            l_U117 = uParam0;
        }
        if (NOT (l_U114 == 1))
        {
            l_U114 = 1;
            l_U110 = 18000.00000000;
        }
    }
    return;
}

int sub_25162(int iParam0)
{
    if (iParam0 == l_U117)
    {
        return 1;
    }
    return 0;
}

int sub_25847(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_26473(unknown uParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            GET_CAR_SPEED( uVar3, ref fVar4 );
            if (fVar4 > 1.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_26630(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if ((IS_THIS_MODEL_A_CAR( uVar4 )) || (IS_THIS_MODEL_A_HELI( uVar4 )))
                {
                    if (DOES_CAR_HAVE_ROOF( uVar3 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_27595(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_11343( g_U11081[I], uParam0 );
    }
    return;
}

void sub_27842(boolean bParam0)
{
    if (bParam0)
    {
        g_U11107 = 0;
    }
    else
    {
        g_U11107 = 1;
    }
    return;
}

void sub_28098(int iParam0)
{
    if (NOT (iParam0 == l_U352))
    {
        PRINTSTRING( "ABILITY_BACKUP.SC - GOTO_CONV_STATE - old state = " );
        PRINTINT( l_U352 );
        PRINTSTRING( ", new state = " );
        PRINTINT( iParam0 );
        PRINTSTRING( "\n" );
        l_U333 = 0.00000000;
        l_U330 = 0.00000000;
        l_U331 = 0.00000000;
        l_U352 = iParam0;
        l_U354 = 0;
        l_U353 = 0;
    }
    return;
}

int sub_28347(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_ON_FOOT( uParam0 ))
        {
            return 1;
        }
        else if (IS_CHAR_ON_ANY_BIKE( uParam0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_28444()
{
    if (g_U11133)
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            return 1;
        }
    }
    return 0;
}

void sub_29583(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

int sub_29792(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_22302( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_22302( "\n CONVERSATION PAUSED AT LINE " );
            sub_29932( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_22302( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_22302( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_22302( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_29932(unknown uParam0)
{
    return;
}

void sub_30434(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_30455( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

int sub_30455(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_22203( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_35174()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
        {
            if (((IS_PED_IN_COMBAT( g_U11028[I]._fU0 )) || (IS_CHAR_SHOOTING( g_U11028[I]._fU0 ))) || (IS_CHAR_IN_MELEE_COMBAT( g_U11028[I]._fU0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_35798()
{
    int I;
    int iVar3;
    unknown uVar4;

    if (IS_PLAYER_PLAYING( sub_1055() ))
    {
        for ( I = 0; I < 2; I++ )
        {
            if (NOT (IS_CHAR_INJURED( g_U11028[I]._fU0 )))
            {
                GET_CHAR_HEALTH( g_U11028[I]._fU0, ref iVar3 );
                if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U11028[I]._fU0, sub_1147(), 0 )))
                {
                    if (iVar3 < l_U358[I])
                    {
                        if ((NOT (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( g_U11028[I]._fU0, 56 ))) AND (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( g_U11028[I]._fU0, 57 )))
                        {
                            return 1;
                        }
                    }
                }
                l_U358[I] = iVar3;
                if (IS_PED_IN_COVER( g_U11028[I]._fU0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_38638(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_25162( uParam0 ))
        {
            if (NOT l_U107)
            {
                if ((l_U110 < 1000.00000000) AND (l_U111 > 10000.00000000))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_39223()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;
    int J;
    int I;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (IS_PLAYER_PLAYING( sub_1055() ))
    {
        for ( J = 0; J < 2; J++ )
        {
            if ((sub_1629()) || (l_U279))
            {
                if (sub_39285( l_U365 ))
                {
                    sub_853( ref l_U365, 0 );
                }
                if (NOT l_U263[J])
                {
                    PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - control switched OFF - processing ped " );
                    PRINTINT( J );
                    PRINTSTRING( "\n" );
                    iVar8 = nil;
                    if (IS_PLAYER_PLAYING( sub_1055() ))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_1147() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1147(), ref iVar8 );
                        }
                    }
                    if (NOT g_U11117[J])
                    {
                        if (J == 0)
                        {
                            sub_4967( g_U11028[J]._fU0, 0 );
                        }
                        if (g_U11090)
                        {
                            l_U307[J] = 1;
                        }
                        else
                        {
                            l_U307[J] = 0;
                        }
                        if (l_U307[J])
                        {
                            l_U276[J] = 0;
                            if (IS_VEH_DRIVEABLE( g_U11028[J]._fU4 ))
                            {
                                if (IS_PLAYER_PLAYING( sub_1055() ))
                                {
                                    if (NOT (IS_CHAR_IN_CAR( sub_1147(), g_U11028[J]._fU4 )))
                                    {
                                        if (NOT (g_U11028[J]._fU4 == iVar8))
                                        {
                                            if (NOT (IS_CAR_A_MISSION_CAR( g_U11028[J]._fU4 )))
                                            {
                                                if (NOT (sub_16753( g_U11028[J]._fU4 )))
                                                {
                                                    PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - bike set as mission car \n" );
                                                    SET_CAR_AS_MISSION_CAR( g_U11028[J]._fU4 );
                                                    l_U383[J] = g_U11028[J]._fU4;
                                                    l_U270[J] = 1;
                                                }
                                            }
                                        }
                                        FREEZE_CAR_POSITION( g_U11028[J]._fU4, 1 );
                                        SET_CAR_COLLISION( g_U11028[J]._fU4, 0 );
                                        SET_CAR_VISIBLE( g_U11028[J]._fU4, 0 );
                                        PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - bBackupBikerBikeWarped set to TRUE \n" );
                                        l_U276[J] = 1;
                                    }
                                }
                            }
                            if (NOT (IS_CHAR_INJURED( g_U11028[J]._fU0 )))
                            {
                                if (NOT (IS_GROUP_MEMBER( g_U11028[J]._fU0, sub_40248() )))
                                {
                                    PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - Ped entered into group \n" );
                                    SET_GROUP_MEMBER( sub_40248(), g_U11028[J]._fU0 );
                                    SET_CHAR_NEVER_LEAVES_GROUP( g_U11028[J]._fU0, 1 );
                                    l_U288[J] = 1;
                                }
                                else
                                {
                                    PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - Ped already in group \n" );
                                }
                                SET_CHAR_PROOFS( g_U11028[J]._fU0, 1, 1, 1, 1, 1 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11028[J]._fU0 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11028[J]._fU0, 1 );
                                SET_CHAR_COLLISION( g_U11028[J]._fU0, 0 );
                                SET_CHAR_VISIBLE( g_U11028[J]._fU0, 0 );
                                SET_CHAR_GRAVITY( g_U11028[J]._fU0, 0 );
                                l_U313[J] = 0;
                            }
                        }
                        else
                        {
                            PRINTSTRING( "bHadArrivedAtPlayerWhenControlGotSwitchedOff is false \n" );
                            if (IS_VEH_DRIVEABLE( g_U11028[J]._fU4 ))
                            {
                                FREEZE_CAR_POSITION( g_U11028[J]._fU4, 1 );
                                SET_CAR_COLLISION( g_U11028[J]._fU4, 0 );
                                SET_CAR_VISIBLE( g_U11028[J]._fU4, 0 );
                            }
                            sub_40835( g_U11028[J]._fU0, 0 );
                            l_U313[J] = 0;
                        }
                        l_U266[J] = 1;
                    }
                    else
                    {
                        l_U266[J] = 0;
                    }
                    l_U263[J] = 1;
                }
                else if (NOT g_U11117[J])
                {
                    if (NOT (IS_CHAR_INJURED( g_U11028[J]._fU0 )))
                    {
                        GET_CAR_CHAR_IS_USING( g_U11028[J]._fU0, ref iVar8 );
                        if (DOES_VEHICLE_EXIST( iVar8 ))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11028[J]._fU0 );
                            FREEZE_CHAR_POSITION( g_U11028[J]._fU0, 1 );
                        }
                        else
                        {
                            FREEZE_CHAR_POSITION( g_U11028[J]._fU0, 0 );
                        }
                    }
                }
                if (l_U266[J])
                {
                    if (g_U11117[J])
                    {
                        if (l_U288[J])
                        {
                            SET_CHAR_NEVER_LEAVES_GROUP( g_U11028[J]._fU0, 0 );
                            REMOVE_CHAR_FROM_GROUP( g_U11028[J]._fU0 );
                            l_U288[J] = 0;
                            PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - Ped removed from group \n" );
                        }
                        if (NOT l_U313[J])
                        {
                            sub_41751( ref g_U11028[J]._fU0 );
                            l_U313[J] = 1;
                        }
                    }
                }
            }
            else if (l_U263[J])
            {
                PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - control switched ON - processing ped " );
                PRINTINT( J );
                PRINTSTRING( "\n" );
                if (NOT (IS_CAR_DEAD( g_U11028[J]._fU4 )))
                {
                    SET_CAR_COLLISION( g_U11028[J]._fU4, 1 );
                    FREEZE_CAR_POSITION( g_U11028[J]._fU4, 0 );
                    SET_CAR_VISIBLE( g_U11028[J]._fU4, 1 );
                    if (l_U270[J])
                    {
                        PRINTSTRING( "ABILITY_BACKUP - CAR MARKED AS NO LONGER NEEDED because bBackupBikerBikeSetAsMissionCarForCutscene \n" );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U383[J] );
                        l_U383[J] = nil;
                        l_U270[J] = 0;
                    }
                }
                if (NOT l_U313[J])
                {
                    sub_41751( ref g_U11028[J]._fU0 );
                    l_U313[J] = 1;
                }
                if (NOT g_U11117[J])
                {
                    if (l_U307[J])
                    {
                        if (NOT (IS_CHAR_INJURED( g_U11028[J]._fU0 )))
                        {
                            if (l_U288[J])
                            {
                                SET_CHAR_NEVER_LEAVES_GROUP( g_U11028[J]._fU0, 0 );
                                REMOVE_CHAR_FROM_GROUP( g_U11028[J]._fU0 );
                                l_U288[J] = 0;
                                PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - Ped removed from group \n" );
                            }
                            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11028[J]._fU0 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U11028[J]._fU0, 0 );
                            SET_CHAR_COLLISION( g_U11028[J]._fU0, 1 );
                            SET_CHAR_VISIBLE( g_U11028[J]._fU0, 1 );
                            SET_CHAR_GRAVITY( g_U11028[J]._fU0, 1 );
                            SET_CHAR_PROOFS( g_U11028[J]._fU0, 0, 0, 0, 0, 0 );
                            FREEZE_CHAR_POSITION( g_U11028[J]._fU0, 0 );
                            GET_CHAR_COORDINATES( g_U11028[J]._fU0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                            if (GET_SAFE_POSITION_FOR_CHAR( uVar2._fU0, uVar2._fU4, uVar2._fU8, 0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 ))
                            {
                                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar2._fU0, uVar2._fU4, uVar2._fU8, 1.00000000, 1.00000000, 1.00000000 )))
                                {
                                    SET_CHAR_COORDINATES( g_U11028[J]._fU0, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                                    PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - Ped set to pos " );
                                    PRINTVECTOR( uVar2 );
                                    PRINTSTRING( "\n" );
                                }
                            }
                            if (l_U276[J])
                            {
                                if (IS_VEH_DRIVEABLE( g_U11028[J]._fU4 ))
                                {
                                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1147(), 0.00000000, -3.00000000 + ((TO_FLOAT( J )) * 3.00000000), 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                    if (GET_SAFE_POSITION_FOR_CHAR( uVar2._fU0, uVar2._fU4, uVar2._fU8, 0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 ))
                                    {
                                        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar2._fU0, uVar2._fU4, uVar2._fU8, 2.00000000, 2.00000000, 2.00000000 )))
                                        {
                                            PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - set car to coords " );
                                            PRINTVECTOR( uVar2 );
                                            PRINTSTRING( "\n" );
                                            SET_CAR_COORDINATES( g_U11028[J]._fU4, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
                                            SET_CAR_ON_GROUND_PROPERLY( g_U11028[J]._fU4 );
                                            GET_CHAR_HEADING( sub_1147(), ref uVar13 );
                                            SET_CAR_HEADING( g_U11028[J]._fU4, uVar13 );
                                        }
                                        else
                                        {
                                            for ( I = 1; I < 40; I++ )
                                            {
                                                GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uVar2._fU0, uVar2._fU4, uVar2._fU8, I, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8, ref uVar13 );
                                                if (((NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar5._fU0, uVar5._fU4, uVar5._fU8, 2.00000000, 2.00000000, 5.00000000 ))) AND (NOT g_U11117[J])) AND (NOT (sub_43265( uVar5 ))))
                                                {
                                                    SET_CAR_HEADING( g_U11028[J]._fU4, uVar13 );
                                                    SET_CAR_COORDINATES( g_U11028[J]._fU4, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
                                                    SET_CAR_ON_GROUND_PROPERLY( g_U11028[J]._fU4 );
                                                    PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - bike placed on nearby road at" );
                                                    PRINTVECTOR( uVar5 );
                                                    PRINTSTRING( "\n" );
                                                    I = 40;
                                                }
                                            }
                                        }
                                    }
                                }
                                l_U276[J] = 0;
                            }
                            if (IS_CHAR_IN_ANY_CAR( sub_1147() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1147(), ref iVar8 );
                                if (NOT (iVar8 == g_U11028[J]._fU4))
                                {
                                    if (IS_VEH_DRIVEABLE( g_U11028[J]._fU4 ))
                                    {
                                        GET_DRIVER_OF_CAR( g_U11028[J]._fU4, ref uVar12 );
                                        if (NOT (DOES_CHAR_EXIST( uVar12 )))
                                        {
                                            WARP_CHAR_INTO_CAR( g_U11028[J]._fU0, g_U11028[J]._fU4 );
                                            PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - warping into own bike \n" );
                                        }
                                    }
                                }
                                else if (IS_VEH_DRIVEABLE( g_U11028[J]._fU4 ))
                                {
                                    if (IS_CAR_PASSENGER_SEAT_FREE( g_U11028[J]._fU4, 0 ))
                                    {
                                        PRINTSTRING( "ABILITY BACKUP - UPDATE_IF_PLAYER_CONTROL_ALTERS() - warping into players car as passenger \n" );
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( g_U11028[J]._fU0, g_U11028[J]._fU4, 0 );
                                    }
                                }
                            }
                        }
                    }
                }
                if (g_U11102)
                {
                    PRINTSTRING( "ABILITY_BACKUP - g_bBuddyBackupSetPositionsForAfterCutscene = TRUE \n" );
                    if (NOT (IS_CHAR_INJURED( g_U11028[J]._fU0 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11028[J]._fU0 );
                        if (DOES_VEHICLE_EXIST( g_U11028[J]._fU4 ))
                        {
                            if (NOT (IS_VEH_DRIVEABLE( g_U11028[J]._fU4 )))
                            {
                                PRINTSTRING( "ABILITY_BACKUP - backup bike no longer driveable!! \n" );
                                g_U11028[J]._fU4 = nil;
                            }
                        }
                        if (NOT (DOES_VEHICLE_EXIST( g_U11028[J]._fU4 )))
                        {
                            if (J == 0)
                            {
                                sub_44595( ref g_U11028[J]._fU4, g_U11183[J], g_U11159[J] );
                                PRINTSTRING( "ABILITY_BACKUP - Terry bike created \n" );
                            }
                            else
                            {
                                sub_44909( ref g_U11028[J]._fU4, g_U11183[J], g_U11159[J] );
                                PRINTSTRING( "ABILITY_BACKUP - Clay bike created \n" );
                            }
                        }
                        if (DOES_VEHICLE_EXIST( g_U11028[J]._fU4 ))
                        {
                            if (IS_VEH_DRIVEABLE( g_U11028[J]._fU4 ))
                            {
                                if (NOT (IS_CAR_A_MISSION_CAR( g_U11028[J]._fU4 )))
                                {
                                    if (sub_16753( g_U11028[J]._fU4 ))
                                    {
                                        SET_CAR_AS_MISSION_CAR( g_U11028[J]._fU4 );
                                        l_U383[J] = g_U11028[J]._fU4;
                                        l_U273[J] = 1;
                                    }
                                }
                            }
                        }
                        if (g_U11120[J])
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11028[J]._fU0 );
                            SET_CHAR_COORDINATES( g_U11028[J]._fU0, g_U11190[J]._fU0, g_U11190[J]._fU4, g_U11190[J]._fU8 );
                            SET_CHAR_HEADING( g_U11028[J]._fU0, g_U11162[J] );
                            if (IS_VEH_DRIVEABLE( g_U11028[J]._fU4 ))
                            {
                                SET_CAR_COORDINATES( g_U11028[J]._fU4, g_U11183[J]._fU0, g_U11183[J]._fU4, g_U11183[J]._fU8 );
                                SET_CAR_HEADING( g_U11028[J]._fU4, g_U11159[J] );
                                SET_CAR_ENGINE_ON( g_U11028[J]._fU4, 0, 0 );
                            }
                        }
                        else if (IS_VEH_DRIVEABLE( g_U11028[J]._fU4 ))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11028[J]._fU0 );
                            SET_CAR_COORDINATES( g_U11028[J]._fU4, g_U11183[J]._fU0, g_U11183[J]._fU4, g_U11183[J]._fU8 );
                            SET_CAR_HEADING( g_U11028[J]._fU4, g_U11159[J] );
                            GET_DRIVER_OF_CAR( g_U11028[J]._fU4, ref uVar12 );
                            if (NOT (DOES_CHAR_EXIST( uVar12 )))
                            {
                                WARP_CHAR_INTO_CAR( g_U11028[J]._fU0, g_U11028[J]._fU4 );
                            }
                            else if (IS_CAR_PASSENGER_SEAT_FREE( g_U11028[J]._fU4, 0 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( g_U11028[J]._fU0, g_U11028[J]._fU4, 0 );
                            }
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( g_U11028[J]._fU0 );
                            SET_CHAR_COORDINATES( g_U11028[J]._fU0, g_U11183[J]._fU0, g_U11183[J]._fU4, g_U11183[J]._fU8 );
                            SET_CHAR_HEADING( g_U11028[J]._fU0, g_U11159[J] );
                        }
                    }
                    if (J == 1)
                    {
                        g_U11102 = 0;
                    }
                    PRINTSTRING( "ABILITY BACKUP - backup ped position set after cutscene \n" );
                }
                l_U263[J] = 0;
            }
        }
    }
    return;
}

int sub_39285(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8946 == 1)) || (g_U8946 == 2))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_22302( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_22302( "\n speech is not playing" );
    }
    return 0;
}

void sub_40248()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_40835(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "ABILITY_BACKUP - SAFE_FREEZE_AND_HIDE_CHAR called with " );
    if (bParam1)
    {
        PRINTSTRING( "TRUE\n" );
    }
    else
    {
        PRINTSTRING( "FALSE\n" );
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (bParam1)
        {
            iVar5 = 0;
        }
        else
        {
            iVar5 = 1;
        }
        uVar4 = nil;
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            iVar6 = sub_41016( ref uParam0, uVar4 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( uParam0 );
        }
        SET_CHAR_COLLISION( uParam0, bParam1 );
        SET_CHAR_VISIBLE( uParam0, bParam1 );
        SET_CHAR_GRAVITY( uParam0, bParam1 );
        SET_CHAR_PROOFS( uParam0, iVar5, iVar5, iVar5, iVar5, iVar5 );
        FREEZE_CHAR_POSITION( uParam0, iVar5 );
        if (DOES_VEHICLE_EXIST( uVar4 ))
        {
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (iVar6 > -2)
                {
                    if (iVar6 == -1)
                    {
                        WARP_CHAR_INTO_CAR( uParam0, uVar4 );
                    }
                    else
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( uParam0, uVar4, iVar6 );
                    }
                }
            }
        }
    }
    return;
}

int sub_41016(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int Result;

    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (IS_VEH_DRIVEABLE( uParam1 ))
        {
            if (IS_CHAR_SITTING_IN_CAR( (uParam0^), uParam1 ))
            {
                GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
                if (iVar4 == (uParam0^))
                {
                    return -1;
                }
                else
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam1, ref iVar5 );
                    for ( Result = 0; Result < iVar5; Result++ )
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam1, Result )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam1, Result, ref iVar4 );
                            if (iVar4 == (uParam0^))
                            {
                                return Result;
                            }
                        }
                    }
                }
            }
        }
    }
    return -2;
}

void sub_41751(unknown uParam0)
{
    sub_40835( (uParam0^), 1 );
    return;
}

int sub_43265(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (sub_43309( uParam0, 1055.97400000, -303.51480000, 19.79790000, 1060.62400000, -290.16480000, 24.49790000 ))
    {
        return 1;
    }
    else if (sub_43309( uParam0, -1152.71600000, 1181.71500000, 15.99260000, -1142.89100000, 1195.99000000, 20.94260000 ))
    {
        return 1;
    }
    else if (sub_43309( uParam0, -311.95000000, 1533.80000000, 19.00000000, -302.77500000, 1544.82500000, 23.52500000 ))
    {
        return 1;
    }
    else if (sub_43309( uParam0, -517.63170000, 361.37870000, 5.32590000, -506.73170000, 372.57870000, 9.92590000 ))
    {
        return 1;
    }
    else if (sub_43309( uParam0, -1303.47300000, 278.35980000, 9.28780000, -1297.07300000, 288.40980000, 14.08780000 ))
    {
        return 1;
    };;;;;
    return 0;
}

int sub_43309(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if ((((((uParam0._fU0 > uParam3._fU0) AND (uParam0._fU0 < uParam6._fU0)) AND (uParam0._fU4 > uParam3._fU4)) AND (uParam0._fU4 < uParam6._fU4)) AND (uParam0._fU8 > uParam3._fU8)) AND (uParam0._fU8 < uParam6._fU8))
    {
        return 1;
    }
    return 0;
}

void sub_44595(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_44612( uParam0, 6, uParam1, uParam4 );
}

void sub_44612(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_1992( uParam1 );
    return sub_44643( uParam0, uVar8, uParam2, uParam5, uParam1 );
}

int sub_44643(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_7784( (uParam0^), uParam1, uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_44909(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    return sub_44612( uParam0, 7, uParam1, uParam4 );
}

void sub_45865()
{
    int I;
    int J;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;
    float fVar10;

    if (IS_PLAYER_PLAYING( sub_1055() ))
    {
        if (DOES_GROUP_EXIST( sub_40248() ))
        {
            for ( I = 0; I < 7; I++ )
            {
                l_U343[I] = -1;
            }
            GET_GROUP_SIZE( sub_40248(), ref uVar4, ref uVar5 );
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_40248(), I, ref iVar8 );
                if (IS_CHAR_INJURED( iVar8 ))
                {
                    if (NOT (IS_CHAR_DEAD( iVar8 )))
                    {
                        REMOVE_CHAR_FROM_GROUP( iVar8 );
                    }
                }
            }
            GET_GROUP_SIZE( sub_40248(), ref uVar4, ref uVar5 );
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_40248(), I, ref iVar8 );
                if ((NOT (iVar8 == g_U11028[0]._fU0)) AND (NOT (iVar8 == g_U11028[1]._fU0)))
                {
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1147() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1147(), ref uVar7 );
                            if (NOT (sub_46167( iVar8, sub_1147() )))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( iVar8, sub_1147(), 20.00000000, 20.00000000, 3.00000000, 0 ))
                                {
                                    for ( J = 0; J < g_U11028; J++ )
                                    {
                                        if (sub_46313() == 0)
                                        {
                                            if (sub_46167( g_U11028[J]._fU0, sub_1147() ))
                                            {
                                                GET_CAR_SPEED( uVar7, ref fVar10 );
                                                if (fVar10 < 1.00000000)
                                                {
                                                    TASK_LEAVE_CAR_IMMEDIATELY( g_U11028[J]._fU0, uVar7 );
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            GET_CAR_CHAR_IS_USING( sub_1147(), ref uVar7 );
            if (IS_VEH_DRIVEABLE( uVar7 ))
            {
                for ( I = 0; I < 7; I++ )
                {
                    GET_GROUP_MEMBER( sub_40248(), I, ref iVar8 );
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar7, ref iVar6 );
                        for ( J = 0; J < iVar6; J++ )
                        {
                            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar7, J )))
                            {
                                GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar7, J, ref iVar9 );
                                if (IS_CHAR_SITTING_IN_CAR( iVar9, uVar7 ))
                                {
                                    if (iVar9 == iVar8)
                                    {
                                        l_U343[I] = J;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_40248(), I, ref iVar8 );
                if ((NOT (iVar8 == g_U11028[0]._fU0)) AND (NOT (iVar8 == g_U11028[1]._fU0)))
                {
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        if (l_U343[I] == -1)
                        {
                            l_U343[I] = sub_46821( -1 );
                        }
                    }
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_40248(), I, ref iVar8 );
                if ((iVar8 == g_U11028[0]._fU0) || (iVar8 == g_U11028[1]._fU0))
                {
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        if (l_U343[I] == -1)
                        {
                            l_U343[I] = sub_46821( -1 );
                        }
                    }
                }
            }
            GET_CAR_CHAR_IS_USING( sub_1147(), ref uVar7 );
            if (IS_VEH_DRIVEABLE( uVar7 ))
            {
                for ( I = 0; I < 7; I++ )
                {
                    GET_GROUP_MEMBER( sub_40248(), I, ref iVar8 );
                    if (NOT (IS_CHAR_INJURED( iVar8 )))
                    {
                        if (NOT (sub_47119( ref iVar8, uVar7, l_U343[I] )))
                        {
                            l_U343[I] = sub_46821( l_U343[I] );
                        }
                    }
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                if (l_U343[I] > 2)
                {
                    l_U343[I] = -1;
                }
            }
            for ( I = 0; I < 7; I++ )
            {
                GET_GROUP_MEMBER( sub_40248(), I, ref iVar8 );
                if (NOT (IS_CHAR_INJURED( iVar8 )))
                {
                    SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( iVar8, l_U343[I] );
                }
            }
        }
    }
    return;
}

int sub_46167(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if ((NOT (IS_CHAR_INJURED( uParam0 ))) AND (NOT (IS_CHAR_INJURED( uParam1 ))))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_46313()
{
    unknown uVar2;
    int iVar3;
    int I;
    int Result;

    Result = 0;
    if (IS_PLAYER_PLAYING( sub_1055() ))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1147() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1147(), ref uVar2 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar2, ref iVar3 );
            for ( I = 0; I < iVar3; I++ )
            {
                if (IS_CAR_PASSENGER_SEAT_FREE( uVar2, I ))
                {
                    Result++;
                }
            }
        }
    }
    return Result;
}

void sub_46821(int iParam0)
{
    int I;
    int Result;

    Result = iParam0 + 1;
    for ( I = 0; I < 7; I++ )
    {
        if (l_U343[I] == Result)
        {
            Result++;
            I = 0;
        }
    }
    return Result;
}

int sub_47119(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;
    int iVar6;

    if (DOES_VEHICLE_EXIST( uParam1 ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam1, ref iVar6 );
            if (iVar6 > iParam2)
            {
                if (IS_CAR_PASSENGER_SEAT_FREE( uParam1, iParam2 ))
                {
                    return 1;
                }
                else
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam1, iParam2, ref iVar5 );
                    if (iVar5 == (uParam0^))
                    {
                        return 1;
                    }
                    else if (l_U250)
                    {
                        PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - return false, GET_CHAR_IN_CAR_PASSENGER_SEAT \n" );
                    }
                }
            }
            else if (l_U250)
            {
                PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - return false, iNoOfSeats = " );
                PRINTINT( iVar6 );
                PRINTSTRING( " inSeatPriority = " );
                PRINTINT( iParam2 );
                PRINTSTRING( "\n" );
            }
        }
        else if (l_U250)
        {
            PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - return false, char is injured \n" );
        }
    }
    else if (l_U250)
    {
        PRINTSTRING( "DWAYNE_BACKUP - IS_SEAT_PRIORITY_VALID_FOR_THIS_CAR - return false, car doesn't exist \n" );
    }
    return 0;
}

void sub_47924(unknown uParam0)
{
    int iVar3;
    int I;

    if ((l_U249 >= (uParam0^)) || (l_U249 < 0))
    {
        l_U249 = 0;
    }
    sub_47963( uParam0 );
    if (NOT (IS_CHAR_INJURED( (uParam0^)[l_U249]._fU0 )))
    {
        sub_48737( ref (uParam0^)[l_U249], 1 );
        if (DOES_CHAR_EXIST( (uParam0^)[l_U249]._fU8 ))
        {
            if (IS_CHAR_INJURED( (uParam0^)[l_U249]._fU8 ))
            {
                iVar3 = sub_70687( uParam0, (uParam0^)[l_U249]._fU8 );
                if (iVar3 >= 0)
                {
                    (uParam0^)[l_U249]._fU8 = (uParam0^)[iVar3]._fU8;
                    (uParam0^)[l_U249]._fU40 = (uParam0^)[iVar3]._fU40;
                    PRINTSTRING( "BIKER_BUDDIES_AI_TICK: Biker " );
                    PRINTINT( l_U249 );
                    PRINTSTRING( " is changing leader to " );
                    PRINTINT( iVar3 );
                    PRINTSTRING( "'s leader\n" );
                }
            }
        }
    }
    l_U249++;
    for ( I = 0; I < (uParam0^); I++ )
    {
        sub_70053( ref (uParam0^)[I] );
    }
    return;
}

void sub_47963(unknown uParam0)
{
    int[5] iVar3;
    int I;
    unknown uVar10;
    unknown uVar11;

    array(ref iVar3, 5);
    for ( I = 0; I < (uParam0^); I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( (uParam0^)[I]._fU0 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( (uParam0^)[I]._fU0, ref uVar10 );
                iVar3[sub_48060( uVar10 )] = 1;
            }
        }
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_1147() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1147(), ref uVar10 );
        iVar3[sub_48060( uVar10 )] = 1;
    }
    for ( I = 0; I < iVar3; I++ )
    {
        uVar11 = sub_48404( I );
        if (iVar3[I])
        {
            if (NOT (HAVE_ANIMS_LOADED( uVar11 )))
            {
                REQUEST_ANIMS( uVar11 );
            }
        }
        else if (HAVE_ANIMS_LOADED( uVar11 ))
        {
            REMOVE_ANIMS( uVar11 );
        }
    }
    return;
}

void sub_48060(unknown uParam0)
{
    int Result;
    unknown uVar4;

    Result = 5;
    GET_CAR_MODEL( uParam0, ref uVar4 );
    switch (uVar4)
    {
        case -1830458836:
        case 584879743:
        case -1606187161:
        case -618617997:
        case 301427732:
        case 802082487:
        case -359167535:
        case -159126838:
        case -408052231:
        Result = 0;
        break;
        case -570033273:
        case -571009320:
        case 2006142190:
        case -77769032:
        Result = 1;
        break;
        case 1203311498:
        case -909201658:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case -114291515:
        case -891462355:
        Result = 2;
        break;
        case 788045382:
        Result = 4;
        break;
        case -1842748181:
        Result = 3;
        break;
    }
    return Result;
}

void sub_48404(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "MISSBIKE_GESTFREE";
        break;
        case 1:
        Result = "MISSBIKE_GESTCHOP";
        break;
        case 2:
        Result = "MISSBIKE_GESTSPT";
        break;
        case 3:
        Result = "MISSBIKE_GESTSCOT";
        break;
        case 4:
        Result = "MISSBIKE_GESTDIRT";
        break;
    }
    return Result;
}

void sub_48737(int iParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        if (iParam0->_fU92 > 0)
        {
            sub_48784( iParam0->_fU92 );
            iParam0->_fU92 = 0;
        }
        if (DOES_BLIP_EXIST( iParam0->_fU100 ))
        {
            REMOVE_BLIP( iParam0->_fU100 );
        }
        return;
    }
    if (iParam0->_fU36 != 0)
    {
        if ((sub_49179( iParam0 )) == 2)
        {
            return;
        }
        sub_52318( iParam0 );
        if (iParam0->_fU36 != 0)
        {
            sub_53953( iParam0 );
        }
        if (sub_11104( iParam0, 1 ))
        {
            sub_58779( iParam0 + 0, 0 );
        }
        else
        {
            sub_58779( iParam0 + 0, 1 );
        }
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))
            {
                uVar4 = nil;
                STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
                if (NOT (IS_CAR_DEAD( uVar4 )))
                {
                    if ((IS_CAR_UPSIDEDOWN( uVar4 )) AND (NOT (IS_CAR_IN_AIR_PROPER( uVar4 ))))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
                    }
                }
            }
        }
    }
    switch (iParam0->_fU36)
    {
        case 2:
        iVar5 = sub_59070( iParam0 );
        if (iVar5 == 1)
        {
            if (sub_11104( iParam0, 32 ))
            {
                sub_12515( iParam0, 3 );
            }
            else if (sub_11104( iParam0, 64 ))
            {
                if (sub_11104( iParam0, 1 ))
                {
                    sub_12515( iParam0, 5 );
                }
                else
                {
                    sub_12515( iParam0, 4 );
                }
            }
        }
        else if (iVar5 == 2)
        {
            ;
        }
        else if ((sub_60121( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_60378( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_61510( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_61624( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_61745( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_62045( iParam0 )) != 0)
        {
            ;
        };;;;;;;;
        break;
        case 3:
        if ((sub_62401( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_60121( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_60378( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_61510( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_61624( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 1:
        if ((g_U10956 != 0) || (g_U10958 != 0))
        {
            if ((sub_51924( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_62660( iParam0 )) != 0)
            {
                ;
            }
        }
        else if ((sub_62817( iParam0 )) != 0)
        {
            ;
        }
        break;
        case 4:
        if ((sub_51924( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_60121( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_60378( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_61510( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_61624( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 5:
        if ((sub_59167( iParam0 )) > 30.00000000)
        {
            sub_69968( iParam0 );
        }
        else if ((sub_62660( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_51762( iParam0, 1, 0 )) != 0)
        {
            ;
        };;;
        break;
        default: break;
    }
    if (NOT bParam1)
    {
        sub_70053( iParam0 );
    }
    return;
}

void sub_48784(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_48795( uParam0 );
    if (iVar3 == -1)
    {
        return;
    }
    if (NOT g_U38937[iVar3]._fU4)
    {
        PRINTSTRING( "Recurring_Lost_Killed: marked as killed but wasn't in use: " );
        PRINTINT( iVar3 );
        PRINTNL();
        return;
    }
    g_U38937[iVar3]._fU0 = 0;
    return;
}

int sub_48795(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = 0;
    Result = 0;
    for ( Result = 0; Result < 13; Result++ )
    {
        if ((g_U38937[Result]._fU0) || (g_U38937[Result]._fU4))
        {
            iVar3++;
            if (iVar3 == iParam0)
            {
                return Result;
            }
        }
    }
    SCRIPT_ASSERT( "Get_Recurring_Lost_ArrayPos: Run out of alive Recurring Lost characters" );
    return -1;
}

int sub_49179(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if ((NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))) || (IS_CHAR_SITTING_IN_ANY_CAR( sub_1147() )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar3 );
    GET_CAR_CHAR_IS_USING( sub_1147(), ref iVar4 );
    GET_DRIVER_OF_CAR( iVar3, ref iVar5 );
    if (iVar5 != iParam0->_fU0)
    {
        return 0;
    }
    GET_CAR_DOOR_LOCK_STATUS( iVar3, ref iVar6 );
    if (iVar6 != 1)
    {
        return 0;
    }
    if (iVar4 == iVar3)
    {
        if (NOT (((sub_7076( iParam0 + 0 )) == 3) AND ((sub_49322( iVar3 )) == sub_16764())))
        {
            if ((((sub_7076( iParam0 + 0 )) != 1) || ((sub_49380( iParam0->_fU0 )) == (sub_2268( 0 )))) || ((sub_49422( sub_1147() )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1147() )))))
            {
                return 0;
            }
            else
            {
                GET_CAR_DOOR_LOCK_STATUS( iVar4, ref iVar7 );
                if (iVar7 != 1)
                {
                    return 0;
                }
            }
        }
        if ((sub_7076( iParam0 + 0 )) == 3)
        {
            sub_49541( iParam0->_fU0, "", sub_1147(), 26 );
        }
        else
        {
            sub_49541( sub_1147(), "", iParam0->_fU0, 37 );
        }
        return sub_51762( iParam0, 1, 1 );
    }
    return 0;
}

void sub_49322(unknown uParam0)
{
    unknown Result;

    GET_CAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_49380(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

boolean sub_49422(unknown uParam0)
{
    return (IS_CHAR_IN_ANY_CAR( uParam0 )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )));
}

void sub_49541(int iParam0, unknown uParam1, int iParam2, int iParam3)
{
    boolean Result;
    unknown uVar7;
    int iVar8;

    Result = false;
    if (IS_CHAR_INJURED( iParam0 ))
    {
        PRINTSTRING( "PERFORM_BIKER_GESTURE: ped is injured\n" );
        return 0;
    }
    if (IS_STRING_NULL( uParam1 ))
    {
        Result = true;
    }
    else if (COMPARE_STRING( uParam1, "" ))
    {
        Result = true;
    }
    else if (NOT ((IS_CHAR_ON_ANY_BIKE( iParam0 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( iParam0 ))))
    {
        Result = true;
    }
    else
    {
        uVar7 = sub_48404( sub_49701( iParam0 ) );
        if (NOT (IS_STRING_NULL( uVar7 )))
        {
            if (HAVE_ANIMS_LOADED( uVar7 ))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0, uVar7, uParam1 )))
                {
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( iParam0, uParam1, uVar7, 8.00000000, 0, 0, 0, 0, 0 );
                    Result = true;
                }
            }
        }
    };;;
    if (Result)
    {
        l_U201 = iParam0;
        l_U202 = iParam2;
        if (DOES_CHAR_EXIST( iParam2 ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( iParam0, iParam2 )))
            {
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_49914( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_1147())
            {
                iVar8 = sub_7076( ref iParam0 );
                if ((iVar8 == 1) AND (iParam2 != sub_1147()))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_1147(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_1147(), iParam2, sub_49914( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_1147(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_1147(), iParam0, sub_49914( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((iParam3 == 38) AND (IS_CHAR_MODEL( iParam0, sub_2268( 0 ) )))
            {
                if (l_U206)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_50178( iParam3 ), 1, 1, 2 );
            }
            l_U200 = iParam3;
        }
        GET_GAME_TIMER( ref l_U199 );
        switch (iParam3)
        {
            case 35: SET_BIT( ref l_U204, 2 );
            case 36: SET_BIT( ref l_U204, 1 );
            case 24:
            SET_BIT( ref l_U204, 0 );
            break;
            case 38:
            SET_BIT( ref l_U204, 6 );
            break;
        }
    }
    return Result;
}

void sub_49701(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_48060( uVar3 );
        }
    }
    return Result;
}

void sub_49914(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_50178(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "ABUSE_COPS";
        break;
        case 1:
        Result = "ABUSE_GENERIC_BIKER_PED";
        break;
        case 2:
        Result = "ABUSE_HOOKER";
        break;
        case 3:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST";
        break;
        case 4:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST_TRUCE";
        break;
        case 5:
        Result = "BIKE_CRASH_DRIVEN";
        break;
        case 6:
        Result = "BIKE_DRIVE_MORE_CAREFUL";
        break;
        case 7:
        Result = "BIKE_HIT_PED";
        break;
        case 8:
        Result = "BIKE_JUMP";
        break;
        case 9:
        Result = "BIKE_ON_FIRE";
        break;
        case 10:
        Result = "BIKE_OVERTAKE";
        break;
        case 11:
        Result = "BIKER_ACHIEVE_MISSION_OBJECTIVE";
        break;
        case 12:
        Result = "BIKER_CLIPS_ANOTHER_BIKE";
        break;
        case 13:
        Result = "BIKER_CLIPS_ANYTHING";
        break;
        case 14:
        Result = "BIKER_FALLING_BEHIND";
        break;
        case 15:
        Result = "BIKER_FALLS_BEHIND";
        break;
        case 16:
        Result = "BIKER_PASSENGER_SHOOT_GENERIC";
        break;
        case 17:
        Result = "BIKER_PLAYER_FALLS_BEHIND";
        break;
        case 18:
        Result = "COME_UNDER_ATTACK";
        break;
        case 19:
        Result = "FOLLOW_ME_GUYS";
        break;
        case 20:
        Result = "GENERIC_CELEBRATION";
        break;
        case 21:
        Result = "GET_A_MOVE_ON";
        break;
        case 22:
        Result = "GET_IN_COVER";
        break;
        case 23:
        Result = "GET_THE_HELL_OUT_OF_HERE";
        break;
        case 24:
        Result = "GET_WANTED_LEVEL";
        break;
        case 25:
        Result = "GREET_JOHNNY";
        break;
        case 26:
        Result = "JACKED_BY_PLAYER_LIKE";
        break;
        case 27:
        Result = "KEEP_SHOOTING";
        break;
        case 28:
        Result = "LOST_TAUNT_ANGELS_OF_DEATH";
        break;
        case 29:
        Result = "LOST_TAUNT_LOST";
        break;
        case 30:
        Result = "LOST_WHOOP";
        break;
        case 31:
        Result = "NEED_BIKE_NOT_CAR";
        break;
        case 32:
        Result = "NEED_SOME_HELP";
        break;
        case 33:
        Result = "NICE_BIKE";
        break;
        case 34:
        Result = "NICE_SHOOTING_JOHNNY";
        break;
        case 35:
        Result = "POLICE_PURSUIT";
        break;
        case 36:
        Result = "SPOT_POLICE";
        break;
        case 37:
        Result = "JACKING_LOST_BIKE";
        break;
        case 38:
        Result = "WAIT_FOR_ME";
        break;
    }
    return Result;
}

int sub_51762(int iParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    float fVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (IS_CHAR_ON_FOOT( iParam0->_fU0 ))
    {
        return 1;
    }
    else if ((sub_49422( iParam0->_fU0 )) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU0 ))))
    {
        return 2;
    }
    else if ((uParam1) || (sub_11104( iParam0, 1 )))
    {
        uVar5 = nil;
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar5 );
        }
        if (IS_VEH_DRIVEABLE( uVar5 ))
        {
            GET_CAR_SPEED( uVar5, ref fVar6 );
            if (fVar6 > 0.20000000)
            {
                return sub_51924( iParam0 );
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 31, ref iVar7 );
            if (iVar7 == 7)
            {
                if (bParam2)
                {
                    uVar8 = {sub_52107( sub_1147(), 1 )};
                    GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( uVar5, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    TASK_LEAVE_CAR_IN_DIRECTION( iParam0->_fU0, uVar5, uVar8._fU0 > 0.00000000 );
                }
                else
                {
                    TASK_LEAVE_ANY_CAR( iParam0->_fU0 );
                }
            }
            return 2;
        }
    };;;
    return 0;
}

int sub_51924(int iParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = sub_11654( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        if (IS_CHAR_STOPPED( iParam0->_fU0 ))
        {
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar4 );
            if ((iVar4 == 7) || (iParam0->_fU96 != 5))
            {
                iParam0->_fU96 = 5;
                TASK_CAR_MISSION( iParam0->_fU0, uVar3, 0, iParam0->_fU96, 0.00000000, 2, -1, -1 );
            }
            return 2;
        }
    }
    return 0;
}

void sub_52107(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_52318(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (NOT (sub_52349( (iParam0^) )))
        {
            if (((sub_52384( (iParam0^) )) AND (NOT l_U188)) AND (NOT l_U189))
            {
                if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT sub_52436()))
                {
                    if ((IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )) AND (IS_CHAR_ON_ANY_BIKE( sub_1147() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), iParam0->_fU0, l_U178, l_U178, l_U178, 0 ))
                        {
                            if (sub_52535())
                            {
                                if (iParam0->_fU0 == l_U187)
                                {
                                    if (NOT (ref iParam0->_fU44->_fU8))
                                    {
                                        sub_22128( (iParam0 + 44) + 12, ref l_U181, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_22128( (iParam0 + 44) + 28, ref l_U181, 7, 1 );
                                    }
                                    sub_52661( iParam0 );
                                    if (NOT (IS_CHAR_INJURED( sub_1147() )))
                                    {
                                        TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_1147(), -2, 0 );
                                        TASK_LOOK_AT_CHAR( sub_1147(), iParam0->_fU0, -2, 128 );
                                    }
                                    l_U164 = 0;
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_1147(), ref l_U193._fU0, ref l_U193._fU4, ref l_U193._fU8 );
                                    GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U196._fU0, ref l_U196._fU4, ref l_U196._fU8 );
                                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U193._fU0, l_U193._fU4, l_U193._fU8, l_U196._fU0, l_U196._fU4, l_U196._fU8, ref l_U192 );
                                    if (iParam0->_fU0 == l_U187)
                                    {
                                        l_U191 += 1.00000000 * TIMESTEP();
                                        l_U190 = l_U192;
                                    }
                                    else if ((l_U192 <= l_U190) || (IS_CHAR_INJURED( l_U187 )))
                                    {
                                        l_U187 = iParam0->_fU0;
                                        l_U190 = l_U192;
                                        l_U191 = 0.00000000;
                                    }
                                }
                            }
                            else if (NOT sub_53089())
                            {
                                sub_53117();
                            }
                            else if (sub_53174())
                            {
                                sub_53138();
                            }
                            GET_CHAR_COORDINATES( sub_1147(), ref l_U193._fU0, ref l_U193._fU4, ref l_U193._fU8 );
                            GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U196._fU0, ref l_U196._fU4, ref l_U196._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_3D( l_U193._fU0, l_U193._fU4, l_U193._fU8, l_U196._fU0, l_U196._fU4, l_U196._fU8, ref l_U192 );
                            if (iParam0->_fU0 == l_U187)
                            {
                                l_U191 += 1.00000000 * TIMESTEP();
                                l_U190 = l_U192;
                            }
                            else if ((l_U192 <= l_U190) || (IS_CHAR_INJURED( l_U187 )))
                            {
                                l_U187 = iParam0->_fU0;
                                l_U190 = l_U192;
                                l_U191 = 0.00000000;
                            };;;;
                        }
                        else if (NOT sub_53438())
                        {
                            sub_53489( (iParam0^) );
                        }
                    }
                    else if (NOT sub_53438())
                    {
                        sub_53489( (iParam0^) );
                    }
                }
                else if (NOT sub_53438())
                {
                    sub_53489( (iParam0^) );
                }
            }
            else if (NOT sub_53438())
            {
                sub_53489( (iParam0^) );
            }
        }
        else if (NOT sub_53438())
        {
            if ((((((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), iParam0->_fU0, l_U179, l_U179, l_U179, 0 ))) || (NOT (IS_CHAR_ON_ANY_BIKE( sub_1147() )))) || (NOT (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))) || (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1147() )))) || (NOT (sub_39285( l_U181 ))))
            {
                sub_53790( iParam0 );
            }
        }
    }
    else if (sub_52349( (iParam0^) ))
    {
        sub_853( ref l_U181, 0 );
        sub_53790( iParam0 );
    }
    return;
}

void sub_52349(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU4;
}

void sub_52384(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU0;
}

void sub_52436()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_52535()
{
    if (NOT l_U165)
    {
        if (l_U164)
        {
            return 1;
        }
    }
    return 0;
}

void sub_52661(int iParam0)
{
    ref iParam0->_fU44->_fU4 = 1;
    if (ref iParam0->_fU44->_fU8)
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else if (COMPARE_STRING( (iParam0 + 44) + 28, "" ))
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else
    {
        ref iParam0->_fU44->_fU8 = 1;
    }
    l_U187 = nil;
    l_U191 = 0.00000000;
    l_U188 = 1;
    return;
}

void sub_53089()
{
    return l_U163;
}

void sub_53117()
{
    l_U163 = 1;
    l_U164 = 0;
    sub_53138();
    return;
}

void sub_53138()
{
    l_U165 = 0;
    return;
}

void sub_53174()
{
    return l_U165;
}

void sub_53438()
{
    int Result;

    Result = 0;
    if (sub_39285( l_U171 ))
    {
        Result = 1;
    }
    return Result;
}

void sub_53489(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    if (uParam0._fU0 == l_U187)
    {
        l_U187 = nil;
        l_U191 = 0.00000000;
        sub_53530();
    }
    return;
}

void sub_53530()
{
    if (l_U162 == 1)
    {
        l_U166 = 0.00000000;
        l_U165 = 1;
        l_U164 = 0;
    }
    return;
}

void sub_53790(int iParam0)
{
    sub_853( ref l_U181, 1 );
    ref iParam0->_fU44->_fU4 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        TASK_CLEAR_LOOK_AT( iParam0->_fU0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_1147() )))
    {
        TASK_CLEAR_LOOK_AT( sub_1147() );
    }
    l_U188 = 0;
    return;
}

void sub_53953(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;
    boolean bVar16;
    boolean bVar17;
    boolean bVar18;
    int iVar19;
    int iVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;
    int iVar24;
    unknown uVar25;
    float fVar26;

    GET_GAME_TIMER( ref iVar4 );
    if ((NOT l_U203) || (iParam0->_fU36 == 0))
    {
        return;
    }
    if ((sub_52349( (iParam0^) )) AND (sub_52436()))
    {
        if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
        {
            if (((IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 )) AND (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))) AND (IS_CHAR_ON_ANY_BIKE( sub_1147() )))
            {
                GET_CHAR_COORDINATES( sub_1147(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( iParam0->_fU4, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (IS_SCRIPTED_SPEECH_PLAYING( iParam0->_fU0 ))
                {
                    if ((l_U201 != iParam0->_fU0) || (l_U202 != sub_1147()))
                    {
                        sub_49541( iParam0->_fU0, sub_54227( uVar8._fU0 < 0.00000000, sub_48060( iParam0->_fU4 ) ), sub_1147(), 39 );
                        PRINTSTRING( "PERFORM_BIKER_GESTURE(biker.ped, GET_RANDOM_SPEECH_ANIM(TRUE), PLAYER_CHAR_ID())\n" );
                    }
                    return;
                }
                else if (IS_SCRIPTED_SPEECH_PLAYING( sub_1147() ))
                {
                    l_U201 = sub_1147();
                    l_U202 = iParam0->_fU0;
                }
            }
        }
    }
    if (((sub_52436()) || (sub_52349( (iParam0^) ))) || ((iVar4 - l_U199) < 33))
    {
        return;
    }
    if (l_U199 <= 0)
    {
        l_U199 = iVar4;
        return;
    }
    if ((NOT (IS_CHAR_INJURED( iParam0->_fU0 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        iVar11 = nil;
        uVar12 = nil;
        uVar13 = nil;
        uVar14 = nil;
        iVar15 = 39;
        bVar16 = false;
        bVar17 = false;
        bVar18 = false;
        iVar19 = 10000;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar20 );
        if (iVar20 == iParam0->_fU0)
        {
            uVar12 = iParam0->_fU4;
            bVar16 = true;
        }
        else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar12 );
        }
        if (NOT (IS_CAR_DEAD( uVar12 )))
        {
            if (sub_54880( uVar12 ))
            {
                fVar21 = sub_54923( iParam0 );
                if (((NOT (sub_52349( (iParam0^) ))) AND (((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) AND (fVar21 < 19)) || (fVar21 < 15))) AND (iParam0->_fU0 != l_U201))
                {
                    GET_CAR_PITCH( uVar12, ref uVar22 );
                    if ((l_U138) AND ((iParam0->_fU36 != 1) || ((sub_49914( 0, 10 )) == 0)))
                    {
                        l_U138 = 0;
                        iVar15 = 17;
                        iVar11 = sub_1147();
                    }
                    else if ((((sub_55117( iParam0 )) AND (iParam0->_fU36 == 2)) AND ((sub_7076( iParam0 + 0 )) == 1)) AND (NOT (IS_BIT_SET( l_U204, 6 ))))
                    {
                        iVar15 = 38;
                        uVar13 = sub_55231( bVar16 );
                        iVar11 = sub_1147();
                    }
                    else if (((IS_CAR_IN_AIR_PROPER( uVar12 )) AND ((ABSF( uVar22 )) < 20.00000000)) AND (sub_55319( 8 )))
                    {
                        uVar13 = sub_55573( bVar16 );
                        iVar15 = 8;
                    }
                    else if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, sub_1147() )) AND (sub_55319( 12 )))
                    {
                        uVar13 = sub_55231( bVar16 );
                        iVar11 = sub_1147();
                        iVar15 = 12;
                        bVar17 = true;
                    }
                    else if (((HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, 0 )) || (IS_PED_RAGDOLL( iParam0->_fU0 ))) AND (sub_55319( 13 )))
                    {
                        uVar13 = sub_55231( bVar16 );
                        iVar11 = nil;
                        iVar15 = 13;
                        bVar17 = true;
                    }
                    else if (((((sub_7076( iParam0 + 0 )) == 1) AND (NOT (IS_PLAYER_PRESSING_HORN( sub_1055() )))) AND (IS_BIT_SET( l_U204, 7 ))) AND (sub_55319( 20 )))
                    {
                        if (bVar16)
                        {
                            bVar18 = true;
                            uVar13 = sub_55573( bVar16 );
                        }
                        iVar15 = 20;
                        iVar11 = sub_1147();
                        CLEAR_BIT( ref l_U204, 7 );
                    }
                    else if ((((IS_WANTED_LEVEL_GREATER( sub_1055(), 0 )) AND (NOT (IS_BIT_SET( l_U204, 0 )))) AND (sub_55319( 24 ))) AND ((sub_7076( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 24;
                        iVar11 = sub_1147();
                    }
                    else if ((((NOT (IS_WANTED_LEVEL_GREATER( sub_1055(), 0 ))) AND (IS_BIT_SET( l_U204, 0 ))) AND (sub_55319( 30 ))) AND ((sub_7076( iParam0 + 0 )) == 1))
                    {
                        iVar15 = 30;
                    }
                    else
                    {
                        uVar5 = {sub_52107( sub_1147(), 1 )};
                        uVar23 = nil;
                        if (iVar15 == 39)
                        {
                            if (IS_BIT_SET( l_U204, 3 ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_1147() )))
                                {
                                    if (IS_PED_RAGDOLL( sub_1147() ))
                                    {
                                        if (sub_55319( 20 ))
                                        {
                                            iVar15 = 20;
                                            iVar11 = sub_1147();
                                            if ((sub_49914( 0, 2 )) == 0)
                                            {
                                                uVar13 = sub_55573( bVar16 );
                                            }
                                            else
                                            {
                                                uVar13 = sub_55231( bVar16 );
                                            }
                                            CLEAR_BIT( ref l_U204, 3 );
                                        }
                                    }
                                    else if (IS_CHAR_ON_FOOT( sub_1147() ))
                                    {
                                        CLEAR_BIT( ref l_U204, 3 );
                                        CLEAR_BIT( ref l_U204, 4 );
                                    }
                                }
                            }
                            else if (IS_CHAR_ON_ANY_BIKE( sub_1147() ))
                            {
                                if (((sub_55319( 33 )) AND (NOT (IS_BIT_SET( l_U204, 4 )))) AND ((sub_7076( iParam0 + 0 )) == 1))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1147(), ref uVar23 );
                                    if (DOES_VEHICLE_EXIST( uVar23 ))
                                    {
                                        iVar24 = sub_48060( uVar23 );
                                        if ((NOT (IS_CAR_A_MISSION_CAR( uVar23 ))) AND ((iVar24 == 1) || (iVar24 == 0)))
                                        {
                                            iVar15 = 33;
                                            SET_BIT( ref l_U204, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U204, 3 );
                            }
                            else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1147() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1147(), ref uVar23 );
                                if (DOES_VEHICLE_EXIST( uVar23 ))
                                {
                                    if (((sub_55319( 31 )) AND (NOT (IS_BIT_SET( l_U204, 4 )))) AND ((sub_7076( iParam0 + 0 )) == 1))
                                    {
                                        if (NOT (IS_CAR_A_MISSION_CAR( uVar23 )))
                                        {
                                            iVar15 = 31;
                                            SET_BIT( ref l_U204, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U204, 3 );
                            }
                            else if ((IS_CHAR_ON_FOOT( sub_1147() )) AND (NOT (IS_PED_RAGDOLL( sub_1147() ))))
                            {
                                CLEAR_BIT( ref l_U204, 3 );
                                CLEAR_BIT( ref l_U204, 4 );
                            };;;
                            uVar23 = nil;;
                        }
                        if (iVar15 == 39)
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
                            END_CHAR_SEARCH_CRITERIA();
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U202))
                                {
                                    iVar11 = nil;
                                }
                                else if ((sub_55319( 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_1055(), 0 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 0;
                                        bVar18 = (sub_49914( 0, 10 )) == 0;
                                    }
                                }
                                else if (((sub_55319( 36 )) AND (IS_WANTED_LEVEL_GREATER( sub_1055(), 0 ))) AND (NOT (IS_BIT_SET( l_U204, 1 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 36;
                                    }
                                }
                                else if ((IS_WANTED_LEVEL_GREATER( sub_1055(), 2 )) AND (sub_55319( 23 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 23;
                                };;;;
                            }
                        }
                        if ((sub_55319( 2 )) AND (iVar15 == 39))
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 1 );
                            END_CHAR_SEARCH_CRITERIA();
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U202))
                                {
                                    iVar11 = nil;
                                }
                                else if ((IS_CHAR_MODEL( iVar11, 552542187 )) || (IS_CHAR_MODEL( iVar11, 996267216 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 2;
                                    bVar18 = (sub_49914( 0, 100 )) == 0;
                                }
                                else
                                {
                                    iVar11 = nil;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((IS_WANTED_LEVEL_GREATER( sub_1055(), 0 )) AND (NOT (IS_BIT_SET( l_U204, 2 ))))
                            {
                                if (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar5._fU0 - 25.00000000, uVar5._fU4 - 25.00000000, uVar5._fU8 - 25.00000000, uVar5._fU0 + 25.00000000, uVar5._fU4 + 25.00000000, uVar5._fU8 + 25.00000000 ))
                                {
                                    iVar15 = 35;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            uVar23 = sub_57462( uVar5, 25.00000000, 4 );
                            if (IS_VEH_DRIVEABLE( uVar23 ))
                            {
                                GET_DRIVER_OF_CAR( uVar23, ref iVar11 );
                                if ((IS_CHAR_INJURED( iVar11 )) || (iVar11 == l_U202))
                                {
                                    iVar11 = nil;
                                }
                                else if (NOT (IS_CHAR_ON_SCREEN( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else
                                {
                                    uVar13 = nil;
                                    uVar25 = sub_7076( ref iVar11 );
                                    switch (uVar25)
                                    {
                                        case 2:
                                        if ((sub_55319( 28 )) AND ((sub_7076( iParam0 + 0 )) == 1))
                                        {
                                            iVar15 = 28;
                                        }
                                        break;
                                        case 1:
                                        if ((sub_7076( iParam0 + 0 )) == 2)
                                        {
                                            if ((sub_55319( 3 )) AND (sub_55319( 4 )))
                                            {
                                                if (g_U15728[13])
                                                {
                                                    iVar15 = 4;
                                                }
                                                else
                                                {
                                                    iVar15 = 3;
                                                }
                                            }
                                        }
                                        else if ((sub_7076( iParam0 + 0 )) == 1)
                                        {
                                            if (sub_55319( 30 ))
                                            {
                                                uVar13 = sub_58063( bVar16 );
                                                iVar15 = 30;
                                            }
                                        }
                                        break;
                                        default:
                                        if (sub_55319( 1 ))
                                        {
                                            iVar15 = 1;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        GET_CHAR_SPEED( sub_1147(), ref fVar26 );
                        if (iVar15 == 39)
                        {
                            if (((sub_7076( iParam0 + 0 )) == 1) AND (fVar26 < 5))
                            {
                                if ((sub_55319( 23 )) AND (IS_WANTED_LEVEL_GREATER( sub_1055(), 0 )))
                                {
                                    iVar15 = 23;
                                }
                                else if (sub_55319( 21 ))
                                {
                                    iVar15 = 21;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((NOT (IS_BIT_SET( l_U204, 5 ))) AND (fVar26 > 30))
                            {
                                if ((sub_55319( 30 )) AND ((sub_7076( iParam0 + 0 )) == 1))
                                {
                                    iVar15 = 30;
                                }
                                else if (sub_55319( 20 ))
                                {
                                    iVar15 = 20;
                                }
                            }
                        }
                    };;;;;;;;
                    if (bVar18)
                    {
                        SOUND_CAR_HORN( uVar12, sub_49914( 1500, 2500 ) );
                    }
                    if (bVar17)
                    {
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( uVar12 );
                    }
                    if ((iVar15 != 39) || (NOT (IS_STRING_NULL( uVar13 ))))
                    {
                        if (sub_49541( iParam0->_fU0, uVar13, iVar11, iVar15 ))
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    if (((iVar4 - l_U199) > 10000) AND (IS_BIT_SET( l_U204, 6 )))
    {
        CLEAR_BIT( ref l_U204, 6 );
    }
    if ((IS_PLAYER_PRESSING_HORN( sub_1055() )) AND (NOT (IS_BIT_SET( l_U204, 7 ))))
    {
        SET_BIT( ref l_U204, 7 );
    }
    if (((iVar4 - l_U199) > 28000) AND (l_U201 != nil))
    {
        if ((sub_7076( iParam0 + 0 )) == 1)
        {
            sub_49541( iParam0->_fU0, "", sub_1147(), 30 );
        }
        else
        {
            sub_49541( iParam0->_fU0, "", sub_1147(), 20 );
        }
        l_U201 = iParam0->_fU0;
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1055(), 0 )))
        {
            CLEAR_BIT( ref l_U204, 0 );
            CLEAR_BIT( ref l_U204, 2 );
            CLEAR_BIT( ref l_U204, 1 );
        }
        CLEAR_BIT( ref l_U204, 7 );
    }
    return;
}

void sub_54227(boolean bParam0, int iParam1)
{
    string Result;

    Result = nil;
    if ((iParam1 == 1) || (iParam1 == 0))
    {
        if (bParam0)
        {
            switch (sub_49914( 0, 3 ))
            {
                case 0:
                Result = "chat_left_e";
                break;
                case 1:
                Result = "chat_left_f";
                break;
                default:
                Result = "chat_left_g";
                break;
            }
        }
        else
        {
            switch (sub_49914( 0, 3 ))
            {
                case 0:
                Result = "chat_right_e";
                break;
                case 1:
                Result = "chat_right_f";
                break;
                default:
                Result = "chat_right_g";
                break;
            }
        }
        PRINTSTRING( "Anim used: " );
        PRINTSTRING( Result );
        PRINTNL();
    }
    return Result;
}

void sub_54880(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

void sub_54923(int iParam0)
{
    return sub_54943( iParam0->_fU0, sub_1147(), 1 );
}

void sub_54943(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_52107( uParam0, uParam2 ), sub_52107( uParam1, uParam2 ) );
}

void sub_55117(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iParam0->_fU4, 0, 11, 0, ref uVar3, ref uVar4, ref uVar5 );
    return LOCATE_CHAR_IN_CAR_3D( sub_1147(), uVar3, uVar4, uVar5, 10, 10, 10, 0 );
}

void sub_55231(boolean bParam0)
{
    string Result;

    Result = nil;
    if (bParam0)
    {
        Result = "gest_damn";
    }
    return Result;
}

boolean sub_55319(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 10000;
    switch (iParam0)
    {
        case 20:
        iVar3 = 2500;
        break;
        case 8:
        iVar3 = 4500;
        break;
        case 6:
        iVar3 = 2500;
        break;
        case 5:
        iVar3 = 1000;
        break;
        case 33:
        iVar3 = 2000;
        break;
        case 31:
        iVar3 = 2000;
        break;
        case 0:
        iVar3 = 18000;
        break;
        case 1:
        iVar3 = 19000;
        break;
        case 21:
        iVar3 = 25000;
        break;
        case 38:
        iVar3 = 2000;
        break;
    }
    GET_GAME_TIMER( ref iVar4 );
    if (iParam0 == 39)
    {
        return 0;
    }
    return (iVar4 - l_U199) > iVar3;
}

void sub_55573(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref uVar3 );
        switch (uVar3)
        {
            case 1:
            Result = "gest_thumbsup";
            break;
            default:
            Result = "gest_thumbsup";
            break;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "p_gest_celeb_a";
            break;
            case 1:
            Result = "p_gest_celeb_b";
            break;
            case 2:
            Result = "p_gest_celeb_c";
            break;
            case 3:
            Result = "p_gest_celeb_d";
            break;
            case 5:
            Result = "p_gest_rockin";
            break;
            case 6:
            Result = "p_gest_yes";
            break;
            default:
            Result = "p_gest_yes";
            break;
        }
    }
    return Result;
}

void sub_57462(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;
    int[22] iVar8;
    int I;

    Result = nil;
    array(ref iVar8, 22);
    iVar8[0] = -408052231;
    iVar8[1] = 584879743;
    iVar8[2] = 802082487;
    iVar8[3] = -570033273;
    iVar8[4] = 301427732;
    iVar8[5] = -159126838;
    iVar8[6] = -359167535;
    iVar8[7] = -571009320;
    iVar8[8] = 2006142190;
    iVar8[9] = -1606187161;
    iVar8[10] = -618617997;
    iVar8[11] = -77769032;
    iVar8[12] = 1265391242;
    iVar8[13] = -255678177;
    iVar8[14] = -1670998136;
    iVar8[15] = -1759858085;
    iVar8[16] = -114291515;
    iVar8[17] = -891462355;
    iVar8[18] = 1203311498;
    iVar8[19] = -909201658;
    iVar8[20] = 788045382;
    iVar8[21] = -1842748181;
    for ( I = 0; I < iVar8; I++ )
    {
        Result = GET_CLOSEST_CAR( uParam0, uParam3, iVar8[I], uParam4 );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            return Result;
        }
    }
    return nil;
}

void sub_58063(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "gest_thumbsup";
            break;
            case 1:
            Result = "gest_hey";
            break;
        }
    }
    else
    {
        Result = "p_gest_rockin";
    }
    return Result;
}

void sub_58779(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((sub_7076( uParam0 )) == 1)
        {
            if ((IS_SCREEN_FADED_OUT()) || (NOT (IS_CHAR_ON_SCREEN( (uParam0^) ))))
            {
                if ((IS_CHAR_ON_ANY_BIKE( (uParam0^) )) || (uParam1))
                {
                    GIVE_PED_HELMET_WITH_OPTS( (uParam0^), 1 );
                }
                else
                {
                    REMOVE_PED_HELMET( (uParam0^), 1 );
                }
            }
        }
    }
    return;
}

int sub_59070(int iParam0)
{
    int iVar3;
    float fVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_11654( iParam0 )) != iParam0->_fU4)
    {
        if (sub_54880( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if ((sub_59167( iParam0 )) < l_U209)
    {
        return 1;
    };;;
    if (sub_54880( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 1.70000000 );
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    if ((iVar3 == 7) || ((iParam0->_fU96 != 4) AND (iParam0->_fU96 != 14)))
    {
        if (sub_11104( iParam0, 8 ))
        {
            iParam0->_fU96 = 14;
        }
        else
        {
            iParam0->_fU96 = 4;
        }
        if (sub_11104( iParam0, 16 ))
        {
            iVar5 = 4;
        }
        else
        {
            iVar5 = 2;
        }
        if (sub_11104( iParam0, 128 ))
        {
            TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U208, l_U207 );
        }
        else
        {
            TASK_CAR_MISSION_COORS_TARGET( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U208, l_U207 );
        }
    }
    else if (sub_11104( iParam0, 64 ))
    {
        fVar4 = (sub_59167( iParam0 )) / 3.00000000;
        if (fVar4 < iParam0->_fU28)
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar4 );
        }
        else
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
    }
    else
    {
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    }
    if (sub_59695( iParam0->_fU4 ))
    {
        uVar6 = {sub_59845( iParam0->_fU4, 1 )};
        if (GET_RANDOM_CAR_NODE( uVar6, 12.00000000, 1, 0, 0, ref uVar6, ref uVar9 ))
        {
            SET_CAR_COORDINATES( iParam0->_fU4, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
        }
    }
    return 2;
}

void sub_59167(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (iParam0->_fU36)
        {
            case 1:
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                return sub_54943( iParam0->_fU0, iParam0->_fU8, 1 );
            }
            break;
            default:
        }
    }
    return VDIST( sub_52107( iParam0->_fU0, 1 ), iParam0->_fU16 );
}

int sub_59695(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 2, 30000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 1, 40000 ))
        {
            return 1;
        };;;;
    }
    return 0;
}

void sub_59845(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CAR_DEAD( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

int sub_60121(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (NOT (sub_11104( iParam0, 2 )))
    {
        return 0;
    }
    uVar3 = sub_11654( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        GET_CAR_CHAR_IS_USING( iParam0->_fU0, ref uVar3 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                if (IS_CHAR_IN_CAR( iParam0->_fU8, uVar3 ))
                {
                    iParam0->_fU4 = uVar3;
                    return 1;
                }
            }
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (((sub_7076( ref iVar4 )) == (sub_7076( iParam0 + 0 ))) || ((iVar4 == sub_1147()) AND ((sub_7076( iParam0 + 0 )) == 1)))
                {
                    sub_11934( iParam0, iVar4 );
                    return 2;
                }
            }
        }
    }
    return 0;
}

int sub_60378(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
    {
        if (sub_60416( iParam0->_fU8, iParam0->_fU0, 0 ))
        {
            return 2;
        }
    }
    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (sub_49422( iParam0->_fU0 ))
        {
            return 2;
        }
        if ((sub_11654( iParam0 )) == iParam0->_fU4)
        {
            if (sub_54880( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        if (NOT (sub_54880( iParam0->_fU4 )))
        {
            iParam0->_fU4 = nil;
            return 0;
        }
        iVar3 = nil;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
        if ((iVar3 == sub_1147()) || ((iVar3 == iParam0->_fU8) AND (NOT (IS_CHAR_INJURED( iVar3 )))))
        {
            if (IS_CHAR_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
            {
                return 2;
            }
            else
            {
                return 0;
            }
        }
        else if (NOT (IS_CHAR_INJURED( iVar3 )))
        {
            if ((sub_7076( iParam0 + 0 )) == (sub_7076( ref iVar3 )))
            {
                return 0;
            }
        }
        if ((((IS_CHAR_IN_CAR( sub_1147(), iParam0->_fU4 )) || (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((sub_54943( iParam0->_fU0, sub_1147(), 1 )) < 90.00000000))
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 30.00000000, 30.00000000, 30.00000000, 0 ))
            {
                bVar4 = false;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            bVar4 = true;
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (NOT (IS_CHAR_DEAD( iVar3 )))
                {
                    if (IS_PED_A_MISSION_PED( iVar3 ))
                    {
                        bVar4 = false;
                    }
                }
                if (bVar4)
                {
                    DELETE_CHAR( ref iVar3 );
                }
            }
        }
        sub_61100( iParam0 );
        if (bVar4)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
            if (sub_54880( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 12, ref iVar5 );
            if (iVar5 == 7)
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 12.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -1 );
                }
                else
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -2 );
                }
            }
            return 2;
        }
    }
    return 0;
}

void sub_60416(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_60446( ref uVar5, uParam2 );
}

int sub_60446(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_60471( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_60471( (uParam0^)[I], ref uVar5[1], uParam1 ))
        {
            if (uVar5[0] != uVar5[1])
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int sub_60471(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
        {
            return 0;
        }
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, uParam1 );
    return 1;
}

int sub_61100(int iParam0)
{
    if (sub_61114( iParam0->_fU0 ))
    {
        ;
    }
    return 1;
}

int sub_61114(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (IS_PED_IN_GROUP( uParam0 ))
    {
        GET_PED_GROUP_INDEX( uParam0, ref iVar3 );
        if (DOES_GROUP_EXIST( iVar3 ))
        {
            GET_GROUP_SIZE( iVar3, ref iVar4, ref iVar5 );
            if (NOT (IS_GROUP_LEADER( uParam0, iVar3 )))
            {
                if (((iVar4 < 1) || (iVar5 < 2)) AND (iVar3 != sub_40248()))
                {
                    REMOVE_GROUP( iVar3 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( uParam0 );
                }
                return 1;
            }
            else if ((iVar5 < 1) AND (iVar3 != sub_40248()))
            {
                REMOVE_GROUP( iVar3 );
            }
        }
    }
    return 0;
}

int sub_61510(int iParam0)
{
    unknown uVar3;

    if ((NOT (sub_11104( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = sub_57462( sub_52107( iParam0->_fU0, 1 ), 30.00000000, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_61624(int iParam0)
{
    unknown uVar3;

    return 0;
    if ((NOT (sub_11104( iParam0, 2 ))) AND (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    uVar3 = GET_CLOSEST_CAR( sub_52107( iParam0->_fU0, 1 ), 30.00000000, 0, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_61745(int iParam0)
{
    float fVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        return 0;
    }
    fVar3 = sub_59167( iParam0 );
    if (fVar3 < 12.00000000)
    {
        return 1;
    }
    else if (fVar3 > 90.00000000)
    {
        return 0;
    }
    else
    {
        switch (iParam0->_fU36)
        {
            case 2:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 27, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0->_fU0, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 4, -1, 12.00000000 / 2.00000000 );
            }
            else if ((GET_NAVMESH_ROUTE_RESULT( iParam0->_fU0 )) == 2)
            {
                return 0;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 21, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_GO_TO_CHAR( iParam0->_fU0, iParam0->_fU8, -1, 12.00000000 / 2.00000000 );
            }
            break;
            default: break;
        }
    }
    return 2;
}

int sub_62045(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU36 != 2)
    {
        return 0;
    }
    GET_GAME_VIEWPORT_ID( ref uVar3 );
    if ((sub_59167( iParam0 )) < 12.00000000)
    {
        return 1;
    }
    else if ((((sub_59167( iParam0 )) > 90.00000000) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))) AND ((sub_54943( iParam0->_fU0, sub_1147(), 1 )) > 90.00000000))
    {
        if (GET_SAFE_POSITION_FOR_CHAR( ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 ))
        {
            if (((CAM_IS_SPHERE_VISIBLE( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000 )) || (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000, 2.00000000, 2.00000000 ))) || ((VDIST( sub_52107( sub_1147(), 1 ), uVar4 )) < 30.00000000))
            {
                ;
            }
            else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            return 2;;
        }
    }
    return 0;
}

int sub_62401(int iParam0)
{
    int iVar3;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_11654( iParam0 )) != iParam0->_fU4)
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 16, ref iVar3 );
    if (iVar3 == 7)
    {
        TASK_CAR_DRIVE_WANDER( iParam0->_fU0, iParam0->_fU4, iParam0->_fU28, 2 );
    }
    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    return 2;
}

int sub_62660(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
    {
        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 34, ref iVar3 );
            if ((iVar3 == 7) AND (NOT (IS_CHAR_FACING_CHAR( iParam0->_fU0, sub_1147(), 45.00000000 ))))
            {
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_1147(), -1, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam0->_fU0, sub_1147() );
            }
        }
        return 1;
    }
    return 0;
}

int sub_62817(int iParam0)
{
    unknown uVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    float fVar8;
    int iVar9;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    iVar4 = nil;
    bVar5 = false;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar4 );
    }
    if (DOES_VEHICLE_EXIST( iVar4 ))
    {
        if (sub_12030( iParam0->_fU0, iVar4 ))
        {
            bVar5 = true;
            GET_DRIVER_OF_CAR( iVar4, ref uVar3 );
            bVar6 = false;
            if ((NOT (IS_CHAR_IN_CAR( sub_1147(), iVar4 ))) AND (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1147() ))))
            {
                if (IS_CHAR_INJURED( uVar3 ))
                {
                    bVar6 = true;
                }
            }
            if (IS_CAR_MODEL( iVar4, -960289747 ))
            {
                if (sub_60416( sub_1147(), iParam0->_fU0, 0 ))
                {
                    return 2;
                }
            }
            else if ((sub_7076( iParam0 + 0 )) == 1)
            {
                GET_CAR_CHAR_IS_USING( sub_1147(), ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (IS_CAR_MODEL( uVar7, 800869680 ))
                    {
                        return 2;
                    }
                }
            }
            if (bVar6)
            {
                return sub_51762( iParam0, 1, 0 );
            }
        }
    }
    if ((sub_11104( iParam0, 1 )) AND ((sub_59167( iParam0 )) < 30.00000000))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        if (IS_PED_IN_COMBAT( iParam0->_fU0 ))
        {
            return 2;
        }
    }
    else
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        if ((IS_PED_IN_COMBAT( iParam0->_fU0 )) AND (NOT bVar5))
        {
            CLEAR_CHAR_TASKS( iParam0->_fU0 );
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 1 );
        }
        else
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
        }
    }
    iVar4 = nil;
    GET_CAR_CHAR_IS_USING( sub_1147(), ref iVar4 );
    fVar8 = 20.00000000;
    if (iParam0->_fU8 == sub_1147())
    {
        if ((IS_CHAR_ON_FOOT( iParam0->_fU0 )) AND (IS_CHAR_ON_FOOT( sub_1147() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_1147(), ref iVar9 );
            if (iVar9 != 0)
            {
                fVar8 = 100.00000000;
            }
        }
    }
    if ((NOT (IS_CHAR_IN_WATER( iParam0->_fU8 ))) AND ((((IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU8 )) || (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU8 ))) || (DOES_VEHICLE_EXIST( iVar4 ))) || ((sub_54943( iParam0->_fU0, iParam0->_fU8, 1 )) > fVar8)))
    {
        if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
        {
            if ((sub_12054( iParam0->_fU8, iParam0->_fU4 )) || (iParam0->_fU4 == iVar4))
            {
                if ((sub_63503( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_60121( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_61510( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_64570( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_64981( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_61745( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_62660( iParam0 )) != 0)
                {
                    ;
                };;;;;;;
            }
            else if ((sub_12054( sub_1147(), iParam0->_fU4 )) AND ((sub_7076( iParam0 + 0 )) == 1))
            {
                if ((sub_60121( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_61510( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_64570( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_64981( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_61745( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_62660( iParam0 )) != 0)
                {
                    ;
                };;;;;;
            }
            else if ((sub_65807( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_65956( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_60378( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_60121( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_61510( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_64981( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_63503( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_64570( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_61745( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_62660( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;;;;
        }
        else if ((sub_65807( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_60378( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_60121( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_63503( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_61510( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_61624( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_64570( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_64981( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_61745( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_62660( iParam0 )) != 0)
        {
            ;
        };;;;;;;;;;;
    }
    else if (((sub_60416( sub_1147(), iParam0->_fU0, 1 )) AND (iParam0->_fU8 != sub_1147())) AND ((sub_7076( iParam0 + 0 )) == 1))
    {
        sub_11934( iParam0, sub_1147() );
    }
    if (IS_CHAR_IN_WATER( iParam0->_fU8 ))
    {
        if (IS_CHAR_IN_WATER( iParam0->_fU0 ))
        {
            if ((sub_51924( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_60378( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_60121( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_64981( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_63842( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_61745( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_61510( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_61624( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_64570( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;
        }
        else if ((NOT (sub_11104( iParam0, 1 ))) || (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
        {
            if ((sub_51924( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_60378( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_60121( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_64981( iParam0 )) != 0)
            {
                ;
            };;;;
        }
        else if ((sub_65807( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_63842( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_61745( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_62660( iParam0 )) != 0)
        {
            ;
        };;;;;;
    }
    else if ((sub_11104( iParam0, 1 )) AND (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))))
    {
        if ((sub_65807( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_63842( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_61745( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_51762( iParam0, 0, 0 )) != 0)
        {
            ;
        }
        else if ((sub_51924( iParam0 )) != 0)
        {
            ;
        };;;;;
    }
    else if ((sub_65807( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_51924( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_60378( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_60121( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_63503( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_61510( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_64981( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_64570( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_63842( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_61745( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_62660( iParam0 )) != 0)
    {
        ;
    };;;;;;;;;;;;;;
    return 2;
}

int sub_63503(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;
    int iVar15;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 )))
    {
        return 0;
    }
    else
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar3 );
        if (NOT (IS_VEH_DRIVEABLE( uVar3 )))
        {
            return 0;
        }
        else if (IS_CHAR_IN_CAR( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
        else
        {
            iVar4 = sub_63632( uVar3 );
            if (iVar4 < 0)
            {
                return 0;
            }
        }
    }
    uVar5 = {sub_59845( uVar3, 1 )};
    uVar8 = {sub_52107( iParam0->_fU0, 1 )};
    uVar11 = {sub_52107( sub_1147(), 1 )};
    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
    {
        if ((sub_59167( iParam0 )) > 30.00000000)
        {
            sub_61100( iParam0 );
            return 0;
        }
        else
        {
            return 2;
        }
    }
    else if ((sub_59167( iParam0 )) < 12.00000000)
    {
        iVar14 = sub_63842( iParam0 );
        if (iVar14 != 0)
        {
            return 2;
        }
    }
    if ((((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CAR_ON_SCREEN( uVar3 ))) || ((VDIST( uVar11, uVar5 )) < 30.00000000)) || ((VDIST( uVar11, uVar8 )) < 30.00000000))
    {
        if ((VDIST( uVar8, uVar5 )) > 30.00000000)
        {
            return 0;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar15 );
            if (iVar15 == 7)
            {
                TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, -2, iVar4 );
            }
            return 2;
        }
    }
    else
    {
        CLEAR_CHAR_TASKS( iParam0->_fU0 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, iVar4 );
        return 1;
    }
    return 0;
}

int sub_63632(unknown uParam0)
{
    int Result;
    int iVar4;

    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
    for ( Result = 0; Result < iVar4; Result++ )
    {
        if (IS_CAR_PASSENGER_SEAT_FREE( uParam0, Result ))
        {
            return Result;
        }
    }
    return -1;
}

int sub_63842(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        if (sub_61114( iParam0->_fU0 ))
        {
            ;
        }
        return 0;
    }
    else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        if (NOT (sub_60416( iParam0->_fU0, iParam0->_fU8, 1 )))
        {
            return 0;
        }
    }
    else if ((sub_54943( iParam0->_fU0, iParam0->_fU8, 1 )) > 12.00000000)
    {
        return 0;
    }
    GET_PED_GROUP_INDEX( iParam0->_fU8, ref uVar3 );
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        if (IS_GROUP_MEMBER( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
    }
    else
    {
        REMOVE_ALL_INACTIVE_GROUPS_FROM_CLEANUP_LIST();
        CREATE_GROUP( 0, ref uVar3, 1 );
        SET_GROUP_LEADER( uVar3, iParam0->_fU8 );
        PRINTSTRING( "e1_biker_buddy_task: CREATING GROUP with leader" );
        PRINTINT( iParam0->_fU8 );
        PRINTSTRING( " and ped " );
        PRINTINT( iParam0->_fU0 );
        PRINTNL();
    }
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        GET_GROUP_SIZE( uVar3, ref uVar4, ref iVar5 );
        if (iVar5 < 7)
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            GET_GROUP_LEADER( uVar3, ref uVar6 );
            if (NOT (IS_CHAR_INJURED( uVar6 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
                SET_GROUP_MEMBER( uVar3, iParam0->_fU0 );
                SET_CHAR_NEVER_LEAVES_GROUP( iParam0->_fU0, 1 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_64570(int iParam0)
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

    if (NOT (sub_11104( iParam0, 2 )))
    {
        return 0;
    }
    iVar3 = 0;
    if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
    {
        iVar3 = sub_49322( iParam0->_fU4 );
    }
    else if (HAS_MODEL_LOADED( -408052231 ))
    {
        iVar3 = -408052231;
    }
    else if (HAS_MODEL_LOADED( -570033273 ))
    {
        iVar3 = -570033273;
    }
    else if (HAS_MODEL_LOADED( 584879743 ))
    {
        iVar3 = 584879743;
    }
    else if (HAS_MODEL_LOADED( 802082487 ))
    {
        iVar3 = 802082487;
    }
    else if (HAS_MODEL_LOADED( -1830458836 ))
    {
        iVar3 = -1830458836;
    };;;;;;
    if (iVar3 == 0)
    {
        ;
    }
    else if ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) AND ((sub_54923( iParam0 )) > 30.00000000))
    {
        GET_CHAR_COORDINATES( iParam0->_fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8, ref uVar10 ))
        {
            uVar11 = sub_7736( uVar4, uVar10, iVar3 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, uVar11 );
            if (sub_54880( uVar11 ))
            {
                GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                SET_BLIP_THROTTLE_RANDOMLY( uVar11, 1 );
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar11 );
            return 1;
        }
    }
    return 0;
}

int sub_64981(int iParam0)
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
    int iVar13;
    int iVar14;
    boolean bVar15;

    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if ((iVar3 == iParam0->_fU0) || (IS_CHAR_INJURED( iVar3 )))
            {
                return 0;
            }
            else if (iVar3 != iParam0->_fU8)
            {
                sub_11934( iParam0, iVar3 );
                return 2;
            }
            else
            {
                return 1;
            }
        }
        uVar4 = {sub_52107( sub_1147(), 1 )};
        uVar7 = {sub_52107( iParam0->_fU0, 1 )};
        uVar10 = {sub_59845( iParam0->_fU4, 1 )};
        if ((((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) || ((VDIST( uVar4, uVar10 )) < 30.00000000)) || ((VDIST( uVar4, uVar7 )) < 30.00000000))
        {
            if ((VDIST( uVar10, uVar7 )) > 30.00000000)
            {
                return 0;
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar13 );
            if (iVar13 != 7)
            {
                return 2;
            }
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (IS_CHAR_INJURED( iVar3 ))
            {
                return 0;
            }
            else if ((iVar3 == sub_1147()) || ((sub_7076( ref iVar3 )) == (sub_7076( iParam0 + 0 ))))
            {
                iVar14 = sub_63632( iParam0->_fU4 );
                if (iVar14 < 0)
                {
                    return 0;
                }
                else
                {
                    TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, iParam0->_fU4, -2, iVar14 );
                    return 2;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (IS_PED_A_MISSION_PED( iVar3 ))
                {
                    bVar15 = false;
                }
                else
                {
                    DELETE_CHAR( ref iVar3 );
                    bVar15 = true;
                }
            }
            else
            {
                bVar15 = true;
            }
            if (bVar15)
            {
                CLEAR_CHAR_TASKS( iParam0->_fU0 );
                SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
                WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
                if (sub_54880( iParam0->_fU4 ))
                {
                    GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                    SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
                }
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    iParam0->_fU4 = nil;
    return 0;
}

int sub_65807(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 91, ref uVar3 );
    GET_CHAR_HIGHEST_PRIORITY_EVENT( iParam0->_fU0, ref uVar4 );
    if ((((IS_PED_IN_COMBAT( iParam0->_fU0 )) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 110 ))) || (IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 115 ))) AND ((sub_59167( iParam0 )) < 30.00000000))
    {
        return 2;
    }
    return 0;
}

int sub_65956(int iParam0)
{
    int iVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    int iVar8;
    boolean bVar9;
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

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_11654( iParam0 )) != iParam0->_fU4)
    {
        if (sub_54880( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if (NOT (DOES_CHAR_EXIST( iParam0->_fU8 )))
    {
        if (sub_54880( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    };;;
    if (sub_54880( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 2.00000000 );
    }
    if ((CHECK_STUCK_TIMER( iParam0->_fU4, 0, 5000 )) AND (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 ))))
    {
        SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
    }
    sub_61100( iParam0 );
    iVar8 = 2;
    if (sub_11104( iParam0, 16 ))
    {
        iVar8 = 4;
    }
    bVar9 = false;
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    fVar6 = sub_59167( iParam0 );
    uVar10 = nil;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar10 );
    }
    else if ((iParam0->_fU8 == sub_1147()) AND (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1147() )))
    {
        GET_VEHICLE_PLAYER_WOULD_ENTER( sub_1055(), ref uVar10 );
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        GET_CAR_MODEL( uVar10, ref uVar11 );
        if (NOT ((IS_THIS_MODEL_A_BIKE( uVar11 )) || (IS_THIS_MODEL_A_CAR( uVar11 ))))
        {
            uVar10 = nil;
        }
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        if (PLAYER_IS_INTERACTING_WITH_GARAGE())
        {
            uVar12 = {sub_52107( sub_1147(), 1 )};
            if (GET_NTH_CLOSEST_CAR_NODE( uVar12._fU0, uVar12._fU4, uVar12._fU8, 5, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 ))
            {
                return sub_66474( iParam0, uVar12 );
            }
            else
            {
                return sub_51924( iParam0 );
            }
        }
        GET_CHAR_SPEED( iParam0->_fU8, ref fVar5 );
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        fVar7 = 50.00000000;
        if ((fVar4 < 2.50000000) AND (fVar6 < 9.00000000))
        {
            return sub_51924( iParam0 );
        }
        else if (fVar6 < 15.00000000)
        {
            if (fVar6 < 1.50000000)
            {
                fVar7 = 0.00000000;
            }
            else if (fVar5 < 0.50000000)
            {
                return sub_51924( iParam0 );
            }
            else if (fVar5 < 4.00000000)
            {
                fVar7 = fVar5;
            }
            else
            {
                GET_MODEL_DIMENSIONS( uVar11, ref uVar15, ref uVar18 );
                if (iParam0->_fU8 != sub_1147())
                {
                    if ((((fVar6 < 6.00000000) AND (iParam0->_fU40 == 2)) || ((fVar6 < 5.00000000) AND (iParam0->_fU40 == 3))) || (fVar6 < 3.00000000))
                    {
                        fVar7 = fVar5 - 2.00000000;
                        if (iParam0->_fU40 == 2)
                        {
                            SET_CAR_LANE_SHIFT( iParam0->_fU4, 1.50000000 );
                        }
                    }
                    else
                    {
                        SET_CAR_LANE_SHIFT( iParam0->_fU4, 0.00000000 );
                    }
                }
                else if (sub_66886())
                {
                    if (fVar6 < 5.00000000)
                    {
                        fVar7 = fVar5 - 5.00000000;
                    }
                    else
                    {
                        fVar7 = fVar5;
                    }
                }
                else if ((IS_THIS_MODEL_A_CAR( uVar11 )) AND (fVar6 < (((ABSF( uVar15._fU4 )) + uVar18._fU0) + 2.50000000)))
                {
                    fVar7 = fVar5 - 2.00000000;
                }
                else if ((fVar6 < 4.00000000) AND (iParam0->_fU40 == 2))
                {
                    fVar7 = fVar5 - 5.00000000;
                }
                else if (fVar6 < 2.50000000)
                {
                    fVar7 = fVar5;
                };;;;;
            };;;
        }
        else if (((sub_59695( iParam0->_fU4 )) || (sub_11104( iParam0, 4 ))) AND ((sub_54923( iParam0 )) >= l_U159))
        {
            bVar9 = sub_67156( iParam0, l_U159, l_U160, fVar5 + 4.00000000 );
            if (bVar9)
            {
                if (sub_11104( iParam0, 128 ))
                {
                    TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                else
                {
                    TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                return 2;
            }
        };;;
        if (fVar7 < 0.00000000)
        {
            fVar7 = 0.00000000;
        }
        if (((((((iVar3 == 7) || ((iParam0->_fU96 == 10) AND (iParam0->_fU40 != 0))) || ((iParam0->_fU96 == 12) AND (iParam0->_fU40 != 2))) || ((iParam0->_fU96 == 11) AND (iParam0->_fU40 != 1))) || ((iParam0->_fU96 == 7) AND (iParam0->_fU40 != 3))) || ((((iParam0->_fU96 != 7) AND (iParam0->_fU96 != 10)) AND (iParam0->_fU96 != 12)) AND (iParam0->_fU96 != 11))) || ((iParam0->_fU8 != iParam0->_fU12) AND (NOT (iParam0->_fU12 == nil))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_11104( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            return 2;
        }
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );
        return 2;
    }
    else
    {
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        if (fVar6 < 12.00000000)
        {
            return sub_51924( iParam0 );
        }
        else if (((((((iVar3 == 7) || ((iParam0->_fU96 == 10) AND (iParam0->_fU40 != 0))) || ((iParam0->_fU96 == 12) AND (iParam0->_fU40 != 2))) || ((iParam0->_fU96 == 11) AND (iParam0->_fU40 != 1))) || ((iParam0->_fU96 == 7) AND (iParam0->_fU40 != 3))) || ((((iParam0->_fU96 != 7) AND (iParam0->_fU96 != 10)) AND (iParam0->_fU96 != 12)) AND (iParam0->_fU96 != 11))) || ((iParam0->_fU8 != iParam0->_fU12) AND (NOT (iParam0->_fU12 == nil))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_11104( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
        }
        fVar7 = fVar6;
        sub_68600( ref fVar7, 5.00000000, 50.00000000 );
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );;
    }
    return 2;
}

void sub_66474(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    uVar6 = {iParam0->_fU16};
    iParam0->_fU16 = {uParam1};
    uVar9 = iParam0->_fU88;
    sub_12961( iParam0, 64 );
    Result = sub_59070( iParam0 );
    iParam0->_fU16 = {uVar6};
    iParam0->_fU88 = uVar9;
    return Result;
}

boolean sub_66886()
{
    return ((IS_CONTROL_PRESSED( 0, 41 )) || (IS_CONTROL_PRESSED( 0, 44 ))) || (IS_CONTROL_PRESSED( 0, 45 ));
}

int sub_67156(int iParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU8, iParam0->_fU4, uParam1, uParam1, uParam1, 0 )))
    {
        if (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 )))
        {
            GET_CAR_COORDINATES( iParam0->_fU4, ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_CHAR_COORDINATES( iParam0->_fU8, ref vVar12.x, ref vVar12.y, ref vVar12.z );
            vVar9 = {vVar6 - vVar12};
            vVar9 = {vVar9 * ((fParam2 + (10.00000000 / 2)) / (VMAG( vVar9 )))};
            vVar9 = {vVar9 + vVar12};
            if (GET_CLOSEST_CAR_NODE_WITH_HEADING( vVar9.x, vVar9.y, vVar9.z, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8, ref uVar18 ))
            {
                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar15._fU0, uVar15._fU4, uVar15._fU8, 4.00000000, 4.00000000, 4.00000000 )))
                {
                    GET_GAME_VIEWPORT_ID( ref uVar19 );
                    if (((NOT (CAM_IS_SPHERE_VISIBLE( uVar19, uVar15._fU0, uVar15._fU4, uVar15._fU8, 6.00000000 ))) AND ((VDIST( uVar15, sub_52107( sub_1147(), 1 ) )) > fParam2)) AND ((VDIST2( uVar15, vVar6 )) > 9.00000000))
                    {
                        uVar21 = {-SIN( uVar18 ), COS( uVar18 ), 0.00000000};
                        GET_ANGLE_BETWEEN_2D_VECTORS( uVar21._fU0, uVar21._fU4, vVar12.x - uVar15._fU0, vVar12.y - uVar15._fU4, ref fVar20 );
                        if (fVar20 > 90.00000000)
                        {
                            LIMIT_ANGLE( fVar20 + 180.00000000, ref fVar20 );
                            LIMIT_ANGLE( uVar18 + 180.00000000, ref uVar18 );
                        }
                        if ((fVar20 < 45.00000000) || (fVar20 > 315.00000000))
                        {
                            SET_CAR_HEADING( iParam0->_fU4, uVar18 );
                            SET_CAR_COORDINATES( iParam0->_fU4, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                            SET_CAR_FORWARD_SPEED( iParam0->_fU4, uParam3 );
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_68600(unknown uParam0, float fParam1, float fParam2)
{
    float fVar5;

    if (fParam2 < fParam1)
    {
        fVar5 = fParam2;
        fParam2 = fParam1;
        fParam1 = fVar5;
    }
    if ((uParam0^) < fParam1)
    {
        (uParam0^) = fParam1;
        return 1;
    }
    else if ((uParam0^) > fParam2)
    {
        (uParam0^) = fParam2;
        return 1;
    }
    return 0;
}

void sub_69968(unknown uParam0)
{
    sub_12515( uParam0, 2 );
    return;
}

void sub_70053(int iParam0)
{
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        if (NOT (sub_11104( iParam0, 256 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_CHAR_VISIBLE( iParam0->_fU0 ))
                    {
                        if (NOT (sub_60416( sub_1147(), iParam0->_fU0, 1 )))
                        {
                            SET_CHAR_VISIBLE( iParam0->_fU0, 0 );
                            FREEZE_CHAR_POSITION( iParam0->_fU0, 1 );
                            if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU0, 0 );
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_1147(), iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 0 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                    SET_CAR_COLLISION( iParam0->_fU4, 0 );
                }
            }
            sub_12961( iParam0, 256 );
        }
    }
    else if (sub_11104( iParam0, 256 ))
    {
        if (DOES_CHAR_EXIST( iParam0->_fU0 ))
        {
            if (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (NOT (IS_CHAR_VISIBLE( iParam0->_fU0 )))
                    {
                        SET_CHAR_VISIBLE( iParam0->_fU0, 1 );
                        FREEZE_CHAR_POSITION( iParam0->_fU0, 0 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                        {
                            SET_CHAR_COLLISION( iParam0->_fU0, 1 );
                        }
                    }
                }
                if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 1 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 0 );
                    SET_CAR_COLLISION( iParam0->_fU4, 1 );
                }
                sub_70521( iParam0, 256 );
            }
        }
    }
    return;
}

void sub_70521(int iParam0, int iParam1)
{
    if (sub_11104( iParam0, iParam1 ))
    {
        iParam0->_fU88 = (iParam0->_fU88) XOR (iParam1);
    }
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        }
    }
    return;
}

int sub_70687(unknown uParam0, int iParam1)
{
    int Result;

    for ( Result = 0; Result < (uParam0^); Result++ )
    {
        if ((uParam0^)[Result]._fU0 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

int sub_71253(unknown uParam0)
{
    if (IS_SCREEN_FADED_OUT())
    {
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( uParam0 )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_71392(unknown uParam0)
{
    if (IS_SCREEN_FADED_OUT())
    {
        return 0;
    }
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CAR_ON_SCREEN( uParam0 )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_71542(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
        if (DOES_CHAR_EXIST( uVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uVar3 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        for ( I = 0; I < iVar4; I++ )
        {
            if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
            {
                GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
            }
        }
    }
    return;
}

int sub_71900()
{
    if (TIMERA() > 5000)
    {
        return 1;
    }
    if (NOT sub_1451())
    {
        if ((NOT (IS_CHAR_INJURED( g_U11028[0]._fU0 ))) || (NOT (IS_CHAR_INJURED( g_U11028[1]._fU0 ))))
        {
            if (sub_21644( "E1BEA", 7 ))
            {
                if (sub_22128( "E1BE_10", ref l_U365, 2, 1 ))
                {
                    return 1;
                }
            }
        }
        else
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

void sub_72827(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    boolean bVar5;
    float fVar6;
    boolean bVar7;
    boolean bVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    int iVar13;
    int iVar14;
    boolean bVar15;

    bVar7 = uParam0;
    fVar9 = 5.00000000;
    fVar10 = 30000.00000000;
    fVar11 = 14.00000000;
    fVar12 = 0.12500000;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        if (g_U11090)
        {
            bVar5 = true;
        }
    }
    else
    {
        bVar5 = true;
    }
    if (bVar5)
    {
        if (NOT IS_MINIGAME_IN_PROGRESS())
        {
            if (IS_PLAYER_PLAYING( sub_1055() ))
            {
                if (IS_CHAR_ON_ANY_BIKE( sub_1147() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1147(), ref iVar4 );
                    if ((NOT (iVar4 == g_U11087[0])) AND (NOT (iVar4 == g_U11087[1])))
                    {
                        if (IS_VEH_DRIVEABLE( iVar4 ))
                        {
                            GET_CAR_SPEED( iVar4, ref fVar6 );
                            if (fVar6 > fVar9)
                            {
                                if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                                {
                                    if (IS_VEH_DRIVEABLE( g_U11087[0] ))
                                    {
                                        if (IS_CHAR_SITTING_IN_CAR( g_U11081[0], g_U11087[0] ))
                                        {
                                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11081[0], fVar11, fVar11, 3.00000000, 0 ))
                                            {
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U11081[0], ref iVar4 );
                                                GET_CAR_SPEED( iVar4, ref fVar6 );
                                                if (fVar6 > fVar9)
                                                {
                                                    if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
                                                    {
                                                        if (IS_VEH_DRIVEABLE( g_U11087[1] ))
                                                        {
                                                            if (IS_CHAR_SITTING_IN_CAR( g_U11081[1], g_U11087[1] ))
                                                            {
                                                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1147(), g_U11081[1], fVar11, fVar11, 3.00000000, 0 ))
                                                                {
                                                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U11081[1], ref iVar4 );
                                                                    GET_CAR_SPEED( iVar4, ref fVar6 );
                                                                    if (fVar6 > fVar9)
                                                                    {
                                                                        GET_FRAME_TIME( ref fVar6 );
                                                                        l_U251 += fVar6 * 1000.00000000;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (l_U251 > fVar10)
            {
                bVar8 = true;
                l_U251 = 0.00000000;
            }
        }
        bVar15 = false;
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
        {
            if (NOT g_U12303)
            {
                bVar15 = true;
            }
        }
        else
        {
            bVar15 = true;
        }
        if (bVar15)
        {
            if (NOT PLAYER_IS_INTERACTING_WITH_GARAGE())
            {
                STORE_WANTED_LEVEL( sub_1055(), ref iVar13 );
                if (iVar13 < l_U252)
                {
                    iVar14 = l_U252 - iVar13;
                    if ((NOT (CHEAT_HAPPENED_RECENTLY( 4, 5000 ))) AND (NOT (CHEAT_HAPPENED_RECENTLY( 3, 300000 ))))
                    {
                        bVar7 = true;
                    }
                    else
                    {
                        PRINTSTRING( "ABILITY_BACKUP - wanted level down cheat activated recently! \n" );
                    }
                }
                l_U252 = iVar13;
            }
        }
        if (NOT sub_73637())
        {
            if (g_U11093)
            {
                g_U11109 = 1;
                g_U11093 = 0;
                sub_73714( 1.00000000 );
                sub_989( 0, 1 );
                PRINTSTRING( "Dissmiss Backup - g_bBuddyBackupMissionPassed \n" );
            }
            if (g_U11095)
            {
                g_U11095 = 0;
                sub_989( 0, 1 );
                PRINTSTRING( "Dissmiss Backup - g_bBuddyBackupMissionFailed \n" );
            }
            if (g_U11094)
            {
                g_U11094 = 0;
                g_U11109 = 1;
                sub_73714( 0.50000000 );
                sub_989( 0, 1 );
                PRINTSTRING( "Dissmiss Backup - g_bBuddyBackupProceduralMissionPassed \n" );
            }
            if (bVar7)
            {
                g_U11110 = 1;
                if (iVar14 == 0)
                {
                    iVar14 = 1;
                }
                fVar6 = TO_FLOAT( iVar14 - 1 );
                sub_73714( 0.08000000 * (TO_FLOAT( sub_74960( 2, FLOOR( fVar6 ) ) )) );
                bVar7 = false;
            }
            if (bVar8)
            {
                g_U11111 = 1;
                sub_73714( fVar12 );
                bVar8 = false;
            }
        }
    }
    if (HAS_SCRIPT_LOADED( "ability_stats" ))
    {
        if (NOT g_U39103)
        {
            if ((((((NOT sub_75222()) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_stats" )) == 0)) AND (NOT sub_1629())) AND (NOT IS_MINIGAME_IN_PROGRESS())) AND (NOT g_U11112)) AND (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
            {
                if (NOT l_U253)
                {
                    if (((IS_USING_CONTROLLER()) AND (IS_BUTTON_PRESSED( 0, 9 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 99 ))))
                    {
                        if (NOT (IS_CHAR_INJURED( g_U11081[0] )))
                        {
                            g_U11129[0] = 1;
                        }
                        else
                        {
                            g_U11129[0] = 0;
                        }
                        if (NOT (IS_CHAR_INJURED( g_U11081[1] )))
                        {
                            g_U11129[1] = 1;
                        }
                        else
                        {
                            g_U11129[1] = 0;
                        }
                        if ((g_U11129[0]) || (g_U11129[1]))
                        {
                            g_U11109 = 0;
                            g_U11110 = 0;
                            g_U11111 = 0;
                            g_U11101 = 1;
                        }
                        l_U253 = 1;
                    }
                }
                else if (((IS_USING_CONTROLLER()) AND (NOT (IS_BUTTON_PRESSED( 0, 9 )))) || ((NOT IS_USING_CONTROLLER()) AND (NOT (IS_CONTROL_PRESSED( 2, 99 )))))
                {
                    l_U253 = 0;
                }
            }
            if (g_U11101)
            {
                if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_stats" )) == 0)
                {
                    START_NEW_SCRIPT( "ability_stats", 512 );
                    g_U11101 = 0;
                }
                else
                {
                    g_U11109 = 0;
                    g_U11110 = 0;
                    g_U11111 = 0;
                    g_U11101 = 0;
                }
            }
        }
    }
    else
    {
        REQUEST_SCRIPT( "ability_stats" );
    }
    return;
}

int sub_73637()
{
    if (sub_53089())
    {
        if (l_U162 >= 1)
        {
            return 1;
        }
    }
    return 0;
}

void sub_73714(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_73740( I, uParam0, 0 );
    }
    g_U11101 = 1;
    return;
}

void sub_73740(int iParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    unknown uVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if ((NOT (IS_CHAR_INJURED( g_U11081[iParam0] ))) || (uParam2))
    {
        if (iParam0 == 0)
        {
            fVar5 = 20.00000000;
        }
        else
        {
            fVar5 = 20.00000000;
        }
        fVar7 = g_U11141[iParam0] + (((100.00000000 - fVar5) / 10.00000000) * uParam1);
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11180[iParam0] = fVar7 - g_U11141[iParam0];
        g_U11141[iParam0] = fVar7;
        fVar8 = (g_U11141[iParam0] - fVar5) / (100.00000000 - fVar5);
        fVar9 = (-1.00000000 * ((fVar8 - 1.00000000) * (fVar8 - 1.00000000))) + 1.00000000;
        if (iParam0 == 0)
        {
            fVar5 = 350.00000000;
        }
        else
        {
            fVar5 = 475.00000000;
        }
        fVar7 = ((1000.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 1000.00000000)
        {
            fVar7 = 1000.00000000;
        }
        g_U11165[iParam0] = fVar7 - g_U11144[iParam0];
        g_U11144[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 0.00000000;
        }
        else
        {
            fVar5 = 0.00000000;
        }
        fVar7 = ((13.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 13.00000000)
        {
            fVar7 = 13.00000000;
        }
        g_U11168[iParam0] = fVar7 - g_U11147[iParam0];
        g_U11147[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 38.00000000;
        }
        else
        {
            fVar5 = 28.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11171[iParam0] = fVar7 - g_U11150[iParam0];
        g_U11150[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 33.00000000;
        }
        else
        {
            fVar5 = 23.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11174[iParam0] = fVar7 - g_U11153[iParam0];
        g_U11153[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 1.00000000;
        }
        else
        {
            fVar5 = 1.00000000;
        }
        fVar7 = ((5.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 5.00000000)
        {
            fVar7 = 5.00000000;
        }
        g_U11177[iParam0] = fVar7 - g_U11156[iParam0];
        g_U11156[iParam0] = fVar7;
        if ((g_U11141[0] >= 100.00000000) AND (g_U11141[1] >= 100.00000000))
        {
            AWARD_ACHIEVEMENT( 55 );
        }
        SET_FLOAT_STAT( 168, g_U11141[0] );
        SET_FLOAT_STAT( 169, g_U11141[1] );
        sub_13479( iParam0 );
        g_U11129[iParam0] = 1;
        GET_GAME_TIMER( ref g_U11140 );
    }
    else
    {
        g_U11165[iParam0] = 0.00000000;
        g_U11168[iParam0] = 0.00000000;
        g_U11171[iParam0] = 0.00000000;
        g_U11174[iParam0] = 0.00000000;
        g_U11177[iParam0] = 0.00000000;
        g_U11129[iParam0] = 0;
    }
    return;
}

int sub_74960(int Result, int iParam1)
{
    int I;
    int iVar5;

    iVar5 = Result;
    if (iParam1 < 0)
    {
        SCRIPT_ASSERT( "POWER_OF() - script function doesn't do negative powers." );
    }
    if (iParam1 >= 2)
    {
        for ( I = 2; I <= iParam1; I++ )
        {
            Result *= iVar5;
        }
        return Result;
    }
    else if (iParam1 == 1)
    {
        return Result;
    }
    else if (iParam1 == 0)
    {
        return 1;
    };;;
    return 0;
}

int sub_75222()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}
