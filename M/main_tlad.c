void main()
{
    int iVar2;
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U20 = -1;
    l_U132 = 15.00000000;
    l_U133 = 35.00000000;
    l_U134 = 16.00000000;
    l_U135 = 0.00000000;
    l_U141 = 1000.00000000;
    l_U142 = 7500.00000000;
    l_U151 = 1;
    l_U152 = 30.00000000;
    l_U153 = 30.00000000;
    l_U154 = 2.00000000;
    l_U164 = 0.00000000;
    l_U165 = 0.00000000;
    l_U177 = 1;
    l_U178 = 0;
    l_U179 = -1;
    l_U180 = 1;
    l_U181 = -1;
    l_U182 = -1;
    l_U183 = 15.00000000;
    l_U210 = 0;
    l_U211 = -1949702649;
    l_U212 = 2075870698;
    l_U217 = 0.12000000;
    l_U228 = 1;
    l_U229 = 1;
    l_U230 = 150.00000000;
    l_U320 = 0;
    l_U321 = 0;
    l_U440 = 0;
    l_U447 = 0;
    l_U448 = 0;
    l_U449 = 0;
    l_U450 = 0;
    l_U451 = 0;
    l_U452 = 0;
    l_U453 = 0;
    PRINTSTRING( "--------------------------------------------\n" );
    PRINTSTRING( "CHOOSING PLAY MODE: " );
    PRINTSTRING( "RELEASE MODE" );
    PRINTNL();
    PRINTSTRING( "--------------------------------------------\n" );
    THIS_SCRIPT_SHOULD_BE_SAVED();
    THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
    SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT( 1 );
    sub_549( 1 );
    sub_24871();
    sub_26166();
    sub_26883();
    sub_28668();
    sub_33112();
    sub_34013();
    sub_34851();
    g_U2771 = 0;
    g_U2777 = 1;
    g_U24 = 0;
    g_U38713 = 1;
    g_U10499 = 0;
    SET_NO_RESPRAYS( 0 );
    ProtectedSet(g_U11001, 6);
    SET_MAX_WANTED_LEVEL( ProtectedGet(g_U11001) );
    iVar2 = 0;
    sub_19871();
    sub_37460();
    iVar3 = -1;
    sub_39251( iVar3 );
    sub_39456();
    GET_GAME_TIMER( ref l_U451 );
    GET_GAME_TIMER( ref l_U452 );
    ENABLE_PED_HELMET( sub_15549(), 0 );
    bVar4 = false;
    bVar4 = true;
    if (NOT bVar4)
    {
        sub_42610();
    }
    REQUEST_SCRIPT( "initial" );
    while (NOT (HAS_SCRIPT_LOADED( "initial" )))
    {
        WAIT( 0 );
    }
    uVar5 = START_NEW_SCRIPT( "initial", 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "initial" );
    WAIT( 0 );
    while (IS_THREAD_ACTIVE( uVar5 ))
    {
        WAIT( 0 );
    }
    if (bVar4)
    {
        sub_42820();
    }
    while (NOT sub_42869())
    {
        WAIT( 0 );
    }
    FORCE_LOADING_SCREEN( 0 );
    SET_TAXI_GARAGE_RADIO_STATE( 1 );
    while (true)
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref l_U440 );
        sub_43136();
        sub_49729();
        sub_188393();
        sub_201717();
        sub_202048();
        sub_202332();
        sub_202725();
        sub_202888();
        sub_204278();
        sub_205743();
        sub_205843();
        sub_206609();
        sub_206889();
        sub_206948();
        if (l_U440 > l_U452)
        {
            l_U452 = l_U440 + 5000;
            sub_207392();
        }
        if (l_U450 == 0)
        {
            sub_207677();
            sub_207732();
            sub_207873();
            sub_209384();
            sub_209526();
            sub_209707();
        }
        sub_209882();
        sub_210418();
        if (GET_GFWL_IS_RETURNING_TO_SINGLE_PLAYER())
        {
            SET_GFWL_IS_RETURNING_TO_SINGLE_PLAYER( 0 );
            if (GET_GFWL_HAS_SAFE_HOUSE())
            {
                NETWORK_STORE_SINGLE_PLAYER_GAME();
            }
        }
        else if ((g_U21 == 1) AND (NOT GET_GFWL_HAS_SAFE_HOUSE()))
        {
            PRINTSTRING( "\n [rw][gfwl]  \n" );
            SET_GFWL_HAS_SAFE_HOUSE( 1 );
        }
        if (g_U11)
        {
            g_U11 = 0;
            sub_216241();
        }
        if (g_U14)
        {
            g_U14 = 0;
            sub_216401();
        }
        if (g_U15728[18])
        {
            g_U10460 = 0;
        }
        sub_216542();
    }
    return;
}

void sub_549(unknown uParam0)
{
    PRINTSTRING( "********************************** FLOW RESET **********************************\n" );
    sub_651( uParam0 );
    sub_7079();
    sub_7153( uParam0 );
    sub_7769();
    sub_7902();
    sub_7919();
    sub_7983();
    sub_8012();
    sub_8037();
    sub_8062();
    sub_15319();
    sub_15540();
    sub_15605();
    sub_15675();
    sub_16109();
    sub_16198( uParam0 );
    sub_16282();
    sub_16380();
    sub_16401();
    sub_18398();
    sub_18457();
    sub_18512();
    sub_18567();
    sub_18813();
    sub_18834();
    sub_18859();
    sub_18882();
    sub_19871();
    sub_24594();
    return;
}

void sub_651(unknown uParam0)
{
    sub_662( uParam0 );
    return;
}

void sub_662(unknown uParam0)
{
    sub_671();
    sub_2025( uParam0 );
    sub_2995();
    sub_3076();
    sub_3131();
    sub_3188();
    sub_3247();
    sub_3354();
    sub_3573();
    sub_3665();
    sub_5506();
    sub_5618();
    sub_5683();
    sub_5716();
    sub_5857();
    sub_6308();
    sub_6393();
    sub_6574();
    sub_6633();
    sub_6690();
    sub_6747();
    sub_6804();
    sub_6871();
    sub_6907();
    sub_6954();
    g_U28062 = -1;
    g_U12305 = 0;
    g_U20908 = 0;
    g_U12304 = 0;
    g_U12303 = 0;
    StrCopy( ref g_U10987, "", 16 );
    g_U11000 = 1;
    g_U11004 = 1;
    return;
}

void sub_671()
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        sub_697( I );
    }
    return;
}

void sub_697(unknown uParam0)
{
    g_U12306[uParam0]._fU0 = 0;
    g_U12306[uParam0]._fU4 = 0;
    g_U12306[uParam0]._fU8 = 0;
    g_U12306[uParam0]._fU12 = 0;
    g_U12306[uParam0]._fU16 = -1;
    g_U12306[uParam0]._fU20 = -1;
    g_U12306[uParam0]._fU24 = -1;
    g_U12306[uParam0]._fU28 = 0;
    g_U12306[uParam0]._fU32 = 0;
    g_U12306[uParam0]._fU36 = 0;
    g_U12306[uParam0]._fU140 = 0;
    StrCopy( ref g_U12306[uParam0]._fU76, "MF14AUD", 16 );
    StrCopy( ref g_U12306[uParam0]._fU92, "PLACEHOLDER", 16 );
    g_U12306[uParam0]._fU108 = 0;
    g_U12306[uParam0]._fU112 = 0;
    g_U12306[uParam0]._fU116 = 0;
    g_U12306[uParam0]._fU120 = 0;
    sub_1000( ref g_U12306[uParam0]._fU124 );
    sub_1051( uParam0 );
    sub_1197( uParam0 );
    sub_1348( uParam0 );
    return;
}

void sub_1000(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_1051(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 3;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U12306[uParam0]._fU40[I] = 50;
        g_U12306[uParam0]._fU56[I] = -1;
    }
    iVar5 = 5;
    for ( I = 0; I < iVar5; I++ )
    {
        ProtectedSet(g_U20902[I], 50);
    }
    g_U12306[uParam0]._fU72 = 1;
    return;
}

void sub_1197(unknown uParam0)
{
    g_U12306[uParam0]._fU868._fU0 = 0;
    g_U12306[uParam0]._fU868._fU4 = 0;
    sub_1000( ref g_U12306[uParam0]._fU868._fU8 );
    g_U12306[uParam0]._fU868._fU24 = 0;
    g_U12306[uParam0]._fU868._fU28 = {0.00000000, 0.00000000, 0.00000000};
    g_U12306[uParam0]._fU868._fU40 = 0.00000000;
    return;
}

void sub_1348(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        sub_1376( uParam0, I );
    }
    return;
}

void sub_1376(unknown uParam0, unknown uParam1)
{
    g_U12306[uParam0]._fU144[uParam1]._fU0 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU4 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU8 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU12 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU16 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU20 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU36 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU32 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU40 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU44 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU48 = 0;
    StrCopy( ref g_U12306[uParam0]._fU144[uParam1]._fU52, "", 32 );
    g_U12306[uParam0]._fU144[uParam1]._fU128 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU132 = -1;
    g_U12306[uParam0]._fU144[uParam1]._fU136 = -1;
    g_U12306[uParam0]._fU144[uParam1]._fU140 = -1;
    sub_1796( uParam0, uParam1 );
    return;
}

void sub_1796(unknown uParam0, unknown uParam1)
{
    g_U12306[uParam0]._fU144[uParam1]._fU24 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU28 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU84 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU88 = 0;
    g_U12306[uParam0]._fU144[uParam1]._fU92 = nil;
    StrCopy( ref g_U12306[uParam0]._fU144[uParam1]._fU96, "", 32 );
    return;
}

void sub_2025(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        sub_2053( I, uParam0 );
        sub_2296( I, uParam0 );
        sub_2559( I );
        sub_2947( I );
    }
    return;
}

void sub_2053(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14838[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U14838[uParam0]._fU0._fU64 );
        }
    }
    g_U14838[uParam0]._fU0._fU0 = 0;
    g_U14838[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U14838[uParam0]._fU0._fU24, "", 32 );
    g_U14838[uParam0]._fU0._fU56 = 10;
    g_U14838[uParam0]._fU0._fU60 = nil;
    g_U14838[uParam0]._fU0._fU64 = nil;
    g_U14838[uParam0]._fU0._fU68 = 17;
    g_U14838[uParam0]._fU0._fU72 = 1;
    g_U14838[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_2296(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14838[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U14838[uParam0]._fU80._fU64 );
        }
    }
    g_U14838[uParam0]._fU80._fU0 = 0;
    g_U14838[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U14838[uParam0]._fU80._fU24, "", 32 );
    g_U14838[uParam0]._fU80._fU56 = 10;
    g_U14838[uParam0]._fU80._fU60 = nil;
    g_U14838[uParam0]._fU80._fU64 = nil;
    g_U14838[uParam0]._fU80._fU68 = 17;
    g_U14838[uParam0]._fU80._fU72 = 1;
    g_U14838[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_2559(unknown uParam0)
{
    g_U14838[uParam0]._fU160._fU0 = 0;
    g_U14838[uParam0]._fU160._fU4 = 0;
    g_U14838[uParam0]._fU160._fU8 = 0;
    StrCopy( ref g_U14838[uParam0]._fU160._fU12, "", 32 );
    StrCopy( ref g_U14838[uParam0]._fU160._fU44, "", 32 );
    g_U14838[uParam0]._fU160._fU76 = -1;
    g_U14838[uParam0]._fU160._fU80 = 0;
    g_U14838[uParam0]._fU160._fU84 = 0;
    g_U14838[uParam0]._fU160._fU88 = 0;
    g_U14838[uParam0]._fU160._fU92 = 0;
    g_U14838[uParam0]._fU160._fU96 = 0;
    g_U14838[uParam0]._fU160._fU100 = 0;
    g_U14838[uParam0]._fU160._fU104 = nil;
    g_U14838[uParam0]._fU160._fU108._fU0 = 0;
    g_U14838[uParam0]._fU160._fU108._fU4 = 19;
    g_U14838[uParam0]._fU160._fU108._fU12 = 0;
    g_U14838[uParam0]._fU160._fU108._fU16 = 0;
    g_U14838[uParam0]._fU160._fU108._fU20 = 0;
    return;
}

void sub_2947(unknown uParam0)
{
    g_U14815[uParam0]._fU4 = 0;
    return;
}

void sub_2995()
{
    int I;

    I = 0;
    for ( I = 0; I < g_U26514; I++ )
    {
        g_U20913[I]._fU100 = 0;
        CLEAR_BIT( ref g_U20913[I]._fU108, 3 );
    }
    return;
}

void sub_3076()
{
    int I;

    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        g_U26712[I]._fU4 = 0;
    }
    return;
}

void sub_3131()
{
    int iVar2;
    int I;

    iVar2 = 18;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U15709[I] = 0;
    }
    return;
}

void sub_3188()
{
    int iVar2;
    int I;

    iVar2 = 56;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U15728[I] = 0;
    }
    return;
}

void sub_3247()
{
    int iVar2;
    int I;

    iVar2 = 6;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U15792[I]._fU0 = 0;
        g_U15792[I]._fU4 = 0;
        g_U15792[I]._fU8 = 0;
        g_U15792[I]._fU12 = 0;
        g_U15792[I]._fU16 = 0;
    }
    return;
}

void sub_3354()
{
    int I;

    g_U38472._fU0 = 0;
    g_U38472._fU4 = 0;
    g_U38472._fU8 = 0;
    I = 0;
    for ( I = 0; I < 19; I++ )
    {
        g_U38472._fU12[I]._fU0 = 0;
        g_U38472._fU12[I]._fU4 = 0;
        g_U38472._fU12[I]._fU8 = 0;
        g_U38472._fU12[I]._fU12 = 22;
        g_U38472._fU12[I]._fU16 = 0;
        g_U38472._fU12[I]._fU20 = -1;
        g_U38472._fU12[I]._fU24 = 0;
        g_U38472._fU12[I]._fU28 = 6;
        g_U38472._fU12[I]._fU32 = -1;
    }
    return;
}

void sub_3573()
{
    g_U15852._fU0 = 0;
    g_U15852._fU4 = 0;
    g_U15852._fU8 = 0;
    g_U15852._fU12 = 0;
    g_U15852._fU16 = 0;
    g_U15852._fU20 = 0;
    g_U15852._fU24 = -1;
    g_U15852._fU32 = nil;
    g_U15852._fU28 = 0;
    return;
}

void sub_3665()
{
    int iVar2;
    int I;
    int iVar4;

    iVar2 = 9;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        iVar4 = I;
        sub_3699( iVar4 );
    }
    g_U20761 = 0;
    return;
}

void sub_3699(unknown uParam0)
{
    int iVar3;
    int I;

    g_U18635[uParam0]._fU0 = 0;
    g_U18635[uParam0]._fU4 = 0;
    g_U18635[uParam0]._fU8 = 0;
    g_U18635[uParam0]._fU12 = 0;
    g_U18635[uParam0]._fU16 = 0;
    g_U18635[uParam0]._fU20 = 0;
    g_U18635[uParam0]._fU24 = 0;
    g_U18635[uParam0]._fU28 = 0;
    g_U18635[uParam0]._fU64 = 0;
    g_U18635[uParam0]._fU68 = 0;
    g_U18635[uParam0]._fU72 = 0;
    g_U18635[uParam0]._fU76 = 0;
    g_U18635[uParam0]._fU80 = 0;
    g_U18635[uParam0]._fU84 = 0;
    g_U18635[uParam0]._fU88 = 0;
    g_U18635[uParam0]._fU92 = 0;
    g_U18635[uParam0]._fU96 = 0;
    g_U18635[uParam0]._fU100 = -1;
    g_U18635[uParam0]._fU112 = -1;
    g_U18635[uParam0]._fU116 = -1;
    g_U18635[uParam0]._fU120 = -1;
    g_U18635[uParam0]._fU104 = 0;
    g_U18635[uParam0]._fU108 = 0;
    g_U18635[uParam0]._fU124 = -1;
    g_U18635[uParam0]._fU128 = -1;
    g_U18635[uParam0]._fU132 = -1;
    g_U18635[uParam0]._fU136 = 0;
    g_U18635[uParam0]._fU140 = 0;
    g_U18635[uParam0]._fU144 = 22;
    g_U18635[uParam0]._fU148 = 22;
    g_U18635[uParam0]._fU152 = 0;
    g_U18635[uParam0]._fU156 = 0;
    g_U18635[uParam0]._fU160 = 0;
    g_U18635[uParam0]._fU164 = 0;
    g_U18635[uParam0]._fU168 = 0;
    g_U18635[uParam0]._fU172 = 0;
    g_U18635[uParam0]._fU176 = 0;
    g_U18635[uParam0]._fU180 = 16;
    g_U18635[uParam0]._fU184 = 4;
    sub_1000( ref g_U18635[uParam0]._fU32 );
    sub_1000( ref g_U18635[uParam0]._fU48 );
    iVar3 = 22;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U18635[uParam0]._fU208[I]._fU0 = -1;
    }
    sub_4408( uParam0 );
    sub_5030( uParam0 );
    g_U18635[uParam0]._fU188._fU0._fU0 = -1;
    g_U18635[uParam0]._fU188._fU0._fU4 = -1;
    g_U18635[uParam0]._fU188._fU8._fU0 = -1;
    g_U18635[uParam0]._fU188._fU8._fU4 = -1;
    g_U18635[uParam0]._fU188._fU16 = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U18635[uParam0]._fU892._fU0[I] = 0;
        g_U18635[uParam0]._fU892._fU12[I] = 0;
    }
    g_U18635[uParam0]._fU892._fU24 = 0;
    g_U18635[uParam0]._fU892._fU28 = 0;
    g_U18635[uParam0]._fU892._fU32 = 0;
    g_U18635[uParam0]._fU892._fU36 = 0;
    g_U18635[uParam0]._fU892._fU40 = -1;
    g_U18635[uParam0]._fU892._fU44 = -1;
    return;
}

void sub_4408(unknown uParam0)
{
    g_U18635[uParam0]._fU704._fU0 = 0;
    g_U18635[uParam0]._fU704._fU28 = 8;
    g_U18635[uParam0]._fU704._fU32 = 5;
    StrCopy( ref g_U18635[uParam0]._fU704._fU36, "", 16 );
    StrCopy( ref g_U18635[uParam0]._fU704._fU68, "", 16 );
    StrCopy( ref g_U18635[uParam0]._fU704._fU36, "", 16 );
    StrCopy( ref g_U18635[uParam0]._fU704._fU84, "", 16 );
    StrCopy( ref g_U18635[uParam0]._fU704._fU100, "", 16 );
    StrCopy( ref g_U18635[uParam0]._fU704._fU116, "", 16 );
    g_U18635[uParam0]._fU704._fU132 = 0;
    g_U18635[uParam0]._fU704._fU136 = -1;
    g_U18635[uParam0]._fU704._fU140 = -1;
    g_U18635[uParam0]._fU704._fU144 = -1;
    g_U18635[uParam0]._fU704._fU148 = -1;
    g_U18635[uParam0]._fU704._fU152 = -1;
    g_U18635[uParam0]._fU704._fU156 = -1;
    g_U18635[uParam0]._fU704._fU160 = 0;
    g_U18635[uParam0]._fU704._fU164 = 0;
    sub_4793( uParam0 );
    return;
}

void sub_4793(unknown uParam0)
{
    g_U18635[uParam0]._fU704._fU4 = 0;
    g_U18635[uParam0]._fU704._fU8 = 0;
    g_U18635[uParam0]._fU704._fU12 = 0;
    g_U18635[uParam0]._fU704._fU16 = 0;
    g_U18635[uParam0]._fU704._fU20 = 0;
    g_U18635[uParam0]._fU704._fU24 = 0;
    g_U18635[uParam0]._fU704._fU168 = 0;
    g_U18635[uParam0]._fU704._fU172 = 0;
    g_U18635[uParam0]._fU704._fU176 = 1;
    g_U18635[uParam0]._fU704._fU180 = nil;
    g_U18635[uParam0]._fU704._fU184 = nil;
    return;
}

void sub_5030(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U18635[uParam0]._fU300[I]._fU0 = 0;
        StrCopy( ref g_U18635[uParam0]._fU300[I]._fU4, "", 32 );
        g_U18635[uParam0]._fU300[I]._fU36 = 0;
        g_U18635[uParam0]._fU300[I]._fU40 = 0;
        g_U18635[uParam0]._fU300[I]._fU44 = 0;
    }
    return;
}

void sub_5506()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        g_U11005[I]._fU0 = 0;
        if (DOES_BLIP_EXIST( g_U11005[I]._fU32 ))
        {
            REMOVE_BLIP( g_U11005[I]._fU32 );
            g_U11005[I]._fU32 = nil;
        }
    }
    return;
}

void sub_5618()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 22;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U15862[I]._fU228._fU4 = 1;
    }
    return;
}

void sub_5683()
{
    g_U26737._fU0 = 1;
    g_U26737._fU4 = 1;
    return;
}

void sub_5716()
{
    int I;

    g_U26739._fU0 = 19;
    g_U26739._fU4 = 12;
    g_U26739._fU8 = 12;
    g_U26739._fU12 = 12;
    g_U26739._fU16 = 8;
    g_U26739._fU20 = 8;
    g_U26739._fU24 = 0;
    g_U26739._fU28 = 0;
    g_U26739._fU32 = 0;
    g_U26739._fU84 = 0;
    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        g_U26739._fU36[I] = 0;
    }
    return;
}

void sub_5857()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        g_U27892[I]._fU0 = 1;
        g_U27892[I]._fU4 = 0;
        g_U27892[I]._fU28 = 0;
        g_U27892[I]._fU32 = 1;
        sub_1000( ref g_U27892[I]._fU8 );
        g_U27892[I]._fU24 = 0;
        sub_5960( I );
    }
    sub_6193();
    sub_6263();
    return;
}

void sub_5960(unknown uParam0)
{
    g_U27892[uParam0]._fU36 = 0;
    g_U27892[uParam0]._fU40 = {0.00000000, 0.00000000, 0.00000000};
    g_U27892[uParam0]._fU52 = 1;
    StrCopy( ref g_U27892[uParam0]._fU60, "", 16 );
    sub_6045( uParam0 );
    return;
}

void sub_6045(unknown uParam0)
{
    sub_6056( uParam0 );
    sub_6135( uParam0 );
    return;
}

void sub_6056(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U27892[uParam0]._fU56 ))
    {
        REMOVE_BLIP( g_U27892[uParam0]._fU56 );
    }
    g_U27892[uParam0]._fU56 = nil;
    return;
}

void sub_6135(unknown uParam0)
{
    g_U27892[uParam0]._fU76 = 0;
    return;
}

void sub_6193()
{
    if (g_U0)
    {
        g_U27953._fU0 = 0;
    }
    else
    {
        g_U27953._fU0 = 1;
    }
    g_U27953._fU4 = 0;
    g_U27953._fU8 = 19;
    g_U27953._fU12 = 0;
    return;
}

void sub_6263()
{
    g_U27953._fU16._fU0 = 3;
    g_U27953._fU16._fU4 = 0;
    return;
}

void sub_6308()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U26666[I]._fU0 = 22;
        StrCopy( ref g_U26666[I]._fU20, "", 16 );
        StrCopy( ref g_U26666[I]._fU4, "", 16 );
    }
    return;
}

void sub_6393()
{
    int iVar2;
    int J;
    int I;

    iVar2 = 2;
    J = 0;
    I = 0;
    for ( J = 0; J < 3; J++ )
    {
        for ( I = 0; I < 22; I++ )
        {
            g_U27961._fU0[J]._fU0[I] = 0;
        }
        g_U27961._fU0[J]._fU92 = 0;
        g_U27961._fU0[J]._fU96 = iVar2;
    }
    for ( I = 0; I < 22; I++ )
    {
        g_U27961._fU304[I] = 0;
    }
    g_U27961._fU396 = 0;
    g_U27961._fU400 = iVar2;
    return;
}

void sub_6574()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 22;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U38647[I] = 0;
    }
    return;
}

void sub_6633()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 22;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U20807[I] = 0;
    }
    return;
}

void sub_6690()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 22;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U20830[I] = 0;
    }
    return;
}

void sub_6747()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 22;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U20853[I] = 0;
    }
    return;
}

void sub_6804()
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        g_U15824[I]._fU0 = 17;
        g_U15824[I]._fU4 = 0;
    }
    return;
}

void sub_6871()
{
    StrCopy( ref g_U15847._fU0, "", 16 );
    g_U15847._fU16 = 0;
    return;
}

void sub_6907()
{
    g_U10681._fU0 = 0;
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    g_U10684 = 0;
    return;
}

void sub_6954()
{
    g_U38680._fU0 = 22;
    g_U38680._fU4 = nil;
    g_U38680._fU8 = 11;
    g_U38680._fU12 = 0;
    return;
}

void sub_7079()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 22;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U20762[I]._fU0 = 0;
        g_U20762[I]._fU4 = nil;
    }
    return;
}

void sub_7153(boolean bParam0)
{
    int I;

    if (bParam0)
    {
        g_U558 = 9;
    }
    if (NOT sub_7175())
    {
        sub_7269( g_U94._fU60 );
        while (NOT sub_7175())
        {
            WAIT( 0 );
        }
    }
    g_U94._fU40 = 0;
    I = 0;
    for ( I = 0; I < 22; I++ )
    {
        g_U15862[I]._fU196._fU0 = 0;
        g_U15862[I]._fU8[0]._fU0[5] = 0;
    }
    for ( I = 0; I < (g_U572 - 1); I++ )
    {
        sub_7572( I );
    }
    for ( I = 0; I <= 6; I++ )
    {
        g_U468[I]._fU0 = 0;
        g_U468[I]._fU4 = 0;
    }
    g_U20900 = 1;
    g_U20901 = 11;
    sub_7704();
    g_U20 = 0;
    return;
}

void sub_7175()
{
    return sub_7186( 1, 1 );
}

int sub_7186(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((uParam1) AND (g_U558 != 9))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

void sub_7269(int iParam0)
{
    if (g_U94._fU60 == iParam0)
    {
        switch (g_U15862[g_U94._fU60]._fU196._fU24)
        {
            case 6:
            case 7:
            case 8: break;
            default:
            g_U15862[g_U94._fU60]._fU196._fU24 = 6;
            if (IS_MOBILE_PHONE_CALL_ONGOING())
            {
                ABORT_SCRIPTED_CONVERSATION( 0 );
            }
            if ((g_U94._fU0 != 1000) AND (g_U94._fU0 != 1001))
            {
                g_U94._fU0 = 1010;
            }
            break;
        }
    }
    return;
}

void sub_7572(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

void sub_7704()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U12300[I] = 0;
    }
    return;
}

void sub_7769()
{
    int iVar2;
    int iVar3;

    iVar2 = sub_7778();
    iVar3 = iVar2 * -1;
    sub_7863( iVar3 );
    return;
}

void sub_7778()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_7787() ))
    {
        STORE_SCORE( sub_7787(), ref Result );
    }
    return Result;
}

void sub_7787()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_7863(unknown uParam0)
{
    ADD_SCORE( sub_7787(), uParam0 );
    return;
}

void sub_7902()
{
    return;
}

void sub_7919()
{
    ProtectedSet(g_U11001, 6);
    SET_MAX_WANTED_LEVEL( ProtectedGet(g_U11001) );
    if (IS_PLAYER_PLAYING( sub_7787() ))
    {
        CLEAR_WANTED_LEVEL( sub_7787() );
    }
    return;
}

void sub_7983()
{
    g_U2771 = 1;
    g_U2777 = 0;
    return;
}

void sub_8012()
{
    g_U38713 = 0;
    return;
}

void sub_8037()
{
    SET_NO_RESPRAYS( 1 );
    return;
}

void sub_8062()
{
    sub_8071();
    return;
}

void sub_8071()
{
    int I;

    sub_8080();
    sub_8189( 0, "PD_CADDY", "PD_MAXWELL", "PDB_ADDR_0", 569.57800000, 1501.85500000, 14.70980000, "PDB_ADDR_0", 569.57800000, 1501.85500000, 14.70980000, 2000, 24, 12 );
    sub_9548( 0, 1 );
    sub_8189( 1, "PD_CAUGHLIN", "PD_MAXWELL", "PDB_ADDR_0", 569.57800000, 1501.85500000, 14.70980000, "PDB_ADDR_0", 569.57800000, 1501.85500000, 14.70980000, 1400, 24, 12 );
    sub_8189( 2, "PD_PECINOVSKY", "PD_PRESTON", "PDB_ADDR_1", 1244.72900000, 1721.92300000, 16.64360000, "PDB_ADDR_1", 1244.72900000, 1721.92300000, 16.64360000, 800, 25, 10 );
    sub_8189( 3, "PD_RIVETTE", "PD_ANTONIO", "PDB_ADDR_2", 1309.43000000, -36.46970000, 27.24210000, "PDB_ADDR_2", 1309.43000000, -36.46970000, 27.24210000, 1300, 3, 14 );
    sub_8189( 4, "PD_TISDEL", "PD_FERNANDO", "PDB_ADDR_3", 1062.73200000, -549.96990000, 12.74630000, "PDB_ADDR_3", 1062.73200000, -549.96990000, 12.74630000, 1100, 51, 10 );
    sub_8189( 5, "PD_REKER", "PD_BERT", "PDB_ADDR_4", 1046.02200000, 501.62800000, 19.35550000, "PDB_ADDR_4", 1046.02200000, 501.62800000, 19.35550000, 400, 19, 6 );
    sub_8189( 6, "PD_GUZOWSKI", "PD_SCOTT", "PDB_ADDR_5", 926.51080000, 789.80470000, 13.48640000, "PDB_ADDR_5", 926.51080000, 789.80470000, 13.48640000, 1400, 32, 5 );
    sub_8189( 7, "PD_PAPARO", "PD_FREDDY", "PDB_ADDR_6", 1268.08200000, 1016.14800000, 12.39090000, "PDB_ADDR_6", 1268.08200000, 1016.14800000, 12.39090000, 300, 30, 3 );
    sub_8189( 8, "PD_STAVNES", "PD_RODRIGO", "PDB_ADDR_7", 1145.60500000, 842.30940000, 36.10790000, "PDB_ADDR_7", 1145.60500000, 842.30940000, 36.10790000, 1300, 44, 9 );
    sub_8189( 9, "PD_PICKREL", "PD_TYLER", "PDB_ADDR_8", 1455.84500000, 591.74300000, 28.21270000, "PDB_ADDR_8", 1455.84500000, 591.74300000, 28.21270000, 1100, 29, 18 );
    sub_8189( 10, "PD_GORALSKI", "PD_ALONSO", "PDB_ADDR_9", 2257.59400000, 172.61450000, 4.80810000, "PDB_ADDR_9", 2257.59400000, 172.61450000, 4.80810000, 600, 20, 2 );
    for ( I = 1; I <= 10; I++ )
    {
        sub_10542( I, 0 );
        sub_10667( I );
    }
    sub_8189( 11, "PD_KIKUCHI", "PD_SHON", "PDB_ADDR_10", -404.37920000, 1240.06200000, 21.98130000, "PDB_ADDR_10", -404.37920000, 1240.06200000, 21.98130000, 1400, 35, 12 );
    sub_8189( 12, "PD_FRIDDELL", "PD_LINO", "PDB_ADDR_11", -31.27570000, 772.40750000, 14.71810000, "PDB_ADDR_11", -31.27570000, 772.40750000, 14.71810000, 900, 39, 3 );
    sub_8189( 13, "PD_COVEY", "PD_DARREN", "PDB_ADDR_12", -578.02840000, 472.76290000, 12.78790000, "PDB_ADDR_12", -578.02840000, 472.76290000, 12.78790000, 500, 12, 15 );
    sub_8189( 14, "PD_BRODELL", "PD_LEO", "PDB_ADDR_13", -116.43880000, 1408.18000000, 20.41450000, "PDB_ADDR_13", -116.43880000, 1408.18000000, 20.41450000, 400, 17, 13 );
    sub_8189( 15, "PD_KAND", "PD_JIMMY", "PDB_ADDR_14", -121.25090000, 1511.42600000, 22.77980000, "PDB_ADDR_14", -121.25090000, 1511.42600000, 22.77980000, 1400, 23, 12 );
    sub_8189( 16, "PD_MAHONVIC", "PD_CHRISTOV", "PDB_ADDR_15", 356.55930000, -360.33170000, 10.36860000, "PDB_ADDR_15", 356.55930000, -360.33170000, 10.36860000, 300, 52, 19 );
    sub_8189( 17, "PD_NASHLY", "PD_SIMON", "PDB_ADDR_16", 374.80770000, -511.96440000, 9.87990000, "PDB_ADDR_16", 374.80770000, -511.96440000, 9.87990000, 1300, 48, 6 );
    sub_8189( 18, "PD_LAMORA", "PD_BARRY", "PDB_ADDR_17", 454.02260000, -23.81160000, 7.68750000, "PDB_ADDR_17", 454.02260000, -23.81160000, 7.68750000, 1100, 45, 9 );
    sub_8189( 19, "PD_HAIMO", "PD_JUAN", "PDB_ADDR_18", -291.16780000, 455.58250000, 14.34060000, "PDB_ADDR_18", -291.16780000, 455.58250000, 14.34060000, 600, 18, 11 );
    sub_8189( 20, "PD_FRANCOVIC", "PD_TOMMY", "PDB_ADDR_19", -399.09700000, -446.82610000, 3.87240000, "PDB_ADDR_19", -399.09700000, -446.82610000, 3.87240000, 1300, 14, 12 );
    for ( I = 11; I <= 20; I++ )
    {
        sub_10542( I, 0 );
        sub_10667( I );
    }
    sub_8189( 21, "PD_BOLDENOW", "PD_MARTY", "PDB_ADDR_20", -1357.36400000, 490.15100000, 13.61980000, "PDB_ADDR_20", -1357.36400000, 490.15100000, 13.61980000, 1400, 46, 12 );
    sub_8189( 22, "PD_BURDETT", "PD_KEENAN", "PDB_ADDR_21", -1042.38900000, 1415.25700000, 23.29390000, "PDB_ADDR_21", -1042.38900000, 1415.25700000, 23.29390000, 200, 31, 12 );
    sub_8189( 23, "PD_BACERRA", "PD_PHIL", "PDB_ADDR_22", -1059.33100000, 729.19140000, 3.81050000, "PDB_ADDR_22", -1059.33100000, 729.19140000, 3.81050000, 900, 100, 12 );
    sub_8189( 24, "PD_HATMAKER", "PD_DANNY", "PDB_ADDR_23", -1190.66600000, 565.23260000, 3.37280000, "PDB_ADDR_23", -1190.66600000, 565.23260000, 3.37280000, 500, 47, 12 );
    sub_8189( 25, "PD_ESKUCHEN", "PD_MERVIN", "PDB_ADDR_24", -1729.88600000, 462.99350000, 26.02680000, "PDB_ADDR_24", -1729.88600000, 462.99350000, 26.02680000, 400, 5, 12 );
    sub_8189( 26, "PD_KATSUDA", "PD_NOEL", "PDB_ADDR_25", -2182.11600000, -21.33610000, 5.68420000, "PDB_ADDR_25", -2182.11600000, -21.33610000, 5.68420000, 1400, 101, 12 );
    sub_8189( 27, "PD_HARRISON", "PD_FREDERICK", "PDB_ADDR_26", -1755.06400000, -236.55620000, 2.50140000, "PDB_ADDR_26", -1755.06400000, -236.55620000, 2.50140000, 300, 102, 12 );
    sub_8189( 28, "PD_MCENIRY", "PD_RODNEY", "PDB_ADDR_27", -1623.88200000, 726.51410000, 28.21120000, "PDB_ADDR_27", -1623.88200000, 726.51410000, 28.21120000, 1300, 49, 12 );
    sub_8189( 29, "PD_LUSHBAUGH", "PD_GLENN", "PDB_ADDR_28", -1447.36000000, 1105.43600000, 22.03850000, "PDB_ADDR_28", -1447.36000000, 1105.43600000, 22.03850000, 1100, 50, 12 );
    sub_8189( 30, "PD_SZERBIN", "PD_SERGI", "PDB_ADDR_29", -1116.76500000, 1186.25600000, 16.28170000, "PDB_ADDR_29", -1116.76500000, 1186.25600000, 16.28170000, 600, 16, 12 );
    for ( I = 21; I <= 30; I++ )
    {
        sub_10542( I, 0 );
        sub_10667( I );
    }
    sub_8189( 31, "PD_DIMAYEV", "PD_ADAM", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_CCS", 1148.05800000, 559.10720000, 29.25150000, 1600, 9, 15 );
    sub_8189( 32, "PD_RIVAS", "PD_LYLE", "PD_BK_HM_9", 881.32100000, -20.76920000, 28.42190000, "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, 400, 41, 4 );
    for ( I = 31; I <= 32; I++ )
    {
        sub_9548( I, 1 );
        sub_10542( I, 1 );
    }
    sub_8189( 33, "PD_SLIGO", "PD_BUCKY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", -1006.49700000, 1607.58800000, 23.60940000, 900, 40, 12 );
    sub_9548( 33, 1 );
    sub_10542( 33, 1 );
    sub_8189( 34, "PD_FAUSTIN", "PD_MIKHAIL", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2000, 2000, 12 );
    sub_8189( 35, "PD_RASCALOV", "PD_DIMITRI", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2100, 2001, 12 );
    sub_8189( 36, "PD_HUGHES", "PD_JACOB", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2200, 2002, 12 );
    sub_8189( 37, "PD_DAVIES", "PD_TEAFORE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2300, 2003, 12 );
    sub_8189( 38, "PD_ESCUELLA", "PD_MANNY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2400, 2004, 12 );
    sub_8189( 39, "PD_TORRES", "PD_ELIZABETA", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2500, 2005, 12 );
    sub_8189( 40, "PD_KIBBUTZ", "PD_BRUCIE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2600, 2006, 12 );
    sub_8189( 41, "PD_BOCCINO", "PD_RAY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1300, 2007, 12 );
    sub_8189( 42, "PD_PEGORINO", "PD_JIMMY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1300, 2008, 12 );
    sub_8189( 43, "PD_BELL", "PD_PHIL", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1300, 2009, 12 );
    sub_8189( 44, "PD_GLEBOV", "PD_VLAD", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2700, 2010, 12 );
    sub_8189( 45, "PD_STEWART", "PD_TREY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2800, 2011, 12 );
    sub_8189( 46, "PD_FORGE", "PD_DWAYNE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2900, 2012, 12 );
    sub_8189( 47, "PD_MCREARY", "PD_PACKIE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 200, 2013, 12 );
    sub_8189( 48, "PD_MCREARY", "PD_GERRY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1300, 2014, 12 );
    sub_8189( 49, "PD_LOW", "PD_ED", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 3000, 2015, 12 );
    sub_8189( 50, "PD_LITTLE", "PD_CLARENCE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2800, 2016, 12 );
    sub_8189( 51, "PD_ALLEN", "PD_MARNIE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 3100, 2017, 12 );
    sub_8189( 52, "PD_Bytchkov", "PD_IVAN", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 3200, 2018, 12 );
    sub_8189( 53, "PD_ANCELOTTI", "PD_GRACIE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1100, 2019, 12 );
    sub_8189( 54, "PD_RIVAS", "PD_TOM", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 3300, 2020, 12 );
    for ( I = 34; I <= 54; I++ )
    {
        sub_10542( I, 1 );
    }
    sub_15130( "PD_DWAYNE", "PD_FORGE", 1 );
    return;
}

void sub_8080()
{
    g_U2817 = 0;
    return;
}

void sub_8189(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    if (g_U2817 < 100)
    {
        StrCopy( ref g_U2818[uParam0]._fU0, uParam1, 16 );
        StrCopy( ref g_U2818[uParam0]._fU16, uParam2, 16 );
        StrCopy( ref g_U2818[uParam0]._fU32._fU0, uParam3, 16 );
        g_U2818[uParam0]._fU32._fU16 = {uParam4};
        StrCopy( ref g_U2818[uParam0]._fU60[0]._fU0, uParam7, 16 );
        g_U2818[uParam0]._fU60[0]._fU16 = {uParam8};
        g_U2818[uParam0]._fU148 = {sub_8336( uParam11 )};
        g_U2818[uParam0]._fU184 = uParam12;
        if (((uParam4._fU0 + uParam4._fU4) + uParam4._fU8) > 0.00000000)
        {
            g_U2818[uParam0]._fU220 = GET_MAP_AREA_FROM_COORDS( g_U2818[uParam0]._fU32._fU16 );
        }
        else
        {
            g_U2818[uParam0]._fU220 = GET_MAP_AREA_FROM_COORDS( g_U2818[uParam0]._fU60[0]._fU16 );
        }
        if (g_U2818[uParam0]._fU184 < 2000)
        {
            g_U2818[uParam0]._fU196 = uParam11;
        }
        else
        {
            g_U2818[uParam0]._fU196 = 2000;
        }
        g_U2818[uParam0]._fU224 = uParam13;
        g_U2817++;
    }
    else
    {
        SCRIPT_ASSERT( "MAX_SIZE_OF_DATABASE reached- increase it" );
    }
    return;
}

void sub_8336(unknown uParam0)
{
    char[32] Result;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref Result, "PD_CRM_ARMRO", 32 );
        break;
        case 200:
        StrCopy( ref Result, "PD_CRM_ARMRO", 32 );
        break;
        case 300:
        StrCopy( ref Result, "PD_CRM_GTA", 32 );
        break;
        case 400:
        StrCopy( ref Result, "PD_CRM_DRG", 32 );
        break;
        case 500:
        StrCopy( ref Result, "PD_CRM_AD", 32 );
        break;
        case 600:
        StrCopy( ref Result, "PD_CRM_PROS", 32 );
        break;
        case 700:
        StrCopy( ref Result, "PD_CRM_BA", 32 );
        break;
        case 800:
        StrCopy( ref Result, "PD_CRM_CCF", 32 );
        break;
        case 900:
        StrCopy( ref Result, "PD_CRM_HR", 32 );
        break;
        case 1000:
        StrCopy( ref Result, "PD_CRM_RBT", 32 );
        break;
        case 1100:
        StrCopy( ref Result, "PD_CRM_DWI", 32 );
        break;
        case 1200:
        StrCopy( ref Result, "PD_CRM_DTR", 32 );
        break;
        case 1300:
        StrCopy( ref Result, "PD_CRM_RACK", 32 );
        break;
        case 1400:
        StrCopy( ref Result, "PD_CRM_GRV", 32 );
        break;
        case 1500:
        StrCopy( ref Result, "PD_CRM_GDB", 32 );
        break;
        case 1600:
        StrCopy( ref Result, "PD_CRM_TER", 32 );
        break;
        case 2000:
        StrCopy( ref Result, "PD_CRM_EXT", 32 );
        break;
        case 2100:
        StrCopy( ref Result, "PD_CRM_ML", 32 );
        break;
        case 2200:
        StrCopy( ref Result, "PD_CRM_IFD", 32 );
        break;
        case 2300:
        StrCopy( ref Result, "PD_CRM_AM", 32 );
        break;
        case 2400:
        StrCopy( ref Result, "PD_CRM_DPO", 32 );
        break;
        case 2500:
        StrCopy( ref Result, "PD_CRM_DPO", 32 );
        break;
        case 2600:
        StrCopy( ref Result, "PD_CRM_STDI", 32 );
        break;
        case 2700:
        StrCopy( ref Result, "PD_CRM_RSG", 32 );
        break;
        case 2800:
        StrCopy( ref Result, "PD_CRM_PTD", 32 );
        break;
        case 2900:
        StrCopy( ref Result, "PD_CRM_COKE", 32 );
        break;
        case 3000:
        StrCopy( ref Result, "PD_CRM_IEX", 32 );
        break;
        case 3100:
        StrCopy( ref Result, "PD_CRM_PROST", 32 );
        break;
        case 3200:
        StrCopy( ref Result, "PD_CRM_GRA", 32 );
        break;
        case 3300:
        StrCopy( ref Result, "PD_CRM_SOL", 32 );
        break;
    }
    return Result;
}

void sub_9548(int iParam0, unknown uParam1)
{
    if (iParam0 < 100)
    {
        g_U2818[iParam0]._fU208 = uParam1;
    }
    return;
}

void sub_10542(int iParam0, unknown uParam1)
{
    if (iParam0 < 100)
    {
        g_U2818[iParam0]._fU216 = uParam1;
    }
    else
    {
        SCRIPT_ASSERT( "Prevented illegal index into dbase:index > MAX_SIZE_OF_DATABASE" );
    }
    return;
}

void sub_10667(unknown uParam0)
{
    g_U2818[uParam0]._fU228 = 1;
    return;
}

void sub_15130(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = sub_15143( uParam0, uParam1 );
    if (iVar5 != -1)
    {
        g_U2818[iVar5]._fU188 = uParam2;
    }
    return;
}

int sub_15143(unknown uParam0, unknown uParam1)
{
    int Result;

    if ((DOES_TEXT_LABEL_EXIST( uParam0 )) AND (DOES_TEXT_LABEL_EXIST( uParam1 )))
    {
        for ( Result = 0; Result <= 99; Result++ )
        {
            if (COMPARE_STRING( ref g_U2818[Result]._fU16, uParam0 ))
            {
                if (COMPARE_STRING( ref g_U2818[Result]._fU0, uParam1 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

void sub_15319()
{
    sub_15328();
    return;
}

void sub_15328()
{
    int I;

    for ( I = 0; I <= (g_U1505 - 1); I++ )
    {
        g_U1505[I] = 0;
    }
    sub_15380( 1015, 2 );
    sub_15380( 1023, 2 );
    sub_15380( 2034, 2 );
    sub_15380( 4, 1 );
    sub_15380( 9, 3 );
    sub_15380( 1021, 2 );
    sub_15380( 1024, 2 );
    sub_15380( 1025, 3 );
    sub_15380( 2029, 1 );
    sub_15380( 3038, 2 );
    sub_15380( 4049, 1 );
    return;
}

void sub_15380(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1505[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_15540()
{
    REMOVE_ALL_CHAR_WEAPONS( sub_15549() );
    return;
}

void sub_15549()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_15605()
{
    int I;
    int iVar3;

    I = 0;
    for ( I = 0; I < 4; I++ )
    {
        g_U10994[I]._fU0 = 1;
    }
    iVar3 = 3;
    SET_INT_STAT( 363, iVar3 );
    return;
}

void sub_15675()
{
    int I;

    I = 0;
    for ( I = 0; I < 15; I++ )
    {
        sub_15709( ref g_U11236[I]._fU20 );
    }
    for ( I = 0; I < 7; I++ )
    {
        sub_15709( ref g_U11327[I]._fU20 );
    }
    for ( I = 0; I < 65; I++ )
    {
        sub_15709( ref g_U11583[I]._fU32 );
        g_U11370._fU584[I] = 0;
    }
    for ( I = 0; I < 65; I++ )
    {
        sub_15709( ref g_U12169[I]._fU4 );
    }
    sub_15905();
    return;
}

void sub_15709(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_15905()
{
    int I;

    I = 0;
    for ( I = 0; I < 23; I++ )
    {
        g_U11370._fU0[I] = 0;
        g_U11370._fU96[I] = 0;
    }
    for ( I = 0; I < 31; I++ )
    {
        g_U11370._fU192[I] = 0;
    }
    for ( I = 0; I < 65; I++ )
    {
        g_U11370._fU320[I] = 0;
        g_U11370._fU584[I] = 0;
    }
    for ( I = 0; I < 65; I++ )
    {
        g_U12169[I]._fU0 = 0;
    }
    return;
}

void sub_16109()
{
    g_U10959._fU0 = 0;
    g_U10959._fU4 = -1;
    g_U10959._fU8 = -1;
    g_U10959._fU12 = 0;
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_1000( ref g_U10959._fU32 );
    return;
}

void sub_16198(boolean bParam0)
{
    int I;

    if (bParam0)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        ENABLE_SAVE_HOUSE( g_U11005[I]._fU4, 0 );
        g_U11005[I]._fU0 = 0;
    }
    return;
}

void sub_16282()
{
    sub_16291();
    g_U10974._fU24 = 0;
    return;
}

void sub_16291()
{
    g_U10974._fU0 = 0;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

void sub_16380()
{
    g_U24 = 0;
    return;
}

void sub_16401()
{
    sub_16410();
    sub_16427();
    sub_16746();
    sub_17056();
    sub_17379();
    sub_17708();
    sub_18019();
    sub_18102();
    return;
}

void sub_16410()
{
    return;
}

void sub_16427()
{
    int iVar2;
    int I;

    iVar2 = 2;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U38775[I]._fU8, -1);
    }
    g_U26712[1]._fU0 = 0;
    sub_16494( 1, 2, 1 );
    sub_16494( 0, 8, 1 );
    g_U26712[1]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U38775[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Procedurals: Not all procedural missions have details set up" );
        }
    }
    return;
}

void sub_16494(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U38775[uParam0]._fU0 = 0;
    g_U38775[uParam0]._fU4 = uParam1;
    ProtectedSet(g_U38775[uParam0]._fU8, iParam2);
    g_U26712[1]._fU0 += iParam2;
    return;
}

void sub_16746()
{
    int iVar2;
    int I;

    iVar2 = 6;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U38782[I]._fU8, -1);
    }
    g_U26712[2]._fU0 = 0;
    sub_16812( 0, 1 );
    sub_16812( 1, 1 );
    sub_16812( 2, 1 );
    sub_16812( 3, 1 );
    sub_16812( 4, 0 );
    sub_16812( 5, 0 );
    g_U26712[2]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U38782[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Games: Not all games have details set up" );
        }
    }
    return;
}

void sub_16812(unknown uParam0, int iParam1)
{
    g_U38782[uParam0]._fU0 = 0;
    ProtectedSet(g_U38782[uParam0]._fU8, iParam1);
    g_U26712[2]._fU0 += iParam1;
    return;
}

void sub_17056()
{
    int iVar2;
    int I;

    iVar2 = 1;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U38801[I]._fU8, -1);
    }
    g_U26712[3]._fU0 = 0;
    sub_17123( 0, 6, 1 );
    g_U26712[3]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U38801[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Friends: Not all friends have details set up" );
        }
    }
    return;
}

void sub_17123(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U38801[uParam0]._fU0 = 0;
    g_U38801[uParam0]._fU4 = uParam1;
    ProtectedSet(g_U38801[uParam0]._fU8, iParam2);
    ProtectedSet(g_U38805[uParam0]._fU0, 0);
    ProtectedSet(g_U38805[uParam0]._fU4, 0);
    g_U26712[3]._fU0 += iParam2;
    return;
}

void sub_17379()
{
    int iVar2;
    int I;

    iVar2 = 4;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U38808[I]._fU8, -1);
    }
    g_U26712[4]._fU0 = 0;
    sub_17446( 0, 6, 1 );
    sub_17446( 1, 7, 0 );
    sub_17446( 2, 6, 0 );
    sub_17446( 3, 7, 0 );
    g_U26712[4]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U38808[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Specials: Not all special missions have details set up" );
        }
    }
    return;
}

void sub_17446(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U38808[uParam0]._fU0 = 0;
    g_U38808[uParam0]._fU4 = uParam1;
    ProtectedSet(g_U38808[uParam0]._fU8, iParam2);
    g_U26712[4]._fU0 += iParam2;
    return;
}

void sub_17708()
{
    int iVar2;
    int I;

    iVar2 = 2;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U38821[I]._fU8, -1);
    }
    g_U26712[5]._fU0 = 0;
    sub_17775( 0, 14, 1 );
    sub_17775( 1, 15, 1 );
    g_U26712[5]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U38821[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_RandomChars: Not all randomchars have details set up" );
        }
    }
    return;
}

void sub_17775(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U38821[uParam0]._fU0 = 0;
    g_U38821[uParam0]._fU4 = uParam1;
    ProtectedSet(g_U38821[uParam0]._fU8, iParam2);
    g_U26712[5]._fU0 += iParam2;
    return;
}

void sub_18019()
{
    int iVar2;
    int I;

    iVar2 = 2;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U38828[I]._fU8, -1);
    }
    g_U26712[6]._fU0 = 0;
    g_U26712[6]._fU4 = 0;
    return;
}

void sub_18102()
{
    int iVar2;
    int I;

    iVar2 = 3;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U38835[I]._fU8, -1);
    }
    g_U26712[7]._fU0 = 0;
    sub_18168( 0, 1 );
    sub_18168( 1, 1 );
    sub_18168( 2, 1 );
    g_U26712[7]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U38835[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Misc: Not all miscs have details set up" );
        }
    }
    return;
}

void sub_18168(unknown uParam0, int iParam1)
{
    g_U38835[uParam0]._fU0 = 0;
    ProtectedSet(g_U38835[uParam0]._fU8, iParam1);
    g_U26712[7]._fU0 += iParam1;
    return;
}

void sub_18398()
{
    int I;

    I = 0;
    for ( I = 0; I < 22; I++ )
    {
        g_U20876[I] = 0;
    }
    g_U20899 = 0;
    return;
}

void sub_18457()
{
    int I;

    I = 0;
    for ( I = 0; I < 15; I++ )
    {
        g_U10789[I]._fU0 = 0;
    }
    return;
}

void sub_18512()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        g_U10767[I]._fU0 = 0;
    }
    return;
}

void sub_18567()
{
    SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_7787(), 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 4, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 5, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 6, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 7, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 8, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 9, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 10, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 11, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 12, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 13, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 14, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 15, 0 );
    return;
}

void sub_18813()
{
    g_U21 = 0;
    return;
}

void sub_18834()
{
    ENABLE_MAX_AMMO_CAP( 1 );
    return;
}

void sub_18859()
{
    g_U10499 = 0;
    return;
}

void sub_18882()
{
    int I;

    g_U38936 = 0;
    I = 0;
    for ( I = 0; I < 13; I++ )
    {
        g_U38937[I]._fU0 = 1;
        g_U38937[I]._fU4 = 0;
        g_U38937[I]._fU8 = 0;
        g_U38937[I]._fU12 = 1;
        g_U38937[I]._fU16 = g_U38936;
        g_U38937[I]._fU20 = I;
        g_U38937[I]._fU24 = -1;
        g_U38936++;
    }
    for ( I = 0; I < 5; I++ )
    {
        g_U39042[I]._fU0 = -1;
        g_U39042[I]._fU4 = 0;
        g_U39042[I]._fU8 = 0;
    }
    for ( I = 0; I < 12; I++ )
    {
        g_U39029[I] = I;
    }
    for ( I = 0; I < 6; I++ )
    {
        g_U39058[I]._fU0 = 1;
        g_U39058[I]._fU4 = 0;
        g_U39058[I]._fU8 = 0;
        g_U39058[I]._fU12 = 0;
        g_U39058[I]._fU16 = 24 + I;
        g_U39058[I]._fU20 = -1;
    }
    g_U39058[0]._fU12 = 3;
    g_U39058[1]._fU12 = 2;
    g_U39058[5]._fU12 = 1;
    g_U39058[4]._fU12 = 1;
    sub_19309();
    sub_19366();
    g_U39126 = 0;
    StrCopy( ref g_U39127, "EMPTY", 16 );
    StrCopy( ref g_U39131, "EMPTY", 32 );
    StrCopy( ref g_U39139, "EMPTY", 32 );
    g_U11084[0] = nil;
    g_U11084[1] = nil;
    for ( I = 0; I < 19; I++ )
    {
        g_U39149[I] = 0;
    }
    g_U39106 = 3;
    for ( I = 0; I < 3; I++ )
    {
        g_U39107[I]._fU0 = 0;
        g_U39107[I]._fU4 = 0;
        g_U39107[I]._fU8 = 0;
    }
    g_U39170 = 0;
    g_U39171 = 0;
    return;
}

void sub_19309()
{
    g_U39101 = 0;
    g_U39102 = 0;
    g_U39103 = 0;
    g_U39104 = 0;
    g_U39105 = 0;
    return;
}

void sub_19366()
{
    g_U11144[0] = 350.00000000;
    g_U11147[0] = 0.00000000;
    g_U11150[0] = 38.00000000;
    g_U11153[0] = 33.00000000;
    g_U11156[0] = 1.00000000;
    g_U11141[0] = 20.00000000;
    g_U11144[1] = 475.00000000;
    g_U11147[1] = 0.00000000;
    g_U11150[1] = 28.00000000;
    g_U11153[1] = 23.00000000;
    g_U11156[1] = 1.00000000;
    g_U11141[1] = 20.00000000;
    sub_19531();
    return;
}

void sub_19531()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        g_U11165[I] = 0.00000000;
        g_U11168[I] = 0.00000000;
        g_U11171[I] = 0.00000000;
        g_U11174[I] = 0.00000000;
        g_U11177[I] = 0.00000000;
        g_U11180[I] = 0.00000000;
    }
    return;
}

void sub_19871()
{
    int iVar2;

    PRINTSTRING( "********************* Update_Bridge_Control_Nodes: " );
    iVar2 = GET_INT_STAT( 363 );
    PRINTINT( iVar2 );
    PRINTNL();
    if (iVar2 < 2)
    {
        SWITCH_ROADS_OFF( 324.39880000, 1772.79600000, 15.90710000, 326.39880000, 1774.79600000, 17.90710000 );
        SWITCH_ROADS_OFF( 324.72270000, 1790.90300000, 15.89930000, 326.72270000, 1792.90300000, 17.89930000 );
        SWITCH_ROADS_OFF( -250.76720000, 1574.41900000, 18.46400000, -248.76720000, 1576.41900000, 20.46400000 );
        SWITCH_ROADS_OFF( -250.60630000, 1586.18200000, 18.47000000, -248.60630000, 1588.18200000, 20.47000000 );
        SWITCH_ROADS_OFF( 406.47790000, 1019.08100000, 24.99640000, 408.47790000, 1021.08100000, 26.99640000 );
        SWITCH_ROADS_OFF( 405.89090000, 1002.07600000, 24.99710000, 407.89090000, 1004.07600000, 26.99710000 );
        SWITCH_ROADS_OFF( 343.93100000, 1001.88300000, 24.99330000, 345.93100000, 1003.88300000, 26.99330000 );
        SWITCH_ROADS_OFF( 343.67410000, 1018.34300000, 24.99580000, 345.67410000, 1020.34300000, 26.99580000 );
        SWITCH_ROADS_OFF( 186.73660000, 1004.18200000, 12.76060000, 188.73660000, 1006.18200000, 14.76060000 );
        SWITCH_ROADS_OFF( 186.28080000, 1016.20300000, 12.76320000, 188.28080000, 1018.20300000, 14.76320000 );
        SWITCH_ROADS_OFF( 57.14420000, 1022.74300000, 12.75190000, 59.14420000, 1024.74300000, 14.75190000 );
        SWITCH_ROADS_OFF( 62.03510000, 998.48990000, 12.66320000, 64.03510000, 1000.49000000, 14.66320000 );
        SWITCH_ROADS_OFF( 534.53210000, 926.03400000, 18.82550000, 536.53210000, 928.03400000, 20.82550000 );
        SWITCH_ROADS_OFF( 566.84700000, 1052.62400000, 19.21830000, 568.84700000, 1054.62400000, 21.21830000 );
        SWITCH_ROADS_OFF( 563.93890000, 863.30440000, 18.94320000, 565.93890000, 865.30440000, 20.94320000 );
        SWITCH_ROADS_OFF( 536.49740000, 1063.32600000, 18.97530000, 538.49740000, 1065.32600000, 20.97530000 );
        SWITCH_ROADS_OFF( 359.15310000, 1001.01100000, 23.99710000, 363.15310000, 1005.01100000, 27.99710000 );
        SWITCH_ROADS_OFF( 359.10020000, 1017.73100000, 23.99310000, 363.10020000, 1021.73100000, 27.99310000 );
        SWITCH_ROADS_OFF( 922.86870000, 258.44850000, 41.74100000, 924.86870000, 260.44850000, 43.74100000 );
        SWITCH_ROADS_OFF( 933.13320000, 270.85210000, 42.65100000, 935.13320000, 272.85210000, 44.65100000 );
        SWITCH_ROADS_OFF( 58.32130000, 266.27880000, 13.16560000, 60.32130000, 268.27880000, 15.16560000 );
        SWITCH_ROADS_OFF( 58.14260000, 254.36340000, 13.15000000, 60.14260000, 256.36340000, 15.15000000 );
        SWITCH_ROADS_OFF( 918.49530000, 257.87200000, 41.46560000, 920.49530000, 259.87200000, 43.46560000 );
        SWITCH_ROADS_OFF( 1079.19200000, 295.22450000, 29.02650000, 1081.19200000, 297.22450000, 31.02650000 );
        SWITCH_ROADS_OFF( 1040.89700000, 211.86710000, 29.44070000, 1042.89700000, 213.86710000, 31.44070000 );
        SWITCH_ROADS_OFF( 1255.38000000, 276.22140000, 29.03830000, 1257.38000000, 278.22140000, 31.03830000 );
        SWITCH_ROADS_OFF( 1032.00000000, 256.56930000, 45.93090000, 1034.00000000, 258.56930000, 47.93090000 );
        SWITCH_ROADS_OFF( 939.21610000, 271.22920000, 43.16500000, 941.21610000, 273.22920000, 45.16500000 );
        SWITCH_ROADS_OFF( 1101.00000000, 244.00000000, 38.00000000, 1143.00000000, 264.00000000, 50.00000000 );
        SWITCH_ROADS_OFF( 1242.25000000, 283.72160000, 28.73480000, 1246.25000000, 287.72160000, 32.73480000 );
        SWITCH_ROADS_OFF( 1250.77600000, 286.31230000, 28.04450000, 1254.77600000, 290.31230000, 32.04400000 );
        SWITCH_ROADS_OFF( 948.19460000, 263.85660000, 29.14780000, 1243.50900000, 266.23130000, 46.85710000 );
        SWITCH_ROADS_OFF( 939.65500000, 252.25020000, 38.13980000, 1128.34700000, 261.73250000, 45.93600000 );
        SWITCH_ROADS_OFF( 1126.34700000, 259.73250000, 38.13980000, 1130.34700000, 264.73250000, 42.13980000 );
        SWITCH_ROADS_OFF( 1109.42600000, 236.33150000, 39.31710000, 1113.42600000, 240.33150000, 43.31710000 );
        SWITCH_ROADS_OFF( 1098.07900000, 235.76870000, 39.98480000, 1102.07900000, 239.76870000, 43.98480000 );
        SWITCH_ROADS_OFF( 893.42520000, -416.43870000, 35.29700000, 895.42520000, -414.43870000, 37.29700000 );
        SWITCH_ROADS_OFF( 904.72490000, -401.80910000, 35.51120000, 906.72490000, -399.80910000, 37.51120000 );
        SWITCH_ROADS_OFF( 151.26190000, -415.10430000, 12.79700000, 153.26190000, -413.10430000, 14.79700000 );
        SWITCH_ROADS_OFF( 151.23080000, -403.27040000, 12.80040000, 153.23080000, -401.27040000, 14.80040000 );
        SWITCH_ROADS_OFF( 893.43230000, -401.51340000, 35.29680000, 895.43230000, -399.51340000, 37.29680000 );
        SWITCH_ROADS_OFF( 893.53330000, -416.27660000, 35.29410000, 895.53330000, -414.27660000, 37.29410000 );
        SWITCH_ROADS_OFF( 169.19120000, -417.11330000, 12.80190000, 171.19120000, -415.11330000, 14.80190000 );
        SWITCH_ROADS_OFF( 163.61860000, -401.33510000, 12.78670000, 165.61860000, -399.33510000, 14.78670000 );
        SWITCH_ROADS_OFF( 1006.63300000, -371.51090000, 18.03860000, 1008.63300000, -369.51090000, 21.03860000 );
        SWITCH_ROADS_OFF( 1001.91700000, -372.50750000, 18.68050000, 1003.91700000, -370.50750000, 21.68050000 );
        SWITCH_ROADS_OFF( 1148.89400000, -311.50860000, 36.61330000, 1150.89400000, -309.50860000, 39.61330000 );
        SWITCH_ROADS_OFF( 1136.60200000, -318.01870000, 36.82210000, 1138.60200000, -316.01870000, 39.82210000 );
        SWITCH_ROADS_OFF( 864.84380000, -420.03660000, 34.97540000, 872.84380000, -412.03660000, 38.97540000 );
        SWITCH_ROADS_OFF( 1140.64300000, -332.68590000, 35.81390000, 1148.64300000, -324.68590000, 39.81390000 );
        SWITCH_ROADS_OFF( 1038.26800000, -424.72670000, 16.21770000, 1040.26800000, -422.72670000, 18.21770000 );
        SWITCH_ROADS_OFF( 904.73880000, -420.02700000, 35.35090000, 906.73880000, -418.02700000, 37.35090000 );
        SWITCH_ROADS_OFF( 939.65500000, 252.25020000, 38.13980000, 1128.34700000, 261.73250000, 45.93600000 );
    }
    if (iVar2 >= 2)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 324.39880000, 1772.79600000, 15.90710000, 326.39880000, 1774.79600000, 17.90710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 324.72270000, 1790.90300000, 15.89930000, 326.72270000, 1792.90300000, 17.89930000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -250.76720000, 1574.41900000, 18.46400000, -248.76720000, 1576.41900000, 20.46400000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -250.60630000, 1586.18200000, 18.47000000, -248.60630000, 1588.18200000, 20.47000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 406.47790000, 1019.08100000, 24.99640000, 408.47790000, 1021.08100000, 26.99640000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 405.89090000, 1002.07600000, 24.99710000, 407.89090000, 1004.07600000, 26.99710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 343.93100000, 1001.88300000, 24.99330000, 345.93100000, 1003.88300000, 26.99330000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 343.67410000, 1018.34300000, 24.99580000, 345.67410000, 1020.34300000, 26.99580000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 186.73660000, 1004.18200000, 12.76060000, 188.73660000, 1006.18200000, 14.76060000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 186.28080000, 1016.20300000, 12.76320000, 188.28080000, 1018.20300000, 14.76320000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 57.14420000, 1022.74300000, 12.75190000, 59.14420000, 1024.74300000, 14.75190000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 62.03510000, 998.48990000, 12.66320000, 64.03510000, 1000.49000000, 14.66320000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 534.53210000, 926.03400000, 18.82550000, 536.53210000, 928.03400000, 20.82550000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 566.84700000, 1052.62400000, 19.21830000, 568.84700000, 1054.62400000, 21.21830000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 563.93890000, 863.30440000, 18.94320000, 565.93890000, 865.30440000, 20.94320000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 536.49740000, 1063.32600000, 18.97530000, 538.49740000, 1065.32600000, 20.97530000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 359.15310000, 1001.01100000, 23.99710000, 363.15310000, 1005.01100000, 27.99710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 359.10020000, 1017.73100000, 23.99310000, 363.10020000, 1021.73100000, 27.99310000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 922.86870000, 258.44850000, 41.74100000, 924.86870000, 260.44850000, 43.74100000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 933.13320000, 270.85210000, 42.65100000, 935.13320000, 272.85210000, 44.65100000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 58.32130000, 266.27880000, 13.16560000, 60.32130000, 268.27880000, 15.16560000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 58.14260000, 254.36340000, 13.15000000, 60.14260000, 256.36340000, 15.15000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 918.49530000, 257.87200000, 41.46560000, 920.49530000, 259.87200000, 43.46560000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1079.19200000, 295.22450000, 29.02650000, 1081.19200000, 297.22450000, 31.02650000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1040.89700000, 211.86710000, 29.44070000, 1042.89700000, 213.86710000, 31.44070000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1255.38000000, 276.22140000, 29.03830000, 1257.38000000, 278.22140000, 31.03830000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1032.00000000, 256.56930000, 45.93090000, 1034.00000000, 258.56930000, 47.93090000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 939.21610000, 271.22920000, 43.16500000, 941.21610000, 273.22920000, 45.16500000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1101.00000000, 244.00000000, 38.00000000, 1143.00000000, 264.00000000, 50.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1242.25000000, 283.72160000, 28.73480000, 1246.25000000, 287.72160000, 32.73480000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1250.77600000, 286.31230000, 28.04450000, 1254.77600000, 290.31230000, 32.04400000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 948.19460000, 263.85660000, 29.14780000, 1243.50900000, 266.23130000, 46.85710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 939.65500000, 252.25020000, 38.13980000, 1128.34700000, 261.73250000, 45.93600000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1126.34700000, 259.73250000, 38.13980000, 1130.34700000, 264.73250000, 42.13980000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1109.42600000, 236.33150000, 39.31710000, 1113.42600000, 240.33150000, 43.31710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1098.07900000, 235.76870000, 39.98480000, 1102.07900000, 239.76870000, 43.98480000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 893.42520000, -416.43870000, 35.29700000, 895.42520000, -414.43870000, 37.29700000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 904.72490000, -401.80910000, 35.51120000, 906.72490000, -399.80910000, 37.51120000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 151.26190000, -415.10430000, 12.79700000, 153.26190000, -413.10430000, 14.79700000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 151.23080000, -403.27040000, 12.80040000, 153.23080000, -401.27040000, 14.80040000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 893.43230000, -401.51340000, 35.29680000, 895.43230000, -399.51340000, 37.29680000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 893.53330000, -416.27660000, 35.29410000, 895.53330000, -414.27660000, 37.29410000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 169.19120000, -417.11330000, 12.80190000, 171.19120000, -415.11330000, 14.80190000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 163.61860000, -401.33510000, 12.78670000, 165.61860000, -399.33510000, 14.78670000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1006.63300000, -371.51090000, 18.03860000, 1008.63300000, -369.51090000, 21.03860000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1001.91700000, -372.50750000, 18.68050000, 1003.91700000, -370.50750000, 21.68050000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1148.89400000, -311.50860000, 36.61330000, 1150.89400000, -309.50860000, 39.61330000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1136.60200000, -318.01870000, 36.82210000, 1138.60200000, -316.01870000, 39.82210000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 864.84380000, -420.03660000, 34.97540000, 872.84380000, -412.03660000, 38.97540000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1140.64300000, -332.68590000, 35.81390000, 1148.64300000, -324.68590000, 39.81390000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1038.26800000, -424.72670000, 16.21770000, 1040.26800000, -422.72670000, 18.21770000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 904.73880000, -420.02700000, 35.35090000, 906.73880000, -418.02700000, 37.35090000 );
    }
    if (iVar2 < 3)
    {
        SWITCH_ROADS_OFF( -890.12730000, 1156.24800000, 16.00280000, -888.12730000, 1158.24800000, 18.00280000 );
        SWITCH_ROADS_OFF( -889.60250000, 1167.95800000, 16.00680000, -887.60250000, 1169.95800000, 18.00680000 );
        SWITCH_ROADS_OFF( -665.27510000, 1171.31700000, 17.47660000, -663.27510000, 1173.31700000, 19.47660000 );
        SWITCH_ROADS_OFF( -664.71560000, 1159.96800000, 17.57480000, -662.71560000, 1161.96800000, 19.57480000 );
        SWITCH_ROADS_OFF( -394.85170000, 331.01640000, 12.07200000, -392.85170000, 333.01640000, 14.07200000 );
        SWITCH_ROADS_OFF( -957.74520000, 778.29000000, 2.33160000, -955.74520000, 780.29000000, 4.33160000 );
        SWITCH_ROADS_OFF( -945.69610000, 774.68300000, 1.55730000, -943.69610000, 776.68300000, 3.55730000 );
        SWITCH_ROADS_OFF( -946.17150000, 780.39040000, 1.60940000, -944.17150000, 782.39040000, 3.60940000 );
    }
    if (iVar2 >= 3)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( -890.12730000, 1156.24800000, 16.00280000, -888.12730000, 1158.24800000, 18.00280000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -889.60250000, 1167.95800000, 16.00680000, -887.60250000, 1169.95800000, 18.00680000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -665.27510000, 1171.31700000, 17.47660000, -663.27510000, 1173.31700000, 19.47660000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -664.71560000, 1159.96800000, 17.57480000, -662.71560000, 1161.96800000, 19.57480000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -394.85170000, 331.01640000, 12.07200000, -392.85170000, 333.01640000, 14.07200000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -957.74520000, 778.29000000, 2.33160000, -955.74520000, 780.29000000, 4.33160000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -945.69610000, 774.68300000, 1.55730000, -943.69610000, 776.68300000, 3.55730000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -946.17150000, 780.39040000, 1.60940000, -944.17150000, 782.39040000, 3.60940000 );
    }
    return;
}

void sub_24594()
{
    int I;

    for ( I = 0; I < 5; I++ )
    {
        g_U38670[I] = 0;
    }
    g_U38670[0] = 3;
    g_U38670[1] = 3;
    g_U38670[2] = 3;
    g_U38670[3] = 2;
    g_U38670[4] = 3;
    for ( I = 0; I < 5; I++ )
    {
        if (g_U38670[I] == 0)
        {
            SCRIPT_ASSERT( "Initialise_Help_Message_Conflicts: A help message hasn't been given a priority\n" );
        }
    }
    g_U38676 = 0;
    g_U38677 = 6;
    g_U38678 = 0;
    g_U38679 = 6;
    return;
}

void sub_24871()
{
    sub_24880();
    sub_25714();
    sub_25904();
    return;
}

void sub_24880()
{
    sub_24911( 1, -1718.45900000, 361.44560000, 24.39980000, 1, 1, 101 );
    sub_24911( 2, 362.82160000, 1504.80200000, 15.97050000, 1, 1, 103 );
    sub_24911( 3, -1837.80200000, 281.17250000, 21.95570000, 1, 1, 106 );
    sub_24911( 4, -1632.97400000, 794.95300000, 28.76430000, 1, 1, 106 );
    sub_24911( 5, -1460.73000000, 817.10820000, 18.56550000, 1, 1, 106 );
    sub_24911( 6, -338.90340000, 1601.72000000, 19.42150000, 1, 1, 106 );
    sub_24911( 7, -1110.09500000, 1317.83100000, 23.43190000, 1, 1, 106 );
    sub_24911( 8, -35.08080000, 764.47520000, 13.71320000, 1, 1, 102 );
    sub_24911( 9, -1718.45900000, 361.44560000, 24.39980000, 1, 1, 102 );
    sub_24911( 10, -1469.90200000, 490.41190000, 18.56540000, 1, 1, 105 );
    sub_24911( 11, 362.82160000, 1504.80200000, 15.97050000, 1, 1, 103 );
    sub_24911( 12, -123.63790000, -256.57810000, 11.68540000, 1, 1, 104 );
    sub_24911( 13, -1825.79600000, 280.75790000, 22.58690000, 1, 1, 118 );
    sub_24911( 14, -1825.45800000, 263.92860000, 21.01050000, 1, 1, 119 );
    sub_24911( 15, -1.00000000, -1.00000000, -1.00000000, 1, 1, 103 );
    return;
}

void sub_24911(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (iParam0 > 16)
    {
        sub_24994( "Main_Missions: Store_Contact_Point(): Illegal Contact Point ID" );
    }
    if (((NOT (g_U10686[iParam0]._fU4._fU0 == 0.00000000)) || (NOT (g_U10686[iParam0]._fU4._fU4 == 0.00000000))) || (NOT (g_U10686[iParam0]._fU4._fU8 == 0.00000000)))
    {
        sub_24994( "Main_Missions: Store_Contact_Point(): Contact Point ID already setup" );
    }
    g_U10686[iParam0]._fU4._fU0 = uParam1;
    g_U10686[iParam0]._fU4._fU4 = uParam2;
    g_U10686[iParam0]._fU4._fU8 = uParam3;
    g_U10686[iParam0]._fU16 = uParam6;
    sub_25234( ref g_U10686[iParam0]._fU0, 1, uParam4 );
    sub_25234( ref g_U10686[iParam0]._fU0, 2, uParam5 );
    CLEAR_BIT( ref g_U10686[iParam0]._fU0, 3 );
    return;
}

void sub_24994(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_25234(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_25714()
{
    int I;

    I = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (((g_U10686[I]._fU4._fU0 == 0.00000000) AND (g_U10686[I]._fU4._fU4 == 0.00000000)) AND (g_U10686[I]._fU4._fU8 == 0.00000000))
        {
            sub_24994( "Main_Missions: Check_Contact_Points(): Not all Contact Point IDs are set up" );
        }
    }
    return;
}

void sub_25904()
{
    int I;

    I = 0;
    for ( I = 0; I < 9; I++ )
    {
        g_U20751[I] = 6;
    }
    sub_25951( 0, 1 );
    sub_25951( 1, 3 );
    sub_25951( 2, 8 );
    sub_25951( 3, 10 );
    sub_25951( 4, 11 );
    sub_25951( 5, 12 );
    sub_25951( 6, 13 );
    sub_25951( 7, 14 );
    sub_25951( 8, 15 );
    for ( I = 0; I < 9; I++ )
    {
        if (g_U20751[I] == 6)
        {
            sub_24994( "Store_Default_Contact_Blips: default sprite blip not stored" );
        }
    }
    return;
}

void sub_25951(unknown uParam0, unknown uParam1)
{
    g_U20751[uParam0] = g_U10686[uParam1]._fU16;
    return;
}

void sub_26166()
{
    sub_26175();
    sub_26272();
    sub_26685();
    return;
}

void sub_26175()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        g_U10767[I]._fU4 = {0.00000000, 0.00000000, 0.00000000};
        g_U10767[I]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    }
    return;
}

void sub_26272()
{
    sub_26314( 0, -1809.14900000, 304.66290000, 26.81270000, -1817.46000000, 297.51050000, 24.54040000 );
    sub_26314( 1, -1821.92900000, 281.88870000, 25.30500000, -1817.46000000, 297.51050000, 24.54040000 );
    sub_26314( 2, -1812.96400000, 292.39690000, 26.76620000, -1817.46000000, 297.51050000, 24.54040000 );
    return;
}

void sub_26314(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (iParam0 > 3)
    {
        sub_24994( "Main_Missions: Store_Dropoff_Point(): Illegal Dropoff Point ID" );
    }
    if (((NOT (g_U10767[iParam0]._fU4._fU0 == 0.00000000)) || (NOT (g_U10767[iParam0]._fU4._fU4 == 0.00000000))) || (NOT (g_U10767[iParam0]._fU4._fU8 == 0.00000000)))
    {
        sub_24994( "Main_Missions: Store_Dropoff_Point(): Dropoff Point ID already setup" );
    }
    g_U10767[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    g_U10767[iParam0]._fU16 = {uParam4, uParam5, uParam6};
    g_U10767[iParam0]._fU0 = 1;
    return;
}

void sub_26685()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (((g_U10767[I]._fU4._fU0 == 0.00000000) AND (g_U10767[I]._fU4._fU4 == 0.00000000)) AND (g_U10767[I]._fU4._fU8 == 0.00000000))
        {
            sub_24994( "Main_Missions: Check_Dropoff_Points(): Not all Dropoff Point IDs are set up" );
        }
    }
    return;
}

void sub_26883()
{
    sub_26892();
    sub_27047();
    sub_28458();
    return;
}

void sub_26892()
{
    int I;

    I = 0;
    for ( I = 0; I < 15; I++ )
    {
        g_U10789[I]._fU4 = {0.00000000, 0.00000000, 0.00000000};
        g_U10789[I]._fU16 = 0.00000000;
        g_U10789[I]._fU20 = 0;
        g_U10789[I]._fU24 = 0;
        g_U10789[I]._fU28 = {0.00000000, 0.00000000, 0.00000000};
        g_U10789[I]._fU40 = 0.00000000;
    }
    return;
}

void sub_27047()
{
    sub_27105( 0, -1825.79600000, 280.75790000, 22.58690000, 268.94510000, 1, 802082487, -1813.66800000, 261.17030000, 21.06520000, 342.73760000 );
    sub_27105( 1, -953.53550000, 1129.69000000, 17.16830000, 189.87490000, 1, 802082487, -942.14080000, 1107.80600000, 18.47060000, 272.02360000 );
    sub_27105( 2, -1044.68100000, 907.71390000, 22.00510000, 217.01110000, 1, 802082487, -1044.77600000, 882.97210000, 21.90090000, 117.71260000 );
    sub_27105( 3, -1462.76000000, 820.63850000, 18.56450000, 350.89610000, 1, 802082487, -1446.27700000, 827.23510000, 18.38960000, 271.49830000 );
    sub_27105( 4, -1377.90000000, 511.21490000, 11.47960000, 83.94110000, 1, 802082487, -1396.24000000, 497.84840000, 11.55980000, 0.06640000 );
    sub_27105( 5, -473.09120000, 1496.76600000, 17.88890000, 261.05670000, 1, 802082487, -493.27850000, 1491.19400000, 17.71110000, 208.32540000 );
    sub_27105( 6, 133.54270000, 967.46840000, 13.56260000, 84.49580000, 1, 802082487, 140.36430000, 953.08140000, 13.56220000, 90.91130000 );
    sub_27105( 7, -404.87270000, 530.40100000, 12.26820000, 357.56500000, 1, 802082487, -433.51670000, 537.89150000, 9.01560000, 267.18450000 );
    sub_27105( 8, 152.21770000, -214.54430000, 13.75860000, 91.12730000, 1, 802082487, 134.58310000, -195.20190000, 13.60820000, 0.60870000 );
    sub_27105( 9, -250.19340000, -593.79420000, 3.78640000, 280.12060000, 1, 802082487, -255.78020000, -608.07040000, 3.78640000, 85.09690000 );
    sub_27105( 10, 1118.70600000, 271.72420000, 30.05770000, 91.35090000, 1, 802082487, 1109.77400000, 255.39830000, 30.16190000, 355.92560000 );
    sub_27105( 11, 976.27060000, -532.69010000, 14.04900000, 269.01790000, 1, 802082487, 984.62510000, -509.23260000, 14.33490000, 0.93390000 );
    sub_27105( 12, 1190.85900000, 611.68560000, 37.70930000, 1.69780000, 1, 802082487, 1164.19200000, 629.95170000, 37.54980000, 87.75550000 );
    sub_27105( 13, 865.92960000, 1588.94900000, 15.87790000, 69.28150000, 1, 802082487, 853.88370000, 1602.60700000, 15.88920000, 129.84020000 );
    sub_27105( 14, 654.98250000, 1369.82800000, 13.08770000, 176.47780000, 1, 802082487, 666.32060000, 1354.09700000, 13.29910000, 88.98670000 );
    return;
}

void sub_27105(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, int iParam6, float fParam7, float fParam8, float fParam9, unknown uParam10)
{
    if (iParam0 > 15)
    {
        sub_24994( "Main_Missions: Store_Friend_Pickup_Point(): Illegal Friend Pickup Point ID" );
    }
    if (((NOT (g_U10789[iParam0]._fU4._fU0 == 0.00000000)) || (NOT (g_U10789[iParam0]._fU4._fU4 == 0.00000000))) || (NOT (g_U10789[iParam0]._fU4._fU8 == 0.00000000)))
    {
        sub_24994( "Main_Missions: Store_Friend_Pickup_Point(): Friend Pickup Point ID already setup" );
    }
    g_U10789[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    g_U10789[iParam0]._fU16 = uParam4;
    g_U10789[iParam0]._fU0 = 1;
    g_U10789[iParam0]._fU20 = bParam5;
    if (NOT bParam5)
    {
        return;
    }
    if (((fParam7 == 0.00000000) AND (fParam8 == 0.00000000)) AND (fParam9 == 0.00000000))
    {
        SCRIPT_ASSERT( "Store_Friend_Pickup_Point(): Player vehicle required but coordinates not given" );
        return;
    }
    if (iParam6 == 0)
    {
        SCRIPT_ASSERT( "Store_Friend_Pickup_Point(): Player vehicle required but model not given" );
        return;
    }
    g_U10789[iParam0]._fU24 = iParam6;
    g_U10789[iParam0]._fU28 = {fParam7, fParam8, fParam9};
    g_U10789[iParam0]._fU40 = uParam10;
    return;
}

void sub_28458()
{
    int I;

    I = 0;
    for ( I = 0; I < 15; I++ )
    {
        if (((g_U10789[I]._fU4._fU0 == 0.00000000) AND (g_U10789[I]._fU4._fU4 == 0.00000000)) AND (g_U10789[I]._fU4._fU8 == 0.00000000))
        {
            sub_24994( "Main_Missions: Check_Friend_Pickup_Points(): Not all Friend Pickup Point IDs are set up" );
        }
    }
    return;
}

void sub_28668()
{
    sub_28677();
    sub_28943();
    sub_29010();
    sub_32253();
    sub_32600();
    return;
}

void sub_28677()
{
    int I;

    I = 0;
    for ( I = 0; I < 200; I++ )
    {
        g_U20913[I]._fU0 = -1;
        g_U20913[I]._fU4 = -1;
        g_U20913[I]._fU12 = 10;
        g_U20913[I]._fU16 = 19;
        StrCopy( ref g_U20913[I]._fU20, "", 16 );
        StrCopy( ref g_U20913[I]._fU36, "", 32 );
        sub_28795( ref g_U20913[I]._fU68 );
        sub_28795( ref g_U20913[I]._fU76 );
        StrCopy( ref g_U20913[I]._fU84, "", 16 );
        g_U20913[I]._fU108 = 0;
    }
    g_U26514 = 0;
    g_U26712[0]._fU0 = 0;
    for ( I = 0; I < 11; I++ )
    {
        g_U14815[I]._fU0 = 0;
    }
    return;
}

void sub_28795(int iParam0)
{
    iParam0->_fU0 = -1;
    iParam0->_fU4 = -1;
    return;
}

void sub_28943()
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        g_U26515[I]._fU0 = -1;
        g_U26515[I]._fU4 = -1;
    }
    return;
}

void sub_29010()
{
    sub_29056( 0, 0, 2, 18, "IntroCS", 97, 0, 0, "opening_credits" );
    sub_29056( 0, 1, 1, 17, "E1M_1", 97, 1, 1, "Billy1" );
    sub_29056( 0, 2, 0, 1, "E1M_2", 98, 1, 1, "Billy2" );
    sub_29056( 0, 3, 0, 1, "E1M_3", 99, 1, 1, "Billy3" );
    sub_29056( 0, 4, 0, 1, "E1M_4", 100, 1, 1, "Billy4" );
    sub_29056( 0, 5, 0, 2, "E1M_5", 101, 1, 1, "Billy5" );
    sub_29056( 0, 6, 0, 1, "E1M_6", 102, 1, 1, "Billy6" );
    sub_29056( 0, 7, 5, 17, "ABILHLP", 0, 0, 0, "SpecialAbilityHelp" );
    sub_29056( 0, 8, 5, 17, "RECURHLP", 0, 0, 0, "RecurStatHelp" );
    sub_29056( 0, 9, 5, 17, "LEADERHLP", 0, 0, 0, "leaderHelp" );
    sub_29056( 0, 10, 6, 17, "ROMTAXI", 0, 0, 0, "E1RomanTaxi" );
    sub_29056( 1, 0, 0, 3, "E1M_7", 103, 1, 1, "Jim1" );
    sub_29056( 1, 1, 0, 4, "E1M_8", 104, 1, 1, "Jim2" );
    sub_29056( 1, 2, 0, 6, "E1M_10", 106, 1, 1, "Jim4" );
    sub_29056( 1, 3, 0, 5, "E1M_11", 107, 1, 1, "Jim5" );
    sub_29056( 1, 4, 0, 7, "E1M_12", 108, 1, 1, "Jim6" );
    sub_29056( 1, 5, 4, 17, "E1F2FAIRH", 0, 0, 1, "JimAirHockey" );
    sub_29056( 1, 6, 4, 17, "E1F2FDART", 0, 0, 1, "JimDarts" );
    sub_29056( 1, 7, 4, 17, "E1F2FDRINK", 0, 0, 1, "JimDrink" );
    sub_29056( 1, 8, 4, 17, "E1F2FEAT", 0, 0, 1, "JimEat" );
    sub_29056( 1, 9, 4, 17, "E1F2FHANG", 0, 0, 1, "JimHangout" );
    sub_29056( 1, 10, 4, 17, "E1F2FPOOL", 0, 0, 1, "JimPool" );
    sub_29056( 1, 11, 4, 17, "E1F2FSHOW", 0, 0, 1, "JimShow" );
    sub_29056( 1, 12, 4, 17, "E1F2FSTRIP", 0, 0, 1, "JimStrip" );
    sub_29056( 1, 14, 1, 17, "E1F2FTEST", 0, 0, 0, "Pause" );
    sub_29056( 2, 0, 0, 8, "E1M_13", 109, 1, 1, "Stubbs1" );
    sub_29056( 2, 1, 0, 8, "E1M_14", 110, 1, 1, "Stubbs2" );
    sub_29056( 2, 2, 3, 17, "E1M_15", 111, 0, 1, "Stubbs3p" );
    sub_29056( 2, 3, 0, 9, "E1M_16", 112, 1, 1, "Stubbs4" );
    sub_29056( 2, 4, 1, 17, "E1CREDITS", 0, 0, 1, "E1EndCredits" );
    sub_29056( 3, 0, 1, 17, "E1M_17", 113, 1, 1, "Ashley1" );
    sub_29056( 3, 1, 0, 10, "E1M_18", 114, 1, 1, "Ashley2" );
    sub_29056( 4, 0, 0, 11, "E1M_19", 115, 1, 1, "Elizabeta1" );
    sub_29056( 4, 1, 0, 11, "E1M_20", 116, 1, 1, "Elizabeta2" );
    sub_29056( 4, 2, 0, 11, "E1M_21", 117, 1, 1, "Elizabeta3" );
    sub_29056( 5, 0, 0, 12, "E1M_22", 118, 1, 1, "Ray1" );
    sub_29056( 5, 1, 1, 17, "E1M_23", 119, 1, 1, "Ray2" );
    sub_29056( 5, 2, 0, 12, "E1M_24", 120, 1, 1, "Ray3" );
    sub_29056( 6, 0, 4, 17, "E1F7FAIRH", 0, 0, 1, "TerryAirHockey" );
    sub_29056( 6, 1, 4, 17, "E1F7FDART", 0, 0, 1, "TerryDarts" );
    sub_29056( 6, 2, 4, 17, "E1F7FDRINK", 0, 0, 1, "TerryDrink" );
    sub_29056( 6, 3, 4, 17, "E1F7FEAT", 0, 0, 1, "TerryEat" );
    sub_29056( 6, 4, 4, 17, "E1F7FHANG", 0, 0, 1, "TerryHangout" );
    sub_29056( 6, 5, 4, 17, "E1F7FPOOL", 0, 0, 1, "TerryPool" );
    sub_29056( 6, 6, 4, 17, "E1F7FSHOW", 0, 0, 1, "TerryShow" );
    sub_29056( 6, 7, 4, 17, "E1F7FSTRIP", 0, 0, 1, "TerryStrip" );
    sub_29056( 6, 10, 1, 17, "E1F7FTEST", 0, 0, 0, "Pause" );
    sub_29056( 7, 0, 4, 17, "E1F8FAIRH", 0, 0, 1, "ClayAirHockey" );
    sub_29056( 7, 1, 4, 17, "E1F8FDART", 0, 0, 1, "ClayDarts" );
    sub_29056( 7, 2, 4, 17, "E1F8FDRINK", 0, 0, 1, "ClayDrink" );
    sub_29056( 7, 3, 4, 17, "E1F8FEAT", 0, 0, 1, "ClayEat" );
    sub_29056( 7, 4, 4, 17, "E1F8FHANG", 0, 0, 1, "ClayHangout" );
    sub_29056( 7, 5, 4, 17, "E1F8FPOOL", 0, 0, 1, "ClayPool" );
    sub_29056( 7, 6, 4, 17, "E1F8FSHOW", 0, 0, 1, "ClayShow" );
    sub_29056( 7, 7, 4, 17, "E1F8FSTRIP", 0, 0, 1, "ClayStrip" );
    sub_29056( 7, 10, 1, 17, "E1F8FTEST", 0, 0, 0, "Pause" );
    sub_29056( 8, 0, 3, 17, "E1M_9", 105, 0, 1, "Jim3p" );
    sub_29056( 10, 0, 6, 17, "SPGUNCAR", 0, 0, 0, "ability_gun_car" );
    sub_29056( 10, 1, 6, 17, "SPBACKUP", 0, 0, 0, "ability_backup" );
    sub_29056( 10, 2, 1, 17, "ROADRASH", 0, 0, 0, "roadrash" );
    sub_29056( 10, 3, 6, 17, "E2FIGHT", 0, 0, 0, "FightClub" );
    sub_29056( 10, 4, 6, 17, "E2BAGGAGE", 0, 0, 0, "lost_baggage" );
    sub_29056( 10, 5, 6, 17, "ARMWRESTLE", 0, 0, 0, "arm_wrestling" );
    sub_29056( 10, 6, 6, 17, "HILOCARDS", 0, 0, 0, "hi_lo_cards" );
    sub_29056( 10, 7, 6, 17, "AIRHOCKEY", 0, 0, 0, "air_hockey_trigger" );
    sub_29056( 10, 8, 6, 17, "BOATNM", 0, 0, 0, "BoatNMTest" );
    sub_29056( 10, 9, 6, 17, "BIKERBUD", 0, 0, 0, "BikerBuddyTest" );
    sub_29056( 10, 10, 6, 17, "BIKERBUD2", 0, 0, 0, "BikerBuddyTest2" );
    sub_29056( 10, 11, 6, 17, "BIKERBUD3", 0, 0, 0, "BikerBuddyTest3" );
    sub_29056( 10, 12, 6, 17, "BIKERBUDM", 0, 0, 0, "BikerBuddyMarker" );
    sub_29056( 10, 13, 6, 17, "TESTAUDIO", 0, 0, 0, "audiotest" );
    sub_29056( 10, 14, 6, 17, "TESTCREDS", 0, 0, 0, "E1EndCredits" );
    return;
}

void sub_29056(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;

    uVar11 = sub_29067( uParam0 );
    sub_29280( uVar11, uParam0, uParam1, uParam2, uParam3, uParam4, uParam8, uParam5, uParam6, uParam7 );
    sub_29696();
    return;
}

void sub_29067(int iParam0)
{
    if (g_U26514 >= 200)
    {
        sub_24994( "Main_Missions: Begin_Trigger(): Need to increase MAX_MISSION_TRIGGERS" );
    }
    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_24994( "Main_Missions: Begin_Trigger(): StrandID out of range" );
    }
    return g_U26514;
}

void sub_29280(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, boolean bParam9)
{
    g_U20913[uParam0]._fU0 = uParam1;
    g_U20913[uParam0]._fU4 = uParam2;
    g_U20913[uParam0]._fU12 = iParam3;
    g_U20913[uParam0]._fU16 = uParam4;
    StrCopy( ref g_U20913[uParam0]._fU20, uParam5, 16 );
    StrCopy( ref g_U20913[uParam0]._fU36, uParam6, 32 );
    if (((((((iParam3 == 1) || (iParam3 == 2)) || (iParam3 == 3)) || (iParam3 == 4)) || (iParam3 == 5)) || (iParam3 == 6)) || (iParam3 == 7))
    {
        g_U20913[uParam0]._fU16 = 17;
    }
    if (iParam3 == 2)
    {
        g_U20913[uParam0]._fU16 = 18;
    }
    if (bParam9)
    {
        SET_BIT( ref g_U20913[uParam0]._fU108, 2 );
    }
    g_U20913[uParam0]._fU8 = uParam7;
    g_U20913[uParam0]._fU100 = 0;
    sub_29505( uParam0, uParam1, uParam8 );
    return;
}

void sub_29505(int iParam0, int iParam1, int iParam2)
{
    int iVar5;
    boolean bVar6;

    if (iParam2 == 0)
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
    iVar5 = iParam2;
    bVar6 = true;
    if (iParam2 > 60)
    {
        iVar5 = iParam2 - 60;
        bVar6 = false;
    }
    else if (iParam2 > 50)
    {
        iVar5 = iParam2 - 50;
        bVar6 = true;
    }
    g_U20913[iParam0]._fU104 = iVar5;
    if (NOT bVar6)
    {
        return;
    }
    g_U26712[0]._fU0 += iVar5;
    g_U14815[iParam1]._fU0 += iVar5;
    return;
}

void sub_29696()
{
    g_U26514++;
    return;
}

void sub_32253()
{
    int iVar2;
    int iVar3;
    int I;

    iVar2 = -1;
    iVar3 = 0;
    I = 0;
    for ( I = 0; I < g_U26514; I++ )
    {
        if (NOT (g_U20913[I]._fU0 == iVar2))
        {
            if (NOT (iVar2 == -1))
            {
                g_U26515[iVar2]._fU4 = iVar3;
            }
            iVar2 = g_U20913[I]._fU0;
            if ((iVar2 < 0) || (iVar2 >= 11))
            {
                sub_24994( "Main_Missions: Generate_Triggers_Index(): Illegal Strand ID" );
            }
            if (NOT (g_U26515[iVar2]._fU0 == -1))
            {
                sub_24994( "Main_Missions: Generate_Triggers_Index(): More missions being recorded in an already recorded strand" );
            }
            g_U26515[iVar2]._fU0 = I;
        }
        iVar3 = I;
    }
    g_U26515[iVar2]._fU4 = iVar3;
    return;
}

void sub_32600()
{
    int iVar2;
    int iVar3;
    int J;
    int[48] iVar5;
    int I;
    int iVar55;

    iVar2 = 0;
    iVar3 = 0;
    J = 0;
    array(ref iVar5, 48);
    I = 0;
    iVar55 = 0;
    for ( iVar55 = 0; iVar55 < 11; iVar55++ )
    {
        iVar2 = g_U26515[iVar55]._fU0;
        if (NOT (iVar2 == -1))
        {
            iVar3 = g_U26515[iVar55]._fU4;
            if (((iVar3 - iVar2) + 1) >= 48)
            {
                sub_24994( "Main_Missions: Need to increase MAX_MISSIONS_IN_STRAND" );
            }
            I = 0;
            for ( I = 0; I < 48; I++ )
            {
                iVar5[I] = 0;
            }
            for ( J = iVar2; J <= iVar3; J++ )
            {
                if (iVar5[g_U20913[J]._fU4])
                {
                    while (true)
                    {
                        PRINTSTRING( "STRAND: " );
                        PRINTINT( g_U20913[J]._fU0 );
                        PRINTSTRING( "    MISSION: " );
                        PRINTINT( g_U20913[J]._fU4 );
                        PRINTNL();
                        PRINTSTRING( "Main_Missions: Duplicate Strand And Mission\n" );
                        PRINTSTRING( "*** SCRIPT HALTED ***\n" );
                        WAIT( 1000 );
                    }
                }
                iVar5[g_U20913[J]._fU4] = 1;
            }
        }
    }
    return;
}

void sub_33112()
{
    sub_33121();
    sub_33330( 0, 2046537925, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_33330( 1, 148777611, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_33330( 2, -350085182, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_33330( 3, -1627000575, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_33330( 4, -1900572838, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_33330( 5, 1127131465, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    return;
}

void sub_33121()
{
    int I;

    I = 0;
    for ( I = 0; I < 6; I++ )
    {
        CLEAR_TEXT_LABEL( ref g_U26538[I]._fU4 );
        CLEAR_TEXT_LABEL( ref g_U26538[I]._fU20 );
        g_U26538[I]._fU0 = -1;
        g_U26538[I]._fU36 = 0;
        StrCopy( ref g_U26538[I]._fU40, "", 32 );
        g_U26538[I]._fU72 = 0;
        g_U26538[I]._fU76 = 0;
        g_U26538[I]._fU80 = 0;
    }
    g_U26665 = 0;
    return;
}

void sub_33330(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;

    uVar10 = sub_33341( uParam0 );
    StrCopy( ref g_U26538[uVar10]._fU4, uParam3, 16 );
    StrCopy( ref g_U26538[uVar10]._fU20, uParam4, 16 );
    g_U26538[uVar10]._fU0 = uParam0;
    g_U26538[uVar10]._fU36 = uParam1;
    StrCopy( ref g_U26538[uVar10]._fU40, uParam2, 32 );
    g_U26538[uVar10]._fU72 = uParam5;
    g_U26538[uVar10]._fU76 = uParam6;
    g_U26538[uVar10]._fU80 = uParam7;
    sub_33738();
    return;
}

void sub_33341(int iParam0)
{
    int I;

    if (g_U26665 >= 6)
    {
        sub_24994( "Main_Missions: Begin_R3_Trigger(): Need to increase MAX_R3_MISSION_TRIGGERS" );
    }
    I = 0;
    for ( I = 0; I < g_U26665; I++ )
    {
        if (iParam0 == g_U26538[I]._fU0)
        {
            PRINTSTRING( "R3 MissionID: " );
            PRINTINT( iParam0 );
            PRINTNL();
            sub_24994( "Main_Missions: Begin_R3_Trigger(): Duplicate R3 Mission" );
        }
    }
    return g_U26665;
}

void sub_33738()
{
    g_U26665++;
    return;
}

void sub_34013()
{
    sub_34022();
    sub_34157();
    sub_34659();
    return;
}

void sub_34022()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U11005[I]._fU8 = {0.00000000, 0.00000000, 0.00000000};
        g_U11005[I]._fU20 = {0.00000000, 0.00000000, 0.00000000};
        g_U11005[I]._fU32 = nil;
        g_U11005[I]._fU36 = g_U10685;
    }
    sub_5506();
    return;
}

void sub_34157()
{
    sub_34225( 0, -1712.58100000, 358.17900000, 24.44440000, -1721.18900000, 335.45970000, 25.34170000, 348.18640000, "E1_Lost_grndsave", 3, 29 );
    sub_34225( 1, -1953.15700000, -59.10830000, 5.37260000, -1954.32900000, -71.63110000, 10.37090000, 2.29320000, "E1_HouseBed3", 3, 29 );
    return;
}

void sub_34225(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown uVar13;

    if (iParam0 > 2)
    {
        sub_24994( "Main_Missions: Store_Save_House(): Illegal Save House ID" );
    }
    if (((NOT (g_U11005[iParam0]._fU8._fU0 == 0.00000000)) || (NOT (g_U11005[iParam0]._fU8._fU4 == 0.00000000))) || (NOT (g_U11005[iParam0]._fU8._fU8 == 0.00000000)))
    {
        sub_24994( "Main_Missions: Store_Save_House(): Save House ID already setup" );
    }
    g_U11005[iParam0]._fU8 = {uParam1};
    g_U11005[iParam0]._fU20 = {uParam4};
    g_U11005[iParam0]._fU36 = uParam10;
    g_U11005[iParam0]._fU40 = uParam9;
    uVar13 = uParam9;
    g_U11005[iParam0]._fU4 = REGISTER_SAVE_HOUSE( uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7, uParam8, uVar13 );
    ENABLE_SAVE_HOUSE( g_U11005[iParam0]._fU4, 1 );
    g_U11005[iParam0]._fU0 = 1;
    return;
}

void sub_34659()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        if (((g_U11005[I]._fU8._fU0 == 0.00000000) AND (g_U11005[I]._fU8._fU4 == 0.00000000)) AND (g_U11005[I]._fU8._fU8 == 0.00000000))
        {
            sub_24994( "Main_Missions: Check_Save_Houses(): Not all Save House IDs are set up" );
        }
    }
    return;
}

void sub_34851()
{
    sub_34860();
    sub_35043();
    sub_37206();
    return;
}

void sub_34860()
{
    int I;

    I = 0;
    for ( I = 0; I < 65; I++ )
    {
        g_U11583[I]._fU0 = {0.00000000, 0.00000000, 0.00000000};
        g_U11583[I]._fU12 = 24;
        g_U11583[I]._fU16 = 32;
        g_U11583[I]._fU20 = g_U10685;
        g_U11583[I]._fU24 = 2;
        g_U11583[I]._fU28 = 5;
        g_U11583[I]._fU32 = nil;
        g_U12169[I]._fU0 = 0;
        g_U12169[I]._fU4 = nil;
    }
    sub_15905();
    return;
}

void sub_35043()
{
    sub_35073( 0, 1190.67200000, 379.45310000, 23.00740000, 11, 15, 22, 2, 0 );
    sub_35073( 1, 1647.39700000, 236.60750000, 23.59730000, 11, 20, 21, 2, 0 );
    sub_35073( 2, 880.93240000, -480.30750000, 14.01390000, 11, 17, 57, 2, 0 );
    sub_35073( 3, 925.40010000, -490.20910000, 14.33960000, 8, 10, 47, 2, 0 );
    sub_35073( 4, 1150.79500000, 734.42770000, 34.39900000, 8, 8, 47, 2, 0 );
    sub_35073( 5, 977.02670000, -168.98600000, 23.02960000, 15, 23, 24, 2, 0 );
    sub_35073( 6, 900.15060000, -443.31660000, 14.80430000, 6, 4, 50, 2, 0 );
    sub_35073( 7, 1054.38200000, 86.56970000, 32.39870000, 22, 30, 59, 1, 0 );
    sub_35073( 8, 1198.96600000, -680.09220000, 15.43980000, 0, 0, 113, 2, 0 );
    sub_35073( 9, 1198.96600000, -680.09220000, 15.43980000, 4, 2, 49, 2, 0 );
    sub_35073( 10, 1478.30500000, 54.44050000, 23.93220000, 17, 24, 46, 2, 0 );
    sub_35073( 11, 1152.67800000, 733.92750000, 34.39900000, 7, 7, 52, 2, 0 );
    sub_35073( 12, 957.92380000, -294.83490000, 18.58870000, 18, 26, 71, 2, 0 );
    sub_35073( 13, 1058.17900000, -287.15700000, 20.33040000, 19, 27, 75, 2, 0 );
    sub_35073( 14, 1513.46000000, 115.69420000, 22.25510000, 5, 3, 91, 2, 0 );
    sub_35073( 15, 1837.42600000, 360.37300000, 21.55200000, 5, 3, 91, 2, 0 );
    sub_35073( 16, 945.51960000, 104.60200000, 33.03960000, 10, 14, 61, 3, 0 );
    sub_35073( 17, 2366.86700000, 179.41770000, 4.80770000, 10, 14, 61, 3, 0 );
    sub_35073( 18, 441.43150000, 1517.63300000, 15.32880000, 11, 20, 21, 2, 1 );
    sub_35073( 19, 1099.12100000, 1596.28800000, 15.71550000, 11, 20, 21, 2, 1 );
    sub_35073( 20, 1130.43400000, 1723.71900000, 9.48690000, 10, 14, 61, 3, 1 );
    sub_35073( 21, 1202.20700000, 1709.83700000, 15.65890000, 20, 28, 66, 2, 1 );
    sub_35073( 22, 732.76150000, 1381.56700000, 13.24680000, 12, 21, 79, 2, 1 );
    sub_35073( 23, -139.73910000, 71.76300000, 13.75580000, 11, 15, 22, 2, 2 );
    sub_35073( 24, -617.71620000, 149.43770000, 3.94430000, 11, 20, 21, 2, 2 );
    sub_35073( 25, -174.20310000, 276.77800000, 13.81190000, 11, 20, 21, 2, 2 );
    sub_35073( 26, -429.96930000, 1183.50600000, 12.05250000, 11, 20, 21, 2, 2 );
    sub_35073( 27, -139.82790000, -277.88460000, 12.37300000, 11, 17, 57, 2, 2 );
    sub_35073( 28, -393.07460000, 245.13730000, 13.38720000, 11, 17, 57, 2, 2 );
    sub_35073( 29, 115.58140000, 640.82930000, 13.71190000, 11, 17, 57, 2, 2 );
    sub_35073( 30, 29.76350000, 980.44730000, 13.66180000, 11, 19, 57, 2, 2 );
    sub_35073( 31, 113.49810000, 554.75180000, 13.60160000, 8, 9, 47, 2, 2 );
    sub_35073( 32, -477.82480000, 1409.69200000, 15.47250000, 8, 11, 51, 2, 2 );
    sub_35073( 33, 366.79550000, -731.30100000, 3.69170000, 13, 22, 56, 2, 2 );
    sub_35073( 34, -341.48280000, 1392.46200000, 11.93880000, 15, 23, 24, 2, 2 );
    sub_35073( 35, 13.96100000, -657.06470000, 13.76190000, 6, 6, 50, 2, 2 );
    sub_35073( 36, 22.14700000, 811.58510000, 13.71190000, 6, 6, 50, 2, 2 );
    sub_35073( 37, -280.66780000, 1352.73500000, 24.62000000, 6, 5, 50, 2, 2 );
    sub_35073( 38, 65.94250000, -342.24410000, 13.76250000, 22, 30, 59, 1, 2 );
    sub_35073( 39, -571.26780000, 77.83100000, 3.81210000, 1, 0, 113, 2, 2 );
    sub_35073( 40, -650.62320000, 1205.61900000, 5.94800000, 2, 1, 110, 2, 2 );
    sub_35073( 41, -237.38510000, 1656.08800000, 18.71900000, 2, 1, 110, 2, 2 );
    sub_35073( 42, -571.26780000, 77.83100000, 3.81210000, 4, 2, 49, 2, 2 );
    sub_35073( 43, -443.23690000, 458.09870000, 8.83620000, 7, 7, 52, 2, 2 );
    sub_35073( 44, -348.70010000, 181.23150000, 13.76220000, 18, 25, 70, 2, 2 );
    sub_35073( 45, -307.26430000, 1549.11400000, 19.26490000, 19, 27, 75, 2, 2 );
    sub_35073( 46, -513.84290000, 376.23450000, 5.66430000, 19, 27, 75, 2, 2 );
    sub_35073( 47, -499.76900000, 486.28510000, 5.57620000, 5, 3, 91, 2, 2 );
    sub_35073( 48, -272.29180000, 1530.10400000, 19.26340000, 10, 14, 61, 3, 2 );
    sub_35073( 49, -378.19860000, 221.62780000, 13.68570000, 10, 14, 61, 3, 2 );
    sub_35073( 50, 289.40550000, -358.02360000, 3.80870000, 10, 14, 61, 3, 2 );
    sub_35073( 51, -1005.83300000, 1610.65200000, 23.01240000, 11, 20, 21, 2, 3 );
    sub_35073( 52, -1245.33600000, 1070.77600000, 18.77900000, 11, 18, 57, 2, 3 );
    sub_35073( 53, -1157.17400000, 1399.35800000, 23.45010000, 11, 17, 57, 2, 3 );
    sub_35073( 54, -1368.28700000, 525.89020000, 11.47960000, 8, 12, 47, 2, 3 );
    sub_35073( 55, -984.33910000, 914.97020000, 12.67760000, 8, 13, 51, 2, 3 );
    sub_35073( 56, -1337.63000000, 307.87090000, 12.32560000, 22, 30, 59, 1, 3 );
    sub_35073( 57, -1147.96900000, 1176.36600000, 15.83930000, 19, 27, 75, 2, 3 );
    sub_35073( 58, -1300.05800000, 274.11460000, 9.79920000, 19, 27, 75, 2, 3 );
    sub_35073( 59, -1303.23800000, 1741.21400000, 26.82040000, 5, 3, 91, 2, 3 );
    sub_35073( 60, -1376.09100000, 38.03660000, 6.14100000, 5, 3, 91, 2, 3 );
    sub_35073( 61, -1572.53300000, 553.76720000, 24.44300000, 10, 14, 61, 3, 3 );
    sub_35073( 62, -2132.83400000, 165.60890000, 11.04480000, 10, 14, 61, 3, 3 );
    sub_35073( 63, -1582.84200000, 26.49770000, 9.04700000, 20, 29, 66, 2, 3 );
    sub_35073( 64, -1584.45600000, 465.82890000, 24.31230000, 15, 23, 24, 2, 3 );
    return;
}

void sub_35073(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (((NOT (g_U11583[uParam0]._fU0._fU0 == 0.00000000)) || (NOT (g_U11583[uParam0]._fU0._fU4 == 0.00000000))) || (NOT (g_U11583[uParam0]._fU0._fU8 == 0.00000000)))
    {
        sub_24994( "main_missions: Add_Map_Blip: Map Blip already setup" );
    }
    g_U11583[uParam0]._fU0 = {uParam1, uParam2, uParam3};
    g_U11583[uParam0]._fU12 = uParam4;
    g_U11583[uParam0]._fU16 = uParam5;
    g_U11583[uParam0]._fU20 = uParam6;
    g_U11583[uParam0]._fU24 = uParam7;
    g_U11583[uParam0]._fU28 = uParam8;
    g_U11583[uParam0]._fU32 = nil;
    return;
}

void sub_37206()
{
    int I;

    I = 0;
    for ( I = 0; I < 65; I++ )
    {
        if (((g_U11583[I]._fU0._fU0 == 0.00000000) AND (g_U11583[I]._fU0._fU4 == 0.00000000)) AND (g_U11583[I]._fU0._fU8 == 0.00000000))
        {
            sub_24994( "Main_Missions: Check_Map_Blips(): Not all Map Blip IDs are set up" );
        }
    }
    return;
}

void sub_37460()
{
    sub_15905();
    sub_37474();
    return;
}

void sub_37474()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_37502( 16 );
        if ((sub_37547( 16, iVar3 )) AND (g_U10994[g_U11236[I]._fU0]._fU0))
        {
            sub_37648( ref g_U11236[I]._fU20, g_U11236[I]._fU4, 4, 60 );
        }
        else
        {
            sub_15709( ref g_U11236[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_37502( 14 );
        if ((sub_37547( 14, iVar3 )) AND (g_U10994[g_U11327[I]._fU0]._fU0))
        {
            sub_37648( ref g_U11327[I]._fU20, g_U11327[I]._fU4, 4, 62 );
        }
        else
        {
            sub_15709( ref g_U11327[I]._fU20 );
        }
    }
    for ( I = 0; I < 65; I++ )
    {
        iVar3 = sub_37980( I );
        if ((sub_37547( g_U11583[I]._fU12, iVar3 )) AND (g_U10994[g_U11583[I]._fU28]._fU0))
        {
            sub_37648( ref g_U11583[I]._fU32, g_U11583[I]._fU0, g_U11583[I]._fU24, g_U11583[I]._fU20 );
            sub_38288( I );
        }
        else
        {
            sub_15709( ref g_U11583[I]._fU32 );
            g_U11370._fU584[I] = 0;
        }
    }
    sub_38517();
    return;
}

int sub_37502(unknown uParam0)
{
    if (g_U11370._fU96[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_37547(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U11370._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_37648(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U6 );
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

int sub_37980(unknown uParam0)
{
    unknown uVar3;

    if (g_U11370._fU320[uParam0])
    {
        return 1;
    }
    if (sub_38022( g_U11583[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_37502( g_U11583[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U12303)
    {
        uVar3 = g_U11583[uParam0]._fU12;
        if (g_U11370._fU0[uVar3])
        {
            if (g_U11583[uParam0]._fU24 == 1)
            {
                if (g_U10999 == g_U11583[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_38022(unknown uParam0)
{
    if (g_U11370._fU192[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_38288(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U11583[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11583[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11583[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U11583[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_38517()
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
    bVar3 = sub_37502( 16 );
    for ( I = 0; I < 15; I++ )
    {
        sub_38562( g_U11236[I]._fU20, bVar3 );
    }
    bVar3 = sub_37502( 14 );
    for ( I = 0; I < 7; I++ )
    {
        sub_38562( g_U11327[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 65; I++ )
    {
        if ((sub_37980( I )) AND (g_U10994[g_U11583[I]._fU28]._fU0))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 65; I++ )
    {
        bVar3 = sub_37980( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U10999 == g_U11583[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_38562( g_U11583[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 2; I++ )
    {
        bVar3 = false;
        if (g_U11005[I]._fU0)
        {
            if (g_U10999 == g_U11005[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_38562( g_U11005[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_15549() )))
        {
            GET_CHAR_COORDINATES( sub_15549(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 2; I++ )
            {
                if (g_U11005[I]._fU0)
                {
                    fVar11 = sub_39053( uVar7, g_U11005[I]._fU8 );
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
            for ( I = 0; I < 2; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_38562( g_U11005[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_38562(unknown uParam0, boolean bParam1)
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

void sub_39053(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_39251(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (iParam0 == -1)
    {
        g_U10986 = 97;
        sub_39277();
        return;
    }
    if (g_U20913[iParam0]._fU8 == 0)
    {
        return;
    }
    sub_39336( iParam0 );
    uVar3 = g_U10986;
    uVar4 = g_U20913[iParam0]._fU100;
    SET_RICH_PRESENCE_TEMPLATESP1( uVar3, 1, uVar4 );
    return;
}

void sub_39277()
{
    unknown uVar2;

    uVar2 = g_U10986;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_39336(unknown uParam0)
{
    g_U10986 = g_U20913[uParam0]._fU8;
    if (g_U10986 >= 50000)
    {
        g_U10986 = sub_39382( g_U10986 );
    }
    return;
}

void sub_39382(unknown Result)
{
    return Result;
}

void sub_39456()
{
    sub_39471( ref g_U8768._fU0 );
    sub_40601( ref g_U8768._fU4 );
    sub_41328( ref g_U8768._fU8 );
    sub_41929( ref g_U8768._fU12 );
    sub_42226( ref g_U8768._fU16 );
    g_U8768._fU20 = -1;
    g_U8768._fU24 = -1;
    g_U8789[g_U8768._fU0] = 1;
    g_U8835[g_U8768._fU4] = 1;
    g_U8862[g_U8768._fU8] = 1;
    if (g_U8768._fU12 >= 0)
    {
        g_U8883[g_U8768._fU12] = 1;
    }
    if (g_U8768._fU16 >= 0)
    {
        g_U8888[g_U8768._fU16] = 1;
    }
    return;
}

void sub_39471(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_15549(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_15549(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_39541( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 45;
    }
    return;
}

void sub_39541(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 15:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 16:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 17:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 4:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 5:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 6:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 7:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 8:
        (uParam1^) = 3;
        (uParam2^) = 2;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 20:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 28:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 29:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 30:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 41:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 42:
        (uParam1^) = 8;
        (uParam2^) = 0;
        break;
        case 21:
        (uParam1^) = 9;
        (uParam2^) = 0;
        break;
        case 22:
        (uParam1^) = 9;
        (uParam2^) = 1;
        break;
        case 23:
        (uParam1^) = 9;
        (uParam2^) = 2;
        break;
        case 9:
        (uParam1^) = 10;
        (uParam2^) = 0;
        break;
        case 10:
        (uParam1^) = 10;
        (uParam2^) = 1;
        break;
        case 11:
        (uParam1^) = 10;
        (uParam2^) = 2;
        break;
        case 31:
        (uParam1^) = 11;
        (uParam2^) = 0;
        break;
        case 32:
        (uParam1^) = 11;
        (uParam2^) = 1;
        break;
        case 33:
        (uParam1^) = 11;
        (uParam2^) = 2;
        break;
        case 34:
        (uParam1^) = 12;
        (uParam2^) = 0;
        break;
        case 35:
        (uParam1^) = 12;
        (uParam2^) = 1;
        break;
        case 36:
        (uParam1^) = 12;
        (uParam2^) = 2;
        break;
        case 37:
        (uParam1^) = 12;
        (uParam2^) = 3;
        break;
        case 38:
        (uParam1^) = 13;
        (uParam2^) = 0;
        break;
        case 39:
        (uParam1^) = 13;
        (uParam2^) = 1;
        break;
        case 40:
        (uParam1^) = 13;
        (uParam2^) = 2;
        break;
        case 12:
        (uParam1^) = 14;
        (uParam2^) = 0;
        break;
        case 13:
        (uParam1^) = 14;
        (uParam2^) = 1;
        break;
        case 14:
        (uParam1^) = 14;
        (uParam2^) = 2;
        break;
        case 24:
        (uParam1^) = 15;
        (uParam2^) = 0;
        break;
        case 25:
        (uParam1^) = 15;
        (uParam2^) = 1;
        break;
        case 26:
        (uParam1^) = 15;
        (uParam2^) = 2;
        break;
        case 27:
        (uParam1^) = 15;
        (uParam2^) = 3;
        break;
        case 43:
        (uParam1^) = 16;
        (uParam2^) = 0;
        break;
        case 44:
        (uParam1^) = 16;
        (uParam2^) = 1;
        break;
        default:
          case 45:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_40601(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_15549(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_15549(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_40669( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 26;
    }
    return;
}

void sub_40669(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 0;
        (uParam2^) = 3;
        break;
        case 4:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 20:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 21:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 22:
        (uParam1^) = 2;
        (uParam2^) = 3;
        break;
        case 23:
        (uParam1^) = 2;
        (uParam2^) = 4;
        break;
        case 24:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 15:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 16:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 17:
        (uParam1^) = 4;
        (uParam2^) = 3;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 4;
        break;
        case 8:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 9:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 11:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 12:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 13:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 5:
        (uParam1^) = 7;
        (uParam2^) = 0;
        break;
        case 6:
        (uParam1^) = 7;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 7;
        (uParam2^) = 2;
        break;
        case 25:
        (uParam1^) = 7;
        (uParam2^) = 3;
        break;
        default:
          case 26:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_41328(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_15549(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( sub_15549(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_41396( I, ref iVar6, ref iVar7 );
            if ((iVar6 == iVar3) AND (iVar7 == iVar4))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 20;
    }
    return;
}

void sub_41396(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 8:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 9:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 13:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 15:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 2:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 3:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 11:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 12:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 16:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 17:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 18:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 4:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 5:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 6:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 19:
        (uParam1^) = 1;
        (uParam2^) = 3;
        break;
        default:
          case 20:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_41929(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( sub_15549(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_41982( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( sub_15549(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( sub_15549(), 8 );
        if ((iVar7 == 1) AND (iVar8 == 0))
        {
            (uParam0^) = 3;
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 4;
    }
    return;
}

void sub_41982(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        case 3:
        (uParam1^) = 99;
        break;
        default:
          case 4: (uParam1^) = 2147483647;
    }
    return;
}

void sub_42226(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( sub_15549(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_42275( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 3;
    }
    return;
}

void sub_42275(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        default:
          case 3: (uParam1^) = 2147483647;
    }
    return;
}

void sub_42610()
{
    if (l_U449)
    {
        return;
    }
    DO_SCREEN_FADE_IN( 1000 );
    if (IS_PLAYER_PLAYING( sub_7787() ))
    {
        SET_PLAYER_CONTROL( sub_7787(), 1 );
    }
    l_U449 = 1;
    return;
}

void sub_42820()
{
    sub_549( 0 );
    g_U0 = 0;
    g_U12306[0]._fU0 = 1;
    SET_TIME_OF_DAY( 11, 0 );
    return;
}

void sub_42869()
{
    int Result;

    Result = 1;
    if (ProtectedGet(g_U10489) == -1)
    {
        PRINTSTRING( "---> WAITING FOR: Maximum Stunt Jumps value to be set up\n" );
        Result = 0;
    }
    g_U10488 = 0;
    if (g_U38845 == -1)
    {
        PRINTSTRING( "---> WAITING FOR: Maximum Seagull Packages value to be set up\n" );
        Result = 0;
    }
    g_U38846 = 0;
    return Result;
}

void sub_43136()
{
    int iVar2;

    if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
    {
        sub_43157();
        sub_43412();
        sub_39277();
        g_U816 = 0;
        g_U10991 = 0;
        g_U10992 = -1;
        g_U10993 = 0;
        g_U27959 = 0;
        g_U27960 = 11;
        g_U947 = 0;
        g_U948 = 0;
        sub_19871();
        g_U10468 = 0;
        g_U10469 = 0;
        g_U10474 = nil;
        sub_47373();
        sub_47391( 1 );
        sub_47553();
        sub_48275();
        sub_6907();
        sub_48391();
        iVar2 = 1;
        sub_48495( iVar2 );
        sub_16291();
        g_U10974._fU24 = 1;
        g_U9223 = 0;
        g_U9224 = 0;
        g_U9226 = 0;
        g_U9227 = 0;
        g_U24 = 0;
        FORCE_LOADING_SCREEN( 0 );
        SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 0 );
        ENABLE_PED_HELMET( sub_15549(), 0 );
        sub_48889();
        sub_49111();
        l_U453 = 0;
        g_U12305 = 0;
        g_U38758 = 1;
        sub_49181();
        sub_6954();
        sub_19309();
        sub_49484();
        SET_HIDE_WEAPON_ICON( 0 );
        FORCE_NOISE_OFF( 0 );
        SET_GPS_REMAINS_WHEN_TARGET_REACHED_FLAG( 0 );
        SET_LOCAL_PLAYER_VOICE( "JOHNNY" );
        SET_LOCAL_PLAYER_PAIN_VOICE( "JOHNNY_EXTRAS" );
        SET_PLAYER_PAIN_ROOT_BANK_NAME( "JOHNNY" );
    }
    return;
}

void sub_43157()
{
    int I;

    for ( I = 1; I <= 39; I++ )
    {
        sub_43182( I );
    }
    sub_43182( 66 );
    sub_43182( 67 );
    sub_43182( 352 );
    sub_43182( 353 );
    for ( I = 354; I <= 358; I++ )
    {
        sub_43182( I );
    }
    for ( I = 662; I <= 667; I++ )
    {
        sub_43182( I );
    }
    for ( I = 55; I <= 64; I++ )
    {
        sub_43182( I );
    }
    for ( I = 331; I <= 350; I++ )
    {
        sub_43182( I );
    }
    return;
}

void sub_43182(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 1)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 0 );
    }
    return;
}

void sub_43412()
{
    sub_43423( 1, 1 );
    sub_43423( 6, 6 );
    sub_43423( 7, 7 );
    g_U15728[20] = 0;
    return;
}

void sub_43423(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    boolean bVar5;

    if (NOT g_U18635[uParam1]._fU16)
    {
        return;
    }
    sub_43456( uParam0 );
    bVar4 = l_U440 > g_U18635[uParam1]._fU88;
    if (bVar4)
    {
        g_U18635[uParam1]._fU88 = l_U440 + 60000;
    }
    sub_47022( uParam1 );
    bVar5 = l_U440 > g_U18635[uParam1]._fU84;
    if (bVar5)
    {
        g_U18635[uParam1]._fU84 = l_U440 + 60000;
    }
    g_U15862[uParam1]._fU8[0]._fU0[2] = 0;
    return;
}

void sub_43456(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14838[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14838[uParam0]._fU80._fU0 = 0;
        sub_43577( uParam0 );
        sub_2296( uParam0, 0 );
        break;
        case 2:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_45758( uParam0, iVar4 );
        break;
        case 3:
        g_U14838[uParam0]._fU80._fU0 = 6;
        sub_45758( uParam0, iVar4 );
        break;
        case 6:
        sub_45758( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_45971( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_24994( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_43577(unknown uParam0)
{
    if ((NOT (g_U14838[uParam0]._fU80._fU0 == 0)) AND (NOT (g_U14838[uParam0]._fU80._fU0 == 1)))
    {
        sub_43634( uParam0 );
        sub_43784( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU80._fU0 == 1)
    {
        sub_43634( uParam0 );
        sub_43978( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU80._fU0 == 0)
    {
        sub_43784( uParam0 );
    }
    if ((NOT (g_U14838[uParam0]._fU0._fU0 == 0)) AND (NOT (g_U14838[uParam0]._fU0._fU0 == 1)))
    {
        sub_43634( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU0 == 1)
    {
        sub_44960( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        sub_43634( uParam0 );
    }
    return;
}

void sub_43634(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14838[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U14838[uParam0]._fU0._fU64 );
    g_U14838[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U14838[uParam0]._fU0._fU68;
    g_U14838[uParam0]._fU0._fU68 = 17;
    CLEAR_BIT( ref g_U10686[uVar3]._fU0, 3 );
    return;
}

void sub_43784(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14838[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U14838[uParam0]._fU80._fU64 );
    g_U14838[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U14838[uParam0]._fU80._fU68;
    g_U14838[uParam0]._fU80._fU68 = 17;
    CLEAR_BIT( ref g_U10686[uVar3]._fU0, 3 );
    return;
}

void sub_43978(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_43784( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10685;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14838[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14838[uParam0]._fU80._fU4;
        iVar8 = sub_44161( uParam0, iVar7 );
        iVar9 = g_U20913[iVar8]._fU16;
        vVar3 = {g_U10686[iVar9]._fU4};
        uVar6 = g_U10686[iVar9]._fU16;
        bVar10 = true;
        g_U14838[uParam0]._fU80._fU68 = iVar9;
        SET_BIT( ref g_U10686[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_24994( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14838[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14838[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU80._fU64, l_U7 );
        if ((NOT g_U26737._fU4) || (NOT g_U14838[uParam0]._fU80._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14838[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U14838[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU80._fU64, l_U8 );
        sub_44818( g_U14838[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

int sub_44161(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 11))
    {
        sub_24994( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U26515[iParam0]._fU0;
    iVar5 = g_U26515[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U20913[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_44818(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    return;
}

void sub_44960(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_43634( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10685;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14838[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14838[uParam0]._fU0._fU4;
        iVar8 = sub_44161( uParam0, iVar7 );
        iVar9 = g_U20913[iVar8]._fU16;
        vVar3 = {g_U10686[iVar9]._fU4};
        uVar6 = g_U10686[iVar9]._fU16;
        bVar10 = true;
        g_U14838[uParam0]._fU0._fU68 = iVar9;
        SET_BIT( ref g_U10686[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_24994( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14838[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14838[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU0._fU64, l_U7 );
        if ((NOT g_U26737._fU4) || (NOT g_U14838[uParam0]._fU0._fU72))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14838[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU0._fU64, l_U8 );
        if (l_U229)
        {
            FLASH_BLIP( g_U14838[uParam0]._fU0._fU64, 1 );
            l_U229 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U14838[uParam0]._fU0._fU64, 1 );
            l_U229 = 1;
        }
        sub_44818( g_U14838[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_45758(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[uParam0]._fU80._fU24 );
        sub_2296( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[uParam0]._fU0._fU24 );
    sub_2053( uParam0, 0 );;
    sub_43577( uParam0 );
    return;
}

void sub_45971(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U14838[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U14838[iParam0]._fU80._fU60 );
        }
        sub_2296( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U14838[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U14838[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U14838[iParam0]._fU0._fU56;
    if ((iVar5 == 5) || (iVar5 == 6))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U12306[iParam0]._fU28 = 1;
    }
    sub_2053( iParam0, 0 );
    if (bVar4)
    {
        sub_39277();
    }
    g_U12306[iParam0]._fU12 = 0;;
    if (iParam0 == 9)
    {
        sub_46208();
        return;
    }
    sub_43577( iParam0 );
    if (bVar4)
    {
        g_U12303 = 0;
    }
    if (bVar4)
    {
        sub_46786( iParam0 );
    }
    if (g_U3)
    {
        if (g_U4)
        {
            WAIT( 1500 );
            g_U5 = 1;
        }
    }
    return;
}

void sub_46208()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_7787() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_15549() ))
        {
            if (NOT (g_U15852._fU24 == -1))
            {
                uVar3 = g_U26538[g_U15852._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_15549(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15852._fU24;
    sub_3573();
    if (bVar2)
    {
        g_U15852._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_15549(), ref g_U15852._fU32 );
        g_U15852._fU24 = uVar4;
    }
    l_U228 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_7787(), 0 );
    sub_46388();
    if (IS_PLAYER_PLAYING( sub_7787() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_15549() )))
        {
            SET_PLAYER_CONTROL( sub_7787(), 1 );
        }
    }
    return;
}

void sub_46388()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_15549() ))
    {
        l_U228 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_7787(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_15549() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_15549(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_15549(), 837858166 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_15549(), -488123221 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15852._fU20)
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
        if (l_U228)
        {
            return;
        }
        l_U228 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_7787(), 1 );
    }
    else if (NOT l_U228)
    {
        return;
    }
    l_U228 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_7787(), 0 );;
    return;
}

void sub_46786(int iParam0)
{
    if (NOT (g_U20901 == iParam0))
    {
        return;
    }
    g_U20900 = 1;
    return;
}

void sub_47022(unknown uParam0)
{
    g_U18635[uParam0]._fU16 = 0;
    g_U18635[uParam0]._fU20 = 0;
    g_U18635[uParam0]._fU24 = 0;
    g_U18635[uParam0]._fU28 = 0;
    g_U18635[uParam0]._fU12 = 0;
    g_U18635[uParam0]._fU180 = 16;
    g_U18635[uParam0]._fU184 = 4;
    sub_1000( ref g_U18635[uParam0]._fU32 );
    sub_1000( ref g_U18635[uParam0]._fU48 );
    return;
}

void sub_47373()
{
    return;
}

void sub_47391(boolean bParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (bParam0)
    {
        bVar3 = true;
    }
    else
    {
        bVar3 = true;
    }
    if (bVar3)
    {
        if ((NOT (g_U10468 == 0)) || (NOT (g_U10469 == 0)))
        {
            StrCopy( ref g_U10470, "", 16 );
            g_U10468 = 0;
            g_U10469 = 0;
            g_U10474 = nil;
            sub_47478();
            if (IS_PLAYER_PLAYING( sub_7787() ))
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_7787(), 1 );
            }
        }
    }
    return;
}

void sub_47478()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_47553()
{
    sub_47562();
    sub_1000( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_47737();
    return;
}

void sub_47562()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_47737()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_47775( 1, g_U572[I] )) == 0)
        {
            sub_48026( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_48147())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_47775(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_48026(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_7572( g_U572 - 1 );
    return;
}

int sub_48147()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_47775( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_48275()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_48297();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_48297()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_48391()
{
    int I;

    for ( I = 0; I < 15; I++ )
    {
        if (g_U9261[I]._fU60)
        {
            SWITCH_CAR_GENERATOR( g_U9502[I], 0 );
        }
        else
        {
            SWITCH_CAR_GENERATOR( g_U9502[I], 101 );
        }
    }
    return;
}

void sub_48495(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_48740();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_48740()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_48889()
{
    int I;

    if (NOT g_U20908)
    {
        return;
    }
    g_U20908 = 0;
    I = 0;
    for ( I = 0; I < 9; I++ )
    {
        if (g_U18635[I]._fU704._fU0)
        {
            if (g_U18635[I]._fU704._fU4)
            {
                if (((g_U18635[I]._fU704._fU16) || (g_U18635[I]._fU704._fU20)) || (g_U18635[I]._fU704._fU24))
                {
                    g_U18635[I]._fU704._fU24 = 1;
                    g_U18635[I]._fU704._fU184 = nil;
                    g_U18635[I]._fU704._fU8 = 1;
                }
            }
        }
    }
    return;
}

void sub_49111()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        sub_6045( I );
    }
    return;
}

void sub_49181()
{
    g_U11090 = 0;
    g_U11091 = 0;
    g_U11092 = 0;
    g_U11093 = 0;
    g_U11094 = 0;
    g_U11095 = 0;
    g_U11096 = 0;
    g_U11097 = 0;
    g_U11098 = 0;
    g_U11099 = 0;
    g_U11100 = 0;
    g_U11101 = 0;
    g_U11102 = 0;
    g_U11106 = 0;
    g_U11107 = 0;
    g_U11109 = 0;
    g_U11110 = 0;
    g_U11111 = 0;
    g_U11112 = 0;
    g_U11113 = 0;
    g_U11114 = 0;
    g_U11115 = 0;
    g_U11116 = 0;
    g_U11117[0] = 0;
    g_U11120[0] = 0;
    g_U11123[0] = 0;
    g_U11126[0] = 0;
    g_U11129[0] = 0;
    g_U11117[1] = 0;
    g_U11120[1] = 0;
    g_U11123[1] = 0;
    g_U11126[1] = 0;
    g_U11129[1] = 0;
    g_U11219 = 0;
    g_U11221 = 0;
    g_U11226 = 0;
    g_U11227 = -1;
    g_U11228 = 0;
    g_U11230 = 0;
    g_U11231 = 0;
    g_U11132 = 0;
    return;
}

void sub_49484()
{
    if (IS_CHAR_DEAD( sub_15549() ))
    {
        return;
    }
    if (LOCATE_CHAR_ON_FOOT_3D( sub_15549(), -1719.62500000, 333.83410000, 25.78990000, 8.00000000, 8.00000000, 3.00000000, 0 ))
    {
        g_U39170 = 1;
        return;
    }
    if (LOCATE_CHAR_ON_FOOT_3D( sub_15549(), -1953.96500000, -76.65720000, 10.57890000, 8.00000000, 8.00000000, 3.00000000, 0 ))
    {
        g_U39171 = 1;
        return;
    }
    return;
}

void sub_49729()
{
    if (g_U20909)
    {
        l_U450 = 0;
        return;
    }
    if (NOT (g_U20911 == g_U20910))
    {
        g_U20911 = g_U20910;
        g_U26737._fU4 = g_U20910;
    }
    if (NOT g_U20910)
    {
        return;
    }
    sub_49810();
    if (l_U450 >= 11)
    {
        l_U450 = 0;
        return;
    }
    switch (l_U450)
    {
        case 0:
        sub_50482();
        break;
        case 1:
        sub_106454();
        break;
        case 2:
        sub_179762();
        break;
        case 3:
        sub_181329();
        break;
        case 4:
        sub_182483();
        break;
        case 5:
        sub_183372();
        break;
        case 6:
        sub_184465();
        break;
        case 7:
        sub_185861();
        break;
        case 8:
        sub_187182();
        break;
        case 9:
        case 10: break;
        default: PRINTSTRING( "Main: Maintain_Strands: Unknown strand ID\n" );
    }
    l_U450++;
    return;
}

void sub_49810()
{
    sub_49820( 1 );
    sub_49820( 6 );
    sub_49820( 7 );
    return;
}

void sub_49820(unknown uParam0)
{
    if (NOT g_U12306[uParam0]._fU8)
    {
        return;
    }
    sub_49854( uParam0, 0 );
    return;
}

void sub_49854(int iParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    char[16] cVar8;

    iVar4 = g_U12306[iParam0]._fU40[1];
    if (iVar4 == g_U12306[iParam0]._fU56[1])
    {
        return;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    if (NOT (iVar5 > g_U27959))
    {
        if (NOT (iParam0 == g_U27960))
        {
            return;
        }
    }
    bVar6 = iVar4 > g_U12306[iParam0]._fU56[1];
    g_U12306[iParam0]._fU56[1] = iVar4;
    if (NOT g_U0)
    {
        uVar7 = TO_FLOAT( iVar4 );
        switch (iParam0)
        {
            case 1:
            sub_50053( 124 );
            SET_FLOAT_STAT( 124, uVar7 );
            break;
            case 6:
            sub_50053( 130 );
            SET_FLOAT_STAT( 130, uVar7 );
            break;
            case 7:
            sub_50053( 132 );
            SET_FLOAT_STAT( 132, uVar7 );
            break;
            default: return;
        }
    }
    switch (iParam0)
    {
        case 1:
        StrCopy( ref cVar8, "CONT_E1F2", 16 );
        break;
        case 6:
        StrCopy( ref cVar8, "CONT_E1F7", 16 );
        break;
        case 7:
        StrCopy( ref cVar8, "CONT_E1F8", 16 );
        break;
        default: return;
    }
    if (NOT bParam1)
    {
        if (bVar6)
        {
            SET_PHONE_HUD_ITEM( 8, ref cVar8, -1 );
        }
        else
        {
            SET_PHONE_HUD_ITEM( 9, ref cVar8, -1 );
        }
        g_U27959 = iVar5 + 3000;
        g_U27960 = iParam0;
    }
    return;
}

void sub_50053(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_50482()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0;
    if (g_U12306[iVar2]._fU0)
    {
        sub_50515();
        g_U12306[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U12306[iVar2]._fU8)
    {
        return;
    }
    if (sub_56436( iVar2 ))
    {
        return;
    }
    sub_61820( iVar3, iVar2, ref g_U28063 );
    return;
}

void sub_50515()
{
    sub_50526( 0, 0 );
    sub_51135();
    PRINTSTRING( "E1 Contact 1 Activated\n" );
    return;
}

void sub_50526(unknown uParam0, unknown uParam1)
{
    g_U12306[uParam0]._fU8 = 1;
    sub_1051( uParam0 );
    sub_50558( uParam0 );
    sub_50863( uParam0 );
    sub_50954( uParam1 );
    sub_3699( uParam1 );
    g_U12306[uParam0]._fU16 = 0;
    g_U12306[uParam0]._fU140 = 0;
    return;
}

void sub_50558(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14838[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14838[uParam0]._fU0._fU0 = 0;
        sub_43577( uParam0 );
        sub_2053( uParam0, 0 );
        break;
        case 2:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_45758( uParam0, iVar4 );
        break;
        case 3:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_45758( uParam0, iVar4 );
        break;
        case 6:
        sub_45758( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_45971( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_24994( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_50863(unknown uParam0)
{
    g_U15642[uParam0]._fU0 = 0;
    g_U15642[uParam0]._fU4 = 0;
    g_U15642[uParam0]._fU8 = 0;
    g_U15642[uParam0]._fU12 = 0;
    g_U15642[uParam0]._fU16 = 0;
    g_U15642[uParam0]._fU20 = 0;
    return;
}

void sub_50954(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 2;
    g_U15862[uParam0]._fU4 = 0;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        sub_51000( uParam0, I );
    }
    return;
}

void sub_51000(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int I;

    iVar4 = 22;
    I = 0;
    for ( I = 0; I < iVar4; I++ )
    {
        g_U15862[uParam0]._fU8[uParam1]._fU0[I] = 0;
    }
    return;
}

void sub_51135()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 108;
    PRINTSTRING( "START: E1 Contact_1_SETUP_MISSION_FLOW\n" );
    sub_51208( ref g_U28063, ref iVar2, iVar3 );
    sub_51551( ref g_U28063, ref iVar2, iVar3, 0 );
    sub_51551( ref g_U28063, ref iVar2, iVar3, 1 );
    sub_51551( ref g_U28063, ref iVar2, iVar3, 2 );
    sub_51551( ref g_U28063, ref iVar2, iVar3, 3 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 1 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 0 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 40 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 42 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 43 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 44 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 45 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 46 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 47 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 48 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 49 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 50 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 51 );
    sub_51981( ref g_U28063, ref iVar2, iVar3, 6, 0 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 13 );
    sub_52113( ref g_U28063, ref iVar2, iVar3, 0 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 6 );
    sub_52227( ref g_U28063, ref iVar2, iVar3 );
    sub_52337( ref g_U28063, ref iVar2, iVar3, "MF14AUD", "MF6_WOFF" );
    sub_52479( ref g_U28063, ref iVar2, iVar3, 0 );
    sub_52586( ref g_U28063, ref iVar2, iVar3, 8, 0 );
    sub_52586( ref g_U28063, ref iVar2, iVar3, 11, 0 );
    sub_52586( ref g_U28063, ref iVar2, iVar3, 0, 0 );
    sub_52733( ref g_U28063, ref iVar2, iVar3, 1 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 12 );
    sub_52874( ref g_U28063, ref iVar2, iVar3, 0 );
    sub_52874( ref g_U28063, ref iVar2, iVar3, 1 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 14 );
    sub_52586( ref g_U28063, ref iVar2, iVar3, 2, 0 );
    sub_53004( ref g_U28063, ref iVar2, iVar3 );
    sub_53092( ref g_U28063, ref iVar2, iVar3, 8 );
    sub_53092( ref g_U28063, ref iVar2, iVar3, 10 );
    sub_53092( ref g_U28063, ref iVar2, iVar3, 7 );
    sub_53216( ref g_U28063, ref iVar2, iVar3, 1 );
    sub_53216( ref g_U28063, ref iVar2, iVar3, 6 );
    sub_53216( ref g_U28063, ref iVar2, iVar3, 7 );
    sub_53216( ref g_U28063, ref iVar2, iVar3, 8 );
    sub_53216( ref g_U28063, ref iVar2, iVar3, 3 );
    sub_53366( ref g_U28063, ref iVar2, iVar3, 0 );
    sub_53366( ref g_U28063, ref iVar2, iVar3, 1 );
    sub_53366( ref g_U28063, ref iVar2, iVar3, 2 );
    sub_53495( ref g_U28063, ref iVar2, iVar3, 5 );
    sub_52479( ref g_U28063, ref iVar2, iVar3, 13 );
    sub_53632( ref g_U28063, ref iVar2, iVar3, 13, "MF14AUD", "MF6_TOFF" );
    sub_53781( ref g_U28063, ref iVar2, iVar3 );
    sub_53867( ref g_U28063, ref iVar2, iVar3 );
    sub_53954( ref g_U28063, ref iVar2, iVar3 );
    sub_54037( ref g_U28063, ref iVar2, iVar3, 19 );
    sub_54037( ref g_U28063, ref iVar2, iVar3, 22 );
    sub_54037( ref g_U28063, ref iVar2, iVar3, 15 );
    sub_54170( ref g_U28063, ref iVar2, iVar3, 5, 0 );
    sub_54170( ref g_U28063, ref iVar2, iVar3, 5, 6 );
    sub_54170( ref g_U28063, ref iVar2, iVar3, 6, 5 );
    sub_54320( ref g_U28063, ref iVar2, iVar3, 13 );
    sub_54435( ref g_U28063, ref iVar2, iVar3, 11 );
    sub_54581( ref g_U28063, ref iVar2, iVar3, 11 );
    sub_54320( ref g_U28063, ref iVar2, iVar3, 12 );
    sub_52874( ref g_U28063, ref iVar2, iVar3, 2 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 11 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 35 );
    sub_52874( ref g_U28063, ref iVar2, iVar3, 3 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 9 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 7 );
    sub_54766( ref g_U28063, ref iVar2, iVar3, 1 );
    sub_54766( ref g_U28063, ref iVar2, iVar3, 6 );
    sub_54766( ref g_U28063, ref iVar2, iVar3, 7 );
    sub_52874( ref g_U28063, ref iVar2, iVar3, 4 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 53 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 36 );
    sub_54961( ref g_U28063, ref iVar2, iVar3, 4, 1, 8, 60000 );
    sub_52586( ref g_U28063, ref iVar2, iVar3, 3, 0 );
    sub_55126( ref g_U28063, ref iVar2, iVar3, 0, 0, 2, 15000 );
    sub_55278( ref g_U28063, ref iVar2, iVar3, 0, 0 );
    sub_52874( ref g_U28063, ref iVar2, iVar3, 5 );
    sub_55403( ref g_U28063, ref iVar2, iVar3, 0, 0 );
    sub_53216( ref g_U28063, ref iVar2, iVar3, 2 );
    sub_53216( ref g_U28063, ref iVar2, iVar3, 4 );
    sub_55555( ref g_U28063, ref iVar2, iVar3, 4, 60000, 300000 );
    sub_53366( ref g_U28063, ref iVar2, iVar3, 3 );
    sub_53366( ref g_U28063, ref iVar2, iVar3, 4 );
    sub_52733( ref g_U28063, ref iVar2, iVar3, 2 );
    sub_55126( ref g_U28063, ref iVar2, iVar3, 1, 0, 1, 10000 );
    sub_55278( ref g_U28063, ref iVar2, iVar3, 0, 1 );
    sub_54766( ref g_U28063, ref iVar2, iVar3, 1 );
    sub_52874( ref g_U28063, ref iVar2, iVar3, 6 );
    sub_55403( ref g_U28063, ref iVar2, iVar3, 0, 1 );
    sub_55794( ref g_U28063, ref iVar2, iVar3, 4 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 19 );
    sub_51690( ref g_U28063, ref iVar2, iVar3, 38 );
    sub_52586( ref g_U28063, ref iVar2, iVar3, 2, 1 );
    sub_53092( ref g_U28063, ref iVar2, iVar3, 9 );
    sub_53495( ref g_U28063, ref iVar2, iVar3, 5 );
    sub_53495( ref g_U28063, ref iVar2, iVar3, 8 );
    sub_55980( ref g_U28063, ref iVar2, iVar3, 14 );
    sub_54170( ref g_U28063, ref iVar2, iVar3, 14, 0 );
    sub_54170( ref g_U28063, ref iVar2, iVar3, 14, 6 );
    sub_55278( ref g_U28063, ref iVar2, iVar3, 3, 5 );
    sub_55278( ref g_U28063, ref iVar2, iVar3, 8, 12 );
    sub_56139( ref g_U28063, ref iVar2, iVar3 );
    sub_56228( ref g_U28063, ref iVar2, iVar3 );
    PRINTSTRING( "END: E1 Contact_1_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_51208(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 0;
    sub_51466( uParam1 );
    sub_51518( "SET: GAME INITIAL SETUP\n" );
    return;
}

void sub_51222(int iParam0, int iParam1)
{
    if (iParam0 >= iParam1)
    {
        sub_51310( "Flow_Set_Seq_Begin(): Need to increase number of allowed sequences" );
    }
    return;
}

void sub_51310(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_51466(unknown uParam0)
{
    (uParam0^)++;
    return;
}

void sub_51518(unknown uParam0)
{
    return;
}

void sub_51551(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 77;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: ACTIVATE_MAP_AREA\n" );
    return;
}

void sub_51690(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 131;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: SET_MISSION_FLOW_FLAG TO TRUE\n" );
    return;
}

void sub_51981(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 104;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_51466( uParam1 );
    sub_51518( "SET: GANG_RELATIONSHIP_LIKE\n" );
    return;
}

void sub_52113(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 80;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: ACTIVATE_SAVE_HOUSE\n" );
    return;
}

void sub_52227(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 17;
    sub_51466( uParam1 );
    sub_51518( "SET: CREATE_CAMERA_CELLPHONE\n" );
    return;
}

void sub_52337(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 22;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    sub_51466( uParam1 );
    sub_51518( "SET: SET_ANSWER_PHONE: " );
    sub_51518( uParam4 );
    sub_52446();
    return;
}

void sub_52446()
{
    return;
}

void sub_52479(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 21;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: ADD_SILENTLY_TO_PHONEBOOK\n" );
    return;
}

void sub_52586(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 59;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_51466( uParam1 );
    sub_51518( "SET: ACTIVATE_AMBIENT_EMAIL\n" );
    return;
}

void sub_52733(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 116;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: SET_MISSIONS_LEVEL TO " );
    sub_52823( uParam3 );
    sub_52446();
    return;
}

void sub_52823(unknown uParam0)
{
    return;
}

void sub_52874(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 1;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: DO MISSION\n" );
    return;
}

void sub_53004(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 88;
    sub_51466( uParam1 );
    sub_51518( "SET: ALLOW_NETWORK_SAVES\n" );
    return;
}

void sub_53092(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 15;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: STANDALONE SCRIPT\n" );
    return;
}

void sub_53216(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 119;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: ACTIVATE_STRAND\n" );
    return;
}

void sub_53366(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 123;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: SYNCHRONISATION_WALL\n" );
    return;
}

void sub_53495(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 122;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: SEND_SYNCHRONISATION\n" );
    return;
}

void sub_53632(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 23;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    sub_51466( uParam1 );
    sub_51518( "SET: SET_OTHER_ANSWER_PHONE: " );
    sub_51518( uParam5 );
    sub_52446();
    return;
}

void sub_53781(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 86;
    sub_51466( uParam1 );
    sub_51518( "SET: ACTIVATE_HAIL_TAXI\n" );
    return;
}

void sub_53867(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 89;
    sub_51466( uParam1 );
    sub_51518( "SET: ACTIVATE_SPRAYSHOPS\n" );
    return;
}

void sub_53954(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 87;
    sub_51466( uParam1 );
    sub_51518( "SET: UNLOCK_GUNSHOP\n" );
    return;
}

void sub_54037(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 79;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: ACTIVATE_MAP_BLIP_GROUP\n" );
    return;
}

void sub_54170(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 106;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_51466( uParam1 );
    sub_51518( "SET: GANG_RELATIONSHIP_DISLIKE\n" );
    return;
}

void sub_54320(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 133;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: CLEAR_MISSION_FLOW_FLAG TO FALSE\n" );
    return;
}

void sub_54435(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 132;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: SET_MISSION_FLOW_FLAG TO TRUE IF THIS COMMAND BYPASSED IN DEBUG\n" );
    return;
}

void sub_54581(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 135;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: FLAG_WALL\n" );
    return;
}

void sub_54766(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 70;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: CONTACT_ON_NEXT_MISSION: " );
    sub_52823( uParam3 );
    sub_52446();
    return;
}

void sub_54961(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 53;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: TXTMSG_PLAYER_AMBIENT\n" );
    return;
}

void sub_55126(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 55;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: TXTMSG_PLAYER_AMBIENT_WAIT\n" );
    return;
}

void sub_55278(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 50;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_51466( uParam1 );
    sub_51518( "SET: CHAT_PHONECALL\n" );
    return;
}

void sub_55403(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 51;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_51466( uParam1 );
    sub_51518( "SET: KILL_CHAT_PHONECALL\n" );
    return;
}

void sub_55555(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 48;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam5;
    sub_51466( uParam1 );
    sub_51518( "SET: AMBIENT_PHONECALL\n" );
    return;
}

void sub_55794(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 49;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: KILL_AMBIENT_PHONECALL\n" );
    return;
}

void sub_55980(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 128;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: ACTIVATE_RI_CHARACTER\n" );
    return;
}

void sub_56139(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 147;
    sub_51466( uParam1 );
    sub_51518( "SET: TERMINATE THIS STRAND\n" );
    return;
}

void sub_56228(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 151;
    sub_51466( uParam1 );
    sub_51518( "SET: END STRAND\n" );
    return;
}

int sub_56436(unknown uParam0)
{
    sub_56447( uParam0 );
    sub_57477( uParam0 );
    if (g_U12306[uParam0]._fU868._fU0)
    {
        sub_57746( uParam0 );
        return 1;
    }
    if (g_U12306[uParam0]._fU108)
    {
        sub_57746( uParam0 );
        return 1;
    }
    return 0;
}

void sub_56447(unknown uParam0)
{
    if (NOT g_U12306[uParam0]._fU868._fU4)
    {
        return;
    }
    sub_56484( uParam0 );
    if (NOT (sub_56964( g_U12306[uParam0]._fU868._fU8 )))
    {
        return;
    }
    g_U12306[uParam0]._fU868._fU4 = 0;
    sub_1000( ref g_U12306[uParam0]._fU868._fU8 );
    sub_57259( uParam0 );
    return;
}

void sub_56484(unknown uParam0)
{
    unknown uVar3;

    if (g_U12306[uParam0]._fU868._fU0)
    {
        return;
    }
    if (g_U14838[uParam0]._fU80._fU0 == 1)
    {
        sub_43456( uParam0 );
    }
    if (g_U14838[uParam0]._fU0._fU0 == 1)
    {
        sub_50558( uParam0 );
    }
    uVar3 = sub_56580( uParam0 );
    if (g_U14838[uParam0]._fU160._fU0)
    {
        if (g_U14838[uParam0]._fU160._fU8)
        {
            g_U15862[uVar3]._fU8[0]._fU0[5] = 0;
        }
        g_U14838[uParam0]._fU160._fU108._fU0 = 0;
    }
    g_U12306[uParam0]._fU868._fU0 = 1;
    return;
}

int sub_56580(unknown uParam0)
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
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_24994( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

int sub_56964(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_57133( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_57133(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_57259(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U12306[uParam0]._fU868._fU0)
    {
        return;
    }
    if (g_U12306[uParam0]._fU868._fU4)
    {
        return;
    }
    if (g_U12306[uParam0]._fU868._fU24)
    {
        return;
    }
    if (g_U14838[uParam0]._fU160._fU0)
    {
        uVar3 = sub_56580( uParam0 );
        if (g_U14838[uParam0]._fU160._fU8)
        {
            g_U15862[uVar3]._fU8[0]._fU0[5] = 1;
        }
        g_U14838[uParam0]._fU160._fU108._fU0 = 1;
    }
    g_U12306[uParam0]._fU868._fU0 = 0;
    return;
}

void sub_57477(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT g_U12306[uParam0]._fU868._fU24)
    {
        return;
    }
    sub_56484( uParam0 );
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return;
    }
    uVar3 = g_U12306[uParam0]._fU868._fU28._fU0;
    uVar4 = g_U12306[uParam0]._fU868._fU28._fU4;
    uVar5 = g_U12306[uParam0]._fU868._fU40;
    if (LOCATE_CHAR_ANY_MEANS_2D( sub_15549(), uVar3, uVar4, uVar5, uVar5, 0 ))
    {
        return;
    }
    g_U12306[uParam0]._fU868._fU24 = 0;
    g_U12306[uParam0]._fU868._fU28 = {0.00000000, 0.00000000, 0.00000000};
    g_U12306[uParam0]._fU868._fU40 = 0.00000000;
    sub_57259( uParam0 );
    return;
}

int sub_57746(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_56580( uParam0 );
    if (sub_57767( uVar3, 1 ))
    {
        sub_58115( ref g_U12306[uParam0]._fU92, ref g_U12306[uParam0]._fU76, 0 );
        sub_61148( ref g_U12306[uParam0]._fU92, ref g_U12306[uParam0]._fU76 );
        sub_61659( uVar3 );
        sub_48275();
        return 1;
    }
    return 0;
}

int sub_57767(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_57850( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_57850( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U94._fU0 == 1005) AND (g_U94._fU60 == iParam0))
    {
        if (bParam1)
        {
            if ((g_U94._fU508 >= 4) AND (NOT g_U94._fU372))
            {
                return 1;
            }
        }
        else if (NOT g_U94._fU368)
        {
            return 1;
        }
    }
    return 0;
}

void sub_57850(unknown uParam0)
{
    return;
}

int sub_58115(unknown uParam0, unknown uParam1, boolean bParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam0, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    uVar23 = g_U94._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_58223( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U94._fU368) == 1)
        {
            StrCopy( ref g_U94._fU224[0], uParam1, 16 );
            StrCopy( ref g_U94._fU224[1], uParam0, 16 );
            sub_60110( uVar23, ref g_U94._fU176 );
            g_U94._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_58223(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_57850( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_57850( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        sub_57850( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_15549() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_15549() ))))
    {
        sub_57850( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_57850( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_58738()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU48 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
        case 1:
        if (g_U94._fU368)
        {
            if ((g_U94._fU372) || (NOT bParam8))
            {
                sub_57850( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U94._fU60 != -1)
        {
            if ((g_U15862[g_U94._fU60]._fU196._fU24 != 5) AND (g_U15862[g_U94._fU60]._fU196._fU24 != 4))
            {
                g_U15862[g_U94._fU60]._fU196._fU24 = 0;
            }
        }
        g_U94._fU368 = 1;
        g_U94._fU372 = bParam8;
        uParam0 = g_U94._fU60;
        break;
        case 2:
        if ((NOT sub_58738()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U94._fU60 = uParam0;
        g_U94._fU52 = 1;
        g_U94._fU56 = 1;
        g_U94._fU372 = 1;
        g_U94._fU368 = 1;
        g_U15862[g_U94._fU60]._fU196._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_60110( uParam0, ref g_U94._fU176 );
    sub_60506( ref g_U94._fU160 );
    g_U94._fU380 = uParam10;
    g_U94._fU376 = bParam11;
    g_U94._fU420 = uParam12;
    g_U94._fU424 = -1;
    g_U94._fU364 = uParam3;
    StrCopy( ref g_U94._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U9051[I] = {(uParam1^)[I]};
        sub_60748( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U94._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U94._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U94._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U94._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U94._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U94._fU208, uParam6, 16 );
    g_U94._fU80 = uParam7;
    g_U94._fU384 = 0;
    g_U94._fU532 = uParam13;
    g_U8946 = 4;
    return 1;
}

int sub_58738()
{
    if ((g_U94._fU48) || (g_U94._fU52))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_58795())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_58795()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        sub_57850( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_57850( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_57850( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU100) || (g_U94._fU104))
    {
        sub_57850( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_7787() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_15549() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_15549(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_57850( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_15549() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_57850( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_57850( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_7787() )))
    {
        sub_57850( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_60110(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "BILLY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "JIM", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "STUBBS", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ASHLEY", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "RAY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "TERRY", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "CLAY", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "ANGUS", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "MALC", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FED", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_60506(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

void sub_60748(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_61148(unknown uParam0, unknown uParam1)
{
    if (COMPARE_STRING( uParam1, "E1MF2AU" ))
    {
        if (COMPARE_STRING( uParam0, "E1MF2_BEAP" ))
        {
            sub_61216( "WOMAN" );
            return;
        }
    }
    if (COMPARE_STRING( uParam1, "E1MFAU" ))
    {
        if (COMPARE_STRING( uParam0, "E1MF_ANSPH" ))
        {
            sub_61216( "WOMAN" );
            return;
        }
    }
    if (NOT (COMPARE_STRING( uParam1, "MF14AUD" )))
    {
        return;
    }
    if ((((COMPARE_STRING( uParam0, "MF6_BMSG" )) || (COMPARE_STRING( uParam0, "MF6_BNR" ))) || (COMPARE_STRING( uParam0, "MF6_BOFF" ))) || (COMPARE_STRING( uParam0, "MF6_BUN" )))
    {
        sub_61216( "BADGER" );
        return;
    }
    if ((((COMPARE_STRING( uParam0, "MF6_TMSG" )) || (COMPARE_STRING( uParam0, "MF6_TNR" ))) || (COMPARE_STRING( uParam0, "MF6_TOFF" ))) || (COMPARE_STRING( uParam0, "MF6_TUN" )))
    {
        sub_61216( "TINKLE" );
        return;
    }
    if ((((COMPARE_STRING( uParam0, "MF6_WMSG" )) || (COMPARE_STRING( uParam0, "MF6_WNR" ))) || (COMPARE_STRING( uParam0, "MF6_WOFF" ))) || (COMPARE_STRING( uParam0, "MF6_WUN" )))
    {
        sub_61216( "WHIZ" );
        return;
    }
    return;
}

void sub_61216(unknown uParam0)
{
    StrCopy( ref g_U94._fU176, uParam0, 32 );
    return;
}

void sub_61659(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    iVar4 = 22;
    while (iVar3 < iVar4)
    {
        g_U15862[uParam0]._fU8[1]._fU0[iVar3] = 0;
        iVar3++;
    }
    g_U15862[uParam0]._fU4 = 0;
    return;
}

void sub_61820(unknown uParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;
    boolean bVar6;
    int iVar7;
    unknown uVar8;
    int iVar9;
    int iVar10;
    boolean bVar11;

    bVar5 = true;
    bVar6 = false;
    iVar7 = 0;
    iVar9 = 3;
    iVar10 = 57;
    bVar11 = true;
    while (bVar5)
    {
        bVar5 = false;
        bVar6 = false;
        iVar7 = g_U12306[uParam1]._fU16;
        uVar8 = (uParam2^)[iVar7]._fU0;
        switch (uVar8)
        {
            case 0:
            sub_63139( "GAME INITIAL SETUP" );
            sub_63156();
            bVar6 = true;
            break;
            case 1:
            case 4:
            case 5:
            sub_63139( "DO MISSION [KILL STRAND [OR]]" );
            if (sub_64041( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 2:
            sub_63139( "DO MISSION FAILGOTO" );
            bVar11 = true;
            if (sub_64760( uParam1, (uParam2^)[iVar7]._fU4._fU0, ref bVar11 ))
            {
                if (bVar11)
                {
                    bVar6 = true;
                }
                else
                {
                    sub_64974( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                }
            }
            break;
            case 3:
            if (g_U12306[uParam1]._fU36)
            {
                sub_63139( "DO MISSION FAILGOTO PHONE - JUMP TO PHONECALL" );
                sub_64974( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                bVar5 = true;
            }
            else
            {
                bVar11 = true;
                if (sub_64760( uParam1, (uParam2^)[iVar7]._fU4._fU0, ref bVar11 ))
                {
                    if (bVar11)
                    {
                        bVar6 = true;
                    }
                    else
                    {
                        sub_64974( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                    }
                }
            }
            break;
            case 6:
            sub_63139( "START PROC MISSION" );
            if (sub_65629( uParam0, uParam1, (uParam2^)[iVar7]._fU4._fU0, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 1 ))
            {
                bVar6 = true;
            }
            break;
            case 7:
            sub_63139( "START PROC MISSION NOJOB" );
            if (sub_65629( uParam0, uParam1, (uParam2^)[iVar7]._fU4._fU0, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 0 ))
            {
                bVar6 = true;
            }
            break;
            case 8:
            sub_63139( "QUIT PROC MISSION" );
            if (sub_66392( uParam0, uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 9:
            sub_63139( "DO MISSION RECURRING" );
            if (sub_64041( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                ;
            }
            break;
            case 10:
            sub_63139( "SETUP_MISSION_ONLY" );
            if (sub_66966( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 11:
            sub_63139( "HELP SCRIPT" );
            if (sub_64041( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 12:
            sub_63139( "OFF MISSION SCRIPT" );
            if (sub_64041( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 13:
            sub_63139( "SETUP_OFF_MISSION_ONLY" );
            if (sub_66966( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 14:
            sub_63139( "OFF MISSION SCRIPT FAILGOTO" );
            bVar11 = true;
            if (sub_64760( uParam1, (uParam2^)[iVar7]._fU4._fU0, ref bVar11 ))
            {
                if (bVar11)
                {
                    bVar6 = true;
                }
                else
                {
                    sub_64974( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                }
            }
            break;
            case 15:
            sub_63139( "STANDALONE SCRIPT" );
            if (sub_67374( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 16:
            sub_63139( "CREATE_CELLPHONE" );
            sub_67692();
            bVar6 = true;
            bVar5 = true;
            break;
            case 17:
            sub_63139( "CREATE_CAMERA_CELLPHONE" );
            sub_67766();
            bVar6 = true;
            bVar5 = true;
            break;
            case 18:
            sub_63139( "ADD_TO_PHONEBOOK" );
            sub_67868( uParam0 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 19:
            sub_63139( "ADD_OTHER_TO_PHONEBOOK" );
            sub_67868( (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 20:
            sub_63139( "REMOVE_FROM_PHONEBOOK" );
            sub_68129( (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 21:
            sub_63139( "ADD_SILENTLY_TO_PHONEBOOK" );
            sub_68219( (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 22:
            sub_63139( "SET_ANSWER_PHONE" );
            sub_68315( uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 23:
            sub_63139( "SET_OTHER_ANSWER_PHONE" );
            sub_68444( (uParam2^)[iVar7]._fU4._fU4, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 24:
            sub_63139( "PLAYER_TO_PHONE_FOR_JOB" );
            if (sub_68792( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56 ))
            {
                bVar6 = true;
            }
            break;
            case 25:
            sub_63139( "FORCE_PLAYER_PHONECALL" );
            if (sub_69468( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 26:
            sub_63139( "PHONE_PLAYER" );
            if (sub_71195( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 27:
            sub_63139( "PHONE_PLAYER_QUICK" );
            if (sub_71195( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 28:
            sub_63139( "PHONE_PLAYER_FLAGCHECK" );
            if (sub_71195( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, (uParam2^)[iVar7]._fU4._fU24, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 29:
            sub_63139( "PHONE_PLAYER_REPEAT" );
            if (sub_71195( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 30:
            sub_63139( "PHONE_PLAYER_REPEAT_QUICK" );
            if (sub_71195( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 31:
            sub_63139( "PHONE_PLAYER_VECTOR" );
            if (sub_71195( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 32:
            sub_63139( "PHONE_PLAYER_VECTOR_QUICK" );
            if (sub_71195( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 300000, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 33:
            sub_63139( "PHONE_PLAYER_VECTOR_REPEAT" );
            if (sub_71195( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 34:
            sub_63139( "PHONE_PLAYER_VECTOR_REPEAT_QUICK" );
            if (sub_71195( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 35:
            sub_63139( "PHONE_PLAYER_TIME_REPEAT" );
            if (sub_71240( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar9, (uParam2^)[iVar7]._fU4._fU32, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 36:
            sub_63139( "ONEOFF PHONE_PLAYER" );
            if (sub_71195( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 37:
            sub_63139( "ONEOFF PHONE_PLAYER_QUICK" );
            if (sub_71195( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 38:
            sub_63139( "ONEOFF PHONE_PLAYER_REPEAT" );
            if (sub_71195( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 39:
            sub_63139( "ONEOFF PHONE_PLAYER_REPEAT_FLAGCHECK" );
            if (sub_71195( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 40:
            sub_63139( "ONEOFF PHONE_PLAYER_REPEAT_QUICK" );
            if (sub_71195( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 41:
            sub_63139( "ONEOFF PHONE_PLAYER VECTOR" );
            if (sub_71195( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 42:
            sub_63139( "ONEOFF PHONE_PLAYER VECTOR REPEAT" );
            if (sub_71195( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 43:
            sub_63139( "ONEOFF PHONE_PLAYER VECTOR REPEAT QUICK" );
            if (sub_71195( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 44:
            sub_63139( "ONEOFF PHONE_PLAYER TIME" );
            if (sub_71240( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar9, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 45:
            sub_63139( "ONEOFF PHONE_PLAYER TIME VECTOR" );
            if (sub_71240( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 46:
            sub_63139( "ONEOFF PHONE_PLAYER TIME VECTOR REPEAT" );
            if (sub_71240( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32, (uParam2^)[iVar7]._fU4._fU36, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 47:
            sub_63139( "ONEOFF PHONE_PLAYER TIME VECTOR REPEAT QUICK" );
            if (sub_71240( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32, (uParam2^)[iVar7]._fU4._fU36, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U12306[uParam1]._fU36 = 0;
            break;
            case 48:
            sub_63139( "AMBIENT PHONECALL" );
            sub_77945( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 49:
            sub_63139( "KILL AMBIENT PHONECALL" );
            if (sub_78090( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 50:
            sub_63139( "CHAT PHONECALL" );
            sub_78230( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 51:
            sub_63139( "KILL CHAT PHONECALL" );
            sub_78375( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 52:
            sub_63139( "END OF MISSION PHONECALL WALL" );
            if (NOT sub_78512())
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 53:
            sub_63139( "TXTMSG PLAYER AMBIENT" );
            sub_78631( (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 54:
            sub_63139( "TXTMSG PLAYER AMBIENT CODE" );
            sub_78656( (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU32, 64537 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 55:
            sub_63139( "TXTMSG PLAYER AMBIENT WAIT" );
            if (sub_80769( (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
            }
            break;
            case 56:
            sub_63139( "TXTMSG PLAYER AMBIENT WAIT CODE" );
            if (sub_80791( (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU32 ))
            {
                bVar6 = true;
            }
            break;
            case 57:
            sub_63139( "KILL TXTMSG" );
            sub_81187( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 58:
            sub_63139( "PROC_REMINDER_TXTS" );
            sub_81502( uParam1, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 59:
            sub_63139( "ACTIVATE AMBIENT EMAIL" );
            sub_81761( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 60:
            sub_63139( "IGNORE_FRIEND_INTRO_CALL" );
            g_U18635[uParam0]._fU8 = 1;
            bVar6 = true;
            bVar5 = true;
            break;
            case 61:
            sub_63139( "FORCE_FRIEND_NEXT_CALL_TIME" );
            sub_82951( uParam0, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 62:
            sub_63139( "ADD_FRIEND_ACTIVITY" );
            sub_83062( uParam0, (uParam2^)[iVar7]._fU4._fU8 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 63:
            sub_63139( "REMOVE_FRIEND_ACTIVITY" );
            sub_83204( uParam0, (uParam2^)[iVar7]._fU4._fU8 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 64:
            sub_63139( "ALLOW_FRIEND_ACTIVITIES" );
            sub_83382( uParam0, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 65:
            sub_63139( "DISALLOW_FRIEND_ACTIVITIES" );
            sub_84308( uParam0 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 66:
            sub_63139( "ADD_SPECIAL_ACTION" );
            sub_84423( uParam0, (uParam2^)[iVar7]._fU4._fU8 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 67:
            sub_63139( "ALLOW_SPECIAL_ACTIONS" );
            sub_84567( uParam1, (uParam2^)[iVar7]._fU4._fU8, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 68:
            sub_63139( "REALLOW_SPECIAL_ACTIONS" );
            sub_87818( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU8 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 69:
            sub_63139( "DISALLOW_SPECIAL_ACTIONS" );
            sub_87921( uParam1, (uParam2^)[iVar7]._fU4._fU8 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 70:
            sub_63139( "CONTACT_ON_NEXT_MISSION" );
            sub_88047( uParam1, (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 73:
            sub_63139( "PAUSE_STRAND_EXTRAS" );
            if (sub_88151( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 74:
            sub_63139( "UNPAUSE_STRAND_EXTRAS" );
            sub_89148( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 71:
            sub_63139( "PAUSE_STRAND" );
            if (sub_89649( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 72:
            sub_63139( "UNPAUSE_STRAND" );
            sub_89799( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 75:
            sub_63139( "ALLOW_HOSPITAL_PICKUP" );
            sub_89892( uParam0, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 76:
            sub_63139( "ACTIVATE_BODY_SEARCHING" );
            sub_89990();
            bVar6 = true;
            bVar5 = true;
            break;
            case 77:
            sub_63139( "ACTIVATE_MAP_AREA" );
            sub_90054( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 78:
            sub_63139( "MAP_AREA_WALL" );
            if (sub_90370( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 79:
            sub_63139( "ACTIVATE_MAP_BLIP_GROUP" );
            sub_90453( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 80:
            sub_63139( "ACTIVATE_SAVE_HOUSE" );
            sub_90559( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 81:
            sub_63139( "DEACTIVATE_SAVE_HOUSE" );
            sub_91118( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 82:
            sub_63139( "ACTIVATE_PICKUP_POINT" );
            sub_91492( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 83:
            sub_63139( "DEACTIVATE_PICKUP_POINT" );
            sub_91574( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 84:
            sub_63139( "ACTIVATE_DROPOFF_POINT" );
            sub_91655( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 85:
            sub_63139( "DEACTIVATE_DROPOFF_POINT" );
            sub_91738( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 86:
            sub_63139( "ACTIVATE_HAIL_TAXI" );
            sub_91804();
            bVar6 = true;
            bVar5 = true;
            break;
            case 87:
            sub_63139( "UNLOCK_GUNSHOP" );
            sub_91866();
            bVar6 = true;
            bVar5 = true;
            break;
            case 88:
            sub_63139( "ALLOW_NETWORK_SAVES" );
            sub_91929();
            bVar6 = true;
            bVar5 = true;
            break;
            case 89:
            sub_63139( "ACTIVATE_SPRAYSHOPS" );
            sub_91988();
            bVar6 = true;
            bVar5 = true;
            break;
            case 90:
            sub_63139( "ACTIVATE_CARGEN" );
            sub_92058( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 91:
            sub_63139( "DECEASED_ON_POLICE_COMPUTER" );
            sub_92197( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 92:
            sub_63139( "MISSING_ON_POLICE_COMPUTER" );
            sub_93228( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 93:
            sub_63139( "ARRESTED_ON_POLICE_COMPUTER" );
            sub_94269( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 94:
            sub_63139( "ALIVE_ON_POLICE_COMPUTER" );
            sub_95258( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 95:
            sub_63139( "DECEASED_ON_LCPD_WEB" );
            sub_96405( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 96:
            sub_63139( "MISSING_ON_LCPD_WEB" );
            sub_96483( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 97:
            sub_63139( "ARRESTED_ON_LCPD_WEB" );
            sub_96562( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 98:
            sub_63139( "ALIVE_ON_LCPD_WEB" );
            sub_96638( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 99:
            sub_63139( "ADD_DATE_TO_WEBSITE" );
            sub_96716( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 100:
            sub_63139( "UNLOCK_NEWS_BLOCK" );
            sub_96824( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 101:
            sub_63139( "UNLOCK_RADIO_STORY" );
            sub_97473( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 102:
            sub_63139( "ACTIVATE_GANG_HASSLE" );
            sub_97538();
            bVar6 = true;
            bVar5 = true;
            break;
            case 103:
            sub_63139( "DEACTIVATE_GANG_HASSLE" );
            sub_97609();
            bVar6 = true;
            bVar5 = true;
            break;
            case 104:
            sub_63139( "GANG_RELATIONSHIP_LIKE" );
            sub_97702( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 105:
            sub_63139( "GANG_RELATIONSHIP_NEUTRAL" );
            sub_97813( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 106:
            sub_63139( "GANG_RELATIONSHIP_DISLIKE" );
            sub_97924( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 107:
            sub_63139( "GANG_RELATIONSHIP_HATE" );
            sub_98032( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 108:
            sub_63139( "SET_STAT_VALUE" );
            sub_98134( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 111:
            sub_63139( "STAT_BOOST" );
            sub_98255( (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 109:
            sub_63139( "LIKE_MESSAGES_ON" );
            sub_98330( uParam1, 1 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 110:
            sub_63139( "LIKE_MESSAGES_OFF" );
            sub_98330( uParam1, 0 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 112:
            sub_63139( "STAT_WALL" );
            if (sub_98460( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 113:
            sub_63139( "STAT_WALL_AND" );
            if ((sub_98460( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 )) AND (sub_98460( uParam1, (uParam2^)[iVar7]._fU4._fU16, (uParam2^)[iVar7]._fU4._fU24 )))
            {
                bVar6 = true;
            }
            break;
            case 114:
            sub_63139( "STAT_WALL_OR" );
            if ((sub_98460( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 )) || (sub_98460( uParam1, (uParam2^)[iVar7]._fU4._fU16, (uParam2^)[iVar7]._fU4._fU24 )))
            {
                bVar6 = true;
            }
            break;
            case 115:
            sub_63139( "STAT_CHECK (FAIL GOTO)" );
            if (sub_98460( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            else
            {
                sub_64974( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 116:
            sub_63139( "SET_MISSIONS_LEVEL" );
            sub_99018( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 117:
            sub_63139( "MISSIONS_LEVEL_WALL" );
            if (sub_99107( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 118:
            sub_63139( "MISSIONS_LEVEL_CHECK (FAIL GOTO)" );
            if (sub_99107( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            else
            {
                sub_64974( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 119:
            sub_63139( "ACTIVATE_STRAND" );
            g_U12306[(uParam2^)[iVar7]._fU4._fU20]._fU0 = 1;
            bVar6 = true;
            break;
            case 120:
            sub_63139( "STRAND_ACTIVATED_CHECK (PASS GOTO)" );
            if (sub_99357( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                sub_64974( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            else
            {
                bVar6 = true;
            }
            break;
            case 121:
            sub_63139( "STRAND_DEACTIVATION_WALL" );
            if (sub_99482( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 122:
            sub_63139( "SEND_SYNCHRONISATION" );
            sub_99598( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            break;
            case 123:
            sub_63139( "SYNCHRONISATION_WALL" );
            if (sub_99783( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 124:
            sub_63139( "GAMETIME MINS DELAY" );
            if (sub_99923( uParam1, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 125:
            sub_63139( "GAMETIME WALL" );
            if (sub_100195( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
            }
            break;
            case 126:
            sub_63139( "REALTIME_MSECS_DELAY" );
            if (sub_100915( uParam1, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 127:
            sub_63139( "DISTANCE WALL" );
            if (sub_72463( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
            }
            break;
            case 128:
            sub_63139( "SYNCHRONISATION_WALL" );
            sub_101146( (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 129:
            sub_63139( "GIVE_WEAPON" );
            if (sub_101935( (uParam2^)[iVar7]._fU4._fU72, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
            }
            break;
            case 130:
            sub_63139( "CHANGE CLOTHES" );
            sub_102117( (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 131:
            sub_63139( "SET_MISSION_FLOW_FLAG" );
            sub_102268( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 132:
            sub_63139( "SET_MISSION_FLOW_FLAG_DEBUG" );
            bVar6 = true;
            bVar5 = true;
            break;
            case 133:
            sub_63139( "CLEAR_MISSION_FLOW_FLAG" );
            sub_102398( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 135:
            sub_63139( "FLAG_WALL" );
            if (sub_102468( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 136:
            sub_63139( "FLAG_WALL_FALSE" );
            if (NOT (sub_102468( (uParam2^)[iVar7]._fU4._fU20 )))
            {
                bVar6 = true;
            }
            break;
            case 134:
            sub_63139( "FLAG_CHECK_FAILGOTO" );
            if (sub_102468( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            else
            {
                sub_64974( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 137:
            sub_63139( "LABEL" );
            bVar6 = true;
            bVar5 = true;
            break;
            case 138:
            sub_63139( "GOTO" );
            sub_64974( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            bVar5 = true;
            break;
            case 139:
            sub_63139( "GOSUB" );
            sub_102740( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            bVar5 = true;
            break;
            case 140:
            sub_63139( "GOSUB RETURN" );
            sub_102901( uParam1 );
            bVar6 = true;
            break;
            case 141:
            sub_63139( "IS_PS3_FAILGOTO" );
            if (sub_103075())
            {
                bVar6 = true;
                bVar5 = true;
            }
            else
            {
                sub_64974( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 142:
            sub_63139( "HELP_TEXT" );
            if (sub_103190( (uParam2^)[iVar7]._fU4._fU40 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 143:
            sub_63139( "HELP_TEXT_TIMED" );
            if (sub_103203( (uParam2^)[iVar7]._fU4._fU40, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 144:
            sub_63139( "PRINT_NOW" );
            PRINT_NOW( ref (uParam2^)[iVar7]._fU4._fU40, (uParam2^)[iVar7]._fU4._fU20, 1 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 145:
            sub_63139( "KILL STRAND" );
            sub_103592( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 146:
            sub_63139( "KEEP STRAND ACTIVE" );
            break;
            case 147:
            sub_63139( "TERMINATE THIS STRAND" );
            sub_103592( uParam1 );
            break;
            case 148:
            if (g_U12306[uParam1]._fU32)
            {
                if (IS_PLAYER_PLAYING( sub_7787() ))
                {
                    CLEAR_WANTED_LEVEL( sub_7787() );
                }
                sub_63139( "START SHOWCASE FAILGOTO" );
                bVar6 = true;
                bVar5 = true;
            }
            else
            {
                sub_64974( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 149:
            if (g_U12306[uParam1]._fU32)
            {
                sub_63139( "END SHOWCASE" );
            }
            else
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 150:
            sub_63139( "DEBUG_PAUSE_ENDLESS_LOOP" );
            bVar6 = true;
            bVar5 = true;
            break;
            case 151:
            sub_63139( "END STRAND" );
            sub_51310( "END_STRAND: SHOULD NEVER REACH HERE - ADD 'TERMINATE THIS STRAND' COMMAND" );
            break;
            default: sub_51310( "Flow_Maintain_Mission_Flow(): Unknown mission FLOW_SEQ... ID" );
        }
        if (bVar6)
        {
            sub_63139( "************************ NEXT SEQUENCE *************************\n" );
            g_U12306[uParam1]._fU16++;
        }
    }
    if (((sub_57767( uParam0, 1 )) AND (NOT (sub_71571( uParam0 )))) AND (NOT g_U15642[uParam1]._fU20))
    {
        if (sub_104886( uParam1, uParam0 ))
        {
            return;
        }
    }
    if (NOT g_U15862[uParam0]._fU4)
    {
        sub_57746( uParam1 );
    }
    return;
}

void sub_63139(unknown uParam0)
{
    return;
}

void sub_63156()
{
    int iVar2;
    int iVar3;
    int iVar4;

    sub_63165();
    sub_63231();
    iVar2 = 1;
    sub_48495( iVar2 );
    CLEAR_WANTED_LEVEL( sub_7787() );
    SET_TIME_OF_DAY( 11, 0 );
    g_U15861 = -1;
    g_U10490 = 0;
    g_U10491 = 0;
    g_U10492 = 0;
    g_U10493 = 0;
    g_U10494 = 0;
    g_U10495 = 0;
    g_U27959 = 0;
    g_U27960 = 11;
    sub_63563();
    if (IS_PLAYER_PLAYING( sub_7787() ))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_15549(), 1 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( sub_15549(), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_15549(), 1, 0, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_15549(), 2 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( sub_15549(), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_15549(), 2, 0, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_15549(), 5 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( sub_15549(), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_15549(), 5, 0, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_15549(), 4 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( sub_15549(), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_15549(), 4, 0, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_15549(), 3 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( sub_15549(), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_15549(), 3, 0, 0 );
        }
        iVar3 = -1;
        GET_CHAR_PROP_INDEX( sub_15549(), 0, ref iVar3 );
        if (NOT (iVar3 == -1))
        {
            CLEAR_CHAR_PROP( sub_15549(), 0 );
        }
        iVar4 = -1;
        GET_CHAR_PROP_INDEX( sub_15549(), 0, ref iVar4 );
        if (NOT (iVar4 == -1))
        {
            CLEAR_CHAR_PROP( sub_15549(), 1 );
        }
    }
    sub_39456();
    return;
}

void sub_63165()
{
    int iVar2;

    IS_CHAR_DEAD( sub_15549() );
    iVar2 = 0;
    STORE_SCORE( sub_7787(), ref iVar2 );
    iVar2 *= -1;
    ADD_SCORE( sub_7787(), iVar2 );
    return;
}

void sub_63231()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U15785[I]._fU0 = 10000.00000000 + 100.00000000;
    }
    g_U15785[0] = {-94.92150000, 1459.99500000, 17.46430000};
    g_U15785[1] = {-97.59820000, 880.33470000, 13.91020000};
    for ( I = 0; I < 2; I++ )
    {
        if (g_U15785[I]._fU0 > 10000.00000000)
        {
            sub_24994( "Flow_Reset: Setup_Mission_Flow_Vectors: Not all vectors have been given a value" );
        }
    }
    return;
}

void sub_63563()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 1800000;
    g_U10680 = iVar2 + iVar3;
    return;
}

int sub_64041(unknown uParam0, int iParam1)
{
    if (g_U12306[uParam0]._fU24 == iParam1)
    {
        g_U12306[uParam0]._fU24 = -1;
        sub_64087( uParam0 );
        if (g_U10974._fU0)
        {
            g_U10974._fU8 = 0;
        }
        sub_51518( "mission has been passed\n" );
        return 1;
    }
    if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        sub_64315( uParam0, iParam1 );
        return 0;
    }
    if (g_U14838[uParam0]._fU0._fU4 == iParam1)
    {
        return 0;
    }
    return 0;
}

void sub_64087(int iParam0)
{
    if (NOT (g_U20901 == iParam0))
    {
        PRINTSTRING( "------------> KEITH: Skip_Phonecall_Mission_Pass() but wrong strand. Perhaps an error?" );
        return;
    }
    g_U12306[iParam0]._fU140 = 0;
    return;
}

void sub_64315(unknown uParam0, unknown uParam1)
{
    sub_64328( uParam0, uParam1 );
    return;
}

void sub_64328(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (g_U14838[uParam0]._fU0._fU0 == 0))
    {
        sub_24994( "Main_Missions: Setup_Mission(): Attempting to setup a mission after strand already setup" );
        return;
    }
    sub_2053( uParam0, 0 );
    uVar4 = sub_44161( uParam0, uParam1 );
    g_U14838[uParam0]._fU0._fU0 = 1;
    g_U14838[uParam0]._fU0._fU4 = uParam1;
    g_U14838[uParam0]._fU0._fU56 = g_U20913[uVar4]._fU12;
    StrCopy( ref g_U14838[uParam0]._fU0._fU8, 4, sub_64541( uVar4 ), 8);
    g_U14838[uParam0]._fU0._fU24 = {g_U20913[uVar4]._fU36};
    g_U12306[uParam0]._fU24 = -1;
    sub_43577( uParam0 );
    return;
}

void sub_64541(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    StrCopy( ref Result, 8, g_U20913[uParam0]._fU20, 4);
    return Result;
}

int sub_64760(unknown uParam0, int iParam1, unknown uParam2)
{
    if (g_U12306[uParam0]._fU24 == iParam1)
    {
        g_U12306[uParam0]._fU24 = -1;
        sub_64087( uParam0 );
        (uParam2^) = 1;
        if (g_U10974._fU0)
        {
            g_U10974._fU8 = 0;
        }
        sub_51518( "mission has been passed\n" );
        return 1;
    }
    if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        (uParam2^) = 0;
        return 1;
    }
    if (g_U14838[uParam0]._fU0._fU4 == iParam1)
    {
        return 0;
    }
    return 0;
}

void sub_64974(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    iVar5 = 0;
    iVar6 = 151;
    sub_51518( "Flow Goto or Gosub Label: " );
    sub_51518( uParam2 );
    sub_52446();
    while (true)
    {
        iVar6 = (uParam1^)[iVar5]._fU0;
        if (iVar6 == 151)
        {
            PRINTSTRING( "STRAND: " );
            PRINTINT( uParam0 );
            PRINTSTRING( "   LABEL: " );
            PRINTSTRING( uParam2 );
            PRINTNL();
            sub_51310( "Flow_Goto_Label: Failed to find label\n" );
            return;
        }
        if (iVar6 == 137)
        {
            sub_51518( "Found a label: " );
            sub_51518( ref (uParam1^)[iVar5]._fU4._fU40 );
            sub_52446();
            if (COMPARE_STRING( ref (uParam1^)[iVar5]._fU4._fU40, uParam2 ))
            {
                sub_51518( "Found correct label so continue mission flow here\n" );
                g_U12306[uParam0]._fU16 = iVar5;
                return;
            }
            sub_51518( "Wrong label, keep trying\n" );
        }
        iVar5++;
    }
    return;
}

int sub_65629(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    if (NOT g_U14838[uParam1]._fU160._fU0)
    {
        sub_65673( uParam0, uParam1, uParam2, uParam4, iParam3, uParam5 );
        return 0;
    }
    if (NOT g_U14838[uParam1]._fU160._fU80)
    {
        return 0;
    }
    if (g_U14838[uParam1]._fU160._fU84 >= iParam3)
    {
        g_U14838[uParam1]._fU160._fU92 = 1;
        return 1;
    }
    return 0;
}

void sub_65673(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    int iVar9;

    uVar8 = sub_44161( uParam1, uParam2 );
    if (g_U14838[uParam1]._fU160._fU0)
    {
        sub_24994( "Main_Missions: Prepare_And_Setup_Proc_Mission(): Proc Mission already required on this strand." );
    }
    g_U14838[uParam1]._fU160._fU0 = 1;
    g_U14838[uParam1]._fU160._fU8 = uParam5;
    g_U14838[uParam1]._fU160._fU12 = {g_U20913[uVar8]._fU36};
    StrCopy( ref g_U14838[uParam1]._fU160._fU44, 8, g_U20913[uVar8]._fU20, 4);
    g_U14838[uParam1]._fU160._fU76 = uParam2;
    g_U14838[uParam1]._fU160._fU80 = 0;
    g_U14838[uParam1]._fU160._fU92 = 0;
    g_U14838[uParam1]._fU160._fU84 = 0;
    g_U14838[uParam1]._fU160._fU88 = uParam4;
    g_U15862[uParam0]._fU228._fU4 = 1;
    g_U14838[uParam1]._fU160._fU108._fU0 = 1;
    if ((uParam5) AND (NOT g_U14838[uParam1]._fU160._fU4))
    {
        g_U15862[uParam0]._fU8[0]._fU0[5] = 1;
    }
    iVar9 = 0;
    GET_GAME_TIMER( ref iVar9 );
    g_U14838[uParam1]._fU160._fU100 = iVar9 + iParam3;
    return;
}

int sub_66392(unknown uParam0, unknown uParam1, int iParam2)
{
    if (NOT g_U14838[uParam1]._fU160._fU0)
    {
        return 1;
    }
    if (NOT g_U14838[uParam1]._fU160._fU80)
    {
        return 0;
    }
    if (NOT (g_U14838[uParam1]._fU160._fU76 == iParam2))
    {
        sub_66550( "Flow_Quit_Mission_Proc: Attempt to quit different Proc Mission" );
        return 1;
    }
    if (g_U14838[uParam1]._fU160._fU96)
    {
        return 0;
    }
    if (NOT (IS_THREAD_ACTIVE( g_U14838[uParam1]._fU160._fU104 )))
    {
        return 1;
    }
    DESTROY_THREAD( g_U14838[uParam1]._fU160._fU104 );
    g_U14838[uParam1]._fU160._fU108._fU0 = 0;
    if (g_U14838[uParam1]._fU160._fU8)
    {
        g_U15862[uParam0]._fU8[0]._fU0[5] = 0;
    }
    return 1;
}

void sub_66550(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_66966(unknown uParam0, int iParam1)
{
    if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        sub_64315( uParam0, iParam1 );
        return 1;
    }
    if (g_U14838[uParam0]._fU0._fU4 == iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_67374(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    uVar4 = sub_44161( uParam0, uParam1 );
    REQUEST_SCRIPT( ref g_U20913[uVar4]._fU36 );
    if (NOT (HAS_SCRIPT_LOADED( ref g_U20913[uVar4]._fU36 )))
    {
        REQUEST_SCRIPT( ref g_U20913[uVar4]._fU36 );
        return 0;
    }
    iVar5 = 1024;
    if (sub_67470( uParam0, uParam1 ))
    {
        iVar5 = 512;
    }
    if (sub_67520( uParam0, uParam1 ))
    {
        iVar5 = 128;
    }
    START_NEW_SCRIPT( ref g_U20913[uVar4]._fU36, iVar5 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U20913[uVar4]._fU36 );
    return 1;
}

int sub_67470(int iParam0, int iParam1)
{
    if ((iParam0 == 0) AND (iParam1 == 10))
    {
        return 1;
    }
    return 0;
}

int sub_67520(int iParam0, int iParam1)
{
    if ((iParam0 == 0) AND (iParam1 == 8))
    {
        return 1;
    }
    if ((iParam0 == 0) AND (iParam1 == 7))
    {
        return 1;
    }
    if ((iParam0 == 0) AND (iParam1 == 9))
    {
        return 1;
    }
    return 0;
}

void sub_67692()
{
    sub_47478();
    g_U94._fU40 = 1;
    return;
}

void sub_67766()
{
    g_U94._fU40 = 2;
    if (IS_BIT_SET( g_U94._fU412, 25 ))
    {
        SET_BIT( ref g_U94._fU412, 26 );
    }
    return;
}

void sub_67868(unknown uParam0)
{
    sub_67879( uParam0 );
    return;
}

void sub_67879(unknown uParam0)
{
    char[16] cVar3;

    if (NOT g_U15862[uParam0]._fU196._fU0)
    {
        if (g_U94._fU0 == 1012)
        {
            g_U94._fU92 = 1;
        }
        g_U15862[uParam0]._fU196._fU0 = 1;
        StrCopy( ref cVar3, "CONT_", 16 );
        ConcatString(ref cVar3, ref g_U15862[uParam0]._fU196._fU8, 16);
        SET_PHONE_HUD_ITEM( 2, ref cVar3, -1 );
        g_U94._fU520 = 0;
    }
    return;
}

void sub_68129(unknown uParam0)
{
    g_U15862[uParam0]._fU196._fU0 = 0;
    return;
}

void sub_68219(unknown uParam0)
{
    g_U15862[uParam0]._fU196._fU0 = 1;
    return;
}

void sub_68315(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U12306[uParam0]._fU76, uParam1, 16 );
    StrCopy( ref g_U12306[uParam0]._fU92, uParam2, 16 );
    return;
}

void sub_68444(int iParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int I;

    iVar5 = -1;
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (g_U26666[I]._fU0 == iParam0)
        {
            StrCopy( ref g_U26666[I]._fU4, uParam1, 16 );
            StrCopy( ref g_U26666[I]._fU20, uParam2, 16 );
            return;
        }
        if (g_U26666[I]._fU0 == 22)
        {
            if (iVar5 == -1)
            {
                iVar5 = I;
            }
        }
    }
    if (iVar5 == -1)
    {
        sub_51310( "Flow_Perform_Set_Other_Answer_Phone: need to increase MAX_NON_STRAND_ANSWER_PHONE_MESSAGES" );
        return;
    }
    g_U26666[iVar5]._fU0 = iParam0;
    StrCopy( ref g_U26666[iVar5]._fU4, uParam1, 16 );
    StrCopy( ref g_U26666[iVar5]._fU20, uParam2, 16 );
    return;
}

int sub_68792(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    SCRIPT_ASSERT( "Flow_Await_Mission_Phone_Call: Function unused so not maintained - Tell Keith" );
    if (g_U15642[uParam1]._fU0 == 0)
    {
        g_U15642[uParam1]._fU0 = 1;
        g_U15642[uParam1]._fU8 = 0;
        g_U15862[uParam0]._fU8[0]._fU0[5] = 1;
        sub_51518( "SET UP CONTROL VARIABLES - SO JOB ADDED\n" );
        return 0;
    }
    if (g_U15642[uParam1]._fU8 == 0)
    {
        if (g_U15862[uParam0]._fU4)
        {
            if (sub_69042( uParam0 ))
            {
                g_U15642[uParam1]._fU8 = 1;
                sub_51518( "Answer Cellphone\n" );
                sub_58115( uParam2, uParam3, 1 );
                sub_48275();
                sub_69138();
                return 0;
            }
        }
        return 0;
    }
    if (NOT (sub_69197() == 6))
    {
        return 0;
    }
    sub_51518( "Call ended\n" );
    sub_50863( uParam1 );
    g_U15862[uParam0]._fU8[0]._fU0[5] = 0;
    g_U15862[uParam0]._fU8[1]._fU0[5] = 0;
    g_U15862[uParam0]._fU4 = 0;
    g_U12306[uParam1]._fU28 = 1;
    return 1;
}

void sub_69042(unknown uParam0)
{
    return g_U15862[uParam0]._fU8[1]._fU0[5];
}

void sub_69138()
{
    g_U814 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

int sub_69197()
{
    if (g_U94._fU60 != -1)
    {
        return g_U15862[g_U94._fU60]._fU196._fU24;
    }
    return 6;
}

int sub_69468(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    if (g_U15642[iParam1]._fU4 == 0)
    {
        sub_51518( "Initialise Control Values\n" );
        g_U15642[iParam1]._fU4 = 1;
        g_U15642[iParam1]._fU8 = 0;
        g_U15642[iParam1]._fU12 = iVar7 + iParam4;
        return 0;
    }
    if (NOT g_U15642[iParam1]._fU8)
    {
        if (g_U15642[iParam1]._fU16)
        {
            g_U15642[iParam1]._fU16 = 0;
            g_U15642[iParam1]._fU12 = iVar7 + 30000;
            g_U15642[iParam1]._fU4 = 1;
            return 0;
        }
        if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
        {
            sub_69687( iParam1, 300000 );
            return 0;
        }
        if ((((((g_U12303) || (IS_THREAD_ACTIVE( g_U815 ))) || (IS_WANTED_LEVEL_GREATER( sub_7787(), 0 ))) || (sub_69829())) || (sub_69880())) || (sub_70078( 0 )))
        {
            sub_69687( iParam1, 300000 );
            return 0;
        }
        if ((NOT (sub_70446( uParam0, 30000 ))) || (sub_70510( uParam0 )))
        {
            sub_69687( iParam1, 300000 );
            return 0;
        }
        if (IS_BIT_SET( g_U10959._fU0, 4 ))
        {
            if (NOT (iParam1 == g_U10959._fU4))
            {
                sub_69687( iParam1, 300000 );
                g_U15642[iParam1]._fU4 = 1;
                return 0;
            }
            sub_50863( iParam1 );
            return 1;
        }
        if (iVar7 > g_U15642[iParam1]._fU12)
        {
            sub_51518( "Making Call\n" );
            if (sub_70705( uParam0, uParam2, uParam3 ))
            {
                sub_51518( "Call Setup Success\n" );
                g_U15642[iParam1]._fU8 = 1;
                sub_48275();
            }
            else
            {
                sub_51518( "Call Setup Failure - try again later\n" );
                sub_69687( iParam1, 300000 );
            }
        }
        return 0;
    }
    if (sub_70891())
    {
        return 0;
    }
    sub_50863( iParam1 );
    g_U12306[iParam1]._fU28 = 1;
    sub_71020( uParam0, 0 );
    return 1;
}

void sub_69687(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    iVar5 = 18000;
    iVar6 = 30000;
    if (iParam1 <= 60000)
    {
        iVar5 = 8000;
        iVar6 = 12000;
    }
    iVar7 = g_U15642[uParam0]._fU12 - iVar4;
    if (iVar7 > iVar5)
    {
        return;
    }
    g_U15642[uParam0]._fU12 = iVar4 + iVar6;
    return;
}

int sub_69829()
{
    if ((g_U94._fU0 == 1007) || (g_U94._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_69880()
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        if (g_U15642[I]._fU8)
        {
            return 1;
        }
    }
    for ( I = 0; I < 9; I++ )
    {
        if (g_U18635[I]._fU68)
        {
            return 1;
        }
        if (g_U18635[I]._fU704._fU16)
        {
            return 1;
        }
    }
    for ( I = 0; I < 6; I++ )
    {
        if (g_U15792[I]._fU0)
        {
            if (g_U15792[I]._fU12)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_70078(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_70098())
    {
        return 1;
    }
    if (sub_70133())
    {
        return 1;
    }
    if (NOT (iParam0 == 0))
    {
        if (NOT (sub_70204( iParam0 )))
        {
            iParam0 = 0;
        }
    }
    if (NOT (iParam0 == 0))
    {
        if (sub_70319( iParam0 ))
        {
            return 1;
        }
        return 0;
    }
    if (g_U38472._fU4 > iVar3)
    {
        return 1;
    }
    return 0;
}

void sub_70098()
{
    return g_U94._fU540;
}

int sub_70133()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (g_U38472._fU0 > iVar2)
    {
        return 1;
    }
    return 0;
}

int sub_70204(int iParam0)
{
    int iVar3;

    iVar3 = sub_48297();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_70234();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_70234()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_70319(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 - g_U38472._fU8;
    if (iVar4 < iParam0)
    {
        return 1;
    }
    return 0;
}

boolean sub_70446(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (iParam0 < 22))
    {
        return 1;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    iVar5 = g_U20853[iParam0] + iParam1;
    return iVar5 < iVar4;
}

int sub_70510(int iParam0)
{
    if (iParam0 == 22)
    {
        return 0;
    }
    if (NOT (g_U38680._fU0 == iParam0))
    {
        return 0;
    }
    return 1;
}

void sub_70705(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_58223( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_70891()
{
    if (g_U94._fU60 != -1)
    {
        if ((g_U15862[g_U94._fU60]._fU196._fU24 == 0) || (g_U15862[g_U94._fU60]._fU196._fU24 == 3))
        {
            return 1;
        }
    }
    return 0;
}

void sub_71020(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 22))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U20853[iParam0] = iVar4;
    if (bParam1)
    {
        g_U20853[iParam0] += 30000;
    }
    return;
}

void sub_71195(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int iVar12;
    int iVar13;

    iVar12 = -1;
    iVar13 = -1;
    return sub_71240( uParam0, uParam1, uParam2, uParam3, uParam4, iVar12, iVar13, uParam5, uParam6, uParam7, uParam8, uParam9 );
}

int sub_71240(int iParam0, int iParam1, unknown uParam2, unknown uParam3, int iParam4, int iParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, boolean bParam10, boolean bParam11)
{
    int iVar14;
    boolean bVar15;
    boolean bVar16;
    boolean bVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    boolean bVar21;

    iVar14 = 0;
    GET_GAME_TIMER( ref iVar14 );
    if (g_U15642[iParam1]._fU4 == 0)
    {
        sub_51518( "Initialise Control Values\n" );
        g_U15642[iParam1]._fU4 = 1;
        g_U15642[iParam1]._fU8 = 0;
        bVar15 = false;
        if (g_U15642[iParam1]._fU12 == -1)
        {
            bVar15 = true;
        }
        bVar16 = false;
        if (g_U15642[iParam1]._fU12 == -2)
        {
            bVar16 = true;
        }
        g_U15642[iParam1]._fU12 = iVar14;
        if (NOT g_U12306[iParam1]._fU36)
        {
            if (bVar15)
            {
                g_U15642[iParam1]._fU12 += iParam8;
            }
            else if (bVar16)
            {
                g_U15642[iParam1]._fU12 += 30000;
            }
            else
            {
                g_U15642[iParam1]._fU12 += iParam4;
            }
        }
        return 0;
    }
    if (NOT g_U15642[iParam1]._fU8)
    {
        bVar17 = false;
        if (bParam11)
        {
            if ((sub_57767( iParam0, 1 )) AND (NOT (sub_71571( iParam0 ))))
            {
                bVar17 = true;
            }
        }
        if (g_U15642[iParam1]._fU16)
        {
            g_U15642[iParam1]._fU16 = 0;
            g_U15642[iParam1]._fU12 = iVar14 + 30000;
            g_U15642[iParam1]._fU4 = 1;
            return 0;
        }
        if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
        {
            sub_69687( iParam1, iParam8 );
            return 0;
        }
        iVar18 = 0;
        if (iParam0 < 9)
        {
            if (g_U18635[iParam0]._fU16)
            {
                iVar18 = 1;
            }
        }
        if ((((((((g_U12303) || (IS_THREAD_ACTIVE( g_U815 ))) || (IS_WANTED_LEVEL_GREATER( sub_7787(), 0 ))) || (sub_69880())) || (iVar18)) || (g_U27681)) || (sub_71842())) || (g_U10672))
        {
            sub_69687( iParam1, iParam8 );
            return 0;
        }
        if (NOT bVar17)
        {
            if ((sub_70078( iParam4 )) || (sub_69829()))
            {
                sub_69687( iParam1, iParam8 );
                return 0;
            }
        }
        if (IS_BIT_SET( g_U10959._fU0, 4 ))
        {
            if (NOT (iParam1 == g_U10959._fU4))
            {
                sub_69687( iParam1, iParam8 );
                return 0;
            }
            sub_50863( iParam1 );
            if (NOT (iParam5 == -1))
            {
                if (NOT (sub_72014( iParam5, uParam6 )))
                {
                    SET_TIME_OF_DAY( iParam5, 0 );
                }
            }
            return 1;
        }
        if ((iVar14 > g_U15642[iParam1]._fU12) || (bVar17))
        {
            iVar19 = 1;
            if (bVar17)
            {
                if (sub_72191( uParam2, uParam3 ))
                {
                    iVar19 = 0;
                }
            }
            if ((NOT (iParam5 == -1)) AND (iVar19))
            {
                if (NOT (sub_72014( iParam5, uParam6 )))
                {
                    sub_69687( iParam1, iParam8 );
                    return 0;
                }
            }
            if (sub_72263( uParam7 ))
            {
                sub_69687( iParam1, iParam8 );
                return 0;
            }
            if (sub_72688( iParam1 ))
            {
                sub_69687( iParam1, iParam8 );
                return 0;
            }
            if ((g_U10974._fU0) || (IS_AUTO_SAVE_IN_PROGRESS()))
            {
                sub_73260( iParam1 );
                return 0;
            }
            if (sub_73353())
            {
                sub_69687( iParam1, iParam8 );
                return 0;
            }
            if (sub_73493())
            {
                sub_69687( iParam1, iParam8 );
                return 0;
            }
            iVar20 = uParam9;
            if (NOT (iVar20 == 57))
            {
                if (NOT g_U15728[iVar20])
                {
                    if (bParam10)
                    {
                        sub_69687( iParam1, iParam8 );
                        return 0;
                    }
                    sub_50863( iParam1 );
                    return 1;
                }
            }
            if (NOT bVar17)
            {
                if (iParam8 > 15000)
                {
                    if (NOT (sub_70446( iParam0, 30000 )))
                    {
                        sub_69687( iParam1, iParam8 );
                        return 0;
                    }
                }
            }
            if (sub_70510( iParam0 ))
            {
                sub_69687( iParam1, iParam8 );
                return 0;
            }
            if (sub_73902( iParam1 ))
            {
                sub_69687( iParam1, iParam8 );
                return 0;
            }
            sub_51518( "Making Call\n" );
            bVar21 = false;
            if (bVar17)
            {
                bVar21 = sub_74031( uParam2, uParam3 );
            }
            else
            {
                bVar21 = sub_74267( iParam0, uParam2, uParam3, 10000, 0 );
            }
            if (bVar21)
            {
                sub_51518( "Call Setup Success\n" );
                g_U15642[iParam1]._fU8 = 1;
                g_U20912 = iVar14 + 2000;
                if (iParam8 <= 60000)
                {
                    CLEAR_ADDITIONAL_TEXT( 0, 1 );
                    CLEAR_ADDITIONAL_TEXT( 6, 1 );
                }
                if (bVar17)
                {
                    g_U15642[iParam1]._fU20 = 1;
                }
            }
            else
            {
                sub_51518( "Call Setup Failure - try again later\n" );
                sub_69687( iParam1, iParam8 );
            }
        }
        return 0;
    }
    if (sub_70891())
    {
        g_U20912 = iVar14 + 2000;
        if (g_U12303)
        {
            sub_74550();
        }
        return 0;
    }
    sub_48275();
    switch (sub_69197())
    {
        case 1:
        case 2:
        sub_50863( iParam1 );
        g_U15642[iParam1]._fU12 = -1;
        return 0;
    }
    if ((sub_74729()) || (IS_CHAR_DEAD( sub_15549() )))
    {
        sub_50863( iParam1 );
        g_U15642[iParam1]._fU12 = -2;
        return 0;
    }
    if ((g_U12303) || (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        sub_50863( iParam1 );
        g_U15642[iParam1]._fU12 = -2;
        return 0;
    }
    sub_50863( iParam1 );
    sub_71020( iParam0, 0 );
    g_U12306[iParam1]._fU28 = 1;
    g_U20912 = iVar14 + 2000;
    return 1;
}

void sub_71571(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = uParam0;
    iVar4 = iVar3 / 32;
    iVar5 = iVar3 mod 32;
    if (iVar4 > 2)
    {
        return 0;
    }
    if (iVar5 > 32)
    {
        return 0;
    }
    return IS_BIT_SET( g_U12300[iVar4], iVar5 );
}

int sub_71842()
{
    if (g_U558 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_72014(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 0;
    iVar5 = 0;
    GET_TIME_OF_DAY( ref iVar4, ref iVar5 );
    if (iParam1 == iParam0)
    {
        return 1;
    }
    if (iParam1 > iParam0)
    {
        if (iVar4 < iParam0)
        {
            return 0;
        }
        if (iVar4 >= iParam1)
        {
            return 0;
        }
        return 1;
    }
    if (iVar4 >= iParam0)
    {
        return 1;
    }
    if (iVar4 < iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_72191(unknown uParam0, unknown uParam1)
{
    return 0;
}

int sub_72263(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    boolean bVar6;

    iVar3 = 3;
    if (iParam0 == iVar3)
    {
        return 0;
    }
    if (IS_CHAR_DEAD( sub_15549() ))
    {
        return 1;
    }
    bVar4 = IS_CHAR_IN_ANY_CAR( sub_15549() );
    iVar5 = 0;
    if (bVar4)
    {
        iVar5 = sub_72336( iParam0 );
    }
    else
    {
        iVar5 = sub_72401( iParam0 );
    }
    bVar6 = sub_72463( iParam0, iVar5 );
    if (bVar6)
    {
        return 0;
    }
    return 1;
}

void sub_72336(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 0: return 400;
    }
    return CEIL( 300.00000000 );
}

void sub_72401(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 0: return 200;
    }
    return CEIL( 150.00000000 );
}

boolean sub_72463(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int Result;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    int iVar12;

    if (IS_CHAR_DEAD( sub_15549() ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( sub_15549(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    Result = 0;
    if (sub_72523( uVar4, uParam0, ref Result ))
    {
        return Result;
    }
    uVar8 = {g_U15785[uParam0]};
    fVar11 = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref fVar11 );
    iVar12 = CEIL( fVar11 );
    return iVar12 > iParam1;
}

int sub_72523(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    uVar10 = uParam3;
    (uParam4^) = 1;
    return 0;
}

int sub_72688(unknown uParam0)
{
    int iVar3;
    int J;
    int iVar5;
    int I;

    if (g_U12306[uParam0]._fU116 == 0)
    {
        return 0;
    }
    iVar3 = 0;
    J = 0;
    for ( J = 0; J < 9; J++ )
    {
        if (IS_BIT_SET( g_U12306[uParam0]._fU116, J ))
        {
            iVar5 = J;
            iVar3 = sub_72776( iVar5 );
            I = 0;
            for ( I = 0; I < 5; I++ )
            {
                if (sub_72998( iVar3, I ))
                {
                    if (g_U12306[iVar3]._fU144[I]._fU84)
                    {
                        return 1;
                    }
                }
            }
            if (NOT (g_U14838[iVar3]._fU80._fU0 == 0))
            {
                return 1;
            }
            if (g_U12306[uParam0]._fU116 == J)
            {
                return 0;
            }
        }
    }
    return 0;
}

int sub_72776(unknown uParam0)
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
    }
    sub_24994( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 11;
}

int sub_72998(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 + 0;
    switch (uParam0)
    {
        case 6:
        if ((iVar4 == 0) || (iVar4 == 3))
        {
            return 1;
        }
        break;
        case 7:
        if ((iVar4 == 0) || (iVar4 == 4))
        {
            return 1;
        }
        break;
    }
    return 0;
}

void sub_73260(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = g_U15642[uParam0]._fU12 - iVar3;
    if (iVar4 > 18000)
    {
        return;
    }
    iVar5 = 18000;
    g_U15642[uParam0]._fU12 += 5000;
    return;
}

int sub_73353()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Brian" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Dave" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Malc1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Malc2" )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_73493()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    bVar2 = IS_CHAR_DEAD( sub_15549() );
    if (NOT bVar2)
    {
        GET_CHAR_COORDINATES( sub_15549(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    }
    fVar9 = 0.00000000;
    if (NOT bVar2)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambCabaret" )) > 0)
        {
            uVar6 = {g_U11583[12]._fU0};
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar3._fU0, uVar3._fU4, uVar3._fU8, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref fVar9 );
            if (fVar9 < 200.00000000)
            {
                PRINTSTRING( "Check_For_Other_Specific_Restrictions: ambCabaret script exists\n" );
                return 1;
            }
        }
    }
    return 0;
}

int sub_73902(int iParam0)
{
    if (iParam0 == 11)
    {
        return 0;
    }
    if (g_U38680._fU4 == nil)
    {
        return 0;
    }
    if (NOT (iParam0 == g_U38680._fU8))
    {
        return 0;
    }
    return 1;
}

void sub_74031(unknown uParam0, unknown uParam1)
{
    if (COMPARE_STRING( uParam1, "E1MFAU" ))
    {
        if (COMPARE_STRING( uParam0, "E1MF_DRU" ))
        {
            return sub_58115( "E1MF_AMEET", "E1MFAU", 1 );
        }
        if (COMPARE_STRING( uParam0, "E1MF_ODDJ" ))
        {
            return sub_58115( "E1MF2_TS2", "E1MF2AU", 1 );
        }
        if (COMPARE_STRING( uParam0, "E1MF_GL" ))
        {
            return sub_58115( "E1MF2_TS3", "E1MF2AU", 1 );
        }
    }
    return sub_58115( uParam0, uParam1, 1 );
}

void sub_74267(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_58223( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

void sub_74550()
{
    if ((g_U558 == 1) || (g_U8946 == 4))
    {
        if (g_U94._fU60 != -1)
        {
            g_U15862[g_U94._fU60]._fU196._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U94._fU376 = 0;
        g_U94._fU100 = 1;
    }
    return;
}

void sub_74729()
{
    return g_U94._fU504;
}

void sub_77945(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15792[uParam0]._fU0 = 1;
    g_U15792[uParam0]._fU4 = iVar5 + iParam1;
    g_U15792[uParam0]._fU8 = uParam2;
    g_U15792[uParam0]._fU12 = 0;
    g_U15792[uParam0]._fU16 = 0;
    return;
}

int sub_78090(unknown uParam0)
{
    if (NOT g_U15792[uParam0]._fU0)
    {
        return 1;
    }
    if (g_U15792[uParam0]._fU12)
    {
        return 0;
    }
    g_U15792[uParam0]._fU0 = 0;
    g_U15792[uParam0]._fU16 = 1;
    return 1;
}

void sub_78230(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    sub_78247( uParam0, uVar4 );
    return;
}

void sub_78247(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15824[uParam0]._fU0 = uParam1;
    g_U15824[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

void sub_78375(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    sub_78392( uParam0, uVar4 );
    return;
}

void sub_78392(unknown uParam0, int iParam1)
{
    if (NOT (g_U15824[uParam0]._fU0 == iParam1))
    {
        return;
    }
    g_U15824[uParam0]._fU0 = 17;
    g_U15824[uParam0]._fU4 = 0;
    return;
}

void sub_78512()
{
    return IS_THREAD_ACTIVE( g_U815 );
}

void sub_78631(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 6;
    sub_78656( uParam0, uParam1, uParam2, uParam3, iVar6, 64537 );
    return;
}

void sub_78656(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = 19;
    if (iParam0 >= iVar8)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_78768( uParam1, uParam2 );
        return;
    }
    if (g_U38472._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar9 = 0;
    GET_GAME_TIMER( ref iVar9 );
    g_U38472._fU12[iParam0]._fU0 = 1;
    g_U38472._fU12[iParam0]._fU4 = 0;
    g_U38472._fU12[iParam0]._fU8 = 0;
    g_U38472._fU12[iParam0]._fU12 = uParam1;
    g_U38472._fU12[iParam0]._fU16 = uParam2;
    g_U38472._fU12[iParam0]._fU20 = iVar9 + iParam3;
    g_U38472._fU12[iParam0]._fU28 = uParam4;
    g_U38472._fU12[iParam0]._fU32 = uParam5;
    sub_80477( iParam0, iParam3 );
    return;
}

void sub_78768(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    uVar11 = sub_78791( uParam0 );
    sub_79038( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_79382( ref uVar4, 1 );
    sub_79410( ref uVar4, 0 );
    sub_79438( ref uVar4, 2 );
    sub_79468( ref uVar4 );
    return;
}

int sub_78791(unknown uParam0)
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
    }
    sub_24994( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_79038(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_79060( uParam0, 0, iParam4 + 0 );
    sub_79060( uParam1, 1, iParam4 + 0 );
    sub_79060( uParam2, 2, iParam4 + 0 );
    sub_79060( uParam3, 3, iParam4 + 0 );
    sub_79060( 0, 4, iParam4 + 0 );
    sub_79060( 1, 5, iParam4 + 0 );
    sub_79060( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_79060(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_79382(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_79410(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_79438(int iParam0, unknown uParam1)
{
    sub_79060( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_79468(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "T1_NAME_", 16 );
    if (g_U94._fU540)
    {
        return 0;
    }
    if ((g_U572[g_U572 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_79538())
        {
            sub_48026( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_79665( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_48026( iVar9 );
    }
    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (g_U572[I]._fU0[0] == -1)
        {
            g_U572[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U572;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_47775( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U94._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U558 == 9)
            {
                g_U94._fU404 = 1016;
            }
            else if (g_U94._fU0 == 1015)
            {
                g_U94._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15728[2] = 1;
        }
        else if ((sub_47775( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_79538()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (((sub_47775( 1, g_U572[I] )) != 0) AND (g_U572[I]._fU20))
        {
            sub_48026( I );
            return 1;
        }
    }
    return 0;
}

int sub_79665(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_79730( uParam0, g_U572[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U572;
        }
    }
    return -1;
}

int sub_79730(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_47775( 0, uParam0 );
        if (iVar14 == (sub_47775( 0, uParam6 )))
        {
            iVar15 = sub_47775( 3, uParam0 );
            if (iVar15 == (sub_47775( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_80477(unknown uParam0, int iParam1)
{
    g_U38472._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_70204( iParam1 ))
    {
        g_U38472._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

void sub_80769(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 6;
    return sub_80791( uParam0, uParam1, uParam2, uParam3, iVar6 );
}

int sub_80791(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    iVar7 = 19;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player_Wait: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_78768( uParam1, uParam2 );
        return 1;
    }
    if (sub_80917( iParam0 ))
    {
        return 1;
    }
    if (NOT g_U38472._fU12[iParam0]._fU0)
    {
        sub_78656( iParam0, uParam1, uParam2, uParam3, uParam4, 64537 );
        g_U38472._fU12[iParam0]._fU8 = 1;
    }
    return 0;
}

void sub_80917(unknown uParam0)
{
    return g_U38472._fU12[uParam0]._fU4;
}

void sub_81187(int iParam0)
{
    int iVar3;

    iVar3 = 19;
    if (iParam0 >= iVar3)
    {
        SCRIPT_ASSERT( "Kill_Txtmsg: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        return;
    }
    sub_81298( iParam0 );
    g_U38472._fU12[iParam0]._fU4 = 1;
    return;
}

void sub_81298(unknown uParam0)
{
    g_U38472._fU12[uParam0]._fU0 = 0;
    g_U38472._fU12[uParam0]._fU4 = 0;
    g_U38472._fU12[uParam0]._fU12 = 22;
    g_U38472._fU12[uParam0]._fU16 = 0;
    g_U38472._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_81502(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    g_U14838[uParam0]._fU160._fU108._fU4 = uParam1;
    g_U14838[uParam0]._fU160._fU108._fU8 = uParam2;
    g_U14838[uParam0]._fU160._fU108._fU12 = uParam3;
    g_U14838[uParam0]._fU160._fU108._fU16 = uParam4;
    if (g_U14838[uParam0]._fU160._fU108._fU20 > 0)
    {
        return;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    g_U14838[uParam0]._fU160._fU108._fU20 = iVar7 + g_U14838[uParam0]._fU160._fU108._fU16;
    return;
}

void sub_81761(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam0;
    switch (uVar4)
    {
        case 0:
        sub_81882( 0, uParam1 );
        break;
        case 1:
        sub_81882( 1, uParam1 );
        break;
        case 2:
        sub_81882( 2, uParam1 );
        break;
        case 3:
        sub_81882( 3, uParam1 );
        break;
        case 4:
        sub_81882( 4, uParam1 );
        break;
        case 5:
        sub_81882( 5, uParam1 );
        break;
        case 6:
        sub_81882( 6, uParam1 );
        break;
        case 7:
        sub_81882( 7, uParam1 );
        break;
        case 9:
        sub_81882( 9, uParam1 );
        break;
        case 10:
        sub_81882( 10, uParam1 );
        break;
        case 11:
        sub_81882( 11, uParam1 );
        break;
        case 8:
        sub_81882( 8, uParam1 );
        break;
        default: SCRIPT_ASSERT( "Flow_Perform_Activate_Ambient_Email: Unknown Ambient Email Sender" );
    }
    return;
}

void sub_81882(unknown uParam0, int iParam1)
{
    if (iParam1 < g_U1551[uParam0]._fU316)
    {
        if (g_U1551[uParam0]._fU184[iParam1] == 0)
        {
            sub_81975( ref g_U1551[uParam0]._fU204[iParam1], g_U1551[uParam0]._fU400, 0, 0 );
            g_U1551[uParam0]._fU184[iParam1] = 1;
        }
    }
    return;
}

void sub_81975(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_82028( iParam0, uParam1, uParam2 );
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
        sub_82160( iParam0 + 0 );
    }
    return;
}

void sub_82028(int iParam0, int iParam1, int iParam2)
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
        sub_82160( iParam0 + 0 );
    }
    return;
}

void sub_82160(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_82191( iParam0->_fU4 )))
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

int sub_82191(unknown uParam0)
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

void sub_82951(unknown uParam0, int iParam1)
{
    int iVar4;

    if (iParam1 < 0)
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U18635[uParam0]._fU84 = iVar4 + iParam1;
    return;
}

void sub_83062(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U18635[uParam0]._fU8)
    {
        g_U15862[uParam0]._fU8[0]._fU0[uParam1] = 1;
        return;
    }
    uVar4 = uParam1;
    SET_BIT( ref g_U18635[uParam0]._fU168, uVar4 );
    return;
}

void sub_83204(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U18635[uParam0]._fU8)
    {
        g_U15862[uParam0]._fU8[0]._fU0[uParam1] = 0;
        return;
    }
    uVar4 = uParam1;
    CLEAR_BIT( ref g_U18635[uParam0]._fU168, uVar4 );
    return;
}

void sub_83382(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
    int iVar7;

    if (g_U18635[uParam0]._fU0)
    {
        return;
    }
    g_U20761++;
    g_U18635[uParam0]._fU0 = 1;
    g_U18635[uParam0]._fU72 = (iParam1 * 60) * 1000;
    g_U18635[uParam0]._fU76 = (iParam2 * 60) * 1000;
    g_U18635[uParam0]._fU112 = iParam3;
    g_U18635[uParam0]._fU116 = iParam3 + iParam4;
    if (g_U18635[uParam0]._fU120 == -1)
    {
        iVar7 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( g_U18635[uParam0]._fU112, g_U18635[uParam0]._fU116, ref iVar7 );
        g_U18635[uParam0]._fU120 = iVar7;
    }
    sub_83607( uParam0 );
    return;
}

void sub_83607(unknown uParam0)
{
    g_U18635[uParam0]._fU92 = 0;
    g_U18635[uParam0]._fU96 = 0;
    sub_47022( uParam0 );
    sub_83657( uParam0 );
    return;
}

void sub_83657(unknown uParam0)
{
    if (NOT g_U18635[uParam0]._fU0)
    {
        return;
    }
    sub_83690( uParam0 );
    sub_83982( uParam0 );
    return;
}

void sub_83690(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = 1;
    iVar4 = 1;
    sub_83707( ref iVar3, ref iVar4 );
    g_U18635[uParam0]._fU80 = (g_U18635[uParam0]._fU72 * iVar3) / iVar4;
    if (g_U15728[4])
    {
        g_U18635[uParam0]._fU80 *= 2;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U18635[uParam0]._fU88 = iVar5 + g_U18635[uParam0]._fU80;
    return;
}

void sub_83707(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 1;
    iVar5 = 1;
    switch (g_U20761)
    {
        case 1:
        iVar4 = 1;
        iVar5 = 1;
        break;
        case 2:
        iVar4 = 3;
        iVar5 = 2;
        break;
        case 3:
        iVar4 = 2;
        iVar5 = 1;
        break;
        case 4:
        iVar4 = 5;
        iVar5 = 2;
        break;
        case 5:
        iVar4 = 3;
        iVar5 = 1;
        break;
    }
    (uParam0^) = iVar4;
    (uParam1^) = iVar5;
    return;
}

void sub_83982(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (g_U0)
    {
        g_U18635[uParam0]._fU8 = 1;
        g_U18635[uParam0]._fU168 = 0;
    }
    else if (NOT g_U18635[uParam0]._fU8)
    {
        g_U18635[uParam0]._fU84 = (iVar3 + 30000) + (sub_84072( uParam0 ));
        return;
    }
    iVar4 = 1;
    iVar5 = 1;
    sub_83707( ref iVar4, ref iVar5 );
    iVar6 = (g_U18635[uParam0]._fU76 * iVar4) / iVar5;
    if (g_U15728[4])
    {
        iVar6 *= 2;
    }
    if (iVar6 < 10800000)
    {
        iVar6 = 10800000;
    }
    g_U18635[uParam0]._fU84 = iVar3 + iVar6;
    return;
}

int sub_84072(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 90000;
    }
    return 0;
}

void sub_84308(unknown uParam0)
{
    if (NOT g_U18635[uParam0]._fU0)
    {
        return;
    }
    g_U18635[uParam0]._fU0 = 0;
    g_U20761--;
    return;
}

void sub_84423(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 - 0;
    g_U18635[uParam0]._fU300[iVar4]._fU0 = 1;
    return;
}

void sub_84567(unknown uParam0, int iParam1, unknown uParam2, int iParam3, int iParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;
    unknown uVar10;

    iVar8 = iParam1 - 0;
    sub_1376( uParam0, iVar8 );
    g_U12306[uParam0]._fU144[iVar8]._fU0 = 1;
    g_U12306[uParam0]._fU144[iVar8]._fU20 = 0;
    g_U12306[uParam0]._fU144[iVar8]._fU128 = uParam2;
    g_U12306[uParam0]._fU144[iVar8]._fU132 = iParam3;
    g_U12306[uParam0]._fU144[iVar8]._fU136 = iParam3 + iParam4;
    g_U12306[uParam0]._fU144[iVar8]._fU4 = uParam5;
    if (g_U12306[uParam0]._fU144[iVar8]._fU140 == -1)
    {
        iVar9 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( g_U12306[uParam0]._fU144[iVar8]._fU132, g_U12306[uParam0]._fU144[iVar8]._fU136, ref iVar9 );
        g_U12306[uParam0]._fU144[iVar8]._fU140 = iVar9;
    }
    if (g_U12306[uParam0]._fU144[iVar8]._fU4 == 0)
    {
        g_U12306[uParam0]._fU144[iVar8]._fU20 = 1;
        uVar10 = sub_56580( uParam0 );
        sub_84956( 0, uVar10, iVar8 );
    }
    return;
}

void sub_84956(int iParam0, int iParam1, int iParam2)
{
    int iVar5;
    int iVar6;
    boolean bVar7;

    if (iParam0 == 6)
    {
        return;
    }
    iVar5 = 11;
    if (iParam1 < 9)
    {
        iVar5 = sub_72776( iParam1 );
    }
    iVar6 = 0;
    bVar7 = false;
    switch (iParam0)
    {
        case 0:
        if (iParam2 == 64537)
        {
            SCRIPT_ASSERT( "Trigger_Additional_Code: CODE_ACTIVATE_SPECIAL_ABILITY requires array pos of Special Ability" );
            return;
        }
        g_U12306[iVar5]._fU144[iParam2]._fU20 = 1;
        sub_85197( iParam1, iParam2 );
        sub_85368( iParam1, iParam2 );
        sub_85907( iParam1 );
        sub_85939( iVar5, iParam2 );
        break;
        case 1:
        if (iParam2 == 64537)
        {
            SCRIPT_ASSERT( "Trigger_Additional_Code: CODE_REACTIVATE_SPECIAL_ABILITY requires array pos of Special Ability" );
            return;
        }
        g_U12306[iVar5]._fU144[iParam2]._fU20 = 1;
        sub_85197( iParam1, iParam2 );
        sub_85368( iParam1, iParam2 );
        iVar6 = g_U12306[iVar5]._fU144[iParam2]._fU140;
        iVar6++;
        if (iVar6 >= g_U12306[iVar5]._fU144[iParam2]._fU136)
        {
            iVar6 = g_U12306[iVar5]._fU144[iParam2]._fU132;
        }
        g_U12306[iVar5]._fU144[iParam2]._fU140 = iVar6;
        break;
        case 2:
        bVar7 = false;
        if (NOT g_U18635[iParam1]._fU92)
        {
            g_U18635[iParam1]._fU92 = 1;
            bVar7 = true;
        }
        else if (NOT g_U18635[iParam1]._fU96)
        {
            g_U18635[iParam1]._fU96 = 1;
            bVar7 = true;
        }
        if (bVar7)
        {
            sub_86846( iVar5 );
        }
        break;
        case 3:
        sub_87172( iVar5 );
        sub_87338( iVar5 );
        break;
        case 4:
        sub_87512( iVar5 );
        break;
        default: SCRIPT_ASSERT( "Trigger_Additional_Code: Unknown Code ID" );
    }
    return;
}

void sub_85197(unknown uParam0, int iParam1)
{
    int iVar4;

    if (iParam1 >= 5)
    {
        SCRIPT_ASSERT( "Add_Special_Ability_To_Phone: special ability array element out o fbounds" );
        return;
    }
    if (g_U18635[uParam0]._fU300[iParam1]._fU0)
    {
        iVar4 = 0 + iParam1;
        g_U15862[uParam0]._fU8[0]._fU0[iVar4] = 1;
    }
    return;
}

void sub_85368(unknown uParam0, int iParam1)
{
    if (iParam1 >= 5)
    {
        SCRIPT_ASSERT( "Immediately_Expire_Special_Ability_Time_Restrictions: special ability array element out o fbounds" );
        return;
    }
    if (g_U18635[uParam0]._fU300[iParam1]._fU0)
    {
        if (g_U18635[uParam0]._fU300[iParam1]._fU40)
        {
            sub_85572( ref g_U18635[uParam0]._fU300[iParam1]._fU64 );
            sub_85668( ref g_U18635[uParam0]._fU300[iParam1]._fU64, 0, 1 );
        }
    }
    return;
}

void sub_85572(int iParam0)
{
    sub_85585( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_85585(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_85668(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 -= iParam2;
    ref iParam0->_fU8->_fU0 -= iParam1;
    while ((ref iParam0->_fU8->_fU4) < 0)
    {
        ref iParam0->_fU8->_fU4 += 60;
        ref iParam0->_fU8->_fU0--;
    }
    while ((ref iParam0->_fU8->_fU0) < 0)
    {
        ref iParam0->_fU8->_fU0 += 24;
        sub_85798( iParam0 + 0 );
    }
    return;
}

void sub_85798(int iParam0)
{
    iParam0->_fU0--;
    if (iParam0->_fU0 < 1)
    {
        iParam0->_fU4--;
        if (iParam0->_fU4 < 1)
        {
            iParam0->_fU4 = 12;
        }
        iParam0->_fU0 = sub_82191( iParam0->_fU4 );
    }
    return;
}

void sub_85907(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    return;
}

void sub_85939(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if (g_U0)
    {
        return;
    }
    iVar4 = 4;
    iVar5 = 0 + iParam1;
    iVar6 = iVar5;
    switch (uParam0)
    {
        case 1:
        if (iVar6 == 4)
        {
            return;
        }
        else
        {
            return;
        }
        break;
        case 6:
        if (iVar6 == 0)
        {
            iVar4 = 0;
        }
        else if (iVar6 == 3)
        {
            iVar4 = 2;
        }
        else
        {
            return;
        }
        break;
        case 7:
        if (iVar6 == 0)
        {
            iVar4 = 1;
        }
        else if (iVar6 == 4)
        {
            iVar4 = 3;
        }
        else
        {
            return;
        }
        break;
        default: return;
    }
    if (iVar4 == 4)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Special_Complete: unknown special ability ID\n" );
        return;
    }
    iVar7 = 0;
    if (NOT g_U38808[iVar4]._fU0)
    {
        iVar7 = ProtectedGet(g_U38808[iVar4]._fU8);
        if (iVar7 > 0)
        {
            sub_86251( 4, iVar7 );
            g_U38808[iVar4]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_86251(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_48495( 0 );
    return;
}

void sub_86846(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = -10;
        break;
        default:
        sub_24994( "Flow_Friend_No_Contact_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_86987( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_86987( uParam0, 0, iVar4 );
    return;
}

void sub_86987(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12306[uParam0]._fU40[uParam1] += iParam2;
    if (g_U12306[uParam0]._fU40[uParam1] < 0)
    {
        g_U12306[uParam0]._fU40[uParam1] = 0;
    }
    if (g_U12306[uParam0]._fU40[uParam1] > 100)
    {
        g_U12306[uParam0]._fU40[uParam1] = 100;
    }
    return;
}

void sub_87172(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = 0;
        break;
        default:
        sub_24994( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_86987( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_86987( uParam0, 0, iVar4 );
    return;
}

void sub_87338(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = -5;
        break;
        default:
        sub_24994( "Flow_Friend_No_Show_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_86987( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_86987( uParam0, 0, iVar4 );
    return;
}

void sub_87512(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = -5;
        break;
        default:
        sub_24994( "Flow_Hospital_No_Pickup_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_86987( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_86987( uParam0, 0, iVar4 );
    return;
}

void sub_87818(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 - 0;
    g_U12306[uParam0]._fU144[iVar4]._fU0 = 1;
    return;
}

void sub_87921(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 - 0;
    g_U12306[uParam0]._fU144[iVar4]._fU0 = 0;
    g_U12306[uParam0]._fU144[iVar4]._fU20 = 0;
    return;
}

void sub_88047(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    SET_BIT( ref g_U12306[uParam0]._fU116, uVar4 );
    return;
}

void sub_88151(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int Result;
    int I;

    Result = 1;
    if (IS_BIT_SET( uParam1, 1 ))
    {
        if (NOT (sub_88180( uParam0 )))
        {
            Result = 0;
        }
    }
    if (IS_BIT_SET( uParam1, 3 ))
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (NOT (sub_88388( uParam0, I )))
            {
                Result = 0;
            }
        }
    }
    if (IS_BIT_SET( uParam1, 2 ))
    {
        if (NOT (sub_88551( uParam0 )))
        {
            Result = 0;
        }
        if (NOT (sub_88762( uParam0 )))
        {
            Result = 0;
        }
    }
    uVar4 = sub_56580( uParam0 );
    if (IS_BIT_SET( uParam1, 4 ))
    {
        if (NOT (sub_88974( uVar4 )))
        {
            Result = 0;
        }
    }
    if (IS_BIT_SET( uParam1, 5 ))
    {
        if (NOT (sub_89028( uVar4 )))
        {
            Result = 0;
        }
    }
    g_U12306[uParam0]._fU112 = uParam1;
    return Result;
}

int sub_88180(unknown uParam0)
{
    unknown uVar3;

    if (g_U14838[uParam0]._fU160._fU96)
    {
        return 0;
    }
    if (g_U14838[uParam0]._fU160._fU4)
    {
        return 1;
    }
    uVar3 = sub_56580( uParam0 );
    if (g_U14838[uParam0]._fU160._fU8)
    {
        g_U15862[uVar3]._fU8[0]._fU0[5] = 0;
    }
    g_U14838[uParam0]._fU160._fU108._fU0 = 0;
    g_U14838[uParam0]._fU160._fU4 = 1;
    return 1;
}

int sub_88388(unknown uParam0, unknown uParam1)
{
    if (g_U12306[uParam0]._fU144[uParam1]._fU32)
    {
        return 1;
    }
    if (sub_72998( uParam0, uParam1 ))
    {
        if (g_U12306[uParam0]._fU144[uParam1]._fU84)
        {
            return 0;
        }
    }
    g_U12306[uParam0]._fU144[uParam1]._fU32 = 1;
    return 1;
}

int sub_88551(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = sub_56580( uParam0 );
    if (g_U18635[uVar3]._fU4)
    {
        return 1;
    }
    if ((NOT (g_U14838[uParam0]._fU80._fU0 == 0)) || (g_U38847[sub_88613( uVar3 )]._fU0))
    {
        return 0;
    }
    uVar4 = sub_88613( uVar3 );
    if (g_U38847[uVar4]._fU0)
    {
        return 0;
    }
    g_U18635[uVar3]._fU4 = 1;
    return 1;
}

int sub_88613(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 6: return 1;
        case 7: return 2;
    }
    return 3;
}

int sub_88762(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_56580( uParam0 );
    if (NOT g_U18635[uVar3]._fU704._fU0)
    {
        return 1;
    }
    if (NOT g_U18635[uVar3]._fU704._fU4)
    {
        return 1;
    }
    if (g_U18635[uVar3]._fU704._fU24)
    {
        return 0;
    }
    if (g_U18635[uVar3]._fU704._fU16)
    {
        return 0;
    }
    if (g_U18635[uVar3]._fU704._fU20)
    {
        return 0;
    }
    g_U18635[uVar3]._fU704._fU12 = 1;
    return 0;
}

int sub_88974(unknown uParam0)
{
    g_U20807[uParam0] = 1;
    return 1;
}

int sub_89028(unknown uParam0)
{
    g_U20830[uParam0] = 1;
    return 1;
}

void sub_89148(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int I;

    uVar4 = g_U12306[uParam0]._fU112;
    if (IS_BIT_SET( uVar4, 1 ))
    {
        sub_89191( uParam0 );
    }
    if (IS_BIT_SET( uVar4, 3 ))
    {
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            sub_89361( uParam0, I );
        }
    }
    if (IS_BIT_SET( uVar4, 2 ))
    {
        sub_89432( uParam0 );
    }
    uVar3 = sub_56580( uParam0 );
    if (IS_BIT_SET( uVar4, 4 ))
    {
        sub_89498( uVar3 );
    }
    if (IS_BIT_SET( uVar4, 5 ))
    {
        sub_89542( uVar3 );
    }
    g_U12306[uParam0]._fU112 = 0;
    g_U12306[uParam0]._fU28 = 1;
    return;
}

void sub_89191(unknown uParam0)
{
    unknown uVar3;

    g_U14838[uParam0]._fU160._fU4 = 0;
    g_U14838[uParam0]._fU160._fU108._fU0 = 1;
    if (NOT g_U14838[uParam0]._fU160._fU0)
    {
        return;
    }
    uVar3 = sub_56580( uParam0 );
    if (g_U14838[uParam0]._fU160._fU8)
    {
        g_U15862[uVar3]._fU8[0]._fU0[5] = 1;
    }
    return;
}

void sub_89361(unknown uParam0, unknown uParam1)
{
    g_U12306[uParam0]._fU144[uParam1]._fU32 = 0;
    return;
}

void sub_89432(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_56580( uParam0 );
    g_U18635[uVar3]._fU4 = 0;
    return;
}

void sub_89498(unknown uParam0)
{
    g_U20807[uParam0] = 0;
    return;
}

void sub_89542(unknown uParam0)
{
    g_U20830[uParam0] = 0;
    return;
}

int sub_89649(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    SET_BIT( ref iVar3, 1 );
    SET_BIT( ref iVar3, 2 );
    SET_BIT( ref iVar3, 3 );
    SET_BIT( ref iVar3, 4 );
    SET_BIT( ref iVar3, 5 );
    if (NOT (sub_88151( uParam0, iVar3 )))
    {
        return 0;
    }
    g_U12306[uParam0]._fU108 = 1;
    return 1;
}

void sub_89799(unknown uParam0)
{
    sub_89148( uParam0 );
    g_U12306[uParam0]._fU108 = 0;
    return;
}

void sub_89892(unknown uParam0, unknown uParam1)
{
    g_U18635[uParam0]._fU704._fU0 = 1;
    g_U18635[uParam0]._fU704._fU164 = uParam1;
    return;
}

void sub_89990()
{
    return;
}

void sub_90054(unknown uParam0)
{
    g_U10994[uParam0]._fU0 = 1;
    SET_INT_STAT( 363, uParam0 );
    sub_90089( uParam0 );
    sub_37474();
    sub_19871();
    sub_90127();
    return;
}

void sub_90089(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    return;
}

void sub_90127()
{
    unknown uVar2;
    unknown uVar3;

    uVar2 = GET_INT_STAT( 363 );
    uVar3 = uVar2;
    switch (uVar3)
    {
        case 0:
        case 1:
        if (NOT g_U15728[1])
        {
            ProtectedSet(g_U11001, 2);
        }
        else
        {
            ProtectedSet(g_U11001, 4);
        }
        break;
        case 2:
        ProtectedSet(g_U11001, 5);
        break;
        case 3:
        ProtectedSet(g_U11001, 6);
        break;
        default: SCRIPT_ASSERT( "Update_Max_Wanted_Level_For_Game: Unknown Map Area" );
    }
    return;
}

void sub_90370(unknown uParam0)
{
    return g_U10994[uParam0]._fU0;
}

void sub_90453(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_90468( uVar3 );
    return;
}

void sub_90468(unknown uParam0)
{
    g_U11370._fU0[uParam0] = 1;
    sub_37474();
    return;
}

void sub_90559(int iParam0)
{
    g_U11005[iParam0]._fU0 = 1;
    if (NOT (DOES_BLIP_EXIST( g_U11005[iParam0]._fU32 )))
    {
        ADD_BLIP_FOR_CONTACT( g_U11005[iParam0]._fU8._fU0, g_U11005[iParam0]._fU8._fU4, g_U11005[iParam0]._fU8._fU8, ref g_U11005[iParam0]._fU32 );
        CHANGE_BLIP_DISPLAY( g_U11005[iParam0]._fU32, 2 );
        CHANGE_BLIP_SPRITE( g_U11005[iParam0]._fU32, g_U11005[iParam0]._fU36 );
        CHANGE_BLIP_PRIORITY( g_U11005[iParam0]._fU32, 0 );
        ENABLE_SAVE_HOUSE( g_U11005[iParam0]._fU4, 1 );
        if (NOT g_U26737._fU4)
        {
            CHANGE_BLIP_DISPLAY( g_U11005[iParam0]._fU32, 0 );
        }
        sub_52446();
        sub_51518( "**********************************\n" );
        sub_51518( "*                                *\n" );
        sub_51518( "*       ADD SAVE HOUSE BLIP      *\n" );
        sub_51518( "*                                *\n" );
        sub_51518( "**********************************\n" );
        sub_52446();
    }
    sub_37474();
    if (iParam0 == 1)
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 63582, 65475, 7, 0, 0.00000000 );
    }
    return;
}

void sub_91118(unknown uParam0)
{
    g_U11005[uParam0]._fU0 = 0;
    ENABLE_SAVE_HOUSE( g_U11005[uParam0]._fU4, 0 );
    if (DOES_BLIP_EXIST( g_U11005[uParam0]._fU32 ))
    {
        REMOVE_BLIP( g_U11005[uParam0]._fU32 );
        sub_52446();
        sub_51518( "**********************************\n" );
        sub_51518( "*                                *\n" );
        sub_51518( "*     REMOVE SAVE HOUSE BLIP     *\n" );
        sub_51518( "*                                *\n" );
        sub_51518( "**********************************\n" );
        sub_52446();
    }
    sub_37474();
    return;
}

void sub_91492(unknown uParam0)
{
    g_U10789[uParam0]._fU0 = 1;
    return;
}

void sub_91574(unknown uParam0)
{
    g_U10789[uParam0]._fU0 = 0;
    return;
}

void sub_91655(unknown uParam0)
{
    g_U10767[uParam0]._fU0 = 1;
    return;
}

void sub_91738(unknown uParam0)
{
    g_U10767[uParam0]._fU0 = 0;
    return;
}

void sub_91804()
{
    g_U2771 = 0;
    g_U2777 = 1;
    return;
}

void sub_91866()
{
    g_U38713 = 1;
    return;
}

void sub_91929()
{
    g_U21 = 1;
    return;
}

void sub_91988()
{
    SET_NO_RESPRAYS( 0 );
    return;
}

void sub_92058(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_92073( uVar3 );
    return;
}

void sub_92073(int iParam0)
{
    if (iParam0 < 15)
    {
        SWITCH_CAR_GENERATOR( g_U9502[iParam0], 101 );
        g_U9261[iParam0]._fU60 = 0;
    }
    return;
}

void sub_92197(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_92212( uVar3 );
    return;
}

void sub_92212(unknown uParam0)
{
    char[16] cVar3;
    char[16] cVar7;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar3, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar7, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar3, "PD_DMITIRI", 16 );
        StrCopy( ref cVar7, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar3, "PD_JACOB", 16 );
        StrCopy( ref cVar7, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar3, "PD_TEAFORE", 16 );
        StrCopy( ref cVar7, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar3, "PD_MANNY", 16 );
        StrCopy( ref cVar7, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar3, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar7, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar3, "PD_BRUCIE", 16 );
        StrCopy( ref cVar7, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar3, "PD_RAY", 16 );
        StrCopy( ref cVar7, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar3, "PD_PHIL", 16 );
        StrCopy( ref cVar7, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar3, "PD_VLAD", 16 );
        StrCopy( ref cVar7, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar3, "PD_TREY", 16 );
        StrCopy( ref cVar7, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar3, "PD_DWAYNE", 16 );
        StrCopy( ref cVar7, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar3, "PD_PACKIE", 16 );
        StrCopy( ref cVar7, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar3, "PD_GERRY", 16 );
        StrCopy( ref cVar7, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar3, "PD_ED", 16 );
        StrCopy( ref cVar7, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar3, "PD_CLARENCE", 16 );
        StrCopy( ref cVar7, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar3, "PD_MARNIE", 16 );
        StrCopy( ref cVar7, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar3, "PD_IVAN", 16 );
        StrCopy( ref cVar7, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar3, "PD_GRACIE", 16 );
        StrCopy( ref cVar7, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar3, "PD_TOM", 16 );
        StrCopy( ref cVar7, "PD_RIVAS", 16 );
        break;
    }
    sub_93087( ref cVar3, ref cVar7 );
    return;
}

void sub_93087(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_15143( uParam0, uParam1 );
    if (iVar4 != -1)
    {
        g_U2818[iVar4]._fU180 = 1;
        g_U2818[iVar4]._fU212 = 1;
    }
    return;
}

void sub_93228(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_93244( uVar3, 1 );
    return;
}

void sub_93244(unknown uParam0, unknown uParam1)
{
    char[16] cVar4;
    char[16] cVar8;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar4, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar8, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar4, "PD_DMITIRI", 16 );
        StrCopy( ref cVar8, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar4, "PD_JACOB", 16 );
        StrCopy( ref cVar8, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar4, "PD_TEAFORE", 16 );
        StrCopy( ref cVar8, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar4, "PD_MANNY", 16 );
        StrCopy( ref cVar8, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar8, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "PD_BRUCIE", 16 );
        StrCopy( ref cVar8, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "PD_RAY", 16 );
        StrCopy( ref cVar8, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "PD_PHIL", 16 );
        StrCopy( ref cVar8, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "PD_VLAD", 16 );
        StrCopy( ref cVar8, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "PD_TREY", 16 );
        StrCopy( ref cVar8, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "PD_DWAYNE", 16 );
        StrCopy( ref cVar8, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "PD_PACKIE", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "PD_GERRY", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "PD_ED", 16 );
        StrCopy( ref cVar8, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "PD_CLARENCE", 16 );
        StrCopy( ref cVar8, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "PD_MARNIE", 16 );
        StrCopy( ref cVar8, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "PD_IVAN", 16 );
        StrCopy( ref cVar8, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "PD_GRACIE", 16 );
        StrCopy( ref cVar8, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "PD_TOM", 16 );
        StrCopy( ref cVar8, "PD_RIVAS", 16 );
        break;
    }
    sub_94142( ref cVar4, ref cVar8, uParam1 );
    return;
}

void sub_94142(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = sub_15143( uParam0, uParam1 );
    if (iVar5 != -1)
    {
        g_U2818[iVar5]._fU192 = uParam2;
    }
    return;
}

void sub_94269(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_94285( uVar3, 1 );
    return;
}

void sub_94285(unknown uParam0, unknown uParam1)
{
    char[16] cVar4;
    char[16] cVar8;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar4, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar8, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar4, "PD_DMITIRI", 16 );
        StrCopy( ref cVar8, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar4, "PD_JACOB", 16 );
        StrCopy( ref cVar8, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar4, "PD_TEAFORE", 16 );
        StrCopy( ref cVar8, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar4, "PD_MANNY", 16 );
        StrCopy( ref cVar8, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar8, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "PD_BRUCIE", 16 );
        StrCopy( ref cVar8, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "PD_RAY", 16 );
        StrCopy( ref cVar8, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "PD_PHIL", 16 );
        StrCopy( ref cVar8, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "PD_VLAD", 16 );
        StrCopy( ref cVar8, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "PD_TREY", 16 );
        StrCopy( ref cVar8, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "PD_DWAYNE", 16 );
        StrCopy( ref cVar8, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "PD_PACKIE", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "PD_GERRY", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "PD_ED", 16 );
        StrCopy( ref cVar8, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "PD_CLARENCE", 16 );
        StrCopy( ref cVar8, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "PD_MARNIE", 16 );
        StrCopy( ref cVar8, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "PD_IVAN", 16 );
        StrCopy( ref cVar8, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "PD_GRACIE", 16 );
        StrCopy( ref cVar8, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "PD_TOM", 16 );
        StrCopy( ref cVar8, "PD_RIVAS", 16 );
        break;
    }
    sub_15130( ref cVar4, ref cVar8, uParam1 );
    return;
}

void sub_95258(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_95274( uVar3, 1 );
    sub_94285( uVar3, 0 );
    sub_93244( uVar3, 0 );
    return;
}

void sub_95274(unknown uParam0, boolean bParam1)
{
    char[16] cVar4;
    char[16] cVar8;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar4, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar8, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar4, "PD_DMITIRI", 16 );
        StrCopy( ref cVar8, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar4, "PD_JACOB", 16 );
        StrCopy( ref cVar8, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar4, "PD_TEAFORE", 16 );
        StrCopy( ref cVar8, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar4, "PD_MANNY", 16 );
        StrCopy( ref cVar8, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar8, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "PD_BRUCIE", 16 );
        StrCopy( ref cVar8, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "PD_RAY", 16 );
        StrCopy( ref cVar8, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "PD_PHIL", 16 );
        StrCopy( ref cVar8, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "PD_VLAD", 16 );
        StrCopy( ref cVar8, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "PD_TREY", 16 );
        StrCopy( ref cVar8, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "PD_DWAYNE", 16 );
        StrCopy( ref cVar8, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "PD_PACKIE", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "PD_GERRY", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "PD_ED", 16 );
        StrCopy( ref cVar8, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "PD_CLARENCE", 16 );
        StrCopy( ref cVar8, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "PD_MARNIE", 16 );
        StrCopy( ref cVar8, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "PD_IVAN", 16 );
        StrCopy( ref cVar8, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "PD_GRACIE", 16 );
        StrCopy( ref cVar8, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "PD_TOM", 16 );
        StrCopy( ref cVar8, "PD_RIVAS", 16 );
        break;
    }
    if (bParam1)
    {
        sub_96178( ref cVar4, ref cVar8, 0 );
    }
    else
    {
        sub_96178( ref cVar4, ref cVar8, 1 );
    }
    return;
}

void sub_96178(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    if ((DOES_TEXT_LABEL_EXIST( uParam0 )) AND (DOES_TEXT_LABEL_EXIST( uParam1 )))
    {
        for ( I = 0; I <= 99; I++ )
        {
            if ((COMPARE_STRING( ref g_U2818[I]._fU16, uParam0 )) AND (COMPARE_STRING( ref g_U2818[I]._fU0, uParam1 )))
            {
                g_U2818[I]._fU208 = uParam2;
            }
        }
    }
    return;
}

void sub_96405(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_15380( uVar3, 3 );
    return;
}

void sub_96483(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_15380( uVar3, 1 );
    return;
}

void sub_96562(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_15380( uVar3, 2 );
    return;
}

void sub_96638(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_15380( uVar3, 0 );
    return;
}

void sub_96716(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_96732( uVar3, 1 );
    return;
}

void sub_96732(int iParam0, unknown uParam1)
{
    if (iParam0 <= 2)
    {
        g_U1429[iParam0] = uParam1;
    }
    return;
}

void sub_96824(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_96839( uVar3 );
    return;
}

void sub_96839(int iParam0)
{
    if (iParam0 >= g_U1455)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_96926( iParam0 ))
    {
        sub_97392( iParam0 );
    }
    return;
}

int sub_96926(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1455[uParam0], 20 )) || (IS_BIT_SET( g_U1455[uParam0], 21 )))
    {
        return 0;
    }
    sub_81975( ref uVar3, 1, 0, 0 );
    sub_96999( uVar3, ref g_U1455[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1455[uParam0], 22, 31, g_U1455[0] );
    g_U1455[0]++;
    SET_BIT( ref g_U1455[uParam0], 20 );
    sub_57850( "\n ----------------------------------------------------------------" );
    sub_97285( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_57850( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_96999(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_97285(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_97392(unknown uParam0)
{
    return;
}

void sub_97473(unknown uParam0)
{
    UNLOCK_MISSION_NEWS_STORY( uParam0 );
    return;
}

void sub_97538()
{
    SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_7787(), 1 );
    return;
}

void sub_97609()
{
    SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( sub_7787(), 0 );
    return;
}

void sub_97702(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = uParam0;
    uVar5 = uParam1;
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 1, uVar4, uVar5 );
    return;
}

void sub_97813(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = uParam0;
    uVar5 = uParam1;
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, uVar4, uVar5 );
    return;
}

void sub_97924(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = uParam0;
    uVar5 = uParam1;
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 3, uVar4, uVar5 );
    return;
}

void sub_98032(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = uParam0;
    uVar5 = uParam1;
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 5, uVar4, uVar5 );
    return;
}

void sub_98134(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U12306[uParam0]._fU40[uParam1] = uParam2;
    g_U12306[uParam0]._fU56[uParam1] = uParam2;
    return;
}

void sub_98255(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = sub_72776( uParam0 );
    sub_86987( uVar5, uParam1, uParam2 );
    return;
}

void sub_98330(unknown uParam0, unknown uParam1)
{
    g_U12306[uParam0]._fU72 = uParam1;
    return;
}

int sub_98460(unknown uParam0, int iParam1, int iParam2)
{
    if (iParam1 > 3)
    {
        if (ProtectedGet(g_U20902[iParam1]) >= iParam2)
        {
            return 1;
        }
    }
    else if (g_U12306[uParam0]._fU40[iParam1] >= iParam2)
    {
        return 1;
    }
    if (IS_KEYBOARD_KEY_PRESSED( 25 ))
    {
        sub_51518( "*************** DEBUG: STAT SET TO REQUIRED TARGET ******************\n" );
        if (iParam1 > 3)
        {
            ProtectedSet(g_U20902[iParam1], iParam2);
        }
        else
        {
            g_U12306[uParam0]._fU40[iParam1] = iParam2;
        }
        return 1;
    }
    return 0;
}

void sub_99018(int iParam0)
{
    if (g_U28062 >= iParam0)
    {
        return;
    }
    g_U28062 = iParam0;
    return;
}

int sub_99107(int iParam0)
{
    if (g_U28062 >= iParam0)
    {
        return 1;
    }
    return 0;
}

int sub_99357(unknown uParam0)
{
    if (NOT (g_U12306[uParam0]._fU16 == -1))
    {
        return 1;
    }
    return 0;
}

int sub_99482(unknown uParam0)
{
    if (g_U12306[uParam0]._fU16 == -1)
    {
        return 0;
    }
    if (g_U12306[uParam0]._fU8)
    {
        return 0;
    }
    return 1;
}

void sub_99598(unknown uParam0)
{
    if (g_U15709[uParam0])
    {
        sub_51310( "Flow_Set_Sync: Synchronisation flag already set" );
        return;
    }
    sub_51518( "Sending Synchronisation signal\n" );
    g_U15709[uParam0] = 1;
    return;
}

int sub_99783(unknown uParam0)
{
    if (NOT g_U15709[uParam0])
    {
        return 0;
    }
    sub_51518( "Received Synchronisation signal\n" );
    g_U15709[uParam0] = 0;
    return 1;
}

int sub_99923(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_99946( ref g_U12306[uParam0]._fU124 )))
    {
        if (g_U0)
        {
            sub_81975( ref g_U12306[uParam0]._fU124, 0, 2, 0 );
        }
        else
        {
            sub_81975( ref g_U12306[uParam0]._fU124, 0, uParam1, 0 );
        }
        return 0;
    }
    if (NOT (sub_56964( g_U12306[uParam0]._fU124 )))
    {
        return 0;
    }
    sub_1000( ref g_U12306[uParam0]._fU124 );
    return 1;
}

int sub_99946(int iParam0)
{
    if (((((ref iParam0->_fU0->_fU4) == -1) AND ((ref iParam0->_fU0->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU4) == -1))
    {
        return 0;
    }
    return 1;
}

void sub_100195(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (g_U12303)
    {
        return 0;
    }
    uVar4._fU0 = uParam0;
    uVar4._fU4 = 0;
    uVar6._fU0 = uParam1;
    uVar6._fU4 = 0;
    return sub_100246( uVar4, uVar6 );
}

int sub_100246(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    boolean bVar8;

    if ((uParam0._fU0 < 0) || (uParam0._fU0 >= 24))
    {
        sub_24994( "KM_Is_Now_Time_Between_Start_End_Times: Start Hours Error" );
        return 0;
    }
    if ((uParam0._fU4 < 0) || (uParam0._fU4 >= 60))
    {
        sub_24994( "KM_Is_Now_Time_Between_Start_End_Times: Start Minutes Error" );
        return 0;
    }
    if ((uParam2._fU0 < 0) || (uParam2._fU0 >= 24))
    {
        sub_24994( "KM_Is_Now_Time_Between_Start_End_Times: End Hours Error" );
        return 0;
    }
    if ((uParam2._fU4 < 0) || (uParam2._fU4 >= 60))
    {
        sub_24994( "KM_Is_Now_Time_Between_Start_End_Times: End Minutes Error" );
        return 0;
    }
    GET_TIME_OF_DAY( ref uVar6._fU0, ref uVar6._fU4 );
    bVar8 = sub_100626( uParam2, uParam0 );
    if (NOT bVar8)
    {
        if (sub_100626( uVar6, uParam0 ))
        {
            return 0;
        }
        if (sub_100626( uParam2, uVar6 ))
        {
            return 0;
        }
        return 1;
    }
    if (sub_100750( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_100626( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_100626( uVar6, uParam2 ))
    {
        return 1;
    }
    return 0;
}

boolean sub_100626(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

boolean sub_100750(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (uParam0._fU0 == uParam2._fU0))
    {
        return 0;
    }
    return uParam0._fU4 == uParam2._fU4;
}

int sub_100915(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    if (g_U12306[uParam0]._fU120 == 0)
    {
        g_U12306[uParam0]._fU120 = iVar4 + iParam1;
        return 0;
    }
    if (iVar4 < g_U12306[uParam0]._fU120)
    {
        return 0;
    }
    g_U12306[uParam0]._fU120 = 0;
    return 1;
}

void sub_101146(unknown uParam0)
{
    sub_101157( uParam0 );
    return;
}

void sub_101157(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_101168( uParam0 );
    if (NOT g_U27892[uVar3]._fU0)
    {
        return;
    }
    g_U27892[uVar3]._fU4 = 1;
    g_U27892[uVar3]._fU28 = 1;
    sub_85572( ref g_U27892[uVar3]._fU8 );
    g_U27892[uVar3]._fU24 = 1;
    sub_101386( uParam0, uVar3 );
    return;
}

int sub_101168(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_101179( uParam0 )))
    {
        sub_24994( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 13;
}

int sub_101179(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 13))
    {
        return 0;
    }
    iVar4 = 16;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_101386(unknown uParam0, unknown uParam1)
{
    sub_5960( uParam1 );
    switch (uParam0)
    {
        case 13:
        if (g_U27892[uParam1]._fU28 == 1)
        {
            g_U27892[uParam1]._fU36 = 1;
            g_U27892[uParam1]._fU40 = {-1545.65100000, 240.58030000, 11.27330000};
            g_U27892[uParam1]._fU52 = 1;
            StrCopy( ref g_U27892[uParam1]._fU60, "Brian", 16 );
        }
        break;
        case 14:
        if (g_U27892[uParam1]._fU28 == 1)
        {
            g_U27892[uParam1]._fU36 = 1;
            g_U27892[uParam1]._fU40 = {80.08340000, -676.33230000, 13.76880000};
            g_U27892[uParam1]._fU52 = 1;
            StrCopy( ref g_U27892[uParam1]._fU60, "Dave", 16 );
        }
        break;
        case 15:
        if (g_U27892[uParam1]._fU28 == 1)
        {
            g_U27892[uParam1]._fU36 = 1;
            g_U27892[uParam1]._fU40 = {-390.02670000, 1555.97400000, 18.81370000};
            g_U27892[uParam1]._fU52 = 1;
            StrCopy( ref g_U27892[uParam1]._fU60, "malc1", 16 );
        }
        else if (g_U27892[uParam1]._fU28 == 2)
        {
            g_U27892[uParam1]._fU36 = 1;
            g_U27892[uParam1]._fU40 = {-326.07810000, 1604.70800000, 19.27800000};
            g_U27892[uParam1]._fU52 = 1;
            StrCopy( ref g_U27892[uParam1]._fU60, "malc2", 16 );
        }
        break;
    }
    return;
}

int sub_101935(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (IS_PLAYER_PLAYING( sub_7787() ))
    {
        return 1;
    }
    if (HAS_CHAR_GOT_WEAPON( sub_15549(), uParam1 ))
    {
        return 1;
    }
    REQUEST_MODEL( uParam0 );
    if (NOT (HAS_MODEL_LOADED( uParam0 )))
    {
        REQUEST_MODEL( uParam0 );
        return 0;
    }
    GIVE_WEAPON_TO_CHAR( sub_15549(), uParam1, uParam2, 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( uParam0 );
    return 1;
}

void sub_102117(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 3;
    if (iParam1 >= iVar4)
    {
        sub_24994( "Flow_Change_Clothes: Clothes set out of range" );
    }
    iVar5 = iParam1;
    g_U38647[uParam0] = iVar5;
    return;
}

void sub_102268(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    g_U15728[uVar3] = 1;
    return;
}

void sub_102398(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    g_U15728[uVar3] = 0;
    return;
}

void sub_102468(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    return g_U15728[uVar3];
}

void sub_102740(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (g_U12306[uParam0]._fU20 == -1))
    {
        sub_51310( "Flow_Gosub_Label: Nested GOSUBs are not allowed." );
    }
    g_U12306[uParam0]._fU20 = g_U12306[uParam0]._fU16;
    sub_64974( uParam0, uParam1, uParam2 );
    return;
}

void sub_102901(unknown uParam0)
{
    if (g_U12306[uParam0]._fU20 == -1)
    {
        sub_51310( "Flow_Return_From_Gosub: There is no Sequence to return to." );
    }
    g_U12306[uParam0]._fU16 = g_U12306[uParam0]._fU20;
    g_U12306[uParam0]._fU20 = -1;
    return;
}

int sub_103075()
{
    if ((# -NULL-0xc27c84()) || (# -NULL-0xc27bfa()))
    {
        return 0;
    }
    return 1;
}

void sub_103190(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_103203( uParam0, -1 );
}

int sub_103203(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    if (g_U12303)
    {
        return 0;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U815 ))
    {
        return 0;
    }
    if (sub_103263())
    {
        return 0;
    }
    if (((g_U10974._fU0) || (g_U10974._fU4)) || (IS_AUTO_SAVE_IN_PROGRESS()))
    {
        return 0;
    }
    if (iParam4 == -1)
    {
        PRINT_HELP( ref uParam0 );
        return 1;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    PRINT_HELP_FOREVER( ref uParam0 );
    g_U15847._fU0 = {uParam0};
    g_U15847._fU16 = iVar7 + iParam4;
    return 1;
}

int sub_103263()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_103592(unknown uParam0)
{
    unknown uVar3;

    g_U12306[uParam0]._fU4 = 1;
    uVar3 = sub_56580( uParam0 );
    sub_84308( uVar3 );
    sub_51518( "****** STRAND DEACTIVATING *******\n" );
    sub_103676( uParam0 );
    g_U15862[uVar3]._fU196._fU0 = 0;
    return;
}

void sub_103676(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;
    int I;

    if (NOT g_U12306[uParam0]._fU8)
    {
        return;
    }
    if (NOT g_U12306[uParam0]._fU4)
    {
        return;
    }
    bVar3 = false;
    uVar4 = sub_56580( uParam0 );
    if ((g_U14838[uParam0]._fU80._fU0 == 0) || (g_U14838[uParam0]._fU80._fU0 == 1))
    {
        sub_43456( uParam0 );
        g_U18635[uVar4]._fU0 = 0;
    }
    else
    {
        bVar3 = true;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U12306[uParam0]._fU144[I]._fU0 = 0;
    }
    if (g_U14838[uParam0]._fU160._fU0)
    {
        if (g_U14838[uParam0]._fU160._fU80)
        {
            if (NOT g_U14838[uParam0]._fU160._fU96)
            {
                sub_103937( uParam0 );
            }
            else
            {
                bVar3 = true;
            }
        }
        else
        {
            bVar3 = true;
        }
    }
    if ((g_U14838[uParam0]._fU0._fU0 == 0) || (g_U14838[uParam0]._fU0._fU0 == 1))
    {
        sub_50558( uParam0 );
    }
    else
    {
        bVar3 = true;
    }
    if (bVar3)
    {
        return;
    }
    g_U12306[uParam0]._fU8 = 0;
    return;
}

void sub_103937(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U14838[uParam0]._fU160._fU0)
    {
        return;
    }
    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        g_U14838[uParam0]._fU160._fU0 = 0;
        return;
    }
    uVar3 = sub_56580( uParam0 );
    DESTROY_THREAD( g_U14838[uParam0]._fU160._fU104 );
    g_U14838[uParam0]._fU160._fU108._fU0 = 0;
    sub_2559( uParam0 );
    if (g_U14838[uParam0]._fU160._fU8)
    {
        g_U15862[uVar3]._fU8[0]._fU0[5] = 0;
    }
    return;
}

int sub_104886(unknown uParam0, int iParam1)
{
    int iVar4;
    int I;

    if (g_U15824[uParam0]._fU0 == 17)
    {
        return 0;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    if (g_U15824[uParam0]._fU4 < iVar4)
    {
        g_U15824[uParam0]._fU0 = 17;
        g_U15824[uParam0]._fU4 = 0;
        return 0;
    }
    if (g_U12303)
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return 0;
    }
    if (iParam1 < 9)
    {
        if (g_U18635[iParam1]._fU16)
        {
            return 0;
        }
    }
    if (g_U27681)
    {
        return 0;
    }
    if (((((IS_THREAD_ACTIVE( g_U815 )) || (IS_WANTED_LEVEL_GREATER( sub_7787(), 0 ))) || (NOT IS_SCREEN_FADED_IN())) || (sub_69880())) || (sub_71842()))
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10959._fU0, 4 ))
    {
        return 0;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (sub_72998( uParam0, I ))
        {
            if (g_U12306[uParam0]._fU144[I]._fU84)
            {
                return 0;
            }
        }
    }
    if (sub_105212( uParam0 ))
    {
        return 0;
    }
    if (NOT g_U15862[iParam1]._fU196._fU0)
    {
        return 0;
    }
    if (g_U20807[iParam1])
    {
        return 0;
    }
    if (sub_70510( iParam1 ))
    {
        return 0;
    }
    if (NOT (sub_105581( uParam0 )))
    {
        return 0;
    }
    g_U15824[uParam0]._fU0 = 17;
    g_U15824[uParam0]._fU4 = 0;
    sub_48275();
    sub_71020( iParam1, 1 );
    g_U12306[uParam0]._fU28 = 1;
    return 1;
}

int sub_105212(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;

    if (IS_CHAR_DEAD( sub_15549() ))
    {
        return 1;
    }
    iVar3 = -1;
    iVar4 = 0;
    iVar5 = 0;
    bVar6 = false;
    if (g_U14838[uParam0]._fU0._fU0 == 1)
    {
        iVar3 = g_U14838[uParam0]._fU0._fU4;
        iVar4 = sub_44161( uParam0, iVar3 );
        iVar5 = g_U20913[iVar4]._fU16;
        uVar7 = {g_U10686[iVar5]._fU4};
        bVar6 = true;
    }
    if (NOT bVar6)
    {
        uVar10 = sub_56580( uParam0 );
        iVar11 = g_U18635[uVar10]._fU180;
        if (NOT (iVar11 == 16))
        {
            uVar7 = {g_U10789[iVar11]._fU4};
            bVar6 = true;
        }
    }
    if (NOT bVar6)
    {
        return 0;
    }
    GET_CHAR_COORDINATES( sub_15549(), ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
    fVar15 = 0.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar12._fU0, uVar12._fU4, uVar12._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref fVar15 );
    if (fVar15 < 200.00000000)
    {
        return 1;
    }
    return 0;
}

int sub_105581(unknown uParam0)
{
    unknown uVar3;

    uVar3 = g_U15824[uParam0]._fU0;
    switch (uVar3)
    {
        case 0: return sub_58115( "E1MF3_CALL7", "E1MF3AU", 1 );
        case 1: return sub_58115( "E1MF3_CALL8", "E1MF3AU", 1 );
        case 2: return sub_58115( "E1MF2_TS4", "E1MF2AU", 1 );
        case 3: return sub_58115( "E1MF_BEFAB2", "E1MFAU", 1 );
        case 4: return sub_58115( "E1MF_AFTAB1", "E1MFAU", 1 );
        case 5: return sub_58115( "E1MF_BILLY", "E1MFAU", 1 );
        case 6: return sub_58115( "E1MF_AB2", "E1MFAU", 1 );
        case 7: return sub_58115( "E1MF_DEAD", "E1MFAU", 1 );
        case 8: return sub_58115( "E1MF_LIZ2", "E1MF3AU", 1 );
        case 9: return sub_58115( "E1MF_LIZ3", "E1MF3AU", 1 );
        case 10: return sub_58115( "E1MF2_OUT", "E1MF2AU", 1 );
        case 11: return sub_58115( "E1MF2_RESC", "E1MF2AU", 1 );
        case 12: return sub_58115( "E1MF2_BILLY", "E1MF2AU", 1 );
        case 13: return sub_58115( "E1MF2_SHIT", "E1MF2AU", 1 );
        case 14: return sub_58115( "E1MF2_RAY", "E1MF2AU", 1 );
        case 15: return sub_58115( "E1MF2_END", "E1MF2AU", 1 );
    }
    SCRIPT_ASSERT( "Make_Chat_Phonecall: Chat Phonecall ID doesn't have details set up" );
    return 0;
}

void sub_106454()
{
    int iVar2;
    int iVar3;

    iVar2 = 1;
    iVar3 = 1;
    if (g_U12306[iVar2]._fU0)
    {
        sub_106487();
        g_U12306[iVar2]._fU0 = 0;
        sub_49854( iVar2, 1 );
        return;
    }
    if (NOT g_U12306[iVar2]._fU8)
    {
        return;
    }
    sub_49854( iVar2, 0 );
    sub_110495( iVar2 );
    if (sub_110716( iVar3 ))
    {
        sub_110757( iVar3 );
        return;
    }
    if (sub_56436( iVar2 ))
    {
        return;
    }
    sub_115328( iVar3, iVar2 );
    if (sub_127603( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_128060( iVar3, iVar2 ))
    {
        return;
    }
    sub_61820( iVar3, iVar2, ref g_U30224 );
    return;
}

void sub_106487()
{
    sub_50526( 1, 1 );
    sub_106503();
    sub_109196();
    sub_109954();
    sub_110384();
    PRINTSTRING( "Friend_4 Activated\n" );
    return;
}

void sub_106503()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 4;
    iVar3 = 0;
    iVar4 = 108;
    PRINTSTRING( "START: E1 Friend_2_SETUP_MISSION_FLOW\n" );
    sub_52733( ref g_U30224, ref iVar3, iVar4, 1 );
    sub_52337( ref g_U30224, ref iVar3, iVar4, "E1FCJAU", "E1FCJ_ANSP" );
    sub_52479( ref g_U30224, ref iVar3, iVar4, 1 );
    sub_106641( ref g_U30224, ref iVar3, iVar4, iVar2 );
    sub_106747( ref g_U30224, ref iVar3, iVar4, iVar2, 10, 7, 1, 0 );
    sub_53495( ref g_U30224, ref iVar3, iVar4, 0 );
    sub_53366( ref g_U30224, ref iVar3, iVar4, 5 );
    sub_53495( ref g_U30224, ref iVar3, iVar4, 15 );
    sub_53495( ref g_U30224, ref iVar3, iVar4, 16 );
    sub_106960( ref g_U30224, ref iVar3, iVar4 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 1 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 2 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 3 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 4 );
    sub_107188( ref g_U30224, ref iVar3, iVar4, 0 );
    sub_107292( ref g_U30224, ref iVar3, iVar4 );
    sub_107385( ref g_U30224, ref iVar3, iVar4, 6 );
    sub_107385( ref g_U30224, ref iVar3, iVar4, 10 );
    sub_107385( ref g_U30224, ref iVar3, iVar4, 11 );
    sub_107385( ref g_U30224, ref iVar3, iVar4, 12 );
    sub_107385( ref g_U30224, ref iVar3, iVar4, 14 );
    sub_107385( ref g_U30224, ref iVar3, iVar4, 18 );
    sub_107385( ref g_U30224, ref iVar3, iVar4, 20 );
    sub_107385( ref g_U30224, ref iVar3, iVar4, 21 );
    sub_107583( ref g_U30224, ref iVar3, iVar4, 1200, 30, 3, 4 );
    sub_107762( ref g_U30224, ref iVar3, iVar4, "E1MF_JMEET", "E1MFAU", 40000, 20000 );
    sub_107951( ref g_U30224, ref iVar3, iVar4, 180000 );
    sub_54766( ref g_U30224, ref iVar3, iVar4, 1 );
    sub_54766( ref g_U30224, ref iVar3, iVar4, 6 );
    sub_54766( ref g_U30224, ref iVar3, iVar4, 7 );
    sub_52874( ref g_U30224, ref iVar3, iVar4, 0 );
    sub_51690( ref g_U30224, ref iVar3, iVar4, 34 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 5 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 6 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 7 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 8 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 9 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 10 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 11 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 12 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 13 );
    sub_107045( ref g_U30224, ref iVar3, iVar4, 14 );
    sub_51690( ref g_U30224, ref iVar3, iVar4, 25 );
    sub_54766( ref g_U30224, ref iVar3, iVar4, 1 );
    sub_52874( ref g_U30224, ref iVar3, iVar4, 1 );
    sub_53495( ref g_U30224, ref iVar3, iVar4, 3 );
    sub_51690( ref g_U30224, ref iVar3, iVar4, 23 );
    sub_51690( ref g_U30224, ref iVar3, iVar4, 41 );
    sub_53495( ref g_U30224, ref iVar3, iVar4, 17 );
    sub_53366( ref g_U30224, ref iVar3, iVar4, 5 );
    sub_52733( ref g_U30224, ref iVar3, iVar4, 2 );
    sub_52874( ref g_U30224, ref iVar3, iVar4, 2 );
    sub_51690( ref g_U30224, ref iVar3, iVar4, 21 );
    sub_51690( ref g_U30224, ref iVar3, iVar4, 39 );
    sub_53495( ref g_U30224, ref iVar3, iVar4, 15 );
    sub_53495( ref g_U30224, ref iVar3, iVar4, 16 );
    sub_51690( ref g_U30224, ref iVar3, iVar4, 55 );
    sub_53495( ref g_U30224, ref iVar3, iVar4, 12 );
    sub_54581( ref g_U30224, ref iVar3, iVar4, 26 );
    sub_54766( ref g_U30224, ref iVar3, iVar4, 1 );
    sub_54766( ref g_U30224, ref iVar3, iVar4, 6 );
    sub_54766( ref g_U30224, ref iVar3, iVar4, 7 );
    sub_52874( ref g_U30224, ref iVar3, iVar4, 3 );
    sub_52586( ref g_U30224, ref iVar3, iVar4, 5, 0 );
    sub_55278( ref g_U30224, ref iVar3, iVar4, 8, 13 );
    sub_52874( ref g_U30224, ref iVar3, iVar4, 4 );
    sub_52586( ref g_U30224, ref iVar3, iVar4, 1, 0 );
    sub_108604( ref g_U30224, ref iVar3, iVar4, 17, "F2_NOBURN" );
    sub_55126( ref g_U30224, ref iVar3, iVar4, 3, 1, 34, 15000 );
    sub_108788( ref g_U30224, ref iVar3, iVar4, "F2_NEWSH" );
    sub_108901( ref g_U30224, ref iVar3, iVar4, "F2_NOBURN" );
    sub_55126( ref g_U30224, ref iVar3, iVar4, 3, 1, 33, 15000 );
    sub_108901( ref g_U30224, ref iVar3, iVar4, "F2_NEWSH" );
    sub_51690( ref g_U30224, ref iVar3, iVar4, 16 );
    sub_52113( ref g_U30224, ref iVar3, iVar4, 1 );
    sub_54581( ref g_U30224, ref iVar3, iVar4, 28 );
    sub_53495( ref g_U30224, ref iVar3, iVar4, 13 );
    sub_55980( ref g_U30224, ref iVar3, iVar4, 13 );
    sub_53366( ref g_U30224, ref iVar3, iVar4, 6 );
    sub_56139( ref g_U30224, ref iVar3, iVar4 );
    sub_56228( ref g_U30224, ref iVar3, iVar4 );
    PRINTSTRING( "END: E1 Friend_2_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_106641(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 66;
    (uParam0^)[(uParam1^)]._fU4._fU8 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: ADD_SPECIAL_ACTION\n" );
    return;
}

void sub_106747(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 67;
    (uParam0^)[(uParam1^)]._fU4._fU8 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU32 = uParam7;
    sub_51466( uParam1 );
    sub_51518( "SET: ALLOW_SPECIAL_ACTIONS\n" );
    return;
}

void sub_106960(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 109;
    sub_51466( uParam1 );
    sub_51518( "SET: LIKE_MESSAGES_ON\n" );
    return;
}

void sub_107045(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 82;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: ACTIVATE_PICKUP_POINT\n" );
    return;
}

void sub_107188(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 84;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: ACTIVATE_DROPOFF_POINT\n" );
    return;
}

void sub_107292(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 60;
    sub_51466( uParam1 );
    sub_51518( "SET: IGNORE_FRIEND_INTRO_CALL\n" );
    return;
}

void sub_107385(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 62;
    (uParam0^)[(uParam1^)]._fU4._fU8 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: ADD_FRIEND_ACTIVITY\n" );
    return;
}

void sub_107583(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 64;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU32 = uParam6;
    sub_51466( uParam1 );
    sub_51518( "SET: ALLOW_FRIEND_ACTIVITIES\n" );
    return;
}

void sub_107762(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 30;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    sub_51466( uParam1 );
    sub_51518( "SET: PHONE_PLAYER_REPEAT_QUICK: [" );
    sub_51518( uParam4 );
    sub_51518( "] " );
    sub_51518( uParam3 );
    sub_52446();
    return;
}

void sub_107951(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 61;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: FORCE_FRIEND_NEXT_CALL_TIME\n" );
    return;
}

void sub_108604(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 134;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    sub_51466( uParam1 );
    sub_51518( "SET: FLAG_CHECK_FAILGOTO (GOTO " );
    sub_51518( uParam4 );
    sub_51518( " ON FAIL)" );
    sub_52446();
    return;
}

void sub_108788(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 138;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    sub_51466( uParam1 );
    sub_51518( "SET: GOTO " );
    sub_51518( uParam3 );
    sub_52446();
    return;
}

void sub_108901(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 137;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    sub_51466( uParam1 );
    sub_51518( "SET: LABEL: " );
    sub_51518( uParam3 );
    sub_52446();
    return;
}

void sub_109196()
{
    int iVar2;

    iVar2 = 1;
    sub_109212( iVar2, 6, 5 );
    sub_109212( iVar2, 10, 6 );
    sub_109212( iVar2, 11, 7 );
    sub_109212( iVar2, 12, 8 );
    sub_109212( iVar2, 14, 9 );
    sub_109212( iVar2, 18, 10 );
    sub_109212( iVar2, 20, 11 );
    sub_109212( iVar2, 21, 12 );
    sub_109566( iVar2, 13, 16, 11, 4, 1, 30 );
    sub_109779( iVar2, 38, 0, 18, 0 );
    return;
}

void sub_109212(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U18635[uParam0]._fU208[uParam1]._fU0 = uParam2;
    sub_109248( uParam0, uParam1 );
    return;
}

void sub_109248(unknown uParam0, unknown uParam1)
{
    int iVar4;
    unknown uVar5;

    iVar4 = 1;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar4 = 0;
        break;
        default: return;
    }
    switch (uParam1)
    {
        case 6:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 15:
        case 18:
        case 19:
        case 20:
        case 21: break;
        case 14:
        case 17: return;
    }
    return;
    uVar5 = uParam1;
    SET_BIT( 1, uVar5 );
    return;
    break;
    2;
    1;
    ref g_U38805[iVar4]._fU0;
    1;
    ref g_U38805[iVar4]._fU0;
    break;
}

void sub_109566(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    g_U18635[uParam0]._fU104 = uParam1;
    g_U18635[uParam0]._fU108 = uParam2;
    g_U18635[uParam0]._fU136 = uParam5;
    g_U18635[uParam0]._fU160 = uParam6;
    g_U18635[uParam0]._fU124 = iParam3;
    g_U18635[uParam0]._fU128 = iParam3 + iParam4;
    if (g_U18635[uParam0]._fU132 == -1)
    {
        iVar9 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( g_U18635[uParam0]._fU124, g_U18635[uParam0]._fU128, ref iVar9 );
        g_U18635[uParam0]._fU132 = iVar9;
    }
    return;
}

void sub_109779(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U18635[uParam0]._fU892._fU0[I] = 0;
        g_U18635[uParam0]._fU892._fU12[I] = 0;
    }
    g_U18635[uParam0]._fU892._fU24 = uParam1;
    g_U18635[uParam0]._fU892._fU28 = uParam2;
    g_U18635[uParam0]._fU892._fU32 = uParam3;
    g_U18635[uParam0]._fU892._fU36 = uParam4;
    return;
}

void sub_109954()
{
    int iVar2;
    int iVar3;

    iVar2 = 1;
    iVar3 = 4;
    sub_109993( iVar2, iVar3, 13, "abil_weap_pickup" );
    sub_110077( iVar2, iVar3 );
    sub_110132( iVar2, iVar3, 0, 6, 0, 0 );
    return;
}

void sub_109993(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    sub_109212( uParam0, iParam1, uParam2 );
    iVar6 = iParam1 - 0;
    StrCopy( ref g_U18635[uParam0]._fU300[iVar6]._fU4, uParam3, 32 );
    g_U18635[uParam0]._fU300[iVar6]._fU0 = 0;
    return;
}

void sub_110077(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 - 0;
    g_U18635[uParam0]._fU300[iVar4]._fU36 = 1;
    return;
}

void sub_110132(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, unknown uParam5)
{
    int iVar8;

    if (((iParam2 == 0) AND (iParam3 == 0)) AND (iParam4 == 0))
    {
        return;
    }
    iVar8 = iParam1 - 0;
    g_U18635[uParam0]._fU300[iVar8]._fU40 = 1;
    g_U18635[uParam0]._fU300[iVar8]._fU44 = uParam5;
    g_U18635[uParam0]._fU300[iVar8]._fU48._fU0._fU4 = 0;
    g_U18635[uParam0]._fU300[iVar8]._fU48._fU0._fU0 = iParam2;
    g_U18635[uParam0]._fU300[iVar8]._fU48._fU8._fU0 = iParam3;
    g_U18635[uParam0]._fU300[iVar8]._fU48._fU8._fU4 = iParam4;
    sub_1000( ref g_U18635[uParam0]._fU300[iVar8]._fU64 );
    return;
}

void sub_110384()
{
    return;
}

void sub_110495(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = g_U12306[uParam0]._fU40[0];
    if (iVar3 == g_U12306[uParam0]._fU56[0])
    {
        return;
    }
    g_U12306[uParam0]._fU56[0] = iVar3;
    uVar4 = TO_FLOAT( iVar3 );
    switch (uParam0)
    {
        case 1:
        sub_50053( 123 );
        SET_FLOAT_STAT( 123, uVar4 );
        break;
        case 6:
        sub_50053( 129 );
        SET_FLOAT_STAT( 129, uVar4 );
        break;
        case 7:
        sub_50053( 131 );
        SET_FLOAT_STAT( 131, uVar4 );
        break;
        default: return;
    }
    return;
}

void sub_110716(unknown uParam0)
{
    return g_U18635[uParam0]._fU704._fU4;
}

void sub_110757(unknown uParam0)
{
    string sVar3;
    int iVar4;
    unknown uVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;

    sVar3 = "HospitalPickUp";
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    uVar5 = sub_72776( uParam0 );
    if (sub_57746( uVar5 ))
    {
        return;
    }
    if ((g_U12303) || (IS_THREAD_ACTIVE( g_U815 )))
    {
        if ((NOT g_U18635[uParam0]._fU704._fU16) AND (NOT g_U18635[uParam0]._fU704._fU20))
        {
            g_U18635[uParam0]._fU704._fU168 = iVar4 + (sub_110889( uParam0 ));
            return;
        }
    }
    if (g_U18635[uParam0]._fU704._fU24)
    {
        if (IS_THREAD_ACTIVE( g_U18635[uParam0]._fU704._fU180 ))
        {
            return;
        }
        if (g_U18635[uParam0]._fU704._fU180 != nil)
        {
            DESTROY_THREAD( g_U18635[uParam0]._fU704._fU180 );
            g_U18635[uParam0]._fU704._fU180 = nil;
        }
        bVar6 = g_U18635[uParam0]._fU704._fU8;
        uVar7 = g_U18635[uParam0]._fU704._fU184;
        sub_4793( uParam0 );
        if (bVar6)
        {
            sub_111196( uParam0 );
            g_U18635[uParam0]._fU704._fU184 = uVar7;
            return;
        }
        g_U12306[uVar5]._fU28 = 1;
        sub_111354( uParam0 );
        return;
    }
    if (g_U18635[uParam0]._fU704._fU20)
    {
        if (NOT (HAS_SCRIPT_LOADED( sVar3 )))
        {
            REQUEST_SCRIPT( sVar3 );
            return;
        }
        g_U18635[uParam0]._fU704._fU180 = START_NEW_SCRIPT_WITH_ARGS( sVar3, ref uParam0, 1, 1820 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
        g_U18635[uParam0]._fU704._fU24 = 1;
        return;
    }
    if (g_U18635[uParam0]._fU704._fU16)
    {
        if (sub_70891())
        {
            sub_111642( uParam0 );
            return;
        }
        sub_111642( uParam0 );
        g_U18635[uParam0]._fU704._fU16 = 0;
        g_U18635[uParam0]._fU704._fU176 = 1;
        sub_48275();
        switch (sub_69197())
        {
            case 1:
            case 2:
            if (NOT (sub_111766( uParam0 )))
            {
                return;
            }
            g_U18635[uParam0]._fU704._fU168 = iVar4 + (sub_110889( uParam0 ));
            return;
            case 8:
            case 5:
            g_U18635[uParam0]._fU704._fU176 = 0;
            break;
            case 4: break;
        }
        REQUEST_SCRIPT( sVar3 );
        g_U18635[uParam0]._fU704._fU20 = 1;
        sub_112034( uParam0 );
        if (g_U18635[uParam0]._fU704._fU176)
        {
            sub_47553();
        }
        return;
    }
    if (g_U18635[uParam0]._fU704._fU12)
    {
        sub_4793( uParam0 );
        sub_111354( uParam0 );
        return;
    }
    if (g_U18635[uParam0]._fU704._fU168 < iVar4)
    {
        if ((((sub_69880()) || (sub_69829())) || (sub_71842())) || (sub_112492()))
        {
            g_U18635[uParam0]._fU704._fU168 = iVar4 + (sub_110889( uParam0 ));
            return;
        }
        if (sub_70078( 0 ))
        {
            g_U18635[uParam0]._fU704._fU168 = iVar4 + 10000;
            return;
        }
        if (NOT (g_U18635[uParam0]._fU704._fU184 == nil))
        {
            if (DOES_CHAR_EXIST( g_U18635[uParam0]._fU704._fU184 ))
            {
                if (NOT (IS_CHAR_DEAD( sub_15549() )))
                {
                    N_1363505769( g_U18635[uParam0]._fU704._fU184, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    GET_CHAR_COORDINATES( sub_15549(), ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                    fVar14 = 0.00000000;
                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar11._fU0, uVar11._fU4, uVar11._fU8, ref fVar14 );
                    if (fVar14 < 150.00000000)
                    {
                        g_U18635[uParam0]._fU704._fU168 = iVar4 + (sub_110889( uParam0 ));
                        return;
                    }
                }
            }
        }
        if (NOT g_U20908)
        {
            if (sub_113106( uParam0, uVar5 ))
            {
                g_U18635[uParam0]._fU704._fU16 = 1;
                return;
            }
        }
        g_U18635[uParam0]._fU704._fU168 = iVar4 + (sub_110889( uParam0 ));
        return;
    }
    return;
}

void sub_110889(unknown uParam0)
{
    int iVar3;
    int Result;

    iVar3 = 60000;
    if (g_U18635[uParam0]._fU704._fU164 < 60000)
    {
        iVar3 = 25000;
    }
    Result = g_U18635[uParam0]._fU704._fU164 / 10;
    if (Result < iVar3)
    {
        Result = iVar3;
    }
    return Result;
}

void sub_111196(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    g_U18635[uParam0]._fU704._fU4 = 1;
    g_U18635[uParam0]._fU704._fU168 = iVar3 + g_U18635[uParam0]._fU704._fU164;
    sub_51518( "CONTACT REHOSPITALISED\n" );
    return;
}

void sub_111354(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_72776( uParam0 );
    if (g_U14838[uVar3]._fU160._fU4)
    {
        return;
    }
    if (g_U14838[uVar3]._fU160._fU0)
    {
        if (g_U14838[uVar3]._fU160._fU8)
        {
            g_U15862[uParam0]._fU8[0]._fU0[5] = 1;
        }
        g_U14838[uVar3]._fU160._fU108._fU0 = 1;
    }
    return;
}

void sub_111642(unknown uParam0)
{
    return;
}

int sub_111766(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    g_U18635[uParam0]._fU704._fU172++;
    if (g_U18635[uParam0]._fU704._fU172 < 3)
    {
        return 1;
    }
    sub_4793( uParam0 );
    uVar3 = sub_72776( uParam0 );
    sub_87512( uVar3 );
    uVar4 = g_U18635[uParam0]._fU104;
    uVar5 = g_U18635[uParam0]._fU704._fU160;
    sub_81298( uVar4 );
    sub_78631( uVar4, uParam0, uVar5, 0 );
    return 0;
}

void sub_112034(unknown uParam0)
{
    g_U18635[uParam0]._fU704._fU28 = sub_112043();
    g_U18635[uParam0]._fU704._fU32 = sub_112332( uParam0 );
    return;
}

void sub_112043()
{
    int iVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    int Result;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;
    int I;
    int iVar15;

    iVar2 = GET_INT_STAT( 363 );
    iVar3 = 0;
    if (g_U10999 <= iVar2)
    {
        iVar3 = g_U10999;
    }
    fVar4 = 99999.90000000;
    fVar5 = 70.00000000;
    Result = -1;
    fVar13 = 0.00000000;
    if (NOT (IS_CHAR_DEAD( sub_15549() )))
    {
        GET_CHAR_COORDINATES( sub_15549(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        I = 0;
        for ( I = 0; I < 7; I++ )
        {
            if (g_U11327[I]._fU0 == iVar3)
            {
                uVar10 = {g_U11327[I]._fU4};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar10._fU0, uVar10._fU4, uVar10._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref fVar13 );
                if ((fVar13 < fVar4) AND (fVar13 > fVar5))
                {
                    fVar4 = fVar13;
                    Result = I;
                }
            }
        }
        if (NOT (Result == -1))
        {
            return Result;
        }
    }
    iVar15 = 0;
    return iVar15;
}

int sub_112332(unknown uParam0)
{
    return 5;
}

int sub_112492()
{
    int I;
    unknown uVar3;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        if (sub_112518( I ))
        {
            uVar3 = sub_56580( I );
            if (g_U18635[uVar3]._fU0)
            {
                if (NOT (g_U14838[I]._fU80._fU0 == 0))
                {
                    PRINTSTRING( ".....Check_If_Friend_Activity_Setup: " );
                    PRINTINT( I );
                    PRINTSTRING( " strand setup\n" );
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_112518(unknown uParam0)
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
        case 8: return 1;
    }
    return 0;
}

int sub_113106(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_113119( uParam0, uParam1 );
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 0)
        {
            return sub_113688( uParam0, "E1FCJ4A", "E1FCJ4_HA", "E1FCJ4_HY", "E1FCJ4_HAC", "E1FCJ4_HN", "E1FCJ4_HRH", "HF2_HOS" );
        }
        else if (iVar4 == 1)
        {
            return sub_113688( uParam0, "E1FCJ4A", "E1FCJ4_HA", "E1FCJ4_HY", "E1FCJ4_HAC", "E1FCJ4_HN", "E1FCJ4_HRM", "HF2_HOS" );
        }
        else
        {
            return sub_113688( uParam0, "E1FCJ4A", "E1FCJ4_HA", "E1FCJ4_HY", "E1FCJ4_HAC", "E1FCJ4_HN", "E1FCJ4_HRL", "HF2_HOS" );
        }
        break;
        case 6:
        if (iVar4 == 0)
        {
            return sub_113688( uParam0, "E1FCT4A", "E1FCT4_HA", "E1FCT4_HY", "E1FCT4_HAC", "E1FCT4_HN", "E1FCT4_RHI", "HF7_HOS" );
        }
        else if (iVar4 == 1)
        {
            return sub_113688( uParam0, "E1FCT4A", "E1FCT4_HA", "E1FCT4_HY", "E1FCT4_HAC", "E1FCT4_HN", "E1FCT4_RMED", "HF7_HOS" );
        }
        else
        {
            return sub_113688( uParam0, "E1FCT4A", "E1FCT4_HA", "E1FCT4_HY", "E1FCT4_HAC", "E1FCT4_HN", "E1FCT4_RLO", "HF7_HOS" );
        }
        break;
        case 7:
        if (iVar4 == 0)
        {
            return sub_113688( uParam0, "E1FCC4A", "E1FCC4_HA", "E1FCC4_HY", "E1FCC4_HACC", "E1FCC4_HN", "E1FCC4_HRH", "HF8_HOS" );
        }
        else if (iVar4 == 1)
        {
            return sub_113688( uParam0, "E1FCC4A", "E1FCC4_HA", "E1FCC4_HY", "E1FCC4_HACC", "E1FCC4_HN", "E1FCC4_HRM", "HF8_HOS" );
        }
        else
        {
            return sub_113688( uParam0, "E1FCC4A", "E1FCC4_HA", "E1FCC4_HY", "E1FCC4_HACC", "E1FCC4_HN", "E1FCC4_HRL", "HF8_HOS" );
        }
        break;
    }
    sub_74267( uParam0, "PLACEHOLDER", "FCRDCAU", 10000, 0 );
    return 1;
}

int sub_113119(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    iVar4 = g_U12306[uParam1]._fU40[1];
    iVar5 = 0;
    iVar6 = 0;
    switch (uParam0)
    {
        case 1:
        iVar6 = 4 - 0;
        iVar5 = g_U12306[uParam1]._fU144[iVar6]._fU128;
        break;
        case 6:
        iVar6 = 3 - 0;
        iVar5 = g_U12306[uParam1]._fU144[iVar6]._fU128;
        break;
        case 7:
        iVar6 = 4 - 0;
        iVar5 = g_U12306[uParam1]._fU144[iVar6]._fU128;
        break;
        default:
        SCRIPT_ASSERT( "Get_Like_State: Unknown Friend ID for High LIKE value" );
        iVar5 = 80;
    }
    iVar7 = g_U18635[uParam0]._fU160;
    iVar8 = 10;
    iVar9 = iVar5 - iVar7;
    iVar10 = 0;
    if (iVar9 < 20)
    {
        if (iVar5 < iVar7)
        {
            iVar10 = (iVar5 + iVar7) / 2;
            iVar5 = iVar10;
            iVar7 = iVar10;
            iVar9 = 0;
        }
        iVar5 += iVar8;
        iVar7 -= iVar8;
        if (iVar5 > 100)
        {
            iVar5 = 100;
        }
        if (iVar7 < 0)
        {
            iVar7 = 0;
        }
        iVar9 = iVar5 - iVar7;
    }
    iVar11 = iVar9 / 5;
    iVar12 = iVar5 - iVar11;
    if (iVar4 >= iVar12)
    {
        return 0;
    }
    iVar12 = iVar7 + iVar11;
    if (iVar4 >= iVar12)
    {
        return 1;
    }
    return 2;
}

int sub_113688(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;

    uVar10 = sub_113699( uParam0 );
    sub_113851( ref l_U322[uVar10]._fU0, uParam2, "END" );
    sub_113851( ref l_U322[uVar10]._fU84, uParam3, uParam4 );
    sub_113851( ref l_U322[uVar10]._fU120, uParam5, uParam6 );
    if (sub_114288( uParam0, ref l_U322[uVar10]._fU0, ref l_U322[uVar10]._fU84, ref l_U322[uVar10]._fU120, uParam7, uParam1, 10000 ))
    {
        sub_48275();
        sub_71020( uParam0, 1 );
        return 1;
    }
    return 0;
}

int sub_113699(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 6: return 1;
        case 7: return 2;
    }
    sub_24994( "Get_Phonecall_Friend_From_Contact: Unrecognised Friend ID" );
    return 3;
}

void sub_113851(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_113902( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_113902(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_114288(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    return sub_58223( uParam0, uParam1, uParam5, 1, uParam2, uParam3, uParam4, uParam6, 1, 0, 1, 0, 0, 0 );
}

void sub_115328(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;
    unknown uVar9;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (g_U12306[uParam1]._fU144[I]._fU24)
        {
            if (sub_115384( uParam1, I ))
            {
                return;
            }
            if (g_U12306[uParam1]._fU144[I]._fU28)
            {
                g_U12306[uParam1]._fU144[I]._fU84 = 0;
                g_U12306[uParam1]._fU144[I]._fU28 = 0;
                return;
            }
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (g_U12306[uParam1]._fU144[I]._fU84)
        {
            if (g_U12306[uParam1]._fU144[I]._fU88)
            {
                if (IS_THREAD_ACTIVE( g_U12306[uParam1]._fU144[I]._fU92 ))
                {
                    sub_115797( uParam0, uParam1 );
                    return;
                }
                if (g_U12306[uParam1]._fU144[I]._fU92 != nil)
                {
                    DESTROY_THREAD( g_U12306[uParam1]._fU144[I]._fU92 );
                }
                sub_116368( uParam0, I );
                if ((I + 0) == 0)
                {
                    switch (uParam0)
                    {
                        case 6:
                        sub_116368( 7, I );
                        break;
                        case 7:
                        sub_116368( 6, I );
                        break;
                    }
                }
                sub_1796( uParam1, I );
                return;
            }
            REQUEST_SCRIPT( ref g_U12306[uParam1]._fU144[I]._fU96 );
            if (NOT (HAS_SCRIPT_LOADED( ref g_U12306[uParam1]._fU144[I]._fU96 )))
            {
                REQUEST_SCRIPT( ref g_U12306[uParam1]._fU144[I]._fU96 );
                return;
            }
            g_U12306[uParam1]._fU144[I]._fU92 = START_NEW_SCRIPT( ref g_U12306[uParam1]._fU144[I]._fU96, 1828 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U12306[uParam1]._fU144[I]._fU96 );
            g_U12306[uParam1]._fU144[I]._fU88 = 1;
            g_U12306[uParam1]._fU28 = 1;
            return;
        }
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    iVar6 = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (g_U12306[uParam1]._fU144[I]._fU40)
        {
            if (sub_70891())
            {
                return;
            }
            sub_48275();
            switch (sub_69197())
            {
                case 1:
                case 2:
                g_U12306[uParam1]._fU144[I]._fU40 = 0;
                g_U12306[uParam1]._fU144[I]._fU12 = 0;
                g_U12306[uParam1]._fU144[I]._fU16 = iVar5 + 90000;
                return;
            }
            if (sub_74729())
            {
                g_U12306[uParam1]._fU144[I]._fU40 = 0;
                g_U12306[uParam1]._fU144[I]._fU12 = 0;
                g_U12306[uParam1]._fU144[I]._fU16 = iVar5 + 90000;
                return;
            }
            g_U12306[uParam1]._fU144[I]._fU40 = 0;
            g_U12306[uParam1]._fU144[I]._fU44 = 1;
            g_U12306[uParam1]._fU28 = 1;
            sub_71020( uParam0, 0 );
            sub_84956( 0, uParam0, I );
            g_U12306[uParam1]._fU144[I]._fU48 = 1;
            return;
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (g_U12306[uParam1]._fU144[I]._fU48)
        {
            if (NOT g_U12303)
            {
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT sub_103263())
                    {
                        PRINT_HELP( ref g_U12306[uParam1]._fU144[I]._fU52 );
                        g_U12306[uParam1]._fU144[I]._fU48 = 0;
                    }
                }
            }
        }
    }
    bVar7 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar7 = false;
        if (NOT g_U12306[uParam1]._fU144[I]._fU0)
        {
            bVar7 = true;
        }
        if (NOT bVar7)
        {
            if (g_U12306[uParam1]._fU144[I]._fU32)
            {
                sub_117559( uParam0, uParam1, I );
                bVar7 = true;
            }
        }
        if (NOT bVar7)
        {
            if (sub_118021( uParam1, I ))
            {
                sub_117559( uParam0, uParam1, I );
                bVar7 = true;
            }
        }
        if (NOT bVar7)
        {
            if (g_U14838[uParam1]._fU160._fU96)
            {
                if (sub_72998( uParam1, I ))
                {
                    sub_117559( uParam0, uParam1, I );
                    bVar7 = true;
                }
            }
        }
        if (NOT bVar7)
        {
            if (sub_70510( uParam0 ))
            {
                sub_117559( uParam0, uParam1, I );
                bVar7 = true;
            }
        }
        if (NOT bVar7)
        {
            if (g_U15862[uParam0]._fU4)
            {
                if (sub_118279( uParam0, uParam1, I ))
                {
                    return;
                }
            }
        }
        iVar8 = 0;
        if (NOT bVar7)
        {
            iVar8 = g_U12306[uParam1]._fU40[1];
            if (g_U12306[uParam1]._fU144[I]._fU20)
            {
                if (iVar8 < g_U12306[uParam1]._fU144[I]._fU128)
                {
                    g_U12306[uParam1]._fU144[I]._fU20 = 0;
                    sub_125515( uParam0, I );
                }
            }
            else if ((iVar8 >= g_U12306[uParam1]._fU144[I]._fU128) AND (sub_125726( uParam1, I )))
            {
                if (NOT g_U12306[uParam1]._fU144[I]._fU12)
                {
                    if (g_U12306[uParam1]._fU144[I]._fU16 > 0)
                    {
                        if (iVar5 > g_U12306[uParam1]._fU144[I]._fU16)
                        {
                            g_U12306[uParam1]._fU144[I]._fU12 = 1;
                        }
                    }
                }
                if (g_U12306[uParam1]._fU144[I]._fU12)
                {
                    if (NOT g_U12306[uParam1]._fU144[I]._fU44)
                    {
                        if (NOT (sub_125925( uParam1 )))
                        {
                            g_U12306[uParam1]._fU144[I]._fU12 = 0;
                            g_U12306[uParam1]._fU144[I]._fU16 = iVar5 + 90000;
                            bVar7 = true;
                        }
                        if (NOT bVar7)
                        {
                            if (NOT (sub_126252( uParam0, I )))
                            {
                                g_U12306[uParam1]._fU144[I]._fU12 = 0;
                                g_U12306[uParam1]._fU144[I]._fU16 = iVar5 + 90000;
                                bVar7 = true;
                            }
                        }
                        if (NOT bVar7)
                        {
                            g_U12306[uParam1]._fU144[I]._fU40 = 1;
                            sub_127057( uParam1, I );
                            bVar7 = true;
                        }
                    }
                    if (NOT bVar7)
                    {
                        iVar6 = g_U18635[uParam0]._fU104;
                        uVar9 = g_U12306[uParam1]._fU144[I]._fU140;
                        sub_81298( iVar6 );
                        sub_78656( iVar6, uParam0, uVar9, 0, 1, I );
                        bVar7 = true;
                    }
                }
            }
            else if (NOT g_U12306[uParam1]._fU144[I]._fU12)
            {
                if (g_U12306[uParam1]._fU144[I]._fU16 > 0)
                {
                    g_U12306[uParam1]._fU144[I]._fU16 = iVar5 + 90000;
                }
            };;;
        }
    }
    return;
}

int sub_115384(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    if (sub_70891())
    {
        PRINTSTRING( ".........SPECIAL ABILITY PHONECALL STILL RINGING\n" );
        return 1;
    }
    bVar4 = false;
    switch (sub_69197())
    {
        case 2:
        bVar4 = true;
        break;
        case 6:
        bVar4 = false;
        break;
        default: return 1;
    }
    g_U12306[uParam0]._fU144[uParam1]._fU24 = 0;
    if (NOT bVar4)
    {
        g_U12306[uParam0]._fU144[uParam1]._fU84 = 1;
    }
    return 0;
}

int sub_115797(unknown uParam0, unknown uParam1)
{
    if (g_U15862[uParam0]._fU4)
    {
        if (sub_115826( uParam0 ))
        {
            sub_116176( uParam1 );
            return 1;
        }
    }
    return 0;
}

int sub_115826(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 22;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        if (g_U15862[uParam0]._fU8[1]._fU0[I])
        {
            iVar5 = I;
            switch (iVar5)
            {
                case 0: return 1;
                case 3:
                case 4: return 1;
                case 1: return 0;
                case 2: return 0;
                case 6:
                case 7:
                case 8:
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
                case 9: return 0;
                case 5: return 0;
            }
        }
    }
    sub_51310( "Is_Cellphone_Special_Selected: Unknown activity" );
    return 0;
}

void sub_116176(unknown uParam0)
{
    unknown uVar3;

    sub_58115( ref g_U12306[uParam0]._fU92, ref g_U12306[uParam0]._fU76, 0 );
    sub_61148( ref g_U12306[uParam0]._fU92, ref g_U12306[uParam0]._fU76 );
    uVar3 = sub_56580( uParam0 );
    sub_61659( uVar3 );
    sub_48275();
    return;
}

void sub_116368(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    unknown uVar6;
    int iVar7;

    if (NOT g_U18635[uParam0]._fU300[uParam1]._fU0)
    {
        return;
    }
    if (NOT g_U18635[uParam0]._fU300[uParam1]._fU40)
    {
        return;
    }
    iVar4 = g_U18635[uParam0]._fU300[uParam1]._fU48._fU0._fU0;
    iVar5 = g_U18635[uParam0]._fU300[uParam1]._fU48._fU8._fU0;
    uVar6 = g_U18635[uParam0]._fU300[uParam1]._fU48._fU8._fU4;
    while (iVar4 > 0)
    {
        iVar4--;
        iVar5 += 24;
    }
    iVar7 = 0;
    sub_81975( ref g_U18635[uParam0]._fU300[uParam1]._fU64, iVar5, uVar6, iVar7 );
    return;
}

int sub_117559(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;

    if (g_U15862[uParam0]._fU4)
    {
        if (sub_115826( uParam0 ))
        {
            iVar5 = sub_117600( uParam0 );
            if (iVar5 == iParam2)
            {
                sub_116176( uParam1 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_117600(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 22;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        if (g_U15862[uParam0]._fU8[1]._fU0[I])
        {
            iVar5 = I;
            switch (iVar5)
            {
                case 0: return I - 0;
                case 3:
                case 4: return I - 0;
                case 1: return -1;
                case 2: return -1;
                case 6:
                case 7:
                case 8:
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
                case 9: return -1;
                case 5: return -1;
            }
        }
    }
    sub_51310( "Get_Cellphone_Special_Ability_Array_Position_Selected: Unknown activity" );
    return -1;
}

int sub_118021(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I < 5; I++ )
    {
        if (NOT (I == iParam1))
        {
            if ((g_U12306[uParam0]._fU144[iParam1]._fU0) AND (g_U12306[uParam0]._fU144[iParam1]._fU84))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_118279(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;

    if (NOT (sub_115826( uParam0 )))
    {
        return 0;
    }
    iVar5 = iParam2 + 0;
    return sub_118317( uParam0, uParam1, iVar5 );
}

int sub_118317(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;
    int iVar6;
    char[64] cVar7;
    boolean bVar23;
    boolean bVar24;
    boolean bVar25;

    if (NOT g_U15862[uParam0]._fU8[1]._fU0[iParam2])
    {
        return 0;
    }
    iVar5 = g_U18635[uParam0]._fU208[iParam2]._fU0;
    if (iVar5 == -1)
    {
        sub_51310( "Flow_Check_Special_Action_Selected: Trigger Info for Special Action not set up\n" );
        return 0;
    }
    iVar6 = iParam2 - 0;
    if (g_U12306[uParam1]._fU144[iVar6]._fU36)
    {
        sub_116176( uParam1 );
        g_U15862[uParam0]._fU4 = 0;
        g_U15862[uParam0]._fU8[1]._fU0[iParam2] = 0;
        sub_69138();
        return 0;
    }
    StrCopy( ref cVar7, "", 64 );
    bVar23 = sub_118581( uParam0, iParam2, ref cVar7 );
    if (NOT bVar23)
    {
        sub_116176( uParam1 );
        g_U15862[uParam0]._fU4 = 0;
        g_U15862[uParam0]._fU8[1]._fU0[iParam2] = 0;
        sub_69138();
        return 0;
    }
    bVar24 = false;
    if (g_U12303)
    {
        if (NOT g_U18635[uParam0]._fU300[iVar6]._fU36)
        {
            sub_116176( uParam1 );
            g_U15862[uParam0]._fU4 = 0;
            g_U15862[uParam0]._fU8[1]._fU0[iParam2] = 0;
            sub_69138();
            return 0;
        }
    }
    if (g_U18635[uParam0]._fU16)
    {
        sub_116176( uParam1 );
        g_U15862[uParam0]._fU4 = 0;
        g_U15862[uParam0]._fU8[1]._fU0[iParam2] = 0;
        sub_69138();
        return 0;
    }
    if (sub_119892( uParam1, iParam2 ))
    {
        sub_116176( uParam1 );
        g_U15862[uParam0]._fU4 = 0;
        g_U15862[uParam0]._fU8[1]._fU0[iParam2] = 0;
        sub_69138();
        return 0;
    }
    bVar25 = true;
    if (NOT bVar24)
    {
        if (g_U18635[uParam0]._fU300[iVar6]._fU40)
        {
            if (g_U18635[uParam0]._fU300[iVar6]._fU44)
            {
                if (g_U12303)
                {
                    bVar25 = false;
                }
            }
            if (bVar25)
            {
                if (NOT (sub_56964( g_U18635[uParam0]._fU300[iVar6]._fU64 )))
                {
                    sub_120297( uParam0, iVar6 );
                    bVar24 = true;
                }
            }
        }
    }
    g_U12306[uParam1]._fU144[iVar6]._fU28 = bVar24;
    if (NOT bVar24)
    {
        sub_122831( uParam0, ref cVar7, iVar6 );
    }
    g_U12306[uParam1]._fU144[iVar6]._fU24 = 1;
    g_U15862[uParam0]._fU4 = 0;
    g_U15862[uParam0]._fU8[1]._fU0[iParam2] = 0;
    sub_125291( uParam0, uParam1, iParam2 );
    sub_69138();
    return 1;
}

void sub_118581(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int Result;
    boolean bVar6;
    boolean bVar7;
    boolean bVar8;
    int iVar9;

    Result = 0;
    bVar6 = false;
    bVar7 = true;
    bVar8 = true;
    iVar9 = uParam1;
    switch (uParam0)
    {
        case 1:
        if (iVar9 == 4)
        {
            bVar8 = false;
            if (g_U39169)
            {
                bVar8 = true;
            }
            if (((NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "abil_weap_pickup" )) > 0)) AND (NOT sub_112492())) AND (NOT bVar8))
            {
                Result = 1;
            }
        }
        break;
        case 6:
        if (iVar9 == 0)
        {
            if ((g_U12303) AND (g_U39147))
            {
                bVar6 = true;
            }
            if (g_U11108)
            {
                bVar7 = false;
            }
            if (bVar7)
            {
                if (NOT (IS_CHAR_DEAD( sub_15549() )))
                {
                    if (IS_CHAR_IN_AREA_3D( sub_15549(), -848.00000000, -1112.00000000, -2.10000000, -376.00000000, -624.00000000, 95.80000000, 0 ))
                    {
                        bVar7 = false;
                    }
                }
            }
            if (bVar7)
            {
                if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
                {
                    bVar7 = false;
                }
            }
        }
        if (iVar9 == 3)
        {
            if (g_U11220)
            {
                bVar7 = false;
            }
        }
        if ((iVar9 == 0) || (iVar9 == 3))
        {
            if ((((((((NOT sub_118931()) AND (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_gun_car" )) > 0))) AND (NOT sub_112492())) AND (NOT bVar6)) AND (NOT (DOES_CHAR_EXIST( g_U11084[0] )))) AND (NOT (DOES_CHAR_EXIST( g_U11084[1] )))) AND (bVar7)) AND (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "RoadRash" )) > 0)))
            {
                Result = 1;
            }
        }
        else
        {
            SCRIPT_ASSERT( "Check_For_Area_Specific_Special_Ability_CallID: Unused Terry ability ID" );
        }
        break;
        case 7:
        if (iVar9 == 0)
        {
            if ((g_U12303) AND (g_U39147))
            {
                bVar6 = true;
            }
            if (g_U11108)
            {
                bVar7 = false;
            }
            if (bVar7)
            {
                if (NOT (IS_CHAR_DEAD( sub_15549() )))
                {
                    if (IS_CHAR_IN_AREA_3D( sub_15549(), -848.00000000, -1112.00000000, -2.10000000, -376.00000000, -624.00000000, 95.80000000, 0 ))
                    {
                        bVar7 = false;
                    }
                }
            }
            if (bVar7)
            {
                if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_gun_car" )) > 0)
                {
                    bVar7 = false;
                }
            }
        }
        if ((iVar9 == 0) || (iVar9 == 4))
        {
            if ((((((((NOT sub_118931()) AND (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0))) AND (NOT sub_112492())) AND (NOT bVar6)) AND (NOT (DOES_CHAR_EXIST( g_U11084[0] )))) AND (NOT (DOES_CHAR_EXIST( g_U11084[1] )))) AND (bVar7)) AND (NOT ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "RoadRash" )) > 0)))
            {
                Result = 1;
            }
        }
        else
        {
            SCRIPT_ASSERT( "Check_For_Area_Specific_Special_Ability_CallID: Unused Clay ability ID" );
        }
        break;
        default: SCRIPT_ASSERT( "Check_For_Area_Specific_Special_Ability_CallID: unknown contact ID\n" );
    }
    return Result;
}

int sub_118931()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_119892(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    iVar8 = nil;
    iVar9 = uParam1;
    switch (uParam0)
    {
        case 1:
        if (sub_112492())
        {
            return 1;
        }
        break;
        case 7:
        if (iVar9 == 4)
        {
            if (g_U11224 == 301427732)
            {
                if (NOT (IS_CHAR_DEAD( sub_15549() )))
                {
                    iVar7 = 110;
                    GET_CHAR_COORDINATES( sub_15549(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    iVar8 = GET_CLOSEST_CAR( uVar4, 11.00000000, 301427732, iVar7 );
                    if (iVar8 == nil)
                    {
                        if (IS_CHAR_IN_MODEL( sub_15549(), 301427732 ))
                        {
                            return 1;
                        }
                        return 0;
                    }
                    return 1;
                }
            }
        }
        break;
    }
    return 0;
}

void sub_120297(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 + 0;
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 4)
        {
            switch (g_U11225)
            {
                case 7:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_PIS", "E1FCJ4_SPN" );
                break;
                case 10:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_SHG", "E1FCJ4_SPN" );
                break;
                case 12:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_UZI", "E1FCJ4_SPN" );
                break;
                case 16:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_SNI", "E1FCJ4_SPN" );
                break;
                case 14:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_AK", "E1FCJ4_SPN" );
                break;
                case 13:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_MP5", "E1FCJ4_SPN" );
                break;
                case 15:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_M4", "E1FCJ4_SPN" );
                break;
                case 11:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_BAR", "E1FCJ4_SPN" );
                break;
                case 18:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_RPG", "E1FCJ4_SPN" );
                break;
                case 21:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_GL", "E1FCJ4_SPN" );
                break;
                case 22:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_ASS", "E1FCJ4_SPN" );
                break;
                case 27:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_9MM", "E1FCJ4_SPN" );
                break;
                case 26:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_SWN", "E1FCJ4_SPN" );
                break;
                case 4:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_GRN", "E1FCJ4_SPN" );
                break;
                case 28:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_PB", "E1FCJ4_SPN" );
                break;
                case 5:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_MOL", "E1FCJ4_SPN" );
                break;
                case 17:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_M40", "E1FCJ4_SPN" );
                break;
                default: SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_Yes: Unknown weapontype for Weapons" );
            }
        }
        else
        {
            SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_Yes: Unknown Jim Special Ability ID" );
        }
        return;
        case 6:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCT4A", "E1FCT4_BKUP", "E1FCT4_BKN" );
        }
        else if (iVar4 == 3)
        {
            sub_120540( uParam0, "E1FCT4A", "E1FCT4_RSP", "E1FCT4_SPN" );
        }
        else
        {
            SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_No: Unknown Terry Special Ability ID" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCC4A", "E1FCC4_BU", "E1FCC4_BUN" );
        }
        else if (iVar4 == 4)
        {
            switch (g_U11224)
            {
                case 301427732:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPH", "E1FCC4_SPN" );
                break;
                case -570033273:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPZ", "E1FCC4_SPN" );
                break;
                case -408052231:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPD", "E1FCC4_SPN" );
                break;
                case 584879743:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPHF", "E1FCC4_SPN" );
                break;
                case 802082487:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPL", "E1FCC4_SPN" );
                break;
                case -359167535:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPR", "E1FCC4_SPN" );
                break;
                case -159126838:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPI", "E1FCC4_SPN" );
                break;
                case -114291515:
                sub_120540( uParam0, "E1FCC4A", "E1FCC_BATI", "E1FCC4_SPN" );
                break;
                case -1670998136:
                sub_120540( uParam0, "E1FCC4A", "E1FCC_DBL", "E1FCC4_SPN" );
                break;
                case 1265391242:
                sub_120540( uParam0, "E1FCC4A", "E1FCC_HACK", "E1FCC4_SPN" );
                break;
                case 729783779:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPS", "E1FCC4_SPN" );
                break;
                default: SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_No: Unknown vehicle for Bike Dropoff" );
            }
        }
        else
        {
            SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_No: Unknown Clay Special Ability ID" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "E1MFAU", 1 );
    return;
}

void sub_120540(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    uVar6 = sub_113699( uParam0 );
    sub_113851( ref l_U322[uVar6]._fU0, uParam2, uParam3 );
    sub_120594( ref l_U322[uVar6]._fU0, uParam1, 1 );
    sub_48275();
    sub_71020( uParam0, 1 );
    return;
}

int sub_120594(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U94._fU60;
    if (bParam2)
    {
        return sub_58223( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U94._fU368)
    {
        StrCopy( ref g_U94._fU224[0], uParam1, 16 );
        g_U94._fU224[1] = {(uParam0^)[0]};
        sub_60110( uVar14, ref g_U94._fU176 );
        g_U94._fU368 = 1;
        return 1;
    }
    return 0;
}

void sub_122831(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;

    PRINTSTRING( "Accepted by phonecall: " );
    PRINTSTRING( uParam1 );
    PRINTNL();
    iVar5 = iParam2 + 0;
    switch (uParam0)
    {
        case 1:
        if (iVar5 == 4)
        {
            switch (g_U11225)
            {
                case 7:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_PIS", "E1FCJ4_SPY" );
                break;
                case 10:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_SHG", "E1FCJ4_SPY" );
                break;
                case 12:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_UZI", "E1FCJ4_SPY" );
                break;
                case 16:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_SNI", "E1FCJ4_SPY" );
                break;
                case 14:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_AK", "E1FCJ4_SPY" );
                break;
                case 13:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_MP5", "E1FCJ4_SPY" );
                break;
                case 15:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_M4", "E1FCJ4_SPY" );
                break;
                case 11:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_BAR", "E1FCJ4_SPY" );
                break;
                case 18:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_RPG", "E1FCJ4_SPY" );
                break;
                case 21:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_GL", "E1FCJ4_SPY" );
                break;
                case 22:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_ASS", "E1FCJ4_SPY" );
                break;
                case 27:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_9MM", "E1FCJ4_SPY" );
                break;
                case 26:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_SWN", "E1FCJ4_SPY" );
                break;
                case 4:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_GRN", "E1FCJ4_SPY" );
                break;
                case 28:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_PB", "E1FCJ4_SPY" );
                break;
                case 5:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_MOL", "E1FCJ4_SPY" );
                break;
                case 17:
                sub_120540( uParam0, "E1FCJ4A", "E1FCJ4_M40", "E1FCJ4_SPY" );
                break;
                default: SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_Yes: Unknown weapontype for Weapons" );
            }
        }
        else
        {
            SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_Yes: Unknown Jim Special Ability ID" );
        }
        return;
        case 6:
        if (iVar5 == 0)
        {
            if (g_U39126)
            {
                sub_58115( ref g_U39131, ref g_U39127, 1 );
            }
            else
            {
                sub_120540( uParam0, "E1FCT4A", "E1FCT4_BKUP", "E1FCT4_BKY" );
            }
        }
        else if (iVar5 == 3)
        {
            sub_120540( uParam0, "E1FCT4A", "E1FCT4_RSP", "E1FCT4_SPY" );
        }
        else
        {
            SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_Yes: Unknown Terry Special Ability ID" );
        }
        return;
        case 7:
        if (iVar5 == 0)
        {
            if (g_U39126)
            {
                sub_58115( ref g_U39139, ref g_U39127, 1 );
            }
            else
            {
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_BU", "E1FCC4_BUY" );
            }
        }
        else if (iVar5 == 4)
        {
            switch (g_U11224)
            {
                case 301427732:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPH", "E1FCC4_SPY" );
                break;
                case -570033273:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPZ", "E1FCC4_SPY" );
                break;
                case -408052231:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPD", "E1FCC4_SPY" );
                break;
                case 584879743:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPHF", "E1FCC4_SPY" );
                break;
                case 802082487:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPL", "E1FCC4_SPY" );
                break;
                case -359167535:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPR", "E1FCC4_SPY" );
                break;
                case -159126838:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPI", "E1FCC4_SPY" );
                break;
                case -114291515:
                sub_120540( uParam0, "E1FCC4A", "E1FCC_BATI", "E1FCC4_SPY" );
                break;
                case -1670998136:
                sub_120540( uParam0, "E1FCC4A", "E1FCC_DBL", "E1FCC4_SPY" );
                break;
                case 1265391242:
                sub_120540( uParam0, "E1FCC4A", "E1FCC_HACK", "E1FCC4_SPY" );
                break;
                case 729783779:
                sub_120540( uParam0, "E1FCC4A", "E1FCC4_SPS", "E1FCC4_SPY" );
                break;
                default: SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_Yes: Unknown vehicle for Bike Dropoff" );
            }
        }
        else
        {
            SCRIPT_ASSERT( "FA_Player_Calls_Special_Ability_Yes: Unknown Clay Special Ability ID" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "E1MFAU", 1 );
    return;
}

void sub_125291(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;

    iVar5 = iParam2 - 0;
    g_U12306[uParam1]._fU144[iVar5]._fU96 = {g_U18635[uParam0]._fU300[iVar5]._fU4};
    return;
}

void sub_125515(unknown uParam0, int iParam1)
{
    int iVar4;

    if (iParam1 >= 5)
    {
        SCRIPT_ASSERT( "Remove_Special_Ability_From_Phone: Special Ability array position out of bounds" );
        return;
    }
    if (g_U18635[uParam0]._fU300[iParam1]._fU0)
    {
        iVar4 = 0 + iParam1;
        g_U15862[uParam0]._fU8[0]._fU0[iVar4] = 0;
    }
    return;
}

int sub_125726(unknown uParam0, unknown uParam1)
{
    return 1;
}

int sub_125925(unknown uParam0)
{
    unknown uVar3;

    if (g_U12303)
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return 0;
    }
    if (NOT (g_U14838[uParam0]._fU80._fU0 == 0))
    {
        return 0;
    }
    if ((((((IS_THREAD_ACTIVE( g_U815 )) || (IS_WANTED_LEVEL_GREATER( sub_7787(), 0 ))) || (sub_69829())) || (sub_69880())) || (sub_70078( 0 ))) || (sub_71842()))
    {
        return 0;
    }
    uVar3 = sub_56580( uParam0 );
    if ((NOT (sub_70446( uVar3, 30000 ))) || (sub_70510( uVar3 )))
    {
        return 0;
    }
    if (sub_126098( uVar3 ))
    {
        return 0;
    }
    return 1;
}

int sub_126098(int iParam0)
{
    if (sub_112492())
    {
        return 1;
    }
    if (sub_118931())
    {
        if ((iParam0 == 6) || (iParam0 == 7))
        {
            return 1;
        }
    }
    return 0;
}

int sub_126252(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 + 0;
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 4)
        {
            return sub_126348( uParam0, "E1FCJ4A", "E1FCJ4_GCS", "E1FCJ4_GCST" );
        }
        else
        {
            SCRIPT_ASSERT( "FA_Friend_Phones_Special_Ability_Unlocked_First_Time: Unknown Jim Special Ability ID" );
        }
        break;
        case 6:
        if (iVar4 == 3)
        {
            return sub_126348( uParam0, "E1FCT4A", "E1FCT4_SP", "E1FCT4_SPT" );
        }
        else
        {
            SCRIPT_ASSERT( "FA_Friend_Phones_Special_Ability_Unlocked_First_Time: Unknown Terry Special Ability ID" );
        }
        break;
        case 7:
        if (iVar4 == 4)
        {
            return sub_126348( uParam0, "E1FCC4A", "E1FCC4_GCS", "E1FCC4_APTA" );
        }
        else
        {
            SCRIPT_ASSERT( "FA_Friend_Phones_Special_Ability_Unlocked_First_Time: Unknown Clay Special Ability ID" );
        }
        break;
    }
    sub_74267( uParam0, "PLACEHOLDER", "E1MFAU", 10000, 0 );
    return 1;
}

int sub_126348(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    uVar6 = sub_113699( uParam0 );
    sub_113851( ref l_U322[uVar6]._fU0, uParam2, uParam3 );
    if (sub_126406( uParam0, ref l_U322[uVar6]._fU0, uParam1, 10000 ))
    {
        sub_48275();
        sub_71020( uParam0, 1 );
        return 1;
    }
    return 0;
}

void sub_126406(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown[2] uVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar6, 2);
    return sub_58223( uParam0, uParam1, uParam2, 0, ref uVar6, ref uVar6, "", uParam3, 1, 0, 1, 0, 0, 0 );
}

void sub_127057(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 + 0;
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 4)
        {
            StrCopy( ref g_U12306[uParam0]._fU144[iParam1]._fU52, "J_SP_WEAPS", 32 );
        }
        break;
        case 6:
        if (iVar4 == 0)
        {
            ;
        }
        else if (iVar4 == 3)
        {
            StrCopy( ref g_U12306[uParam0]._fU144[iParam1]._fU52, "T_SP_GUNVAN", 32 );
        }
        break;
        case 7:
        if (iVar4 == 0)
        {
            ;
        }
        else if (iVar4 == 4)
        {
            StrCopy( ref g_U12306[uParam0]._fU144[iParam1]._fU52, "C_SP_BIKES", 32 );
        }
        break;
        default:
        PRINTSTRING( "STRAND: " );
        PRINTINT( uParam0 );
        PRINTNL();
        SCRIPT_ASSERT( "Fill_Special_Ability_Intro_Help_Text: Unexpected strand ID" );
    }
    return;
}

int sub_127603(unknown uParam0, unknown uParam1)
{
    if (NOT g_U14838[uParam1]._fU160._fU96)
    {
        return 0;
    }
    sub_127645( uParam0, uParam1 );
    return 1;
}

int sub_127645(unknown uParam0, unknown uParam1)
{
    if (g_U15862[uParam0]._fU4)
    {
        if (sub_127674( uParam0 ))
        {
            sub_116176( uParam1 );
            return 1;
        }
    }
    return 0;
}

int sub_127674(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 22;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        if (g_U15862[uParam0]._fU8[1]._fU0[I])
        {
            iVar5 = I;
            switch (iVar5)
            {
                case 6:
                case 7:
                case 8:
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
                case 9: return 1;
                case 5: return 0;
                case 0:
                case 1:
                case 2:
                case 3:
                case 4: return 0;
            }
        }
    }
    sub_51310( "Is_Cellphone_Friend_Activity_Selected: Unknown activity" );
    return 0;
}

void sub_128060(unknown uParam0, unknown uParam1)
{
    if (NOT g_U18635[uParam0]._fU0)
    {
        g_U12306[uParam1]._fU28 = 0;
        sub_128106( uParam0, uParam1 );
        return 0;
    }
    if (g_U12306[uParam1]._fU28)
    {
        sub_128626( uParam0 );
        g_U12306[uParam1]._fU28 = 0;
    }
    if (g_U18635[uParam0]._fU176)
    {
        if (sub_128742( uParam0 ))
        {
            g_U18635[uParam0]._fU176 = 0;
        }
    }
    if (g_U18635[uParam0]._fU68)
    {
        return sub_128996( uParam0, uParam1 );
    }
    if (g_U18635[uParam0]._fU16)
    {
        return sub_130705( uParam0, uParam1 );
    }
    if (g_U15862[uParam0]._fU4)
    {
        return sub_138701( uParam0, uParam1 );
    }
    if (sub_137342( uParam0 ))
    {
        sub_83690( uParam0 );
        sub_83982( uParam0 );
        sub_137765( uParam0 );
    }
    return sub_160955( uParam0, uParam1 );
}

void sub_128106(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT g_U15862[uParam0]._fU4)
    {
        return;
    }
    if (NOT (sub_127674( uParam0 )))
    {
        return;
    }
    sub_58115( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76, 0 );
    sub_61148( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76 );
    sub_48275();
    iVar4 = 0;
    iVar5 = 22;
    while (iVar4 < iVar5)
    {
        if (sub_128244( iVar4 ))
        {
            if (g_U15862[uParam0]._fU8[1]._fU0[iVar4])
            {
                g_U15862[uParam0]._fU8[1]._fU0[iVar4] = 0;
            }
        }
        iVar4++;
    }
    g_U15862[uParam0]._fU4 = 0;
    return;
}

int sub_128244(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 6:
        case 7:
        case 8:
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
        case 9: return 1;
        case 5: return 0;
        case 0:
        case 1:
        case 2:
        case 3:
        case 4: return 0;
    }
    sub_51310( "Is_This_A_Friend_Activity: Unknown activity" );
    return 0;
}

void sub_128626(unknown uParam0)
{
    unknown uVar3;

    g_U18635[uParam0]._fU92 = 0;
    g_U18635[uParam0]._fU96 = 0;
    sub_83657( uParam0 );
    uVar3 = g_U18635[uParam0]._fU108;
    sub_81187( uVar3 );
    return;
}

int sub_128742(unknown uParam0)
{
    unknown uVar3;

    if (sub_103263())
    {
        return 0;
    }
    uVar3 = sub_72776( uParam0 );
    sub_128776( uVar3 );
    return 1;
}

void sub_128776(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = -1;
        break;
        default:
        sub_24994( "Flow_Friend_Asleep_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_86987( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_86987( uParam0, 0, iVar4 );
    return;
}

int sub_128996(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (sub_70891())
    {
        return 1;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15862[uParam0]._fU8[0]._fU0[17] = 0;
    switch (sub_69197())
    {
        case 1:
        case 2:
        sub_129106( uParam0 );
        g_U18635[uParam0]._fU68 = 0;
        g_U18635[uParam0]._fU100 = -1;
        if (NOT g_U18635[uParam0]._fU8)
        {
            sub_129280( uParam0 );
        }
        g_U12305 = 0;
        sub_129450( uParam1 );
        return 0;
        case 8:
        if (NOT g_U18635[uParam0]._fU8)
        {
            g_U18635[uParam0]._fU8 = 1;
            g_U18635[uParam0]._fU168 = 0;
            sub_129673( uParam0, 0 );
        }
        sub_83982( uParam0 );
        g_U18635[uParam0]._fU68 = 0;
        g_U18635[uParam0]._fU100 = -1;
        g_U12305 = 0;
        sub_129737( uParam1 );
        sub_129906( uParam0 );
        return 0;
        case 5:
        case 4: return 1;
    }
    g_U12305 = 0;
    sub_130074( uParam1, g_U18635[uParam0]._fU100 );
    g_U18635[uParam0]._fU68 = 0;
    g_U18635[uParam0]._fU16 = 1;
    g_U12306[uParam1]._fU28 = 1;
    g_U18635[uParam0]._fU20 = 0;
    g_U18635[uParam0]._fU12 = 0;
    sub_130442( uParam0 );
    g_U18635[uParam0]._fU100 = -1;
    g_U18635[uParam0]._fU84 = 0;
    g_U15642[uParam0]._fU16 = 1;
    g_U15862[uParam0]._fU8[0]._fU0[2] = 1;
    g_U18635[uParam0]._fU8 = 1;
    if (g_U18635[uParam0]._fU168 > 0)
    {
        sub_129673( uParam0, 1 );
    }
    g_U18635[uParam0]._fU168 = 0;
    sub_129906( uParam0 );
    return 1;
}

void sub_129106(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = g_U18635[uParam0]._fU80;
    iVar4 = iVar4 / 12;
    if (iVar4 < 60000)
    {
        iVar4 = 60000;
    }
    if (NOT g_U18635[uParam0]._fU8)
    {
        iVar4 = 60000;
    }
    iVar4 += iVar3;
    g_U18635[uParam0]._fU84 = iVar4;
    return;
}

void sub_129280(unknown uParam0)
{
    int iVar3;
    int I;

    if (g_U18635[uParam0]._fU8)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 22; I++ )
    {
        if (sub_128244( I ))
        {
            if (IS_BIT_SET( g_U18635[uParam0]._fU168, I ))
            {
                iVar3 = I;
                if (iVar3 == 17)
                {
                    g_U18635[uParam0]._fU140 = 0;
                }
                else
                {
                    g_U15862[uParam0]._fU8[0]._fU0[iVar3] = 0;
                }
            }
        }
    }
    return;
}

void sub_129450(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = -3;
        break;
        default:
        sub_24994( "Flow_Player_Said_No_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_86987( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_86987( uParam0, 0, iVar4 );
    return;
}

void sub_129673(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_129737(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = -3;
        break;
        default:
        sub_24994( "Flow_Player_Said_No_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_86987( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_86987( uParam0, 0, iVar4 );
    return;
}

void sub_129906(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 + 3600000;
    I = 0;
    for ( I = 0; I < 9; I++ )
    {
        if ((g_U18635[I]._fU0) AND (NOT g_U18635[I]._fU16))
        {
            if (g_U18635[I]._fU84 < iVar4)
            {
                g_U18635[I]._fU84 = iVar4;
            }
        }
    }
    return;
}

void sub_130074(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (g_U14838[uParam0]._fU80._fU0 == 0))
    {
        sub_24994( "Main_Missions: Setup_Friend_Mission(): Attempting to setup a friend mission after strand already setup" );
        return;
    }
    sub_2296( uParam0, 0 );
    uVar4 = sub_44161( uParam0, uParam1 );
    g_U14838[uParam0]._fU80._fU0 = 1;
    g_U14838[uParam0]._fU80._fU4 = uParam1;
    g_U14838[uParam0]._fU80._fU56 = g_U20913[uVar4]._fU12;
    g_U14838[uParam0]._fU80._fU24 = {g_U20913[uVar4]._fU36};
    g_U12306[uParam0]._fU24 = -1;
    sub_43577( uParam0 );
    return;
}

void sub_130442(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    sub_81975( ref g_U18635[uParam0]._fU32, 2, 0, iVar3 );
    g_U18635[uParam0]._fU48 = {g_U18635[uParam0]._fU32};
    sub_82028( ref g_U18635[uParam0]._fU48, 1, 0 );
    return;
}

int sub_130705(unknown uParam0, unknown uParam1)
{
    if (g_U14838[uParam1]._fU80._fU0 == 0)
    {
        sub_47022( uParam0 );
        sub_128626( uParam0 );
        return 0;
    }
    if (sub_130760( uParam0, uParam1 ))
    {
        if (g_U18635[uParam0]._fU12)
        {
            sub_137140( uParam1 );
        }
        if (g_U18635[uParam0]._fU144 == 14)
        {
            g_U15728[20] = 0;
        }
        sub_43456( uParam1 );
        if (sub_137342( uParam0 ))
        {
            sub_83657( uParam0 );
            sub_137765( uParam0 );
        }
        else
        {
            sub_83982( uParam0 );
        }
        sub_47022( uParam0 );
        return 0;
    }
    if ((g_U14838[uParam1]._fU80._fU0 == 1) || (NOT g_U18635[uParam0]._fU20))
    {
        if (sub_56964( g_U18635[uParam0]._fU48 ))
        {
            if (NOT g_U18635[uParam0]._fU24)
            {
                sub_138040( uParam0 );
                sub_43456( uParam1 );
                if (sub_137342( uParam0 ))
                {
                    sub_83657( uParam0 );
                    sub_137765( uParam0 );
                }
                else
                {
                    sub_138387( uParam0 );
                }
                sub_47022( uParam0 );
                g_U15862[uParam0]._fU8[0]._fU0[2] = 0;
                return 0;
            }
        }
        if (NOT g_U18635[uParam0]._fU28)
        {
            if (sub_56964( g_U18635[uParam0]._fU32 ))
            {
                sub_138518( uParam0 );
            }
        }
    }
    if (g_U18635[uParam0]._fU20)
    {
        sub_57746( uParam1 );
    }
    else
    {
        sub_127645( uParam0, uParam1 );
    }
    if (g_U18635[uParam0]._fU20)
    {
        if (sub_138627())
        {
            sub_138650();
        }
    }
    return 1;
}

int sub_130760(unknown uParam0, unknown uParam1)
{
    int I;

    if (NOT g_U15862[uParam0]._fU4)
    {
        return 0;
    }
    if (NOT g_U15862[uParam0]._fU8[1]._fU0[2])
    {
        return 0;
    }
    if ((g_U18635[uParam0]._fU20) || (g_U18635[uParam0]._fU24))
    {
        sub_116176( uParam1 );
        return 0;
    }
    I = 0;
    if (g_U12303)
    {
        for ( I = 0; I < 11; I++ )
        {
            if (g_U12306[I]._fU8)
            {
                if ((NOT (g_U14838[I]._fU0._fU0 == 0)) AND (NOT (g_U14838[I]._fU0._fU0 == 1)))
                {
                    if (IS_BIT_SET( g_U12306[I]._fU116, uParam0 ))
                    {
                        sub_116176( uParam1 );
                        return 0;
                    }
                }
            }
        }
    }
    sub_131006( uParam0, uParam1 );
    sub_69138();
    g_U15862[uParam0]._fU4 = 0;
    g_U15862[uParam0]._fU8[1]._fU0[2] = 0;
    g_U15862[uParam0]._fU8[0]._fU0[2] = 0;
    return 1;
}

void sub_131006(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = g_U18635[uParam0]._fU144;
    switch (uVar4)
    {
        case 6:
        sub_131157( uParam0, uParam1 );
        break;
        case 8:
        sub_131733( uParam0, uParam1 );
        break;
        case 9:
        sub_131759( uParam0, uParam1 );
        break;
        case 10:
        sub_131785( uParam0, uParam1 );
        break;
        case 11:
        sub_132358( uParam0, uParam1 );
        break;
        case 12:
        sub_132934( uParam0, uParam1 );
        break;
        case 13:
        sub_133501( uParam0, uParam1 );
        break;
        case 14:
        sub_134077( uParam0, uParam1 );
        break;
        case 15:
        sub_134644( uParam0, uParam1 );
        break;
        case 17:
        sub_134670( uParam0, uParam1 );
        break;
        case 18:
        sub_134696( uParam0, uParam1 );
        break;
        case 19:
        sub_135266( uParam0, uParam1 );
        break;
        case 20:
        sub_135833( uParam0, uParam1 );
        break;
        case 21:
        sub_136406( uParam0, uParam1 );
        break;
        default: sub_24994( "FA_Player_Phones_Cancel_Activity: Unknown Activity" );
    }
    return;
}

void sub_131157(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_113119( uParam0, uParam1 );
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_AHC", "E1FCJ2_CH" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_AHC", "E1FCJ2_CM" );
        }
        else
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_AHC", "E1FCJ2_CL" );
        }
        return;
        case 6:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_AHC", "E1FCT2_HI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_AHC", "E1FCT2_MED" );
        }
        else
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_AHC", "E1FCT2_LO" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_AHC", "E1FCC2_CHI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_AHC", "E1FCC2_CMD" );
        }
        else
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_AHC", "E1FCC2_CLO" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_131733(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_131759(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_131785(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_113119( uParam0, uParam1 );
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_DTC", "E1FCJ2_CH" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_DTC", "E1FCJ2_CM" );
        }
        else
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_DTC", "E1FCJ2_CL" );
        }
        return;
        case 6:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_DC", "E1FCT2_HI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_DC", "E1FCT2_MED" );
        }
        else
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_DC", "E1FCT2_LO" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_CDT", "E1FCC2_CHI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_CDT", "E1FCC2_CMD" );
        }
        else
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_CDT", "E1FCC2_CLO" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_132358(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_113119( uParam0, uParam1 );
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_DRC", "E1FCJ2_CH" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_DRC", "E1FCJ2_CM" );
        }
        else
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_DRC", "E1FCJ2_CL" );
        }
        return;
        case 6:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_DRC", "E1FCT2_HI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_DRC", "E1FCT2_MED" );
        }
        else
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_DRC", "E1FCT2_LO" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_DRC", "E1FCC2_CHI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_DRC", "E1FCC2_CMD" );
        }
        else
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_DRC", "E1FCC2_CLO" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_132934(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_113119( uParam0, uParam1 );
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_EC", "E1FCJ2_CH" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_EC", "E1FCJ2_CM" );
        }
        else
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_EC", "E1FCJ2_CL" );
        }
        return;
        case 6:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_EC", "E1FCT2_HI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_EC", "E1FCT2_MED" );
        }
        else
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_EC", "E1FCT2_LO" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_EC", "E1FCC2_CHI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_EC", "E1FCC2_CMD" );
        }
        else
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_EC", "E1FCC2_CLO" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_133501(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_113119( uParam0, uParam1 );
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_GWC", "E1FCJ2_CH" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_GWC", "E1FCJ2_CM" );
        }
        else
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_GWC", "E1FCJ2_CL" );
        }
        return;
        case 6:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_GWC", "E1FCT2_HI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_GWC", "E1FCT2_MED" );
        }
        else
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_GWC", "E1FCT2_LO" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_GWC", "E1FCC2_CHI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_GWC", "E1FCC2_CMD" );
        }
        else
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_GWC", "E1FCC2_CLO" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_134077(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_113119( uParam0, uParam1 );
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_HC", "E1FCJ2_CH" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_HC", "E1FCJ2_CM" );
        }
        else
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_HC", "E1FCJ2_CL" );
        }
        return;
        case 6:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_HC", "E1FCT2_HI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_HC", "E1FCT2_MED" );
        }
        else
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_HC", "E1FCT2_LO" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_HC", "E1FCC2_CHI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_HC", "E1FCC2_CMD" );
        }
        else
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_HC", "E1FCC2_CLO" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_134644(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_134670(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_134696(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_113119( uParam0, uParam1 );
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_PLC", "E1FCJ2_CH" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_PLC", "E1FCJ2_CM" );
        }
        else
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_PLC", "E1FCJ2_CL" );
        }
        return;
        case 6:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_PC", "E1FCT2_HI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_PC", "E1FCT2_MED" );
        }
        else
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_PC", "E1FCT2_LO" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_PC", "E1FCC2_CHI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_PC", "E1FCC2_CMD" );
        }
        else
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_PC", "E1FCC2_CLO" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_135266(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_113119( uParam0, uParam1 );
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_RC", "E1FCJ2_CH" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_RC", "E1FCJ2_CM" );
        }
        else
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_RC", "E1FCJ2_CL" );
        }
        return;
        case 6:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_RC", "E1FCT2_HI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_RC", "E1FCT2_MED" );
        }
        else
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_RC", "E1FCT2_LO" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_RC", "E1FCC2_CHI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_RC", "E1FCC2_CMD" );
        }
        else
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_RC", "E1FCC2_CLO" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_135833(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_113119( uParam0, uParam1 );
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_SC", "E1FCJ2_CH" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_SC", "E1FCJ2_CM" );
        }
        else
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_SC", "E1FCJ2_CL" );
        }
        return;
        case 6:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_SHC", "E1FCT2_HI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_SHC", "E1FCT2_MED" );
        }
        else
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_SHC", "E1FCT2_LO" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_SHC", "E1FCC2_CHI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_SHC", "E1FCC2_CMD" );
        }
        else
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_SHC", "E1FCC2_CLO" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_136406(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_113119( uParam0, uParam1 );
    switch (uParam0)
    {
        case 1:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_STC", "E1FCJ2_CH" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_STC", "E1FCJ2_CM" );
        }
        else
        {
            sub_120540( uParam0, "E1FCJ2A", "E1FCJ2_STC", "E1FCJ2_CL" );
        }
        return;
        case 6:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_STC", "E1FCT2_HI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_STC", "E1FCT2_MED" );
        }
        else
        {
            sub_120540( uParam0, "E1FCT2A", "E1FCT2_STC", "E1FCT2_LO" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_STC", "E1FCC2_CHI" );
        }
        else if (iVar4 == 1)
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_STC", "E1FCC2_CMD" );
        }
        else
        {
            sub_120540( uParam0, "E1FCC2A", "E1FCC2_STC", "E1FCC2_CLO" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "E1MFAU", 1 );
    return;
}

void sub_137140(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = -1;
        break;
        default:
        sub_24994( "Flow_Player_Cancelled_Activity_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_86987( uParam0, 1, iVar3 );
    return;
}

void sub_137342(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    int iVar5;
    int I;
    boolean Result;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    uVar4 = sub_72776( uParam0 );
    iVar5 = 0;
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (g_U12306[uVar4]._fU144[I]._fU36)
        {
            iVar5 = 1;
        }
    }
    if ((g_U18635[uParam0]._fU4) || (iVar5))
    {
        sub_83690( uParam0 );
        return 0;
    }
    Result = iVar3 > g_U18635[uParam0]._fU88;
    if (sub_137487( uParam0 ))
    {
        sub_83690( uParam0 );
        return 0;
    }
    if (Result)
    {
        if ((NOT (g_U14838[uVar4]._fU0._fU0 == 0)) AND (NOT (g_U14838[uVar4]._fU0._fU0 == 1)))
        {
            g_U18635[uParam0]._fU88 = iVar3 + 60000;
            Result = false;
        }
    }
    if (Result)
    {
        if (g_U14838[uVar4]._fU160._fU96)
        {
            g_U18635[uParam0]._fU88 = iVar3 + 60000;
            Result = false;
        }
    }
    if (Result)
    {
        if ((g_U12306[uVar4]._fU40[1] < g_U18635[uParam0]._fU160) || (g_U18635[uParam0]._fU164))
        {
            g_U18635[uParam0]._fU88 = iVar3 + 60000;
            Result = false;
        }
    }
    return Result;
}

int sub_137487(unknown uParam0)
{
    return 0;
}

void sub_137765(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = g_U18635[uParam0]._fU108;
    uVar4 = sub_137793( uParam0 );
    sub_81298( uVar3 );
    sub_78656( uVar3, uParam0, uVar4, 5000, 2, 64537 );
    return;
}

void sub_137793(unknown uParam0)
{
    unknown Result;
    int iVar4;

    Result = g_U18635[uParam0]._fU132;
    iVar4 = Result;
    iVar4++;
    if (iVar4 >= g_U18635[uParam0]._fU128)
    {
        iVar4 = g_U18635[uParam0]._fU124;
    }
    g_U18635[uParam0]._fU132 = iVar4;
    return Result;
}

void sub_138040(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if (g_U18635[uParam0]._fU144 == 14)
    {
        g_U15728[20] = 0;
    }
    sub_1000( ref g_U18635[uParam0]._fU48 );
    uVar3 = g_U18635[uParam0]._fU104;
    uVar4 = sub_138118( uParam0 );
    sub_81298( uVar3 );
    sub_78656( uVar3, uParam0, uVar4, 5000, 3, 64537 );
    iVar5 = 300000;
    if (g_U0)
    {
        iVar5 = 30000;
    }
    iVar6 = 60000;
    if (g_U0)
    {
        iVar6 = 20000;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    g_U18635[uParam0]._fU152 = iVar7 + iVar5;
    g_U18635[uParam0]._fU156 = iVar7 + iVar6;
    return;
}

void sub_138118(unknown uParam0)
{
    unknown Result;
    int iVar4;

    Result = g_U18635[uParam0]._fU120;
    iVar4 = Result;
    iVar4++;
    if (iVar4 >= g_U18635[uParam0]._fU116)
    {
        iVar4 = g_U18635[uParam0]._fU112;
    }
    g_U18635[uParam0]._fU120 = iVar4;
    return Result;
}

void sub_138387(unknown uParam0)
{
    g_U18635[uParam0]._fU84 = g_U18635[uParam0]._fU88 + 10000;
    return;
}

void sub_138518(unknown uParam0)
{
    sub_1000( ref g_U18635[uParam0]._fU32 );
    g_U18635[uParam0]._fU28 = 1;
    return;
}

int sub_138627()
{
    return 0;
}

void sub_138650()
{
    return;
}

int sub_138701(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (sub_127674( uParam0 )))
    {
        return 0;
    }
    iVar4 = 0;
    iVar5 = 22;
    while (iVar4 < iVar5)
    {
        if (sub_138749( uParam0, uParam1, iVar4 ))
        {
            return 1;
        }
        iVar4++;
    }
    PRINTSTRING( "Flow_Maintain_Friend_Player_Chose_Activity: Failed to find a friend-selected activity\n" );
    return 0;
}

int sub_138749(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    boolean bVar6;

    if (NOT g_U15862[uParam0]._fU8[1]._fU0[uParam2])
    {
        return 0;
    }
    if (g_U18635[uParam0]._fU208[uParam2]._fU0 == -1)
    {
        sub_51310( "Flow_Check_Friend_Activity_Selected: Trigger Info for Friend Activity not set up\n" );
        return 0;
    }
    if (g_U18635[uParam0]._fU64 == 0)
    {
        if (NOT (g_U14838[uParam1]._fU80._fU0 == 0))
        {
            g_U15862[uParam0]._fU8[1]._fU0[uParam2] = 0;
            g_U15862[uParam0]._fU4 = 0;
            return 1;
        }
        if (sub_139005( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (sub_139197( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (sub_139390( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (NOT g_U15728[8])
        {
            if (sub_139625( 1, uParam1, uParam2 ))
            {
                return 1;
            }
        }
        if (sub_139625( 6, uParam1, uParam2 ))
        {
            return 1;
        }
        if (sub_139625( 7, uParam1, uParam2 ))
        {
            return 1;
        }
        if (sub_139827( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (sub_140137( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (NOT g_U18635[uParam0]._fU164)
        {
            if (sub_140500( uParam0, uParam1, uParam2 ))
            {
                return 1;
            }
            if (sub_140692( uParam0, uParam1, uParam2 ))
            {
                return 1;
            }
            if (sub_144298( uParam0, uParam1, uParam2 ))
            {
                return 1;
            }
        }
        sub_43456( uParam1 );
        g_U18635[uParam0]._fU64 = 1;
        g_U12305 = 1;
        uVar5 = uParam2;
        g_U18635[uParam0]._fU144 = uVar5;
        if (g_U18635[uParam0]._fU164)
        {
            sub_148478( uParam0, uParam2 );
            g_U18635[uParam0]._fU164 = 0;
            if (g_U12306[uParam1]._fU40[1] < g_U18635[uParam0]._fU160)
            {
                g_U12306[uParam1]._fU40[1] = g_U18635[uParam0]._fU160;
            }
        }
        else
        {
            sub_151686( uParam0, uParam2 );
        }
        sub_69138();
        return 1;
    }
    bVar6 = false;
    switch (sub_69197())
    {
        case 6:
        bVar6 = false;
        break;
        case 2:
        bVar6 = true;
        break;
        default: return 1;
    }
    g_U12305 = 0;
    g_U15862[uParam0]._fU8[1]._fU0[uParam2] = 0;
    g_U15862[uParam0]._fU4 = 0;
    g_U18635[uParam0]._fU64 = 0;
    g_U18635[uParam0]._fU20 = 0;
    g_U15642[uParam1]._fU16 = 1;
    if (bVar6)
    {
        return 1;
    }
    sub_160514( uParam1, g_U18635[uParam0]._fU208[uParam2]._fU0 );
    g_U18635[uParam0]._fU16 = 1;
    g_U18635[uParam0]._fU12 = 1;
    g_U12306[uParam1]._fU28 = 1;
    sub_130442( uParam0 );
    g_U15862[uParam0]._fU8[0]._fU0[2] = 1;
    sub_160613( uParam1 );
    return 1;
}

int sub_139005(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return 0;
    }
    if (g_U18635[uParam0]._fU4)
    {
        sub_58115( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76, 0 );
        sub_61148( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76 );
        sub_48275();
        g_U15862[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U15862[uParam0]._fU4 = 0;
        sub_69138();
        return 1;
    }
    return 0;
}

int sub_139197(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return 0;
    }
    if (NOT g_U18635[uParam0]._fU8)
    {
        sub_58115( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76, 0 );
        sub_61148( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76 );
        sub_48275();
        g_U15862[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U15862[uParam0]._fU4 = 0;
        sub_69138();
        return 1;
    }
    return 0;
}

int sub_139390(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (sub_72998( uParam1, I ))
        {
            if (g_U12306[uParam1]._fU144[I]._fU84)
            {
                sub_58115( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76, 0 );
                sub_61148( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76 );
                sub_48275();
                g_U15862[uParam0]._fU8[1]._fU0[uParam2] = 0;
                g_U15862[uParam0]._fU4 = 0;
                sub_69138();
                return 1;
            }
        }
    }
    return 0;
}

int sub_139625(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_70510( uParam0 ))
    {
        sub_58115( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76, 0 );
        sub_61148( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76 );
        sub_48275();
        g_U15862[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U15862[uParam0]._fU4 = 0;
        sub_69138();
        return 1;
    }
    return 0;
}

int sub_139827(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    boolean bVar7;

    iVar5 = 600000;
    if (g_U0)
    {
        iVar5 = 30000;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    bVar7 = false;
    if (g_U18635[uParam0]._fU164)
    {
        if (g_U18635[uParam0]._fU156 < iVar6)
        {
            return 0;
        }
        sub_58115( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76, 0 );
        sub_61148( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76 );
        sub_48275();
        bVar7 = true;
    }
    if (NOT bVar7)
    {
        if (g_U12306[uParam1]._fU40[1] < g_U18635[uParam0]._fU160)
        {
            g_U18635[uParam0]._fU164 = 1;
            return 0;
        }
    }
    if (bVar7)
    {
        g_U15862[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U15862[uParam0]._fU4 = 0;
        sub_69138();
        return 1;
    }
    return 0;
}

int sub_140137(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    boolean bVar6;

    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return 0;
    }
    iVar5 = uParam2;
    bVar6 = false;
    if ((sub_112492()) || (sub_118931()))
    {
        bVar6 = true;
    }
    if (NOT bVar6)
    {
        if (iVar5 == 14)
        {
            if (sub_140211())
            {
                bVar6 = true;
            }
        }
    }
    if (NOT bVar6)
    {
        return 0;
    }
    sub_58115( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76, 0 );
    sub_61148( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76 );
    sub_48275();
    g_U15862[uParam0]._fU8[1]._fU0[uParam2] = 0;
    g_U15862[uParam0]._fU4 = 0;
    sub_69138();
    return 1;
}

int sub_140211()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    float fVar5;

    if (IS_PLAYER_PLAYING( sub_7787() ))
    {
        GET_CHAR_COORDINATES( sub_15549(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar2._fU0, uVar2._fU4, uVar2._fU8, -1723.74000000, 336.91610000, 25.34170000, ref fVar5 );
        if (fVar5 < 400.00000000)
        {
            return 1;
        }
    }
    return 0;
}

int sub_140500(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return 0;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_7787(), 0 ))
    {
        sub_58115( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76, 0 );
        sub_61148( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76 );
        sub_48275();
        g_U15862[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U15862[uParam0]._fU4 = 0;
        sub_69138();
        return 1;
    }
    return 0;
}

int sub_140692(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_140703( uParam0 ))
    {
        if (g_U18635[uParam0]._fU188._fU16)
        {
            sub_58115( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76, 0 );
            sub_61148( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76 );
            sub_48275();
        }
        else
        {
            sub_140911( uParam0, uParam2 );
            g_U18635[uParam0]._fU176 = 1;
            g_U18635[uParam0]._fU188._fU16 = 1;
        }
        g_U15862[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U15862[uParam0]._fU4 = 0;
        sub_69138();
        return 1;
    }
    g_U18635[uParam0]._fU188._fU16 = 0;
    return 0;
}

int sub_140703(unknown uParam0)
{
    if (g_U18635[uParam0]._fU188._fU0._fU0 == -1)
    {
        return 0;
    }
    if (NOT (sub_100246( g_U18635[uParam0]._fU188._fU0, g_U18635[uParam0]._fU188._fU8 )))
    {
        return 0;
    }
    return 1;
}

void sub_140911(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 6:
        sub_141039( uParam0 );
        break;
        case 8:
        sub_141462( uParam0 );
        break;
        case 9:
        sub_141486( uParam0 );
        break;
        case 10:
        sub_141510( uParam0 );
        break;
        case 11:
        sub_141796( uParam0 );
        break;
        case 12:
        sub_142083( uParam0 );
        break;
        case 13:
        sub_142369( uParam0 );
        break;
        case 14:
        sub_142656( uParam0 );
        break;
        case 15:
        sub_142941( uParam0 );
        break;
        case 18:
        sub_142965( uParam0 );
        break;
        case 19:
        sub_143250( uParam0 );
        break;
        case 20:
        sub_143534( uParam0 );
        break;
        case 21:
        sub_143821( uParam0 );
        break;
        default: sub_24994( "FA_Player_Phones_Do_Activity_Sleeping: Unknown Activity" );
    }
    return;
}

void sub_141039(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_AIRH", "E1FCJ_ASLP", "E1FCJ_SWU" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_AH", "E1FCT_SLP", "E1FCT_WKUP" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_AH", "E1FCC_SLP", "E1FCC_SOZ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_141142(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_113699( uParam0 );
    sub_141182( ref l_U322[uVar8]._fU0, uParam2, uParam3, uParam4, uParam5 );
    sub_120594( ref l_U322[uVar8]._fU0, uParam1, 1 );
    sub_48275();
    sub_71020( uParam0, 1 );
    return;
}

void sub_141182(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_113902( uParam0, uParam1, uParam2, uParam3, uParam4, "END", "END", "END", "END" );
    return;
}

void sub_141462(unknown uParam0)
{
    return;
}

void sub_141486(unknown uParam0)
{
    return;
}

void sub_141510(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_D", "E1FCJ_ASLP", "E1FCJ_SWU" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_DT", "E1FCT_SLP", "E1FCT_WKUP" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_DT", "E1FCC_SLP", "E1FCC_SOZ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_141796(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_DR", "E1FCJ_ASLP", "E1FCJ_SWU" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_DR", "E1FCT_SLP", "E1FCT_WKUP" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_DR", "E1FCC_SLP", "E1FCC_SOZ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_142083(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_EAT", "E1FCJ_ASLP", "E1FCJ_SWU" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_E", "E1FCT_SLP", "E1FCT_WKUP" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_E", "E1FCC_SLP", "E1FCC_SOZ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_142369(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_GW", "E1FCJ_ASLP", "E1FCJ_SWU" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_GW", "E1FCT_SLP", "E1FCT_WKUP" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_GW", "E1FCC_SLP", "E1FCC_SOZ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_142656(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_HT", "E1FCJ_ASLP", "E1FCJ_SWU" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_H", "E1FCT_SLP", "E1FCT_WKUP" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_H", "E1FCC_SLP", "E1FCC_SOZ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_142941(unknown uParam0)
{
    return;
}

void sub_142965(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_P", "E1FCJ_ASLP", "E1FCJ_SWU" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_P", "E1FCT_SLP", "E1FCT_WKUP" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_PL", "E1FCC_SLP", "E1FCC_SOZ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_143250(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_R", "E1FCJ_ASLP", "E1FCJ_SWU" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_R", "E1FCT_SLP", "E1FCT_WKUP" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_R", "E1FCC_SLP", "E1FCC_SOZ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_143534(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_SH", "E1FCJ_ASLP", "E1FCJ_SWU" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_SH", "E1FCT_SLP", "E1FCT_WKUP" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_SH", "E1FCC_SLP", "E1FCC_SOZ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_143821(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_ST", "E1FCJ_ASLP", "E1FCJ_SWU" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_ST", "E1FCT_SLP", "E1FCT_WKUP" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_ST", "E1FCC_SLP", "E1FCC_SOZ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "E1MFAU", 1 );
    return;
}

int sub_144298(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;
    boolean bVar9;
    int iVar10;

    if (g_U0)
    {
        return 0;
    }
    iVar5 = 120000;
    if (g_U0)
    {
        iVar5 = 20000;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    bVar7 = false;
    if (g_U18635[uParam0]._fU156 > iVar6)
    {
        sub_58115( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76, 0 );
        sub_61148( ref g_U12306[uParam1]._fU92, ref g_U12306[uParam1]._fU76 );
        sub_48275();
        bVar7 = true;
    }
    if (NOT bVar7)
    {
        iVar8 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar8 );
        bVar9 = iVar8 < 50;
        iVar10 = g_U18635[uParam0]._fU148;
        if (((iVar10 == iParam2) AND (bVar9)) AND (NOT g_U18635[uParam0]._fU92))
        {
            sub_144541( uParam0, iParam2 );
            g_U18635[uParam0]._fU156 = iVar6 + iVar5;
            bVar7 = true;
        }
    }
    if (NOT bVar7)
    {
        if (g_U18635[uParam0]._fU152 > iVar6)
        {
            sub_147919( uParam0, iParam2 );
            g_U18635[uParam0]._fU156 = iVar6 + iVar5;
            bVar7 = true;
        }
    }
    if (bVar7)
    {
        g_U15862[uParam0]._fU8[1]._fU0[iParam2] = 0;
        g_U15862[uParam0]._fU4 = 0;
        sub_69138();
        return 1;
    }
    return 0;
}

void sub_144541(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 6:
        sub_144669( uParam0 );
        break;
        case 8:
        sub_144977( uParam0 );
        break;
        case 9:
        sub_145001( uParam0 );
        break;
        case 10:
        sub_145025( uParam0 );
        break;
        case 11:
        sub_145330( uParam0 );
        break;
        case 12:
        sub_145636( uParam0 );
        break;
        case 13:
        sub_145941( uParam0 );
        break;
        case 14:
        sub_146247( uParam0 );
        break;
        case 15:
        sub_146551( uParam0 );
        break;
        case 18:
        sub_146575( uParam0 );
        break;
        case 19:
        sub_146879( uParam0 );
        break;
        case 20:
        sub_147182( uParam0 );
        break;
        case 21:
        sub_147488( uParam0 );
        break;
        default: sub_24994( "FA_Player_Phones_Do_Activity_No_Same: Unknown Activity" );
    }
    return;
}

void sub_144669(unknown uParam0)
{
    sub_144680( uParam0 );
    return;
}

void sub_144680(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_AIRH", "E1FCJ_ACTNO", "E1FCJ_REJ" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_AH", "E1FCT_ACTN", "E1FCT_REJ" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_AH", "E1FCC_NO", "E1FCC_REJ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_144977(unknown uParam0)
{
    return;
}

void sub_145001(unknown uParam0)
{
    return;
}

void sub_145025(unknown uParam0)
{
    sub_145036( uParam0 );
    return;
}

void sub_145036(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_D", "E1FCJ_ACTNO", "E1FCJ_REJ" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_DT", "E1FCT_ACTN", "E1FCT_REJ" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_DT", "E1FCC_NO", "E1FCC_REJ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_145330(unknown uParam0)
{
    sub_145341( uParam0 );
    return;
}

void sub_145341(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_DR", "E1FCJ_ACTNO", "E1FCJ_REJ" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_DR", "E1FCT_ACTN", "E1FCT_REJ" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_DR", "E1FCC_NO", "E1FCC_REJ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_145636(unknown uParam0)
{
    sub_145647( uParam0 );
    return;
}

void sub_145647(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_EAT", "E1FCJ_ACTNO", "E1FCJ_REJ" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_E", "E1FCT_ACTN", "E1FCT_REJ" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_E", "E1FCC_NO", "E1FCC_REJ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_145941(unknown uParam0)
{
    sub_145952( uParam0 );
    return;
}

void sub_145952(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_GW", "E1FCJ_ACTNO", "E1FCJ_REJ" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_GW", "E1FCT_ACTN", "E1FCT_REJ" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_GW", "E1FCC_NO", "E1FCC_REJ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_146247(unknown uParam0)
{
    sub_146258( uParam0 );
    return;
}

void sub_146258(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_HT", "E1FCJ_ACTNO", "E1FCJ_REJ" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_H", "E1FCT_ACTN", "E1FCT_REJ" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_H", "E1FCC_NO", "E1FCC_REJ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_146551(unknown uParam0)
{
    return;
}

void sub_146575(unknown uParam0)
{
    sub_146586( uParam0 );
    return;
}

void sub_146586(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_P", "E1FCJ_ACTNO", "E1FCJ_REJ" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_P", "E1FCT_ACTN", "E1FCT_REJ" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_PL", "E1FCC_NO", "E1FCC_REJ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_146879(unknown uParam0)
{
    sub_146890( uParam0 );
    return;
}

void sub_146890(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_R", "E1FCJ_ACTNO", "E1FCJ_REJ" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_R", "E1FCT_ACTN", "E1FCT_REJ" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_R", "E1FCC_NO", "E1FCC_REJ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_147182(unknown uParam0)
{
    sub_147193( uParam0 );
    return;
}

void sub_147193(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_SH", "E1FCJ_ACTNO", "E1FCJ_REJ" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_SH", "E1FCT_ACTN", "E1FCT_REJ" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_SH", "E1FCC_NO", "E1FCC_REJ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_147488(unknown uParam0)
{
    sub_147499( uParam0 );
    return;
}

void sub_147499(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_ST", "E1FCJ_ACTNO", "E1FCJ_REJ" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_ST", "E1FCT_ACTN", "E1FCT_REJ" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_ST", "E1FCC_NO", "E1FCC_REJ" );
        return;
    }
    sub_58115( "PLACEHOLDER", "E1MFAU", 1 );
    return;
}

void sub_147919(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 6:
        sub_144680( uParam0 );
        break;
        case 8:
        sub_148059( uParam0 );
        break;
        case 9:
        sub_148083( uParam0 );
        break;
        case 10:
        sub_145036( uParam0 );
        break;
        case 11:
        sub_145341( uParam0 );
        break;
        case 12:
        sub_145647( uParam0 );
        break;
        case 13:
        sub_145952( uParam0 );
        break;
        case 14:
        sub_146258( uParam0 );
        break;
        case 15:
        sub_148167( uParam0 );
        break;
        case 18:
        sub_146586( uParam0 );
        break;
        case 19:
        sub_146890( uParam0 );
        break;
        case 20:
        sub_147193( uParam0 );
        break;
        case 21:
        sub_147499( uParam0 );
        break;
        default: sub_24994( "FA_Player_Phones_Do_Activity_No_General: Unknown Activity" );
    }
    return;
}

void sub_148059(unknown uParam0)
{
    return;
}

void sub_148083(unknown uParam0)
{
    return;
}

void sub_148167(unknown uParam0)
{
    return;
}

void sub_148478(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 6:
        sub_148606( uParam0 );
        break;
        case 8:
        sub_148893( uParam0 );
        break;
        case 9:
        sub_148917( uParam0 );
        break;
        case 10:
        sub_148941( uParam0 );
        break;
        case 11:
        sub_149224( uParam0 );
        break;
        case 12:
        sub_149509( uParam0 );
        break;
        case 13:
        sub_149793( uParam0 );
        break;
        case 14:
        sub_150078( uParam0 );
        break;
        case 15:
        sub_150361( uParam0 );
        break;
        case 18:
        sub_150385( uParam0 );
        break;
        case 19:
        sub_150668( uParam0 );
        break;
        case 20:
        sub_150950( uParam0 );
        break;
        case 21:
        sub_151235( uParam0 );
        break;
        default: sub_24994( "FA_Player_Phones_Do_Activity_Low_Like: Unknown Activity" );
    }
    return;
}

void sub_148606(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_AIRH", "E1FCJ_LKLO", "E1FCJ_Y" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_AH", "E1FCT_LILO", "E1FCT_ACC" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_AH", "E1FCC_LKL", "E1FCC_ACC" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_148893(unknown uParam0)
{
    return;
}

void sub_148917(unknown uParam0)
{
    return;
}

void sub_148941(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_D", "E1FCJ_LKLO", "E1FCJ_Y" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_DT", "E1FCT_LILO", "E1FCT_ACC" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_DT", "E1FCC_LK", "E1FCC_ACC" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_149224(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_DR", "E1FCJ_LKLO", "E1FCJ_Y" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_DR", "E1FCT_LILO", "E1FCT_ACC" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_DR", "E1FCC_LKL", "E1FCC_ACC" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_149509(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_EAT", "E1FCJ_LKLO", "E1FCJ_Y" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_E", "E1FCT_LILO", "E1FCT_ACC" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_E", "E1FCC_LKL", "E1FCC_ACC" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_149793(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_GW", "E1FCJ_LKLO", "E1FCJ_Y" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_GW", "E1FCT_LILO", "E1FCT_ACC" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_GW", "E1FCC_LKL", "E1FCC_ACC" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_150078(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_HT", "E1FCJ_LKLO", "E1FCJ_Y" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_H", "E1FCT_LILO", "E1FCT_ACC" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_H", "E1FCC_LKL", "E1FCC_ACC" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_150361(unknown uParam0)
{
    return;
}

void sub_150385(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_P", "E1FCJ_LKLO", "E1FCJ_Y" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_P", "E1FCT_LILO", "E1FCT_ACC" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_PL", "E1FCC_LKL", "E1FCC_ACC" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_150668(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_R", "E1FCJ_LKLO", "E1FCJ_Y" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_R", "E1FCT_LILO", "E1FCT_ACC" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_R", "E1FCC_LKL", "E1FCC_ACC" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_150950(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_SH", "E1FCJ_LKLO", "E1FCJ_Y" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_SH", "E1FCT_LILO", "E1FCT_ACC" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_SH", "E1FCC_LKL", "E1FCC_ACC" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_151235(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_ST", "E1FCJ_LKLO", "E1FCJ_Y" );
        return;
        case 6:
        sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_ST", "E1FCT_LILO", "E1FCT_ACC" );
        return;
        case 7:
        sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_ST", "E1FCC_LKL", "E1FCC_ACC" );
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_151686(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 6:
        sub_151814( uParam0 );
        break;
        case 8:
        sub_152787( uParam0 );
        break;
        case 9:
        sub_152811( uParam0 );
        break;
        case 10:
        sub_152835( uParam0 );
        break;
        case 11:
        sub_153658( uParam0 );
        break;
        case 12:
        sub_154487( uParam0 );
        break;
        case 13:
        sub_155310( uParam0 );
        break;
        case 14:
        sub_156140( uParam0 );
        break;
        case 15:
        sub_156958( uParam0 );
        break;
        case 18:
        sub_156982( uParam0 );
        break;
        case 19:
        sub_157800( uParam0 );
        break;
        case 20:
        sub_158612( uParam0 );
        break;
        case 21:
        sub_159442( uParam0 );
        break;
        default: sub_24994( "FA_Player_Phones_Do_Activity_Yes: Unknown Activity" );
    }
    return;
}

void sub_151814(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U18635[uParam0]._fU92;
    bVar4 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_AIRH", "E1FCJ_VIR", "E1FCJ_AIRHY", "E1FCJ_Y" );
            }
            else
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_AIRH", "E1FCJ_IR", "E1FCJ_AIRHY", "E1FCJ_Y" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_AIRH", "E1FCJ_AIRHY", "E1FCJ_Y" );
        }
        return;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_AH", "E1FCT_VIR", "E1FCT_AHY", "E1FCT_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_AH", "E1FCT_IR", "E1FCT_AHY", "E1FCT_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_AH", "E1FCT_AHY", "E1FCT_ACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_AH", "E1FCC_VIR", "E1FCC_AHY", "E1FCC_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_AH", "E1FCC_IR", "E1FCC_AHY", "E1FCC_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_AH", "E1FCC_AHY", "E1FCC_ACC" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "E1MFAU", 1 );
    return;
}

void sub_151976(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    unknown uVar9;

    uVar9 = sub_113699( uParam0 );
    sub_152018( ref l_U322[uVar9]._fU0, uParam2, uParam3, uParam4, uParam5, uParam6 );
    sub_120594( ref l_U322[uVar9]._fU0, uParam1, 1 );
    sub_48275();
    sub_71020( uParam0, 1 );
    return;
}

void sub_152018(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_113902( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, "END", "END", "END" );
    return;
}

void sub_152787(unknown uParam0)
{
    return;
}

void sub_152811(unknown uParam0)
{
    return;
}

void sub_152835(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U18635[uParam0]._fU92;
    bVar4 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_D", "E1FCJ_VIR", "E1FCJ_DY", "E1FCJ_Y" );
            }
            else
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_D", "E1FCJ_IR", "E1FCJ_DY", "E1FCJ_Y" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_D", "E1FCJ_DY", "E1FCJ_Y" );
        }
        return;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_DT", "E1FCT_VIR", "E1FCT_DTY", "E1FCT_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_DT", "E1FCT_IR", "E1FCT_DTY", "E1FCT_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_DT", "E1FCT_DTY", "E1FCT_ACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_DT", "E1FCC_VIR", "E1FCC_DTY", "E1FCC_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_DT", "E1FCC_IR", "E1FCC_DTY", "E1FCC_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_DT", "E1FCC_DTY", "E1FCC_ACC" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "E1MFAU", 1 );
    return;
}

void sub_153658(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U18635[uParam0]._fU92;
    bVar4 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_DR", "E1FCJ_VIR", "E1FCJ_DRY", "E1FCJ_Y" );
            }
            else
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_DR", "E1FCJ_IR", "E1FCJ_DRY", "E1FCJ_Y" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_DR", "E1FCJ_DRY", "E1FCJ_Y" );
        }
        return;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_DR", "E1FCT_VIR", "E1FCT_DRY", "E1FCT_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_DR", "E1FCT_IR", "E1FCT_DRY", "E1FCT_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_DR", "E1FCT_DRY", "E1FCT_ACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_DR", "E1FCC_VIR", "E1FCC_DRY", "E1FCC_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_DR", "E1FCC_IR", "E1FCC_DRY", "E1FCC_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_DR", "E1FCC_DRY", "E1FCC_ACC" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "E1MFAU", 1 );
    return;
}

void sub_154487(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U18635[uParam0]._fU92;
    bVar4 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_EAT", "E1FCJ_VIR", "E1FCJ_EATY", "E1FCJ_Y" );
            }
            else
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_EAT", "E1FCJ_IR", "E1FCJ_EATY", "E1FCJ_Y" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_EAT", "E1FCJ_EATY", "E1FCJ_Y" );
        }
        return;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_E", "E1FCT_VIR", "E1FCT_EY", "E1FCT_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_E", "E1FCT_IR", "E1FCT_EY", "E1FCT_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_E", "E1FCT_EY", "E1FCT_ACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_E", "E1FCC_VIR", "E1FCC_EY", "E1FCC_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_E", "E1FCC_IR", "E1FCC_EY", "E1FCC_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_E", "E1FCC_EY", "E1FCC_ACC" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "E1MFAU", 1 );
    return;
}

void sub_155310(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U18635[uParam0]._fU92;
    bVar4 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_GW", "E1FCJ_VIR", "E1FCJ_GWY", "E1FCJ_Y" );
            }
            else
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_GW", "E1FCJ_IR", "E1FCJ_GWY", "E1FCJ_Y" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_GW", "E1FCJ_GWY", "E1FCJ_Y" );
        }
        return;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_GW", "E1FCT_VIR", "E1FCT_GWY", "E1FCT_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_GW", "E1FCT_IR", "E1FCT_GWY", "E1FCT_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_GW", "E1FCT_GWY", "E1FCT_ACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_GW", "E1FCC_VIR", "E1FCC_GWY", "E1FCC_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_GW", "E1FCC_IR", "E1FCC_GWY", "E1FCC_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_GW", "E1FCC_GWY", "E1FCC_ACC" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_156140(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U18635[uParam0]._fU92;
    bVar4 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_HT", "E1FCJ_VIR", "E1FCJ_HTY", "E1FCJ_Y" );
            }
            else
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_HT", "E1FCJ_IR", "E1FCJ_HTY", "E1FCJ_Y" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_HT", "E1FCJ_HTY", "E1FCJ_Y" );
        }
        return;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_H", "E1FCT_VIR", "E1FCT_HY", "E1FCT_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_H", "E1FCT_IR", "E1FCT_HY", "E1FCT_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_H", "E1FCT_HY", "E1FCT_ACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_H", "E1FCC_VIR", "E1FCC_HY", "E1FCC_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_H", "E1FCC_IR", "E1FCC_HY", "E1FCC_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_H", "E1FCC_HY", "E1FCC_ACC" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_156958(unknown uParam0)
{
    return;
}

void sub_156982(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U18635[uParam0]._fU92;
    bVar4 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_P", "E1FCJ_VIR", "E1FCJ_PY", "E1FCJ_Y" );
            }
            else
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_P", "E1FCJ_IR", "E1FCJ_PY", "E1FCJ_Y" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_P", "E1FCJ_PY", "E1FCJ_Y" );
        }
        return;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_P", "E1FCT_VIR", "E1FCT_PY", "E1FCT_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_P", "E1FCT_IR", "E1FCT_PY", "E1FCT_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_P", "E1FCT_PY", "E1FCT_ACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_PL", "E1FCC_VIR", "E1FCC_PLY", "E1FCC_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_PL", "E1FCC_IR", "E1FCC_PLY", "E1FCC_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_PL", "E1FCC_PLY", "E1FCC_ACC" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_157800(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U18635[uParam0]._fU92;
    bVar4 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_R", "E1FCJ_VIR", "E1FCJ_RY", "E1FCJ_Y" );
            }
            else
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_R", "E1FCJ_IR", "E1FCJ_RY", "E1FCJ_Y" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_R", "E1FCJ_RY", "E1FCJ_Y" );
        }
        return;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_R", "E1FCT_VIR", "E1FCT_RY", "E1FCT_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_R", "E1FCT_IR", "E1FCT_RY", "E1FCT_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_R", "E1FCT_RY", "E1FCT_ACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_R", "E1FCC_VIR", "E1FCC_RY", "E1FCC_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_R", "E1FCC_IR", "E1FCC_RY", "E1FCC_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_R", "E1FCC_RY", "E1FCC_ACC" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_158612(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U18635[uParam0]._fU92;
    bVar4 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_SH", "E1FCJ_VIR", "E1FCJ_SHY", "E1FCJ_Y" );
            }
            else
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_SH", "E1FCJ_IR", "E1FCJ_SHY", "E1FCJ_Y" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_SH", "E1FCJ_SHY", "E1FCJ_Y" );
        }
        return;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_SH", "E1FCT_VIR", "E1FCT_SHY", "E1FCT_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_SH", "E1FCT_IR", "E1FCT_SHY", "E1FCT_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_SH", "E1FCT_SHY", "E1FCT_ACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_SH", "E1FCC_VIR", "E1FCC_SHY", "E1FCC_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_SH", "E1FCC_IR", "E1FCC_SHY", "E1FCC_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_SH", "E1FCC_SHY", "E1FCC_ACC" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_159442(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U18635[uParam0]._fU92;
    bVar4 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_ST", "E1FCJ_VIR", "E1FCJ_STY", "E1FCJ_Y" );
            }
            else
            {
                sub_151976( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_ST", "E1FCJ_IR", "E1FCJ_STY", "E1FCJ_Y" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCJAU", "E1FCJ_HI", "E1FCJ_ST", "E1FCJ_STY", "E1FCJ_Y" );
        }
        return;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_ST", "E1FCT_VIR", "E1FCT_STY", "E1FCT_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_ST", "E1FCT_IR", "E1FCT_STY", "E1FCT_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCTA", "E1FCT_GRT", "E1FCT_ST", "E1FCT_STY", "E1FCT_ACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_ST", "E1FCC_VIR", "E1FCC_STY", "E1FCC_ACC" );
            }
            else
            {
                sub_151976( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_ST", "E1FCC_IR", "E1FCC_STY", "E1FCC_ACC" );
            }
        }
        else
        {
            sub_141142( uParam0, "E1FCCA", "E1FCC_GR", "E1FCC_ST", "E1FCC_STY", "E1FCC_ACC" );
        }
        return;
    }
    sub_58115( "PLACEHOLDER", "E1MFAU", 1 );
    return;
}

void sub_160514(unknown uParam0, unknown uParam1)
{
    sub_130074( uParam0, uParam1 );
    return;
}

void sub_160613(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = 1;
        break;
        default:
        sub_24994( "Flow_Player_Phoned_To_Start_Activity_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_86987( uParam0, 1, iVar3 );
    return;
}

int sub_160955(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int I;
    boolean bVar6;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    if (g_U18635[uParam0]._fU84 < iVar4)
    {
        if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
        {
            sub_161018( uParam0 );
            return 0;
        }
        if (sub_161074( uParam0 ))
        {
            sub_161018( uParam0 );
            return 0;
        }
        if (g_U18635[uParam0]._fU4)
        {
            sub_161018( uParam0 );
            return 0;
        }
        if (((((((((NOT (g_U14838[uParam1]._fU80._fU0 == 0)) || (sub_140703( uParam0 ))) || (g_U12303)) || (IS_THREAD_ACTIVE( g_U815 ))) || (IS_WANTED_LEVEL_GREATER( sub_7787(), 0 ))) || (sub_69829())) || (sub_69880())) || (sub_70078( 0 ))) || (sub_71842()))
        {
            sub_161018( uParam0 );
            return 0;
        }
        if ((NOT (sub_70446( uParam0, 30000 ))) || (sub_70510( uParam0 )))
        {
            sub_161018( uParam0 );
            return 0;
        }
        I = 0;
        for ( I = 0; I < 5; I++ )
        {
            if (sub_72998( uParam1, I ))
            {
                if (g_U12306[uParam1]._fU144[I]._fU84)
                {
                    sub_161018( uParam0 );
                    return 0;
                }
            }
        }
        bVar6 = g_U12306[uParam1]._fU40[1] < g_U18635[uParam0]._fU160;
        if ((bVar6) AND (NOT g_U18635[uParam0]._fU8))
        {
            g_U12306[uParam1]._fU40[1] = g_U18635[uParam0]._fU160;
            g_U12306[uParam1]._fU56[1] = g_U18635[uParam0]._fU160;
            bVar6 = false;
        }
        if (bVar6)
        {
            sub_161018( uParam0 );
            return 0;
        }
        sub_43456( uParam1 );
        if (sub_161537( uParam0 ))
        {
            return 1;
        }
        g_U15862[uParam0]._fU8[0]._fU0[17] = 0;
        sub_161018( uParam0 );
        return 0;
    }
    return 0;
}

void sub_161018(unknown uParam0)
{
    int iVar3;

    sub_129106( uParam0 );
    g_U15862[uParam0]._fU4 = 0;
    iVar3 = 1;
    sub_51000( uParam0, iVar3 );
    return;
}

int sub_161074(unknown uParam0)
{
    if (sub_112492())
    {
        return 1;
    }
    if (sub_118931())
    {
        return 1;
    }
    return 0;
}

int sub_161537(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    string sVar8;
    int iVar9;
    boolean bVar10;
    int iVar11;

    if (NOT g_U18635[uParam0]._fU8)
    {
        sub_161567( uParam0 );
    }
    if (g_U18635[uParam0]._fU140)
    {
        if (sub_161730( uParam0 ))
        {
            g_U15862[uParam0]._fU8[0]._fU0[17] = 1;
        }
    }
    iVar3 = g_U18635[uParam0]._fU148;
    iVar4 = 22;
    if (NOT (iVar3 == 22))
    {
        if ((g_U15862[uParam0]._fU8[0]._fU0[iVar3]) AND (NOT g_U18635[uParam0]._fU92))
        {
            g_U15862[uParam0]._fU8[0]._fU0[iVar3] = 0;
            iVar4 = iVar3;
        }
    }
    I = 0;
    iVar6 = 0;
    iVar7 = 22;
    for ( I = 0; I < iVar7; I++ )
    {
        if (sub_128244( I ))
        {
            if (g_U15862[uParam0]._fU8[0]._fU0[I])
            {
                iVar6++;
            }
        }
    }
    if (iVar6 == 0)
    {
        if (NOT (iVar4 == 22))
        {
            g_U15862[uParam0]._fU8[0]._fU0[iVar4] = 1;
        }
        return 0;
    }
    I = sub_162057( uParam0 );
    if (NOT (iVar4 == 22))
    {
        g_U15862[uParam0]._fU8[0]._fU0[iVar4] = 1;
    }
    if (I == 22)
    {
        return 0;
    }
    g_U18635[uParam0]._fU100 = g_U18635[uParam0]._fU208[I]._fU0;
    sVar8 = "";
    iVar9 = I;
    bVar10 = false;
    switch (iVar9)
    {
        case 17:
        sVar8 = sub_163178( uParam0 );
        if (NOT (COMPARE_STRING( sVar8, "ERROR" )))
        {
            bVar10 = sub_163353( uParam0, sVar8 );
        }
        break;
        default: bVar10 = sub_163404( uParam0, I );
    }
    if (bVar10)
    {
        g_U18635[uParam0]._fU68 = 1;
        g_U12305 = 1;
        iVar11 = I;
        g_U18635[uParam0]._fU144 = iVar11;
        return 1;
    }
    g_U18635[uParam0]._fU100 = -1;
    return 0;
}

void sub_161567(unknown uParam0)
{
    int iVar3;
    int I;

    I = 0;
    for ( I = 0; I < 22; I++ )
    {
        if (sub_128244( I ))
        {
            if (IS_BIT_SET( g_U18635[uParam0]._fU168, I ))
            {
                iVar3 = I;
                if (iVar3 == 17)
                {
                    g_U18635[uParam0]._fU140 = 1;
                }
                else
                {
                    g_U15862[uParam0]._fU8[0]._fU0[iVar3] = 1;
                }
            }
        }
    }
    return;
}

int sub_161730(unknown uParam0)
{
    sub_24994( "Setup_Lift_Details: Illegal Contact ID for Lift" );
    return 0;
}

void sub_162057(unknown uParam0)
{
    int Result;
    int iVar4;
    boolean bVar5;

    Result = 0;
    iVar4 = 22;
    if (sub_162075( uParam0, ref iVar4 ))
    {
        Result = iVar4;
        return Result;
    }
    bVar5 = g_U20876[0] == 0;
    sub_162292();
    if (bVar5)
    {
        sub_162613();
    }
    if (sub_162075( uParam0, ref iVar4 ))
    {
        Result = iVar4;
        return Result;
    }
    Result = 22;
    return Result;
}

int sub_162075(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int I;

    iVar4 = 22;
    iVar5 = 0;
    I = 0;
    for ( I = 0; I < 22; I++ )
    {
        iVar4 = g_U20876[I];
        iVar5 = iVar4;
        if (NOT (iVar4 == 22))
        {
            if (sub_128244( iVar5 ))
            {
                if (g_U15862[uParam0]._fU8[0]._fU0[iVar5])
                {
                    if (NOT (sub_162173( uParam0, iVar4 )))
                    {
                        g_U20876[I] = 22;
                        (uParam1^) = iVar4;
                        g_U20899 = iVar4;
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_162173(unknown uParam0, int iParam1)
{
    if (iParam1 == 14)
    {
        if (sub_140211())
        {
            return 1;
        }
    }
    return 0;
}

void sub_162292()
{
    int[22] iVar2;
    int iVar25;
    int I;
    int iVar27;
    int iVar28;
    int iVar29;
    int J;

    array(ref iVar2, 22);
    iVar25 = 0;
    I = 0;
    for ( I = 0; I < 22; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 99999, ref iVar25 );
        iVar2[I] = iVar25;
    }
    iVar27 = 22;
    iVar28 = 99999;
    iVar29 = 0;
    J = 0;
    for ( J = 0; J < 22; J++ )
    {
        iVar28 = 99999;
        iVar29 = 0;
        for ( I = 0; I < 22; I++ )
        {
            if (iVar2[I] < 99999)
            {
                if (iVar2[I] < iVar28)
                {
                    iVar28 = iVar2[I];
                    iVar29 = I;
                }
            }
        }
        if (NOT (sub_128244( iVar29 )))
        {
            g_U20876[J] = 22;
        }
        else
        {
            iVar27 = iVar29;
            if (iVar27 == g_U20899)
            {
                g_U20876[J] = 22;
                g_U20899 = 0;
            }
            else
            {
                g_U20876[J] = iVar27;
            }
        }
        iVar2[iVar29] = 100000;
    }
    return;
}

void sub_162613()
{
    int iVar2;
    int iVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 22;
    bVar5 = true;
    bVar6 = false;
    iVar7 = 22;
    iVar8 = 22;
    while (bVar5)
    {
        switch (iVar2)
        {
            case 0:
            iVar7 = 14;
            break;
            case 1:
            iVar7 = 6;
            break;
            case 2:
            iVar7 = 11;
            break;
            default: return;
        }
        bVar6 = false;
        iVar3 = iVar2;
        while (NOT bVar6)
        {
            if (g_U20876[iVar3] == iVar7)
            {
                iVar8 = g_U20876[iVar2];
                g_U20876[iVar2] = g_U20876[iVar3];
                g_U20876[iVar3] = iVar8;
                bVar6 = true;
            }
            if (NOT bVar6)
            {
                iVar3++;
                if (iVar3 == iVar4)
                {
                    SCRIPT_ASSERT( "Setting Up Special First-Time Friend Activity Order - activity not found" );
                    return;
                }
            }
        }
        iVar2++;
        if (iVar2 >= iVar4)
        {
            SCRIPT_ASSERT( "Setting Up Special First-Time Friend Activity Order - array checking never ended" );
            return;
        }
    }
    return;
}

string sub_163178(unknown uParam0)
{
    sub_24994( "Choose_Lift_Pickup_Phonecall: Illegal Contact ID for Lift" );
    SCRIPT_ASSERT( "Choose_Lift_Pickup_Phonecall: Unknown error" );
    return "ERROR";
}

void sub_163353(unknown uParam0, unknown uParam1)
{
    return sub_163366( uParam0, uParam1 );
}

int sub_163366(unknown uParam0, unknown uParam1)
{
    return 0;
}

int sub_163404(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 6: return sub_163540( uParam0 );
        case 8: return sub_165358( uParam0 );
        case 9: return sub_165381( uParam0 );
        case 10: return sub_165404( uParam0 );
        case 11: return sub_166962( uParam0 );
        case 12: return sub_168519( uParam0 );
        case 13: return sub_170056( uParam0 );
        case 14: return sub_171630( uParam0 );
        case 15: return sub_173171( uParam0 );
        case 18: return sub_173194( uParam0 );
        case 19: return sub_174744( uParam0 );
        case 20: return sub_176295( uParam0 );
        case 21: return sub_177865( uParam0 );
        case 17:
        sub_24994( "FA_Friend_Phones_Do_Activity: LIFT should not be handled by this routine" );
        break;
        default: sub_24994( "FA_Friend_Phones_Do_Activity: Unknown Activity" );
    }
    return 0;
}

void sub_163540(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U18635[uParam0]._fU8;
    bVar4 = g_U18635[uParam0]._fU92;
    bVar5 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_VIR", "E1FCJ2_AH", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_AHN", "E1FCJ2_REJ", "HF_AIRH" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_IR", "E1FCJ2_AH", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_AHN", "E1FCJ2_REJ", "HF_AIRH" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_GR", "E1FCJ2_AH", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_AHN", "E1FCJ2_REJ", "HF_AIRH" );
            }
        }
        else if (sub_113688( uParam0, "E1FCJ2A", "E1FCJ2_AHF", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_AHN", "E1FCJ2_REJ", "HF_AIRH" ))
        {
            sub_164260();
            return 1;
        }
        return 0;;
        break;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_VIR", "E1FCT2_AH", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_AHN", "E1FCT2_REJ", "HF_AIRH" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_IR", "E1FCT2_AH", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_AHN", "E1FCT2_REJ", "HF_AIRH" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCT2A", "E1FCT2_GRT", "E1FCT2_AH", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_AHN", "E1FCT2_REJ", "HF_AIRH" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCT2A", "E1FCT2_AHF", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_AHN", "E1FCT2_REJ", "HF_AIRH" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_VIR", "E1FCC2_AH", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_AHN", "E1FCC2_REJ", "HF_AIRH" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_IR", "E1FCC2_AH", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_AHN", "E1FCC2_REJ", "HF_AIRH" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCC2A", "E1FCC2_GRT", "E1FCC2_AH", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_AHN", "E1FCC2_REJ", "HF_AIRH" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCC2A", "E1FCC2_AHF", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_AHN", "E1FCC2_REJ", "HF_AIRH" );
        }
        break;
    }
    return sub_113688( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_AIRH" );
}

int sub_163752(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;

    uVar11 = sub_113699( uParam0 );
    sub_113851( ref l_U322[uVar11]._fU0, uParam2, uParam3 );
    sub_113851( ref l_U322[uVar11]._fU84, uParam4, uParam5 );
    sub_113851( ref l_U322[uVar11]._fU120, uParam6, uParam7 );
    if (sub_114288( uParam0, ref l_U322[uVar11]._fU0, ref l_U322[uVar11]._fU84, ref l_U322[uVar11]._fU120, uParam8, uParam1, 10000 ))
    {
        sub_48275();
        sub_71020( uParam0, 1 );
        return 1;
    }
    return 0;
}

void sub_164260()
{
    if (g_U15728[15])
    {
        return;
    }
    sub_78631( 13, 1, 31, 300000 );
    g_U15728[15] = 1;
    return;
}

int sub_165358(unknown uParam0)
{
    return 0;
}

int sub_165381(unknown uParam0)
{
    return 0;
}

void sub_165404(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U18635[uParam0]._fU8;
    bVar4 = g_U18635[uParam0]._fU92;
    bVar5 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_VIR", "E1FCJ2_D", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_DN", "E1FCJ2_REJ", "HF_DART" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_IR", "E1FCJ2_D", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_DN", "E1FCJ2_REJ", "HF_DART" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_GR", "E1FCJ2_D", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_DN", "E1FCJ2_REJ", "HF_DART" );
            }
        }
        else if (sub_113688( uParam0, "E1FCJ2A", "E1FCJ2_DF", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_DN", "E1FCJ2_REJ", "HF_DART" ))
        {
            sub_164260();
            return 1;
        }
        return 0;;
        break;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_VIR", "E1FCT2_D", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_DN", "E1FCT2_REJ", "HF_DART" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_IR", "E1FCT2_D", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_DN", "E1FCT2_REJ", "HF_DART" );
                }
            }
            else
            {
                return sub_113688( uParam0, "E1FCT2A", "E1FCT2_D", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_DN", "E1FCT2_REJ", "HF_DART" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCT2A", "E1FCT2_DF", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_DN", "E1FCT2_REJ", "HF_DART" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_VIR", "E1FCC2_D", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_DN", "E1FCC2_REJ", "HF_DART" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_IR", "E1FCC2_D", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_DN", "E1FCC2_REJ", "HF_DART" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCC2A", "E1FCC2_GRT", "E1FCC2_D", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_DN", "E1FCC2_REJ", "HF_DART" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCC2A", "E1FCC2_DF", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_DN", "E1FCC2_REJ", "HF_DART" );
        }
        break;
    }
    return sub_113688( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_DART" );
}

void sub_166962(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U18635[uParam0]._fU8;
    bVar4 = g_U18635[uParam0]._fU92;
    bVar5 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_VIR", "E1FCJ2_DR", "E1FCJ2_DRY", "E1FCJ2_ACC", "E1FCJ2_DRN", "E1FCJ2_REJ", "HF_BAR" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_IR", "E1FCJ2_DR", "E1FCJ2_DRY", "E1FCJ2_ACC", "E1FCJ2_DRN", "E1FCJ2_REJ", "HF_BAR" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_GR", "E1FCJ2_DR", "E1FCJ2_DRY", "E1FCJ2_ACC", "E1FCJ2_DRN", "E1FCJ2_REJ", "HF_BAR" );
            }
        }
        else if (sub_113688( uParam0, "E1FCJ2A", "E1FCJ2_DRF", "E1FCJ2_DRY", "E1FCJ2_ACC", "E1FCJ2_DRN", "E1FCJ2_REJ", "HF_BAR" ))
        {
            sub_164260();
            return 1;
        }
        return 0;;
        break;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_VIR", "E1FCT2_DR", "E1FCT2_DRY", "E1FCT2_ACC", "E1FCT2_DRN", "E1FCT2_REJ", "HF_BAR" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_IR", "E1FCT2_DR", "E1FCT2_DRY", "E1FCT2_ACC", "E1FCT2_DRN", "E1FCT2_REJ", "HF_BAR" );
                }
            }
            else
            {
                return sub_113688( uParam0, "E1FCT2A", "E1FCT2_DR", "E1FCT2_DRY", "E1FCT2_ACC", "E1FCT2_DRN", "E1FCT2_REJ", "HF_BAR" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCT2A", "E1FCT2_DRF", "E1FCT2_DRY", "E1FCT2_ACC", "E1FCT2_DRN", "E1FCT2_REJ", "HF_BAR" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_VIR", "E1FCC2_DR", "E1FCC2_DRY", "E1FCC2_ACC", "E1FCC2_DRN", "E1FCC2_REJ", "HF_BAR" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_IR", "E1FCC2_DR", "E1FCC2_DRY", "E1FCC2_ACC", "E1FCC2_DRN", "E1FCC2_REJ", "HF_BAR" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCC2A", "E1FCC2_GRT", "E1FCC2_DR", "E1FCC2_DRY", "E1FCC2_ACC", "E1FCC2_DRN", "E1FCC2_REJ", "HF_BAR" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCC2A", "E1FCC2_DRF", "E1FCC2_DRY", "E1FCC2_ACC", "E1FCC2_DRN", "E1FCC2_REJ", "HF_BAR" );
        }
        break;
    }
    return sub_113688( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_BAR" );
}

void sub_168519(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U18635[uParam0]._fU8;
    bVar4 = g_U18635[uParam0]._fU92;
    bVar5 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_VIR", "E1FCJ2_E", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_EN", "E1FCJ2_REJ", "HF_EAT" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_IR", "E1FCJ2_E", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_EN", "E1FCJ2_REJ", "HF_EAT" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_GR", "E1FCJ2_E", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_EN", "E1FCJ2_REJ", "HF_EAT" );
            }
        }
        else if (sub_113688( uParam0, "E1FCJ2A", "E1FCJ2_EF", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_EN", "E1FCJ2_REJ", "HF_EAT" ))
        {
            sub_164260();
            return 1;
        }
        return 0;;
        break;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_VIR", "E1FCT2_E", "E1FCT2_EY", "E1FCT2_ACC", "E1FCT2_EN", "E1FCT2_REJ", "HF_EAT" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_IR", "E1FCT2_E", "E1FCT2_EY", "E1FCT2_ACC", "E1FCT2_EN", "E1FCT2_REJ", "HF_EAT" );
                }
            }
            else
            {
                return sub_113688( uParam0, "E1FCT2A", "E1FCT2_E", "E1FCT2_EY", "E1FCT2_ACC", "E1FCT2_EN", "E1FCT2_REJ", "HF_EAT" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCT2A", "E1FCT2_EF", "E1FCT2_EY", "E1FCT2_ACC", "E1FCT2_EN", "E1FCT2_REJ", "HF_EAT" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_VIR", "E1FCC2_E", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_EN", "E1FCC2_REJ", "HF_EAT" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_IR", "E1FCC2_E", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_EN", "E1FCC2_REJ", "HF_EAT" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCC2A", "E1FCC2_GRT", "E1FCC2_E", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_EN", "E1FCC2_REJ", "HF_EAT" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCC2A", "E1FCC2_EF", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_EN", "E1FCC2_REJ", "HF_EAT" );
        }
        break;
    }
    return sub_113688( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_EAT" );
}

void sub_170056(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U18635[uParam0]._fU8;
    bVar4 = g_U18635[uParam0]._fU92;
    bVar5 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_VIR", "E1FCJ2_GW", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_GWN", "E1FCJ2_REJ", "HF_WAR" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_IR", "E1FCJ2_GW", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_GWN", "E1FCJ2_REJ", "HF_WAR" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_GR", "E1FCJ2_GW", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_GWN", "E1FCJ2_REJ", "HF_WAR" );
            }
        }
        else if (sub_113688( uParam0, "E1FCJ2A", "E1FCJ2_GWF", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_GWN", "E1FCJ2_REJ", "HF_WAR" ))
        {
            sub_164260();
            return 1;
        }
        return 0;;
        break;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_VIR", "E1FCT2_G", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_GN", "E1FCT2_REJ", "HF_WAR" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_IR", "E1FCT2_G", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_GN", "E1FCT2_REJ", "HF_WAR" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCT2A", "E1FCT2_GRT", "E1FCT2_G", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_GN", "E1FCT2_REJ", "HF_WAR" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCT2A", "E1FCT2_GF", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_GN", "E1FCT2_REJ", "HF_WAR" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_VIR", "E1FCC2_GW", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_GWN", "E1FCC2_REJ", "HF_WAR" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_IR", "E1FCC2_GW", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_GWN", "E1FCC2_REJ", "HF_WAR" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCC2A", "E1FCC2_GRT", "E1FCC2_GW", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_GWN", "E1FCC2_REJ", "HF_WAR" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCC2A", "E1FCC2_GWF", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_GWN", "E1FCC2_REJ", "HF_WAR" );
        }
        break;
    }
    return sub_113688( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_WAR" );
}

void sub_171630(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U18635[uParam0]._fU8;
    bVar4 = g_U18635[uParam0]._fU92;
    bVar5 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_VIR", "E1FCJ2_C", "E1FCJ2_HY", "E1FCJ2_ACC", "E1FCJ2_CN", "E1FCJ2_REJ", "HF_HANG" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_IR", "E1FCJ2_C", "E1FCJ2_HY", "E1FCJ2_ACC", "E1FCJ2_CN", "E1FCJ2_REJ", "HF_HANG" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_GR", "E1FCJ2_C", "E1FCJ2_HY", "E1FCJ2_ACC", "E1FCJ2_CN", "E1FCJ2_REJ", "HF_HANG" );
            }
        }
        else if (sub_113688( uParam0, "E1FCJ2A", "E1FCJ2_HF", "E1FCJ2_HY", "E1FCJ2_ACC", "E1FCJ2_CN", "E1FCJ2_REJ", "HF_HANG" ))
        {
            sub_164260();
            return 1;
        }
        return 0;;
        break;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_VIR", "E1FCT2_CH", "E1FCT2_HY", "E1FCT2_ACC", "E1FCT2_CHN", "E1FCT2_REJ", "HF_HANG" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_IR", "E1FCT2_CH", "E1FCT2_HY", "E1FCT2_ACC", "E1FCT2_CHN", "E1FCT2_REJ", "HF_HANG" );
                }
            }
            else
            {
                return sub_113688( uParam0, "E1FCT2A", "E1FCT2_CH", "E1FCT2_HY", "E1FCT2_ACC", "E1FCT2_CHN", "E1FCT2_REJ", "HF_HANG" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCT2A", "E1FCT2_HF", "E1FCT2_HY", "E1FCT2_ACC", "E1FCT2_CHN", "E1FCT2_REJ", "HF_HANG" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_VIR", "E1FCC2_H", "E1FCC2_HY", "E1FCC2_ACC", "E1FCC2_HN", "E1FCC2_REJ", "HF_HANG" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_IR", "E1FCC2_H", "E1FCC2_HY", "E1FCC2_ACC", "E1FCC2_HN", "E1FCC2_REJ", "HF_HANG" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCC2A", "E1FCC2_GRT", "E1FCC2_H", "E1FCC2_HY", "E1FCC2_ACC", "E1FCC2_HN", "E1FCC2_REJ", "HF_HANG" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCC2A", "E1FCC2_HF", "E1FCC2_HY", "E1FCC2_ACC", "E1FCC2_HN", "E1FCC2_REJ", "HF_HANG" );
        }
        break;
    }
    return sub_113688( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_HANG" );
}

int sub_173171(unknown uParam0)
{
    return 0;
}

void sub_173194(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U18635[uParam0]._fU8;
    bVar4 = g_U18635[uParam0]._fU92;
    bVar5 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_VIR", "E1FCJ2_P", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_PN", "E1FCJ2_REJ", "HF_POOL" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_IR", "E1FCJ2_P", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_PN", "E1FCJ2_REJ", "HF_POOL" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_GR", "E1FCJ2_P", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_PN", "E1FCJ2_REJ", "HF_POOL" );
            }
        }
        else if (sub_113688( uParam0, "E1FCJ2A", "E1FCJ2_PF", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_PN", "E1FCJ2_REJ", "HF_POOL" ))
        {
            sub_164260();
            return 1;
        }
        return 0;;
        break;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_VIR", "E1FCT2_P", "E1FCT2_PY", "E1FCT2_ACC", "E1FCT2_PN", "E1FCT2_REJ", "HF_POOL" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_IR", "E1FCT2_P", "E1FCT2_PY", "E1FCT2_ACC", "E1FCT2_PN", "E1FCT2_REJ", "HF_POOL" );
                }
            }
            else
            {
                return sub_113688( uParam0, "E1FCT2A", "E1FCT2_P", "E1FCT2_PY", "E1FCT2_ACC", "E1FCT2_PN", "E1FCT2_REJ", "HF_POOL" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCT2A", "E1FCT2_PF", "E1FCT2_PY", "E1FCT2_ACC", "E1FCT2_PN", "E1FCT2_REJ", "HF_POOL" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_VIR", "E1FCC2_P", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_PN", "E1FCC2_REJ", "HF_POOL" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_IR", "E1FCC2_P", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_PN", "E1FCC2_REJ", "HF_POOL" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCC2A", "E1FCC2_GRT", "E1FCC2_P", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_PN", "E1FCC2_REJ", "HF_POOL" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCC2A", "E1FCC2_PF", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_PN", "E1FCC2_REJ", "HF_POOL" );
        }
        break;
    }
    return sub_113688( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_POOL" );
}

void sub_174744(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U18635[uParam0]._fU8;
    bVar4 = g_U18635[uParam0]._fU92;
    bVar5 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_VIR", "E1FCJ2_R", "E1FCJ2_RY", "E1FCJ2_ACC", "E1FCJ2_RN", "E1FCJ2_REJ", "HF_RACE" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_IR", "E1FCJ2_R", "E1FCJ2_RY", "E1FCJ2_ACC", "E1FCJ2_RN", "E1FCJ2_REJ", "HF_RACE" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_GR", "E1FCJ2_R", "E1FCJ2_RY", "E1FCJ2_ACC", "E1FCJ2_RN", "E1FCJ2_REJ", "HF_RACE" );
            }
        }
        else if (sub_113688( uParam0, "E1FCJ2A", "E1FCJ2_RF", "E1FCJ2_RY", "E1FCJ2_ACC", "E1FCJ2_RN", "E1FCJ2_REJ", "HF_RACE" ))
        {
            sub_164260();
            return 1;
        }
        return 0;;
        break;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_VIR", "E1FCT2_R", "E1FCT2_RY", "E1FCT2_ACC", "E1FCT2_RN", "E1FCT2_REJ", "HF_RACE" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_IR", "E1FCT2_R", "E1FCT2_RY", "E1FCT2_ACC", "E1FCT2_RN", "E1FCT2_REJ", "HF_RACE" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCT2A", "E1FCT2_GRT", "E1FCT2_R", "E1FCT2_RY", "E1FCT2_ACC", "E1FCT2_RN", "E1FCT2_REJ", "HF_RACE" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCT2A", "E1FCT2_RF", "E1FCT2_RY", "E1FCT2_ACC", "E1FCT2_RN", "E1FCT2_REJ", "HF_RACE" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_VIR", "E1FCC2_R", "E1FCC2_RFY", "E1FCC2_ACC", "E1FCC2_RN", "E1FCC2_REJ", "HF_RACE" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_IR", "E1FCC2_R", "E1FCC2_RFY", "E1FCC2_ACC", "E1FCC2_RN", "E1FCC2_REJ", "HF_RACE" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCC2A", "E1FCC2_GRT", "E1FCC2_R", "E1FCC2_RFY", "E1FCC2_ACC", "E1FCC2_RN", "E1FCC2_REJ", "HF_RACE" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCC2A", "E1FCC2_RF", "E1FCC2_RFY", "E1FCC2_ACC", "E1FCC2_RN", "E1FCC2_REJ", "HF_RACE" );
        }
        break;
    }
    return sub_113688( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_RACE" );
}

void sub_176295(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U18635[uParam0]._fU8;
    bVar4 = g_U18635[uParam0]._fU92;
    bVar5 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_VIR", "E1FCJ2_S", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_SN", "E1FCJ2_REJ", "HF_SHOW" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_IR", "E1FCJ2_S", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_SN", "E1FCJ2_REJ", "HF_SHOW" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_GR", "E1FCJ2_S", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_SN", "E1FCJ2_REJ", "HF_SHOW" );
            }
        }
        else if (sub_113688( uParam0, "E1FCJ2A", "E1FCJ2_SF", "E1FCJ2_PLAY", "E1FCJ2_ACC", "E1FCJ2_SN", "E1FCJ2_REJ", "HF_SHOW" ))
        {
            sub_164260();
            return 1;
        }
        return 0;;
        break;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_VIR", "E1FCT2_SH", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_SHN", "E1FCT2_REJ", "HF_SHOW" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_IR", "E1FCT2_SH", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_SHN", "E1FCT2_REJ", "HF_SHOW" );
                }
            }
            else
            {
                return sub_113688( uParam0, "E1FCT2A", "E1FCT2_SH", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_SHN", "E1FCT2_REJ", "HF_SHOW" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCT2A", "E1FCT2_SHF", "E1FCT3_PLAY", "E1FCT2_ACC", "E1FCT2_SHN", "E1FCT2_REJ", "HF_SHOW" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_VIR", "E1FCC2_SH", "E1FCC2_SHY", "E1FCC2_ACC", "E1FCC2_SHN", "E1FCC2_REJ", "HF_SHOW" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_IR", "E1FCC2_SH", "E1FCC2_SHY", "E1FCC2_ACC", "E1FCC2_SHN", "E1FCC2_REJ", "HF_SHOW" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCC2A", "E1FCC2_GRT", "E1FCC2_SH", "E1FCC2_SHY", "E1FCC2_ACC", "E1FCC2_SHN", "E1FCC2_REJ", "HF_SHOW" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCC2A", "E1FCC2_SHF", "E1FCC2_SHY", "E1FCC2_ACC", "E1FCC2_SHN", "E1FCC2_REJ", "HF_SHOW" );
        }
        break;
    }
    return sub_113688( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_SHOW" );
}

void sub_177865(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U18635[uParam0]._fU8;
    bVar4 = g_U18635[uParam0]._fU92;
    bVar5 = g_U18635[uParam0]._fU96;
    switch (uParam0)
    {
        case 1:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_VIR", "E1FCJ2_ST", "E1FCJ2_STY", "E1FCJ2_ACC", "E1FCJ2_STN", "E1FCJ2_REJ", "HF_STRP" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_IR", "E1FCJ2_ST", "E1FCJ2_STY", "E1FCJ2_ACC", "E1FCJ2_STN", "E1FCJ2_REJ", "HF_STRP" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCJ2A", "E1FCJ2_GR", "E1FCJ2_ST", "E1FCJ2_STY", "E1FCJ2_ACC", "E1FCJ2_STN", "E1FCJ2_REJ", "HF_STRP" );
            }
        }
        else if (sub_113688( uParam0, "E1FCJ2A", "E1FCJ2_STF", "E1FCJ2_STY", "E1FCJ2_ACC", "E1FCJ2_STN", "E1FCJ2_REJ", "HF_STRP" ))
        {
            sub_164260();
            return 1;
        }
        return 0;;
        break;
        case 6:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_VIR", "E1FCT2_ST", "E1FCT2_STY", "E1FCT2_ACC", "E1FCT2_STN", "E1FCT2_REJ", "HF_STRP" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCT2A", "E1FCT2_IR", "E1FCT2_ST", "E1FCT2_STY", "E1FCT2_ACC", "E1FCT2_STN", "E1FCT2_REJ", "HF_STRP" );
                }
            }
            else
            {
                return sub_113688( uParam0, "E1FCT2A", "E1FCT2_ST", "E1FCT2_STY", "E1FCT2_ACC", "E1FCT2_STN", "E1FCT2_REJ", "HF_STRP" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCT2A", "E1FCT2_STF", "E1FCT2_STY", "E1FCT2_ACC", "E1FCT2_STN", "E1FCT2_REJ", "HF_STRP" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_VIR", "E1FCC2_ST", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_STN", "E1FCC2_REJ", "HF_STRP" );
                }
                else
                {
                    return sub_163752( uParam0, "E1FCC2A", "E1FCC2_IR", "E1FCC2_ST", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_STN", "E1FCC2_REJ", "HF_STRP" );
                }
            }
            else
            {
                return sub_163752( uParam0, "E1FCC2A", "E1FCC2_GRT", "E1FCC2_ST", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_STN", "E1FCC2_REJ", "HF_STRP" );
            }
        }
        else
        {
            return sub_113688( uParam0, "E1FCC2A", "E1FCC2_STF", "E1FCC3_PLAY", "E1FCC2_ACC", "E1FCC2_STN", "E1FCC2_REJ", "HF_STRP" );
        }
        break;
    }
    return sub_113688( uParam0, "E1MFAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_STRP" );
}

void sub_179762()
{
    int iVar2;
    int iVar3;

    iVar2 = 2;
    iVar3 = 2;
    if (g_U12306[iVar2]._fU0)
    {
        sub_179795();
        g_U12306[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U12306[iVar2]._fU8)
    {
        return;
    }
    if (sub_110716( iVar3 ))
    {
        sub_110757( iVar3 );
        return;
    }
    if (sub_56436( iVar2 ))
    {
        return;
    }
    sub_61820( iVar3, iVar2, ref g_U32385 );
    return;
}

void sub_179795()
{
    sub_50526( 2, 2 );
    sub_179811();
    PRINTSTRING( "Contact_3 Activated\n" );
    return;
}

void sub_179811()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 40;
    PRINTSTRING( "START: E1 Contact_3_SETUP_MISSION_FLOW\n" );
    sub_52733( ref g_U32385, ref iVar2, iVar3, 1 );
    sub_179900( ref g_U32385, ref iVar2, iVar3, 20000 );
    sub_52337( ref g_U32385, ref iVar2, iVar3, "E1MFAU", "E1MF_ANSPH" );
    sub_180058( ref g_U32385, ref iVar2, iVar3 );
    sub_52874( ref g_U32385, ref iVar2, iVar3, 0 );
    sub_51690( ref g_U32385, ref iVar2, iVar3, 52 );
    sub_51690( ref g_U32385, ref iVar2, iVar3, 24 );
    sub_52586( ref g_U32385, ref iVar2, iVar3, 4, 0 );
    sub_53495( ref g_U32385, ref iVar2, iVar3, 9 );
    sub_52874( ref g_U32385, ref iVar2, iVar3, 1 );
    sub_53495( ref g_U32385, ref iVar2, iVar3, 4 );
    sub_107762( ref g_U32385, ref iVar2, iVar3, "E1MF_ODDJ", "E1MFAU", 180000, 60000 );
    sub_180282( ref g_U32385, ref iVar2, iVar3, 2, 0, 10000 );
    sub_180414( ref g_U32385, ref iVar2, iVar3, 11, 2, 3, 420 );
    sub_53366( ref g_U32385, ref iVar2, iVar3, 7 );
    sub_52733( ref g_U32385, ref iVar2, iVar3, 4 );
    sub_54581( ref g_U32385, ref iVar2, iVar3, 8 );
    sub_180604( ref g_U32385, ref iVar2, iVar3, 20 );
    sub_107762( ref g_U32385, ref iVar2, iVar3, "E1MF_GL", "E1MFAU", 20000, 20000 );
    sub_54766( ref g_U32385, ref iVar2, iVar3, 6 );
    sub_54766( ref g_U32385, ref iVar2, iVar3, 7 );
    sub_52874( ref g_U32385, ref iVar2, iVar3, 3 );
    sub_180778( ref g_U32385, ref iVar2, iVar3, 0 );
    sub_55794( ref g_U32385, ref iVar2, iVar3, 5 );
    sub_51690( ref g_U32385, ref iVar2, iVar3, 18 );
    sub_52586( ref g_U32385, ref iVar2, iVar3, 0, 1 );
    sub_52586( ref g_U32385, ref iVar2, iVar3, 2, 2 );
    sub_52874( ref g_U32385, ref iVar2, iVar3, 4 );
    sub_55278( ref g_U32385, ref iVar2, iVar3, 3, 7 );
    sub_55278( ref g_U32385, ref iVar2, iVar3, 2, 2 );
    sub_55278( ref g_U32385, ref iVar2, iVar3, 8, 15 );
    sub_51690( ref g_U32385, ref iVar2, iVar3, 4 );
    sub_54037( ref g_U32385, ref iVar2, iVar3, 2 );
    sub_54581( ref g_U32385, ref iVar2, iVar3, 5 );
    sub_52586( ref g_U32385, ref iVar2, iVar3, 0, 2 );
    sub_181043( ref g_U32385, ref iVar2, iVar3 );
    sub_56228( ref g_U32385, ref iVar2, iVar3 );
    PRINTSTRING( "END: E1 Contact_3_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_179900(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 126;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: REALTIME MSECS DELAY (" );
    sub_52823( uParam3 );
    sub_51518( ")" );
    sub_52446();
    return;
}

void sub_180058(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 18;
    sub_51466( uParam1 );
    sub_51518( "SET: ADD_TO_PHONEBOOK\n" );
    return;
}

void sub_180282(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 6;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam5;
    sub_51466( uParam1 );
    sub_51518( "SET: START PROC MISSION\n" );
    return;
}

void sub_180414(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 58;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = (iParam6 * 60) * 1000;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: PROC_REMINDER_TXTS\n" );
    return;
}

void sub_180604(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 136;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: FLAG_WALL_FALSE\n" );
    return;
}

void sub_180778(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 81;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: DEACTIVATE_SAVE_HOUSE\n" );
    return;
}

void sub_181043(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 146;
    sub_51466( uParam1 );
    sub_51518( "SET: KEEP_STRAND_ACTIVE\n" );
    return;
}

void sub_181329()
{
    int iVar2;
    int iVar3;

    iVar2 = 3;
    iVar3 = 3;
    if (g_U12306[iVar2]._fU0)
    {
        sub_181362();
        g_U12306[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U12306[iVar2]._fU8)
    {
        return;
    }
    if (sub_110716( iVar3 ))
    {
        sub_110757( iVar3 );
        return;
    }
    if (sub_56436( iVar2 ))
    {
        return;
    }
    sub_61820( iVar3, iVar2, ref g_U33186 );
    return;
}

void sub_181362()
{
    sub_50526( 3, 3 );
    sub_181378();
    PRINTSTRING( "Contact_4 Activated\n" );
    return;
}

void sub_181378()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 28;
    PRINTSTRING( "START: E1 Contact_4_SETUP_MISSION_FLOW\n" );
    sub_52733( ref g_U33186, ref iVar2, iVar3, 1 );
    sub_52337( ref g_U33186, ref iVar2, iVar3, "MF14AUD", "MF6_TMSG" );
    sub_52479( ref g_U33186, ref iVar2, iVar3, 3 );
    sub_55278( ref g_U33186, ref iVar2, iVar3, 3, 3 );
    sub_53366( ref g_U33186, ref iVar2, iVar3, 9 );
    sub_179900( ref g_U33186, ref iVar2, iVar3, 45000 );
    sub_108901( ref g_U33186, ref iVar2, iVar3, "C4_RESCUE" );
    sub_181621( ref g_U33186, ref iVar2, iVar3, "E1MF_CALL1", "E1MFAU", 15000, 0, 20000 );
    sub_55403( ref g_U33186, ref iVar2, iVar3, 3, 3 );
    sub_181841( ref g_U33186, ref iVar2, iVar3, 0 );
    sub_181954( ref g_U33186, ref iVar2, iVar3, 0, "C4_RESCUE" );
    sub_55278( ref g_U33186, ref iVar2, iVar3, 3, 4 );
    sub_55278( ref g_U33186, ref iVar2, iVar3, 8, 11 );
    sub_53366( ref g_U33186, ref iVar2, iVar3, 8 );
    sub_53366( ref g_U33186, ref iVar2, iVar3, 10 );
    sub_53366( ref g_U33186, ref iVar2, iVar3, 11 );
    sub_52733( ref g_U33186, ref iVar2, iVar3, 3 );
    sub_55126( ref g_U33186, ref iVar2, iVar3, 5, 3, 1, 15000 );
    sub_55278( ref g_U33186, ref iVar2, iVar3, 3, 6 );
    sub_52874( ref g_U33186, ref iVar2, iVar3, 1 );
    sub_55403( ref g_U33186, ref iVar2, iVar3, 3, 6 );
    sub_53495( ref g_U33186, ref iVar2, iVar3, 14 );
    sub_53366( ref g_U33186, ref iVar2, iVar3, 11 );
    sub_181043( ref g_U33186, ref iVar2, iVar3 );
    sub_56228( ref g_U33186, ref iVar2, iVar3 );
    PRINTSTRING( "END: E1 Contact_4_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_181621(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 33;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam7;
    sub_51466( uParam1 );
    sub_51518( "SET: PHONE_PLAYER_VECTOR_REPEAT: [" );
    sub_51518( uParam4 );
    sub_51518( "] " );
    sub_51518( uParam3 );
    sub_52446();
    return;
}

void sub_181841(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 10;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: SETUP_MISSION_ONLY\n" );
    return;
}

void sub_181954(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 3;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    sub_51466( uParam1 );
    sub_51518( "SET: DO MISSION FAILGOTO PHONE\n" );
    return;
}

void sub_182483()
{
    int iVar2;
    int iVar3;

    iVar2 = 4;
    iVar3 = 4;
    if (g_U12306[iVar2]._fU0)
    {
        sub_182516();
        g_U12306[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U12306[iVar2]._fU8)
    {
        return;
    }
    if (sub_110716( iVar3 ))
    {
        sub_110757( iVar3 );
        return;
    }
    if (sub_56436( iVar2 ))
    {
        return;
    }
    sub_61820( iVar3, iVar2, ref g_U33747 );
    return;
}

void sub_182516()
{
    sub_50526( 4, 4 );
    sub_182532();
    PRINTSTRING( "Contact_5 Activated\n" );
    return;
}

void sub_182532()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 32;
    PRINTSTRING( "START: E1 CONTACT_5_SETUP_MISSION_FLOW\n" );
    sub_52337( ref g_U33747, ref iVar2, iVar3, "MF1AUD", "MF2_CELIZ3" );
    sub_180058( ref g_U33747, ref iVar2, iVar3 );
    sub_55555( ref g_U33747, ref iVar2, iVar3, 1, 60000, 300000 );
    sub_53366( ref g_U33747, ref iVar2, iVar3, 12 );
    sub_52733( ref g_U33747, ref iVar2, iVar3, 2 );
    sub_55794( ref g_U33747, ref iVar2, iVar3, 1 );
    sub_55126( ref g_U33747, ref iVar2, iVar3, 6, 4, 9, 15000 );
    sub_52874( ref g_U33747, ref iVar2, iVar3, 0 );
    sub_54961( ref g_U33747, ref iVar2, iVar3, 8, 4, 5, 50000 );
    sub_51690( ref g_U33747, ref iVar2, iVar3, 54 );
    sub_52586( ref g_U33747, ref iVar2, iVar3, 6, 0 );
    sub_52874( ref g_U33747, ref iVar2, iVar3, 1 );
    sub_53495( ref g_U33747, ref iVar2, iVar3, 10 );
    sub_52733( ref g_U33747, ref iVar2, iVar3, 3 );
    sub_55126( ref g_U33747, ref iVar2, iVar3, 7, 4, 4, 15000 );
    sub_55278( ref g_U33747, ref iVar2, iVar3, 4, 8 );
    sub_51690( ref g_U33747, ref iVar2, iVar3, 29 );
    sub_52874( ref g_U33747, ref iVar2, iVar3, 2 );
    sub_182929( ref g_U33747, ref iVar2, iVar3, 7 );
    sub_55403( ref g_U33747, ref iVar2, iVar3, 4, 8 );
    sub_53216( ref g_U33747, ref iVar2, iVar3, 5 );
    sub_55980( ref g_U33747, ref iVar2, iVar3, 15 );
    sub_55278( ref g_U33747, ref iVar2, iVar3, 4, 9 );
    sub_55126( ref g_U33747, ref iVar2, iVar3, 9, 7, 31, 30000 );
    sub_54320( ref g_U33747, ref iVar2, iVar3, 29 );
    sub_179900( ref g_U33747, ref iVar2, iVar3, 3600000 );
    sub_55403( ref g_U33747, ref iVar2, iVar3, 4, 9 );
    sub_56139( ref g_U33747, ref iVar2, iVar3 );
    sub_56228( ref g_U33747, ref iVar2, iVar3 );
    PRINTSTRING( "END: E1 CONTACT_5_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_182929(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 57;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: KILL_TXTMSG\n" );
    return;
}

void sub_183372()
{
    int iVar2;
    int iVar3;

    iVar2 = 5;
    iVar3 = 5;
    if (g_U12306[iVar2]._fU0)
    {
        sub_183405();
        g_U12306[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U12306[iVar2]._fU8)
    {
        return;
    }
    if (sub_110716( iVar3 ))
    {
        sub_110757( iVar3 );
        return;
    }
    if (sub_56436( iVar2 ))
    {
        return;
    }
    sub_61820( iVar3, iVar2, ref g_U34388 );
    return;
}

void sub_183405()
{
    sub_50526( 5, 5 );
    sub_183421();
    PRINTSTRING( "Contact_6 Activated\n" );
    return;
}

void sub_183421()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 28;
    PRINTSTRING( "START: E1 Contact_6_SETUP_MISSION_FLOW\n" );
    sub_53366( ref g_U34388, ref iVar2, iVar3, 13 );
    sub_52733( ref g_U34388, ref iVar2, iVar3, 3 );
    sub_183551( ref g_U34388, ref iVar2, iVar3, 3, "E1MF_DRU", "E1MFAU", 20000, 20000 );
    sub_52337( ref g_U34388, ref iVar2, iVar3, "MF14AUD", "MF6_BOFF" );
    sub_180058( ref g_U34388, ref iVar2, iVar3 );
    sub_53495( ref g_U34388, ref iVar2, iVar3, 11 );
    sub_55555( ref g_U34388, ref iVar2, iVar3, 5, 60000, 300000 );
    sub_52874( ref g_U34388, ref iVar2, iVar3, 0 );
    sub_51690( ref g_U34388, ref iVar2, iVar3, 37 );
    sub_52586( ref g_U34388, ref iVar2, iVar3, 7, 0 );
    sub_55278( ref g_U34388, ref iVar2, iVar3, 8, 14 );
    sub_53366( ref g_U34388, ref iVar2, iVar3, 14 );
    sub_108901( ref g_U34388, ref iVar2, iVar3, "C6_COLLECT" );
    sub_181621( ref g_U34388, ref iVar2, iVar3, "E1R2_CALL1", "E1R2AUD", 30000, 1, 20000 );
    sub_181841( ref g_U34388, ref iVar2, iVar3, 1 );
    sub_181954( ref g_U34388, ref iVar2, iVar3, 1, "C6_COLLECT" );
    sub_184042( ref g_U34388, ref iVar2, iVar3, 1 );
    sub_55126( ref g_U34388, ref iVar2, iVar3, 2, 1, 2, 10000 );
    sub_52874( ref g_U34388, ref iVar2, iVar3, 2 );
    sub_53495( ref g_U34388, ref iVar2, iVar3, 7 );
    sub_53495( ref g_U34388, ref iVar2, iVar3, 6 );
    sub_51690( ref g_U34388, ref iVar2, iVar3, 8 );
    sub_53495( ref g_U34388, ref iVar2, iVar3, 11 );
    sub_55403( ref g_U34388, ref iVar2, iVar3, 8, 14 );
    sub_56139( ref g_U34388, ref iVar2, iVar3 );
    sub_56228( ref g_U34388, ref iVar2, iVar3 );
    PRINTSTRING( "END: E1 Contact_6_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_183551(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 40;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam7;
    sub_51466( uParam1 );
    sub_51518( "SET: ONEOFF_PHONE_PLAYER_REPEAT QUICK [" );
    sub_51518( uParam5 );
    sub_51518( "] " );
    sub_51518( uParam4 );
    sub_52446();
    return;
}

void sub_184042(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 71;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: PAUSE_STRAND\n" );
    return;
}

void sub_184465()
{
    int iVar2;
    int iVar3;

    iVar2 = 6;
    iVar3 = 6;
    if (g_U12306[iVar2]._fU0)
    {
        sub_184498();
        g_U12306[iVar2]._fU0 = 0;
        sub_49854( iVar2, 1 );
        return;
    }
    if (NOT g_U12306[iVar2]._fU8)
    {
        return;
    }
    sub_49854( iVar2, 0 );
    sub_110495( iVar2 );
    if (sub_110716( iVar3 ))
    {
        sub_110757( iVar3 );
        return;
    }
    if (sub_56436( iVar2 ))
    {
        return;
    }
    sub_115328( iVar3, iVar2 );
    if (sub_127603( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_128060( iVar3, iVar2 ))
    {
        return;
    }
    sub_61820( iVar3, iVar2, ref g_U34949 );
    return;
}

void sub_184498()
{
    sub_50526( 6, 6 );
    sub_184514();
    sub_185394();
    sub_185512();
    sub_185637();
    PRINTSTRING( "Friend_7 Activated\n" );
    return;
}

void sub_184514()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    iVar3 = 3;
    iVar4 = 0;
    iVar5 = 72;
    PRINTSTRING( "START: E1 Friend_7_SETUP_MISSION_FLOW\n" );
    sub_52733( ref g_U34949, ref iVar4, iVar5, 1 );
    sub_52337( ref g_U34949, ref iVar4, iVar5, "E1FCTA", "E1FCT_APH" );
    sub_52479( ref g_U34949, ref iVar4, iVar5, 6 );
    sub_106641( ref g_U34949, ref iVar4, iVar5, iVar3 );
    sub_106747( ref g_U34949, ref iVar4, iVar5, iVar3, 10, 9, 1, 0 );
    sub_53495( ref g_U34949, ref iVar4, iVar5, 1 );
    sub_53366( ref g_U34949, ref iVar4, iVar5, 15 );
    sub_106960( ref g_U34949, ref iVar4, iVar5 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 1 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 2 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 3 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 4 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 5 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 6 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 7 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 8 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 9 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 10 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 11 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 12 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 13 );
    sub_107045( ref g_U34949, ref iVar4, iVar5, 14 );
    sub_107188( ref g_U34949, ref iVar4, iVar5, 1 );
    sub_107292( ref g_U34949, ref iVar4, iVar5 );
    sub_107385( ref g_U34949, ref iVar4, iVar5, 6 );
    sub_107385( ref g_U34949, ref iVar4, iVar5, 10 );
    sub_107385( ref g_U34949, ref iVar4, iVar5, 11 );
    sub_107385( ref g_U34949, ref iVar4, iVar5, 12 );
    sub_107385( ref g_U34949, ref iVar4, iVar5, 14 );
    sub_107385( ref g_U34949, ref iVar4, iVar5, 18 );
    sub_107385( ref g_U34949, ref iVar4, iVar5, 20 );
    sub_107385( ref g_U34949, ref iVar4, iVar5, 21 );
    sub_107583( ref g_U34949, ref iVar4, iVar5, 1200, 30, 1, 4 );
    sub_53366( ref g_U34949, ref iVar4, iVar5, 15 );
    sub_106641( ref g_U34949, ref iVar4, iVar5, iVar2 );
    sub_106747( ref g_U34949, ref iVar4, iVar5, iVar2, 0, 5, 4, 0 );
    sub_51690( ref g_U34949, ref iVar4, iVar5, 22 );
    sub_54581( ref g_U34949, ref iVar4, iVar5, 8 );
    sub_180604( ref g_U34949, ref iVar4, iVar5, 20 );
    sub_185215( ref g_U34949, ref iVar4, iVar5, 14 );
    sub_181043( ref g_U34949, ref iVar4, iVar5 );
    sub_56228( ref g_U34949, ref iVar4, iVar5 );
    PRINTSTRING( "END: E1 Friend_7_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_185215(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 63;
    (uParam0^)[(uParam1^)]._fU4._fU8 = uParam3;
    sub_51466( uParam1 );
    sub_51518( "SET: REMOVE_FRIEND_ACTIVITY\n" );
    return;
}

void sub_185394()
{
    int iVar2;

    iVar2 = 6;
    sub_109212( iVar2, 6, 0 );
    sub_109212( iVar2, 10, 1 );
    sub_109212( iVar2, 11, 2 );
    sub_109212( iVar2, 12, 3 );
    sub_109212( iVar2, 14, 4 );
    sub_109212( iVar2, 18, 5 );
    sub_109212( iVar2, 20, 6 );
    sub_109212( iVar2, 21, 7 );
    sub_109566( iVar2, 14, 17, 13, 4, 30, 30 );
    sub_109779( iVar2, 38, 0, 18, 0 );
    return;
}

void sub_185512()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 6;
    iVar3 = 0;
    iVar4 = 3;
    sub_109993( iVar2, iVar3, 8, "ability_backup" );
    sub_109993( iVar2, iVar4, 9, "ability_gun_car" );
    sub_110077( iVar2, iVar3 );
    sub_110132( iVar2, iVar3, 0, 6, 0, 1 );
    sub_110077( iVar2, iVar4 );
    sub_110132( iVar2, iVar4, 0, 4, 0, 0 );
    return;
}

void sub_185637()
{
    return;
}

void sub_185861()
{
    int iVar2;
    int iVar3;

    iVar2 = 7;
    iVar3 = 7;
    if (g_U12306[iVar2]._fU0)
    {
        sub_185894();
        g_U12306[iVar2]._fU0 = 0;
        sub_49854( iVar2, 1 );
        return;
    }
    if (NOT g_U12306[iVar2]._fU8)
    {
        return;
    }
    sub_49854( iVar2, 0 );
    sub_110495( iVar2 );
    if (sub_110716( iVar3 ))
    {
        sub_110757( iVar3 );
        return;
    }
    if (sub_56436( iVar2 ))
    {
        return;
    }
    sub_115328( iVar3, iVar2 );
    if (sub_127603( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_128060( iVar3, iVar2 ))
    {
        return;
    }
    sub_61820( iVar3, iVar2, ref g_U36390 );
    return;
}

void sub_185894()
{
    sub_50526( 7, 7 );
    sub_185910();
    sub_186715();
    sub_186833();
    sub_186958();
    PRINTSTRING( "Friend_8 Activated\n" );
    return;
}

void sub_185910()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    iVar3 = 4;
    iVar4 = 0;
    iVar5 = 72;
    PRINTSTRING( "START: E1 Friend_8_SETUP_MISSION_FLOW\n" );
    sub_52733( ref g_U36390, ref iVar4, iVar5, 1 );
    sub_52337( ref g_U36390, ref iVar4, iVar5, "E1FCCA", "E1FCC_APH" );
    sub_52479( ref g_U36390, ref iVar4, iVar5, 7 );
    sub_51690( ref g_U36390, ref iVar4, iVar5, 33 );
    sub_106641( ref g_U36390, ref iVar4, iVar5, iVar3 );
    sub_106747( ref g_U36390, ref iVar4, iVar5, iVar3, 10, 9, 1, 0 );
    sub_53495( ref g_U36390, ref iVar4, iVar5, 2 );
    sub_53366( ref g_U36390, ref iVar4, iVar5, 16 );
    sub_106960( ref g_U36390, ref iVar4, iVar5 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 1 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 2 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 3 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 4 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 5 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 6 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 7 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 8 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 9 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 10 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 11 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 12 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 13 );
    sub_107045( ref g_U36390, ref iVar4, iVar5, 14 );
    sub_107188( ref g_U36390, ref iVar4, iVar5, 2 );
    sub_107292( ref g_U36390, ref iVar4, iVar5 );
    sub_107385( ref g_U36390, ref iVar4, iVar5, 6 );
    sub_107385( ref g_U36390, ref iVar4, iVar5, 10 );
    sub_107385( ref g_U36390, ref iVar4, iVar5, 11 );
    sub_107385( ref g_U36390, ref iVar4, iVar5, 12 );
    sub_107385( ref g_U36390, ref iVar4, iVar5, 14 );
    sub_107385( ref g_U36390, ref iVar4, iVar5, 18 );
    sub_107385( ref g_U36390, ref iVar4, iVar5, 20 );
    sub_107385( ref g_U36390, ref iVar4, iVar5, 21 );
    sub_107583( ref g_U36390, ref iVar4, iVar5, 1200, 30, 1, 4 );
    sub_53366( ref g_U36390, ref iVar4, iVar5, 16 );
    sub_106641( ref g_U36390, ref iVar4, iVar5, iVar2 );
    sub_106747( ref g_U36390, ref iVar4, iVar5, iVar2, 0, 5, 4, 0 );
    sub_51690( ref g_U36390, ref iVar4, iVar5, 22 );
    sub_54581( ref g_U36390, ref iVar4, iVar5, 8 );
    sub_180604( ref g_U36390, ref iVar4, iVar5, 20 );
    sub_185215( ref g_U36390, ref iVar4, iVar5, 14 );
    sub_181043( ref g_U36390, ref iVar4, iVar5 );
    sub_56228( ref g_U36390, ref iVar4, iVar5 );
    PRINTSTRING( "END: E1 Friend_8_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_186715()
{
    int iVar2;

    iVar2 = 7;
    sub_109212( iVar2, 6, 0 );
    sub_109212( iVar2, 10, 1 );
    sub_109212( iVar2, 11, 2 );
    sub_109212( iVar2, 12, 3 );
    sub_109212( iVar2, 14, 4 );
    sub_109212( iVar2, 18, 5 );
    sub_109212( iVar2, 20, 6 );
    sub_109212( iVar2, 21, 7 );
    sub_109566( iVar2, 15, 18, 13, 4, 30, 30 );
    sub_109779( iVar2, 38, 0, 18, 0 );
    return;
}

void sub_186833()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 7;
    iVar3 = 0;
    iVar4 = 4;
    sub_109993( iVar2, iVar3, 8, "ability_backup" );
    sub_109993( iVar2, iVar4, 9, "ability_vehicle" );
    sub_110077( iVar2, iVar3 );
    sub_110132( iVar2, iVar3, 0, 6, 0, 1 );
    sub_110077( iVar2, iVar4 );
    sub_110132( iVar2, iVar4, 0, 4, 0, 0 );
    return;
}

void sub_186958()
{
    return;
}

void sub_187182()
{
    int iVar2;
    int iVar3;

    iVar2 = 8;
    iVar3 = 8;
    if (g_U12306[iVar2]._fU0)
    {
        sub_187215();
        g_U12306[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U12306[iVar2]._fU8)
    {
        return;
    }
    if (sub_110716( iVar3 ))
    {
        sub_110757( iVar3 );
        return;
    }
    if (sub_56436( iVar2 ))
    {
        return;
    }
    sub_61820( iVar3, iVar2, ref g_U37831 );
    return;
}

void sub_187215()
{
    sub_50526( 8, 8 );
    sub_187231();
    PRINTSTRING( "Contact_9 Activated\n" );
    return;
}

void sub_187231()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 32;
    PRINTSTRING( "START: E1 Contact_9_SETUP_MISSION_FLOW\n" );
    sub_52733( ref g_U37831, ref iVar2, iVar3, 1 );
    sub_52337( ref g_U37831, ref iVar2, iVar3, "MF14AUD", "MF6_WUN" );
    sub_52479( ref g_U37831, ref iVar2, iVar3, 8 );
    sub_55278( ref g_U37831, ref iVar2, iVar3, 8, 10 );
    sub_108901( ref g_U37831, ref iVar2, iVar3, "InitGWandR" );
    sub_187413( ref g_U37831, ref iVar2, iVar3 );
    sub_179900( ref g_U37831, ref iVar2, iVar3, 30000 );
    sub_108604( ref g_U37831, ref iVar2, iVar3, 26, "CheckGW" );
    sub_108788( ref g_U37831, ref iVar2, iVar3, "AfterGW" );
    sub_108901( ref g_U37831, ref iVar2, iVar3, "CheckGW" );
    sub_108604( ref g_U37831, ref iVar2, iVar3, 23, "AfterGW" );
    sub_108604( ref g_U37831, ref iVar2, iVar3, 24, "AfterGW" );
    sub_183551( ref g_U37831, ref iVar2, iVar3, 1, "E1MF3_TGW", "E1MF3AU", 60000, 60000 );
    sub_51690( ref g_U37831, ref iVar2, iVar3, 26 );
    sub_108901( ref g_U37831, ref iVar2, iVar3, "AfterGW" );
    sub_108604( ref g_U37831, ref iVar2, iVar3, 27, "CheckRace" );
    sub_108788( ref g_U37831, ref iVar2, iVar3, "AfterRace" );
    sub_108901( ref g_U37831, ref iVar2, iVar3, "CheckRace" );
    sub_108604( ref g_U37831, ref iVar2, iVar3, 25, "AfterRace" );
    sub_183551( ref g_U37831, ref iVar2, iVar3, 6, "E1MF3_TRACE", "E1MF3AU", 60000, 60000 );
    sub_51690( ref g_U37831, ref iVar2, iVar3, 27 );
    sub_108901( ref g_U37831, ref iVar2, iVar3, "AfterRace" );
    sub_108604( ref g_U37831, ref iVar2, iVar3, 26, "InitGWandR" );
    sub_108604( ref g_U37831, ref iVar2, iVar3, 27, "InitGWandR" );
    sub_53366( ref g_U37831, ref iVar2, iVar3, 17 );
    sub_183551( ref g_U37831, ref iVar2, iVar3, 1, "E1MF_APRO", "E1MFAU", 120000, 60000 );
    sub_180282( ref g_U37831, ref iVar2, iVar3, 0, 0, 10000 );
    sub_51690( ref g_U37831, ref iVar2, iVar3, 28 );
    sub_180414( ref g_U37831, ref iVar2, iVar3, 12, 8, 1, 360 );
    sub_181043( ref g_U37831, ref iVar2, iVar3 );
    sub_56228( ref g_U37831, ref iVar2, iVar3 );
    PRINTSTRING( "END: E1 Contact_9_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_187413(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_51222( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 150;
    sub_51466( uParam1 );
    sub_51518( "SET: DEBUG_PAUSE_ENDLESS_LOOP\n" );
    return;
}

void sub_188393()
{
    int iVar2;
    int I;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    sub_188402();
    iVar6 = 1;
    for ( I = 0; I < 11; I++ )
    {
        sub_103676( I );
        sub_188944( I );
        sub_190782( I );
        iVar2 = g_U14838[I]._fU80._fU0;
        iVar6 = 1;
        if (iVar2 == 0)
        {
            iVar2 = g_U14838[I]._fU0._fU0;
            iVar6 = 0;
        }
        switch (iVar2)
        {
            case 0:
            sub_191286( I );
            break;
            case 1:
            sub_193210( I, iVar6 );
            break;
            case 2:
            uVar4 = sub_44161( I, g_U14838[I]._fU0._fU4 );
            uVar5 = g_U20913[uVar4]._fU16;
            sub_197942( I, uVar5, iVar6 );
            if (l_U10 == 2)
            {
                g_U14838[I]._fU0._fU0 = 3;
                l_U10 = 0;
                CLEAR_HELP();
            }
            break;
            case 3:
            sub_199607( I, iVar6 );
            break;
            case 4:
            sub_201464( I, iVar6 );
            break;
            case 5:
            sub_45971( I, iVar6 );
            break;
            case 6:
            sub_45758( I, iVar6 );
            break;
            default:
            sub_24994( "Main_Missions: Maintain_Missions(): Unknown Mission Status ID" );
            return;
        }
    }
    return;
}

void sub_188402()
{
    if (g_U26737._fU4 == g_U26737._fU0)
    {
        return;
    }
    g_U26737._fU0 = g_U26737._fU4;
    if (NOT g_U26737._fU0)
    {
        sub_188461();
        return;
    }
    sub_188688();
    return;
}

void sub_188461()
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        if (DOES_BLIP_EXIST( g_U14838[I]._fU0._fU64 ))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[I]._fU0._fU64, 0 );
        }
        if (DOES_BLIP_EXIST( g_U14838[I]._fU80._fU64 ))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[I]._fU80._fU64, 0 );
        }
    }
    for ( I = 0; I < 2; I++ )
    {
        if (DOES_BLIP_EXIST( g_U11005[I]._fU32 ))
        {
            CHANGE_BLIP_DISPLAY( g_U11005[I]._fU32, 0 );
        }
    }
    return;
}

void sub_188688()
{
    int I;

    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        if (DOES_BLIP_EXIST( g_U14838[I]._fU0._fU64 ))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[I]._fU0._fU64, 2 );
        }
        if (DOES_BLIP_EXIST( g_U14838[I]._fU80._fU64 ))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[I]._fU80._fU64, 2 );
        }
    }
    for ( I = 0; I < 2; I++ )
    {
        if (DOES_BLIP_EXIST( g_U11005[I]._fU32 ))
        {
            CHANGE_BLIP_DISPLAY( g_U11005[I]._fU32, 2 );
        }
    }
    return;
}

void sub_188944(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (NOT g_U14838[uParam0]._fU160._fU0)
    {
        return;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        REQUEST_SCRIPT( ref g_U14838[uParam0]._fU160._fU12 );
        if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[uParam0]._fU160._fU12 )))
        {
            REQUEST_SCRIPT( ref g_U14838[uParam0]._fU160._fU12 );
            return;
        }
        g_U14838[uParam0]._fU160._fU80 = 1;
        g_U14838[uParam0]._fU160._fU104 = START_NEW_SCRIPT( ref g_U14838[uParam0]._fU160._fU12, 1536 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[uParam0]._fU160._fU12 );
        if (g_U15861 < 0)
        {
            g_U15861 = iVar3 + 10800000;
        }
        return;
    }
    if (NOT (IS_THREAD_ACTIVE( g_U14838[uParam0]._fU160._fU104 )))
    {
        if (NOT g_U14838[uParam0]._fU160._fU92)
        {
            if (NOT (g_U14838[uParam0]._fU160._fU88 == -1))
            {
                g_U14838[uParam0]._fU160._fU84 = g_U14838[uParam0]._fU160._fU88;
                return;
            }
        }
        g_U12306[uParam0]._fU24 = -1;
        sub_2559( uParam0 );
        g_U14838[uParam0]._fU160._fU108._fU20 = -1;
        return;
    }
    if (g_U14838[uParam0]._fU160._fU108._fU20 == 0)
    {
        if (NOT (g_U14838[uParam0]._fU160._fU108._fU16 == 0))
        {
            g_U14838[uParam0]._fU160._fU108._fU20 = iVar3 + g_U14838[uParam0]._fU160._fU108._fU16;
        }
        return;
    }
    if (g_U15728[4])
    {
        return;
    }
    if (g_U14838[uParam0]._fU160._fU96)
    {
        sub_189530( 180000 );
        g_U14838[uParam0]._fU160._fU108._fU20 = iVar3 + g_U14838[uParam0]._fU160._fU108._fU16;
        return;
    }
    if (g_U12303)
    {
        sub_189530( 180000 );
        return;
    }
    iVar4 = 0;
    iVar5 = 0;
    if (g_U15861 < iVar3)
    {
        iVar5 = sub_189675();
        if (iVar5 <= 1)
        {
            iVar4 = sub_189764();
            if (iVar4 == -1)
            {
                sub_189530( 180000 );
            }
            else
            {
                sub_189977( iVar4 );
                g_U15861 = iVar3 + 10800000;
                g_U14838[iVar4]._fU160._fU108._fU20 = iVar3 + g_U14838[iVar4]._fU160._fU108._fU16;
                sub_190392( iVar4 );
            }
        }
        else
        {
            sub_189530( 3600000 );
        }
        return;
    }
    if (g_U14838[uParam0]._fU160._fU108._fU20 < iVar3)
    {
        if (g_U14838[uParam0]._fU160._fU108._fU0)
        {
            sub_189977( uParam0 );
            g_U14838[uParam0]._fU160._fU108._fU20 = iVar3 + g_U14838[uParam0]._fU160._fU108._fU16;
            sub_190392( uParam0 );
            sub_189530( 300000 );
        }
        else
        {
            g_U14838[uParam0]._fU160._fU108._fU20 = iVar3 + 300000;
        }
        return;
    }
    return;
}

void sub_189530(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 + iParam0;
    if (iVar4 > g_U15861)
    {
        g_U15861 = iVar4;
    }
    return;
}

void sub_189675()
{
    int Result;
    int I;

    Result = 0;
    I = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (IS_BIT_SET( g_U10686[I]._fU0, 3 ))
        {
            Result++;
        }
    }
    return Result;
}

void sub_189764()
{
    int I;
    int iVar3;
    int Result;
    int iVar5;
    int iVar6;

    I = 0;
    iVar3 = 2147483647;
    Result = -1;
    iVar5 = 0;
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    for ( I = 0; I < 11; I++ )
    {
        if (g_U14838[I]._fU160._fU0)
        {
            if (g_U14838[I]._fU160._fU80)
            {
                if (g_U14838[I]._fU160._fU108._fU0)
                {
                    iVar5 = g_U14838[I]._fU160._fU108._fU20 - iVar6;
                    if (iVar5 < iVar3)
                    {
                        iVar3 = iVar5;
                        Result = I;
                    }
                }
            }
        }
    }
    return Result;
}

void sub_189977(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT g_U14838[uParam0]._fU160._fU0)
    {
        return;
    }
    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        return;
    }
    if (g_U14838[uParam0]._fU160._fU108._fU16 == 0)
    {
        SCRIPT_ASSERT( "Send_Proc_Reminder: defaultTime for Proc Reminder is 0. Need to set up Proc reminder details using mission flow command" );
        return;
    }
    if (NOT g_U14838[uParam0]._fU160._fU108._fU0)
    {
        return;
    }
    uVar3 = g_U14838[uParam0]._fU160._fU108._fU4;
    uVar4 = g_U14838[uParam0]._fU160._fU108._fU8;
    uVar5 = g_U14838[uParam0]._fU160._fU108._fU12;
    iVar6 = 5000;
    sub_81298( uVar3 );
    sub_78631( uVar3, uVar4, uVar5, iVar6 );
    return;
}

void sub_190392(int iParam0)
{
    int I;
    int iVar4;
    int iVar5;

    I = 0;
    iVar4 = 0;
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    for ( I = 0; I < 11; I++ )
    {
        if (NOT (I == iParam0))
        {
            if (g_U14838[I]._fU160._fU0)
            {
                if (g_U14838[I]._fU160._fU80)
                {
                    iVar4 = g_U14838[I]._fU160._fU108._fU20 - iVar5;
                    if (iVar4 < 300000)
                    {
                        g_U14838[I]._fU160._fU108._fU20 += 300000;
                    }
                }
            }
        }
    }
    return;
}

void sub_190782(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (DOES_BLIP_EXIST( g_U14838[uParam0]._fU80._fU64 ))
    {
        if (NOT (g_U14838[uParam0]._fU80._fU76 == 0))
        {
            if (g_U14838[uParam0]._fU80._fU76 < iVar3)
            {
                FLASH_BLIP( g_U14838[uParam0]._fU80._fU64, 0 );
                CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU80._fU64, l_U7 );
                g_U14838[uParam0]._fU80._fU76 = 0;
            }
        }
    }
    else
    {
        g_U14838[uParam0]._fU80._fU76 = 0;
    }
    if (DOES_BLIP_EXIST( g_U14838[uParam0]._fU0._fU64 ))
    {
        if (NOT (g_U14838[uParam0]._fU0._fU76 == 0))
        {
            if (g_U14838[uParam0]._fU0._fU76 < iVar3)
            {
                FLASH_BLIP( g_U14838[uParam0]._fU0._fU64, 0 );
                CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU0._fU64, l_U7 );
                g_U14838[uParam0]._fU0._fU76 = 0;
            }
        }
    }
    else
    {
        g_U14838[uParam0]._fU0._fU76 = 0;
    }
    return;
}

void sub_191286(int iParam0)
{
    if (iParam0 != 9)
    {
        return;
    }
    sub_46388();
    if (g_U14838[iParam0]._fU0._fU0 != 0)
    {
        return;
    }
    sub_191337();
    return;
}

void sub_191337()
{
    int iVar2;
    boolean bVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (g_U15852._fU16)
    {
        if (sub_191369())
        {
            if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
            {
                g_U15852._fU16 = 0;
                return;
            }
            if (NOT (IS_PLAYER_CONTROL_ON( sub_7787() )))
            {
                g_U15852._fU16 = 0;
                return;
            }
            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_15549() )))
            {
                g_U15852._fU16 = 0;
                g_U15852._fU8 = 0;
                return;
            }
            if (((IS_SCREEN_FADED_OUT()) || (IS_SCREEN_FADING_OUT())) || (IS_SCREEN_FADING_IN()))
            {
                g_U15852._fU16 = 0;
                return;
            }
            if (NOT (IS_CHAR_DEAD( sub_15549() )))
            {
                if (IS_CHAR_SHOOTING( sub_15549() ))
                {
                    g_U15852._fU16 = 0;
                }
            }
            if (iVar2 > g_U15852._fU28)
            {
                g_U15852._fU20 = 1;
            }
            return;
        }
        bVar3 = g_U15852._fU20;
        g_U15852._fU16 = 0;
        g_U15852._fU20 = 0;
        g_U15852._fU28 = 0;
        if (bVar3)
        {
            return;
        }
        if (((IS_BUTTON_PRESSED( 0, 15 )) AND (IS_USING_CONTROLLER())) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 3 ))))
        {
            return;
        }
        if (NOT (IS_CHAR_DEAD( sub_15549() )))
        {
            if (IS_CHAR_SHOOTING( sub_15549() ))
            {
                return;
            }
        }
        if (g_U15852._fU4)
        {
            sub_191777();
            g_U15852._fU4 = 0;
        }
        if (sub_191864())
        {
            REQUEST_SCRIPT( ref g_U14838[9]._fU0._fU24 );
            g_U14838[9]._fU0._fU0 = 3;
            g_U8764 = 0;
        }
        return;
    }
    if (NOT sub_191369())
    {
        g_U15852._fU20 = 0;
        g_U15852._fU28 = 0;
    }
    if (NOT g_U15852._fU8)
    {
        g_U15852._fU24 = -1;
    }
    g_U15852._fU0 = 0;
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        g_U15852._fU0 = 1;
    }
    else if (NOT (IS_PLAYER_CONTROL_ON( sub_7787() )))
    {
        g_U15852._fU0 = 1;
    }
    if (((IS_SCREEN_FADED_OUT()) || (IS_SCREEN_FADING_OUT())) || (IS_SCREEN_FADING_IN()))
    {
        g_U15852._fU0 = 1;
    }
    if (NOT g_U15852._fU0)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_15549() )))
        {
            g_U15852._fU0 = 1;
            g_U15852._fU8 = 0;
        }
    }
    if (NOT g_U15852._fU0)
    {
        if (g_U15852._fU4)
        {
            if (NOT (sub_191990( g_U15852._fU24 )))
            {
                g_U15852._fU0 = 1;
            }
        }
    }
    if (g_U15852._fU0)
    {
        if (g_U15852._fU4)
        {
            sub_191777();
            g_U15852._fU4 = 0;
        }
        return;
    }
    if (NOT g_U15852._fU8)
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_15549() ))
        {
            g_U15852._fU12 = 0;
            sub_192804();
            if (g_U15852._fU12)
            {
                g_U15852._fU8 = 1;
                g_U15852._fU4 = 1;
            }
            else
            {
                return;
            }
        }
        else
        {
            return;
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_15549() )))
    {
        if (NOT (IS_CHAR_SHOOTING( sub_15549() )))
        {
            if (((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT())) AND (NOT IS_SCREEN_FADING_IN()))
            {
                if (sub_193081())
                {
                    if (NOT (IS_CONTROL_PRESSED( 2, 3 )))
                    {
                        g_U15852._fU16 = 1;
                        g_U15852._fU28 = iVar2 + 200;
                    }
                }
            }
        }
    }
    return;
}

int sub_191369()
{
    if (((IS_USING_CONTROLLER()) AND (IS_BUTTON_PRESSED( 0, 4 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 23 ))))
    {
        return 1;
    }
    return 0;
}

void sub_191777()
{
    int I;

    I = 0;
    for ( I = 0; I < g_U26665; I++ )
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U26538[I]._fU4 ))
        {
            CLEAR_HELP();
            return;
        }
    }
    return;
}

int sub_191864()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return 0;
    }
    for ( I = 0; I < g_U26665; I++ )
    {
        iVar3 = g_U26538[I]._fU36;
        if (IS_CHAR_IN_MODEL( sub_15549(), iVar3 ))
        {
            if (sub_191953( I ))
            {
                g_U14838[9]._fU0._fU24 = {g_U26538[I]._fU40};
                return 1;
            }
            return 0;
        }
    }
    return 0;
}

int sub_191953(unknown uParam0)
{
    if (NOT (IS_VEH_DRIVEABLE( g_U15852._fU32 )))
    {
        return 0;
    }
    if (NOT (sub_191990( uParam0 )))
    {
        return 0;
    }
    if (sub_192315())
    {
        sub_7175();
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_191990(unknown uParam0)
{
    float fVar3;
    float fVar4;

    if (g_U26538[uParam0]._fU72)
    {
        if (g_U12303)
        {
            PRINT_NOW( "R3_NMIS", 5000, 1 );
            return 0;
        }
        CLEAR_THIS_PRINT( "R3_NMIS" );
    }
    if (NOT (IS_VEH_DRIVEABLE( g_U15852._fU32 )))
    {
        return 0;
    }
    if (NOT ((GET_ENGINE_HEALTH( g_U15852._fU32 )) > 0.00000000))
    {
        return 0;
    }
    if (g_U26538[uParam0]._fU80)
    {
        GET_CAR_UPRIGHT_VALUE( g_U15852._fU32, ref fVar3 );
        if ((fVar3 < 0.95000000) || (fVar3 > 1.01100000))
        {
            return 0;
        }
    }
    if (NOT (IS_VEHICLE_ON_ALL_WHEELS( g_U15852._fU32 )))
    {
        return 0;
    }
    if (g_U26538[uParam0]._fU76)
    {
        GET_CAR_SPEED( g_U15852._fU32, ref fVar4 );
        if (fVar4 > 0.40000000)
        {
            return 0;
        }
    }
    if (g_U10956 == 1)
    {
        return 0;
    }
    if (g_U27681)
    {
        return 0;
    }
    return 1;
}

void sub_192315()
{
    return sub_7186( 0, 0 );
}

void sub_192804()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < g_U26665; I++ )
    {
        iVar3 = g_U26538[I]._fU36;
        if (IS_CHAR_IN_MODEL( sub_15549(), iVar3 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_15549(), ref g_U15852._fU32 );
            if (sub_191990( I ))
            {
                if (NOT g_U15852._fU8)
                {
                    PRINT_HELP( ref g_U26538[I]._fU4 );
                }
                g_U15852._fU12 = 1;
                g_U15852._fU24 = I;
            }
            return;
        }
    }
    return;
}

int sub_193081()
{
    if (((IS_USING_CONTROLLER()) AND (IS_BUTTON_JUST_PRESSED( 0, 4 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 23 ))))
    {
        return 1;
    }
    return 0;
}

void sub_193210(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    boolean bVar10;

    sub_193223( uParam0, bParam1 );
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return;
    }
    if (g_U12303)
    {
        return;
    }
    if (bParam1)
    {
        iVar4 = g_U14838[uParam0]._fU80._fU56;
    }
    else
    {
        iVar4 = g_U14838[uParam0]._fU0._fU56;
    }
    if (iVar4 == 0)
    {
        iVar5 = -1;
        bVar6 = true;
        if (bParam1)
        {
            iVar5 = g_U14838[uParam0]._fU80._fU4;
            bVar6 = g_U14838[uParam0]._fU80._fU72;
        }
        else
        {
            iVar5 = g_U14838[uParam0]._fU0._fU4;
            bVar6 = g_U14838[uParam0]._fU0._fU72;
        }
        if (bVar6)
        {
            uVar7 = sub_44161( uParam0, iVar5 );
            uVar8 = g_U20913[uVar7]._fU16;
            fVar9 = g_U10686[uVar8]._fU4._fU8 + 2.00000000;
            LOCATE_CHAR_ON_FOOT_3D( sub_15549(), g_U10686[uVar8]._fU4._fU0, g_U10686[uVar8]._fU4._fU4, fVar9, 1.60000000, 1.60000000, 2.00000000, 1 );
        }
    }
    if (g_U12305)
    {
        return;
    }
    if ((sub_69829()) || (sub_71842()))
    {
        return;
    }
    if (NOT g_U20910)
    {
        return;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_7787() )))
    {
        return;
    }
    if ((g_U10974._fU0) || (IS_AUTO_SAVE_IN_PROGRESS()))
    {
        return;
    }
    bVar10 = false;
    switch (iVar4)
    {
        case 0:
        bVar10 = sub_193723( uParam0, bParam1 );
        break;
        case 1:
        case 2:
        case 4: if (NOT bParam1)
        {
            g_U12306[uParam0]._fU28 = 1;
        }
        case 3:
        case 7:
        case 5:
        case 6:
        if (iVar4 == 2)
        {
            bVar10 = sub_196200( uParam0, bParam1, iVar4, 1 );
        }
        else
        {
            bVar10 = sub_196200( uParam0, bParam1, iVar4, 0 );
        }
        break;
        case 8:
        bVar10 = sub_193723( uParam0, bParam1 );
        break;
        default: sub_24994( "Main_Missions: Check_For_Mission_Start(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        switch (iVar4)
        {
            case 0:
            case 1:
            case 2:
            case 4:
            case 3:
            case 7:
            sub_47553();
            break;
        }
        switch (iVar4)
        {
            case 0:
            case 1:
            case 2:
            if (NOT bParam1)
            {
                g_U10959._fU4 = uParam0;
                g_U10959._fU8 = g_U14838[uParam0]._fU0._fU4;
                g_U10959._fU16 = {g_U14838[uParam0]._fU0._fU8};
                sub_85572( ref g_U10959._fU32 );
            }
            break;
        }
        switch (iVar4)
        {
            case 0:
            case 1:
            case 2:
            if (NOT bParam1)
            {
                sub_69138();
            }
            break;
        }
        switch (iVar4)
        {
            case 0:
            case 1:
            case 2:
            if (NOT bParam1)
            {
                sub_197490( uParam0 );
            }
            break;
        }
    }
    return;
}

void sub_193223(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_193723(int iParam0, boolean bParam1)
{
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    boolean bVar7;
    int iVar8;
    boolean bVar9;

    if (NOT sub_193732())
    {
        return 0;
    }
    iVar4 = -1;
    if (bParam1)
    {
        iVar4 = g_U14838[iParam0]._fU80._fU4;
    }
    else
    {
        iVar4 = g_U14838[iParam0]._fU0._fU4;
    }
    uVar5 = sub_44161( iParam0, iVar4 );
    uVar6 = g_U20913[uVar5]._fU16;
    bVar7 = false;
    if (IS_BIT_SET( g_U10686[uVar6]._fU0, 1 ))
    {
        if ((LOCATE_CHAR_ON_FOOT_3D( sub_15549(), g_U10686[uVar6]._fU4._fU0, g_U10686[uVar6]._fU4._fU4, g_U10686[uVar6]._fU4._fU8, 1.60000000, 1.60000000, 2.00000000, 0 )) || (sub_193961( iParam0, uVar6 )))
        {
            bVar7 = true;
        }
    }
    iVar8 = 0;
    if (NOT bVar7)
    {
        if (IS_BIT_SET( g_U10686[uVar6]._fU0, 2 ))
        {
            if ((LOCATE_CHAR_IN_CAR_3D( sub_15549(), g_U10686[uVar6]._fU4._fU0, g_U10686[uVar6]._fU4._fU4, g_U10686[uVar6]._fU4._fU8, 2.50000000, 2.50000000, 2.00000000, 0 )) || (sub_193961( iParam0, uVar6 )))
            {
                bVar7 = true;
            }
        }
    }
    if (NOT bVar7)
    {
        return 0;
    }
    bVar9 = false;
    if (IS_BIT_SET( g_U10959._fU0, 4 ))
    {
        if (g_U10959._fU4 == iParam0)
        {
            if (NOT (IS_BIT_SET( g_U10959._fU0, 6 )))
            {
                return 0;
            }
            bVar9 = true;
        }
    }
    if (NOT bVar9)
    {
        if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
        {
            return 0;
        }
    }
    if ((NOT bParam1) AND (NOT bVar9))
    {
        if (NOT (sub_194471( 1, 1 )))
        {
            return 0;
        }
    }
    if (NOT bVar9)
    {
        SET_BIT( ref g_U10959._fU0, 7 );
    }
    else
    {
        CLEAR_BIT( ref g_U10959._fU0, 7 );
    }
    if (IS_BIT_SET( g_U20913[uVar5]._fU108, 1 ))
    {
        if (NOT (sub_100246( g_U20913[uVar5]._fU68, g_U20913[uVar5]._fU76 )))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U20913[uVar5]._fU84 )))
            {
                PRINT_HELP( ref g_U20913[uVar5]._fU84 );
            }
            return 0;
        }
        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U20913[uVar5]._fU84 ))
        {
            CLEAR_HELP();
        }
    }
    if (NOT bVar9)
    {
        if (NOT (sub_194968( iParam0 )))
        {
            return 0;
        }
    }
    if (bParam1)
    {
        REQUEST_SCRIPT( ref g_U14838[iParam0]._fU80._fU24 );
        g_U14838[iParam0]._fU80._fU0 = 3;
    }
    else
    {
        REQUEST_SCRIPT( ref g_U14838[iParam0]._fU0._fU24 );
        if (NOT bVar9)
        {
            sub_195953();
            g_U14838[iParam0]._fU0._fU0 = 2;
        }
        else
        {
            g_U14838[iParam0]._fU0._fU0 = 3;
            sub_196011();
        }
        CLEAR_WANTED_LEVEL( sub_7787() );
    }
    sub_43577( iParam0 );
    if (bParam1)
    {
        g_U12306[iParam0]._fU28 = 1;
    }
    return 1;
}

int sub_193732()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U20912)
    {
        return 0;
    }
    return 1;
}

int sub_193961(int iParam0, unknown uParam1)
{
    float fVar4;

    if (NOT (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        return 0;
    }
    if (NOT (g_U10959._fU4 == iParam0))
    {
        return 0;
    }
    if (NOT (IS_BIT_SET( g_U10959._fU0, 6 )))
    {
        return 0;
    }
    if (((g_U10959._fU48._fU0 == 0.00000000) AND (g_U10959._fU48._fU4 == 0.00000000)) AND (g_U10959._fU48._fU8 == 0.00000000))
    {
        return 0;
    }
    fVar4 = 999999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( g_U10959._fU48._fU0, g_U10959._fU48._fU4, g_U10959._fU48._fU8, g_U10686[uParam1]._fU4._fU0, g_U10686[uParam1]._fU4._fU4, g_U10686[uParam1]._fU4._fU8, ref fVar4 );
    if (fVar4 > 1.00000000)
    {
        return 0;
    }
    return 1;
}

int sub_194471(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_15549() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_15549(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_15549() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_15549(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_15549()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_15549() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_15549() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_7787() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_7787() )))
    {
        return 0;
    }
    return 1;
}

int sub_194968(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 0;
    I = 0;
    iVar5 = 10;
    for ( I = 0; I < 11; I++ )
    {
        iVar3 = g_U14838[I]._fU0._fU0;
        if ((((iVar3 == 2) || (iVar3 == 3)) || (iVar3 == 4)) || (iVar3 == 5))
        {
            iVar5 = g_U14838[I]._fU0._fU56;
            if (((iVar5 == 2) || (iVar5 == 0)) || (iVar5 == 1))
            {
                PRINTSTRING( "------> EXTRA SECURITY CHECK: Not on mission but another strand's Story Mission is activating\n" );
                PRINTSTRING( "            (this strand: " );
                PRINTINT( uParam0 );
                PRINTSTRING( "    strand already activating: " );
                PRINTINT( I );
                PRINTSTRING( ")\n" );
                PRINTSTRING( "             (other strand statusID: " );
                switch (iVar3)
                {
                    case 2:
                    PRINTSTRING( "MISSION_ARRIVAL_CUTSCENE)\n" );
                    break;
                    case 3:
                    PRINTSTRING( "MISSION_STARTING)\n" );
                    break;
                    case 4:
                    PRINTSTRING( "MISSION_ACTIVE)\n" );
                    break;
                    case 5:
                    PRINTSTRING( "MISSION_END)\n" );
                    break;
                }
                PRINTSTRING( "             (other strand startType: " );
                switch (iVar5)
                {
                    case 2:
                    PRINTSTRING( "START_NOW_FADE)\n" );
                    break;
                    case 0:
                    PRINTSTRING( "START_POINT)\n" );
                    break;
                    case 1:
                    PRINTSTRING( "START_NOW)\n" );
                    break;
                }
                PRINTSTRING( "             (mission ID: " );
                PRINTINT( g_U14838[I]._fU0._fU4 );
                PRINTSTRING( " - " );
                PRINTSTRING( ref g_U14838[I]._fU0._fU24 );
                PRINTSTRING( ")\n" );
                PRINTSTRING( "             (" );
                PRINTSTRING( ref g_U14838[I]._fU0._fU8 );
                PRINTSTRING( ")\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_195953()
{
    l_U10 = 0;
    return;
}

void sub_196011()
{
    int iVar2;

    if (IS_CHAR_DEAD( sub_15549() ))
    {
        return;
    }
    iVar2 = 0;
    GET_CHAR_HEALTH( sub_15549(), ref iVar2 );
    if (iVar2 >= 150)
    {
        return;
    }
    SET_CHAR_HEALTH( sub_15549(), 150 );
    RESET_VISIBLE_PED_DAMAGE( sub_15549() );
    return;
}

int sub_196200(int iParam0, boolean bParam1, unknown uParam2, boolean bParam3)
{
    boolean bVar6;

    if (bParam1)
    {
        if (NOT (g_U14838[iParam0]._fU80._fU0 == 1))
        {
            sub_24994( "Main_Missions: Immediately_Start_Mission(): Attempting to Immediately Start friend mission but status is not Check For Start" );
            return 0;
        }
    }
    else if (NOT (g_U14838[iParam0]._fU0._fU0 == 1))
    {
        sub_24994( "Main_Missions: Immediately_Start_Mission(): Attempting to Immediately Start primary mission but status is not Check For Start" );
        return 0;
    }
    if (g_U12303)
    {
        sub_24994( "MAIN_MISSIONS: IMMEDIATE_START_MISSION but player already on a mission" );
        return 0;
    }
    if ((NOT bParam1) AND (bParam3))
    {
        if (NOT (sub_194471( 1, 1 )))
        {
            return 0;
        }
    }
    bVar6 = false;
    if (((IS_BIT_SET( g_U10959._fU0, 4 )) AND (g_U10959._fU4 == iParam0)) AND (IS_BIT_SET( g_U10959._fU0, 6 )))
    {
        bVar6 = true;
    }
    if (NOT bVar6)
    {
        if (NOT (sub_194968( iParam0 )))
        {
            return 0;
        }
    }
    if (bVar6)
    {
        CLEAR_BIT( ref g_U10959._fU0, 7 );
        SET_PLAYER_CONTROL( sub_7787(), 1 );
        sub_196011();
        if (IS_BIT_SET( g_U10959._fU0, 10 ))
        {
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    else
    {
        SET_BIT( ref g_U10959._fU0, 7 );
    }
    if (bParam1)
    {
        REQUEST_SCRIPT( ref g_U14838[iParam0]._fU80._fU24 );
        g_U14838[iParam0]._fU80._fU0 = 3;
    }
    else
    {
        REQUEST_SCRIPT( ref g_U14838[iParam0]._fU0._fU24 );
        switch (uParam2)
        {
            case 1:
            case 2:
            if (sub_196929( iParam0 ))
            {
                PRINT_BIG( ref g_U14838[iParam0]._fU0._fU8, 6000, 2 );
            }
            break;
        }
        if (bParam3)
        {
            g_U14838[iParam0]._fU0._fU0 = 2;
        }
        else
        {
            g_U14838[iParam0]._fU0._fU0 = 3;
        }
    }
    sub_43577( iParam0 );
    return 1;
}

int sub_196929(unknown uParam0)
{
    if (COMPARE_STRING( ref g_U14838[uParam0]._fU0._fU8, "E1CREDITS" ))
    {
        return 0;
    }
    return 1;
}

void sub_197490(unknown uParam0)
{
    int iVar3;
    int J;
    int iVar5;
    int I;

    if (g_U12306[uParam0]._fU116 == 0)
    {
        return;
    }
    iVar3 = 0;
    J = 0;
    for ( J = 0; J < 9; J++ )
    {
        if (IS_BIT_SET( g_U12306[uParam0]._fU116, J ))
        {
            iVar5 = J;
            iVar3 = sub_72776( iVar5 );
            I = 0;
            for ( I = 0; I < 5; I++ )
            {
                if (sub_72998( iVar3, I ))
                {
                    if (g_U12306[iVar3]._fU144[I]._fU84)
                    {
                        sub_197647( iVar5, I );
                    }
                }
                g_U12306[iVar3]._fU144[I]._fU36 = 1;
            }
            if (g_U12306[uParam0]._fU116 == J)
            {
                return;
            }
        }
    }
    return;
}

void sub_197647(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 + 0;
    switch (uParam0)
    {
        case 6:
        if (iVar4 == 3)
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_gun_car" )) > 0)
            {
                g_U11219 = 1;
            }
        }
        break;
        case 7:
        if (iVar4 == 4)
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
            {
                g_U11226 = 1;
            }
        }
        break;
    }
    return;
}

void sub_197942(unknown uParam0, int iParam1, boolean bParam2)
{
    boolean bVar5;

    if (bParam2)
    {
        return;
    }
    l_U11 = uParam0;
    if (NOT (l_U10 == 0))
    {
        sub_197977();
        return;
    }
    CLEAR_HELP();
    if (iParam1 == 18)
    {
        sub_198435();
        return;
    }
    bVar5 = sub_198645( uParam0, iParam1 );
    if (bVar5)
    {
        return;
    }
    l_U10 = 2;
    return;
}

void sub_197977()
{
    int iVar2;
    int iVar3;
    float fVar4;
    int iVar5;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    fVar4 = 0.00000000;
    iVar5 = 0;
    switch (l_U10)
    {
        case 1:
        l_U13 = 0;
        if (IS_SCREEN_FADED_OUT())
        {
            l_U13 = 1;
        }
        if (NOT l_U13)
        {
            if (iVar2 > l_U12)
            {
                if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT()))
                {
                    DO_SCREEN_FADE_OUT( 200 );
                    l_U12 = iVar2 + 500;
                }
            }
        }
        if (l_U13)
        {
            if (IS_PLAYER_PLAYING( sub_7787() ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_15549() ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_15549() );
                }
                else
                {
                    SET_PLAYER_CONTROL( sub_7787(), 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_15549() );
                }
            }
            SET_WIDESCREEN_BORDERS( 0 );
            l_U10 = 2;
            sub_47478();
            if (NOT (IS_CHAR_DEAD( sub_15549() )))
            {
                if (IS_CHAR_ON_FIRE( sub_15549() ))
                {
                    EXTINGUISH_CHAR_FIRE( sub_15549() );
                }
                SET_CHAR_PROOFS( sub_15549(), 0, 0, 0, 0, 0 );
            }
            sub_198274();
        }
        break;
        default:
    }
    return;
}

void sub_198274()
{
    g_U38680._fU0 = 22;
    g_U38680._fU8 = 11;
    g_U38680._fU12 = 0;
    if (g_U38680._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U38680._fU4 )))
    {
        g_U38680._fU4 = nil;
        return;
    }
    DELETE_CHAR( ref g_U38680._fU4 );
    g_U38680._fU4 = nil;
    return;
}

void sub_198435()
{
    int iVar2;

    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        l_U10 = 2;
        return;
    }
    if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
    {
        DO_SCREEN_FADE_OUT( 500 );
    }
    sub_198501();
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U12 = (iVar2 + 500) + 500;
    l_U10 = 1;
    sub_7175();
    if (NOT (IS_CHAR_DEAD( sub_15549() )))
    {
        SET_CHAR_PROOFS( sub_15549(), 1, 1, 1, 1, 1 );
    }
    return;
}

void sub_198501()
{
    if (NOT (sub_196929( l_U11 )))
    {
        return;
    }
    PRINT_BIG( ref g_U14838[l_U11]._fU0._fU8, 30000, 2 );
    return;
}

int sub_198645(unknown uParam0, unknown uParam1)
{
    g_U10497 = 0;
    switch (uParam0)
    {
        case 0: return sub_198719( uParam1 );
        case 1: return sub_199084( uParam1 );
        case 2: return sub_199172( uParam1 );
        case 3: return sub_199236( uParam1 );
        case 4: return sub_199292( uParam1 );
        case 5: return sub_199348( uParam1 );
    }
    sub_199402();
    return 1;
    return 0;
}

int sub_198719(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 2:
        sub_198755( uParam0 );
        return 1;
    }
    sub_199036();
    return 0;
}

void sub_198755(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_7787() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_15549() ))
        {
            SET_PLAYER_CONTROL( sub_7787(), 0 );
        }
    }
    switch (uParam0)
    {
        case 1:
        sub_198435();
        break;
        case 2:
        sub_198435();
        break;
        case 3:
        sub_198435();
        break;
        case 4:
        sub_198435();
        break;
        case 5:
        sub_198435();
        break;
        case 6:
        sub_198435();
        break;
        case 7:
        sub_198435();
        break;
        case 8:
        sub_198435();
        break;
        case 9:
        sub_198435();
        break;
        case 10:
        sub_198435();
        break;
        case 11:
        sub_198435();
        break;
        case 12:
        sub_198435();
        break;
        default: sub_199036();
    }
    return;
}

void sub_199036()
{
    return;
}

int sub_199084(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        sub_198755( uParam0 );
        return 1;
    }
    sub_199036();
    return 0;
}

int sub_199172(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        case 9:
        sub_198755( uParam0 );
        return 1;
    }
    sub_199036();
    return 0;
}

int sub_199236(unknown uParam0)
{
    switch (uParam0)
    {
        case 10:
        sub_198755( uParam0 );
        return 1;
    }
    sub_199036();
    return 0;
}

int sub_199292(unknown uParam0)
{
    switch (uParam0)
    {
        case 11:
        sub_198755( uParam0 );
        return 1;
    }
    sub_199036();
    return 0;
}

int sub_199348(unknown uParam0)
{
    switch (uParam0)
    {
        case 12:
        sub_198755( uParam0 );
        return 1;
    }
    sub_199036();
    return 0;
}

void sub_199402()
{
    int iVar2;

    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        l_U10 = 2;
        g_U10497 = 0;
        return;
    }
    SET_PLAYER_CONTROL( sub_7787(), 0 );
    CLEAR_CHAR_TASKS( sub_15549() );
    DO_SCREEN_FADE_OUT( 500 );
    sub_198501();
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U12 = (iVar2 + 500) + 500;
    l_U10 = 1;
    sub_7175();
    return;
}

void sub_199607(int iParam0, boolean bParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;
    boolean bVar7;
    unknown uVar8;

    iVar4 = 10;
    if (bParam1)
    {
        iVar4 = g_U14838[iParam0]._fU80._fU56;
    }
    else
    {
        iVar4 = g_U14838[iParam0]._fU0._fU56;
    }
    bVar5 = false;
    if (((((NOT (iVar4 == 3)) AND (NOT (iVar4 == 4))) AND (NOT (iVar4 == 6))) AND (NOT (iVar4 == 5))) AND (NOT (iParam0 == 9)))
    {
        bVar5 = true;
    }
    iVar6 = 8192;
    bVar7 = true;
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[iParam0]._fU80._fU24 )))
        {
            REQUEST_SCRIPT( ref g_U14838[iParam0]._fU80._fU24 );
            return;
        }
        iVar6 = 1820;
        if (iVar4 == 8)
        {
            g_U14838[iParam0]._fU80._fU60 = START_NEW_SCRIPT_WITH_ARGS( ref g_U14838[iParam0]._fU80._fU24, ref iParam0, 1, iVar6 );
        }
        else
        {
            g_U14838[iParam0]._fU80._fU60 = START_NEW_SCRIPT( ref g_U14838[iParam0]._fU80._fU24, iVar6 );
        }
        g_U14838[iParam0]._fU80._fU0 = 4;
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[iParam0]._fU80._fU24 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[iParam0]._fU0._fU24 )))
    {
        REQUEST_SCRIPT( ref g_U14838[iParam0]._fU0._fU24 );
        return;
    }
    if (((iVar4 == 6) || (iVar4 == 7)) || (iVar4 == 5))
    {
        iVar6 = 1024;
        bVar7 = false;
    }
    if (iParam0 == 9)
    {
        iVar6 = 1024;
        bVar7 = false;
    }
    if (sub_200049( iParam0, g_U14838[iParam0]._fU0._fU4, ref iVar6 ))
    {
        bVar7 = false;
    }
    if (sub_67470( iParam0, g_U14838[iParam0]._fU0._fU4 ))
    {
        iVar6 = 512;
        bVar7 = false;
    }
    if (sub_67520( iParam0, g_U14838[iParam0]._fU0._fU4 ))
    {
        iVar6 = 128;
        bVar7 = false;
    }
    if (sub_200186( iParam0, g_U14838[iParam0]._fU0._fU4 ))
    {
        iVar6 = 1828;
        bVar7 = false;
    }
    if (bVar7)
    {
        if (bVar5)
        {
            if (g_U12303)
            {
                g_U14838[iParam0]._fU0._fU0 = 6;
                PRINTNL();
                PRINTSTRING( "++++++++++++++++++++++++++++++++++++++\n" );
                PRINTSTRING( "Tried to launch another mission while on-mission. Brute Force Cancellation. (strand: " );
                PRINTINT( iParam0 );
                PRINTSTRING( ")\n" );
                PRINTSTRING( "++++++++++++++++++++++++++++++++++++++\n" );
                PRINTNL();
                return;
            }
        }
    }
    if (iVar4 == 8)
    {
        g_U14838[iParam0]._fU0._fU60 = START_NEW_SCRIPT_WITH_ARGS( ref g_U14838[iParam0]._fU0._fU24, ref iParam0, 1, iVar6 );
        PRINT_BIG( "pholder", 5000, 2 );
    }
    else
    {
        g_U14838[iParam0]._fU0._fU60 = START_NEW_SCRIPT( ref g_U14838[iParam0]._fU0._fU24, iVar6 );
        if (sub_112518( iParam0 ))
        {
            if ((NOT (iVar4 == 5)) AND (NOT (iVar4 == 6)))
            {
                g_U10982 = {g_U14838[iParam0]._fU0._fU8};
                uVar8 = sub_44161( iParam0, g_U14838[iParam0]._fU0._fU4 );
                g_U10992 = uVar8;
                g_U10993 = sub_200724();
                sub_200808( uVar8 );
                g_U10991 = g_U20913[uVar8]._fU100;
                sub_39251( uVar8 );
                sub_200937( iParam0 );
                if (IS_PLAYER_PLAYING( sub_7787() ))
                {
                    STOP_PED_SPEAKING( sub_15549(), 1 );
                }
                if (iVar4 == 0)
                {
                    CLEAR_ADDITIONAL_TEXT( 0, 1 );
                    CLEAR_ADDITIONAL_TEXT( 6, 1 );
                }
            }
            g_U12306[iParam0]._fU12 = 0;
        }
    }
    g_U14838[iParam0]._fU0._fU0 = 4;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[iParam0]._fU0._fU24 );;
    if (bVar5)
    {
        g_U12303 = 1;
        CANCEL_OVERRIDE_RESTART();
        sub_47391( 1 );
        CLEAR_BRIEF();
        sub_201302();
    }
    if (((NOT (iVar4 == 3)) AND (NOT (iVar4 == 4))) AND (NOT (iParam0 == 9)))
    {
        sub_201369( iParam0 );
    }
    return;
}

int sub_200049(int iParam0, int iParam1, unknown uParam2)
{
    if ((iParam0 == 10) AND (iParam1 == 14))
    {
        (uParam2^) = 8192;
        return 1;
    }
    return 0;
}

int sub_200186(int iParam0, int iParam1)
{
    if ((iParam0 == 10) AND (iParam1 == 0))
    {
        return 1;
    }
    if ((iParam0 == 10) AND (iParam1 == 1))
    {
        return 1;
    }
    return 0;
}

int sub_200724()
{
    if (g_U10992 == -1)
    {
        return 0;
    }
    if ((g_U20913[g_U10992]._fU0 == 0) AND (g_U20913[g_U10992]._fU4 == 0))
    {
        return 1;
    }
    return 0;
}

void sub_200808(int iParam0)
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
    if (g_U10993)
    {
        return;
    }
    iVar3 = g_U20913[iParam0]._fU100;
    iVar3++;
    g_U20913[iParam0]._fU100 = iVar3;
    INCREMENT_INT_STAT_NO_MESSAGE( 255, 1 );
    return;
}

void sub_200937(unknown uParam0)
{
    if (COMPARE_STRING( ref g_U14838[uParam0]._fU0._fU24, "Pause" ))
    {
        return;
    }
    sub_200999( g_U14838[uParam0]._fU0._fU8 );
    return;
}

void sub_200999(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10987, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U10987 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10987 );
    return;
}

void sub_201302()
{
    g_U39147 = 0;
    if (sub_118931())
    {
        g_U39147 = 1;
    }
    return;
}

void sub_201369(unknown uParam0)
{
    g_U20901 = uParam0;
    if (g_U0)
    {
        g_U20900 = 1;
        return;
    }
    if (g_U12306[uParam0]._fU140 == 1)
    {
        g_U20900 = 0;
        return;
    }
    g_U20900 = 1;
    return;
}

void sub_201464(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (IS_THREAD_ACTIVE( g_U14838[uParam0]._fU80._fU60 ))
        {
            return;
        }
        g_U14838[uParam0]._fU80._fU0 = 5;
    }
    else if (IS_THREAD_ACTIVE( g_U14838[uParam0]._fU0._fU60 ))
    {
        return;
    }
    g_U14838[uParam0]._fU0._fU0 = 5;;
    return;
}

void sub_201717()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT g_U15728[1])
    {
        if (iVar2 > g_U10680)
        {
            g_U15728[1] = 1;
            sub_90127();
        }
    }
    if (g_U11002)
    {
        if (IS_PLAYER_PLAYING( sub_7787() ))
        {
            if (iVar2 > g_U11003)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_7787(), 0 )))
                {
                    g_U11002 = 0;
                }
            }
            return;
        }
        g_U11002 = 0;
    }
    if (NOT g_U11004)
    {
        return;
    }
    iVar3 = 0;
    if ((GET_TIME_SINCE_LAST_ARREST() < 3000) AND (NOT (GET_TIME_SINCE_LAST_ARREST() == -1)))
    {
        iVar3 = 1;
    }
    iVar4 = 0;
    if ((GET_TIME_SINCE_LAST_DEATH() < 3000) AND (NOT (GET_TIME_SINCE_LAST_DEATH() == -1)))
    {
        iVar4 = 1;
    }
    if ((iVar3) || (iVar4))
    {
        sub_90127();
    }
    iVar5 = 0;
    GET_MAX_WANTED_LEVEL( ref iVar5 );
    if (NOT (iVar5 == ProtectedGet(g_U11001)))
    {
        SET_MAX_WANTED_LEVEL( ProtectedGet(g_U11001) );
    }
    if (IS_PLAYER_PLAYING( sub_7787() ))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_7787(), ProtectedGet(g_U11001) ))
        {
            ALTER_WANTED_LEVEL( sub_7787(), ProtectedGet(g_U11001) );
        }
    }
    return;
}

void sub_202048()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_15549(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
    iVar6 = 0;
    if (l_U440 > l_U451)
    {
        l_U451 = l_U440 + 1000;
        iVar6 = GET_INT_STAT( 363 );
        if (((iVar5 > iVar6) AND (NOT (iVar5 >= 4))) AND (g_U11000))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_7787(), 5 )))
            {
                SET_MAX_WANTED_LEVEL( 6 );
                ALTER_WANTED_LEVEL( sub_7787(), 6 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( sub_7787() );
                g_U11002 = 1;
                iVar7 = 0;
                GET_GAME_TIMER( ref iVar7 );
                g_U11003 = iVar7 + 30000;
            }
        }
    }
    if (iVar5 == g_U10999)
    {
        return;
    }
    g_U10999 = iVar5;
    sub_38517();
    if (NOT g_U12303)
    {
        if ((NOT (g_U10999 == 5)) AND (NOT (g_U10999 == 4)))
        {
            sub_39277();
        }
    }
    return;
}

void sub_202332()
{
    int iVar2;

    if (NOT (IS_BIT_SET( g_U10681._fU0, 1 )))
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (IS_CHAR_DEAD( sub_15549() ))
    {
        sub_6907();
        return;
    }
    if (IS_CHAR_SHOOTING( sub_15549() ))
    {
        if (NOT (IS_BIT_SET( g_U10681._fU0, 2 )))
        {
            if ((g_U10681._fU4 == 0) || (g_U10681._fU4 > iVar2))
            {
                SET_BIT( ref g_U10681._fU0, 3 );
            }
            else
            {
                sub_6907();
                return;
            }
        }
    }
    if (g_U10681._fU4 == 0)
    {
        if (g_U12303)
        {
            return;
        }
        if (IS_BIT_SET( g_U10681._fU0, 2 ))
        {
            g_U10681._fU4 = iVar2;
            g_U10681._fU8 = iVar2 + 12000;
            SET_BIT( ref g_U10681._fU0, 3 );
        }
        else
        {
            g_U10681._fU4 = iVar2 + 2000;
            g_U10681._fU8 = iVar2 + 5000;
        }
        START_FIRING_AMNESTY();
        return;
    }
    if (iVar2 > g_U10681._fU8)
    {
        sub_6907();
        return;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_7787(), 0 ))
    {
        if (IS_WANTED_LEVEL_GREATER( sub_7787(), 1 ))
        {
            sub_6907();
            return;
        }
        if (IS_BIT_SET( g_U10681._fU0, 3 ))
        {
            CLEAR_WANTED_LEVEL( sub_7787() );
            return;
        }
    }
    return;
}

void sub_202725()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 22;
    for ( I = 0; I < iVar3; I++ )
    {
        if (g_U20762[I]._fU0)
        {
            if (IS_CHAR_DEAD( g_U20762[I]._fU4 ))
            {
                g_U20762[I]._fU0 = 0;
                g_U20762[I]._fU4 = nil;
                PRINTINT( I );
                PRINTSTRING( ":  No longer classed as existing\n" );
            }
        }
    }
    return;
}

void sub_202888()
{
    int iVar2;
    int iVar3;
    int I;
    int iVar5;
    int iVar6;

    sub_202897();
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 2147483647;
    I = 0;
    for ( I = 0; I < 19; I++ )
    {
        if (g_U38472._fU12[I]._fU0)
        {
            iVar6 = g_U38472._fU12[I]._fU12;
            if ((NOT g_U15862[iVar6]._fU196._fU0) AND (NOT (iVar6 == 11)))
            {
                sub_81187( I );
            }
            else
            {
                iVar5 = g_U38472._fU12[I]._fU20 - iVar2;
                if (iVar5 < iVar3)
                {
                    iVar3 = iVar5;
                }
            }
        }
    }
    if (iVar3 > 0)
    {
        return;
    }
    for ( I = 0; I < 19; I++ )
    {
        if (g_U38472._fU12[I]._fU0)
        {
            iVar5 = g_U38472._fU12[I]._fU20 - iVar2;
            if (iVar5 == iVar3)
            {
                if (sub_203427( g_U38472._fU12[I]._fU24 ))
                {
                    if ((sub_70446( g_U38472._fU12[I]._fU12, 30000 )) AND (NOT (sub_70510( g_U38472._fU12[I]._fU12 ))))
                    {
                        if ((NOT (sub_203693( I ))) AND (NOT (sub_203763( I ))))
                        {
                            sub_78768( g_U38472._fU12[I]._fU12, g_U38472._fU12[I]._fU16 );
                            g_U38472._fU12[I]._fU4 = 1;
                            g_U38472._fU12[I]._fU0 = 0;
                            sub_48275();
                            sub_71020( g_U38472._fU12[I]._fU12, 0 );
                            sub_84956( g_U38472._fU12[I]._fU28, g_U38472._fU12[I]._fU12, g_U38472._fU12[I]._fU32 );
                        }
                    }
                }
            }
            if ((iVar5 <= 0) AND (NOT g_U38472._fU12[I]._fU4))
            {
                g_U38472._fU12[I]._fU20 = (iVar2 + 15000) + iVar5;
            }
        }
    }
    return;
}

void sub_202897()
{
    if (g_U12303)
    {
        sub_202916();
    }
    if (IS_THREAD_ACTIVE( g_U815 ))
    {
        sub_203010();
    }
    if (sub_70098())
    {
        sub_48275();
    }
    if (sub_103263())
    {
        sub_203099();
    }
    return;
}

void sub_202916()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_70234();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

void sub_203010()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + 5000;
    if (iVar3 > g_U38472._fU0)
    {
        g_U38472._fU0 = iVar3;
    }
    return;
}

void sub_203099()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + 10000;
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_203427(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return 0;
    }
    if (g_U12303)
    {
        return 0;
    }
    if ((IS_BIT_SET( g_U10959._fU0, 2 )) AND (NOT (IS_BIT_SET( g_U10959._fU0, 3 ))))
    {
        return 0;
    }
    if (g_U94._fU104)
    {
        return 0;
    }
    if (sub_103263())
    {
        return 0;
    }
    if (sub_69880())
    {
        return 0;
    }
    if (sub_203559())
    {
        return 0;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_70078( uParam0 ))
    {
        return 0;
    }
    return 1;
}

int sub_203559()
{
    if (g_U9548)
    {
        return 1;
    }
    return 0;
}

void sub_203693(unknown uParam0)
{
    unknown uVar3;

    if (g_U38472._fU12[uParam0]._fU8)
    {
        return 0;
    }
    uVar3 = g_U38472._fU12[uParam0]._fU12;
    return g_U20830[uVar3];
}

void sub_203763(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown Result;

    if (sub_203774( uParam0 ))
    {
        return 0;
    }
    iVar3 = g_U38472._fU12[uParam0]._fU12;
    bVar4 = iVar3 < 9;
    if (bVar4)
    {
        if (g_U18635[iVar3]._fU704._fU4)
        {
            return 1;
        }
        if (sub_140703( iVar3 ))
        {
            return 1;
        }
        if (g_U18635[iVar3]._fU16)
        {
            return 1;
        }
        if (g_U27681)
        {
            return 1;
        }
    }
    bVar5 = false;
    Result = sub_203919( uParam0, ref bVar5 );
    if (bVar5)
    {
        sub_81187( uParam0 );
    }
    return Result;
}

int sub_203774(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    return 0;
}

int sub_203919(unknown uParam0, unknown uParam1)
{
    int iVar4;

    (uParam1^) = 0;
    iVar4 = uParam0;
    if (iVar4 == 11)
    {
        if (NOT g_U14838[2]._fU160._fU108._fU0)
        {
            (uParam1^) = 1;
            return 1;
        }
    }
    if (iVar4 == 12)
    {
        if (NOT g_U14838[8]._fU160._fU108._fU0)
        {
            (uParam1^) = 1;
            return 1;
        }
    }
    return 0;
}

void sub_204278()
{
    int iVar2;
    boolean bVar3;
    int iVar4;

    iVar2 = 65;
    bVar3 = true;
    while (bVar3)
    {
        if (l_U321 >= iVar2)
        {
            l_U321 = 0;
        }
        switch (g_U11583[l_U321]._fU12)
        {
            case 0:
            case 1:
            case 2:
            case 5:
            case 6:
            case 7:
            case 11:
            case 15:
            case 17:
            case 18:
            case 19:
            case 20:
            bVar3 = false;
            break;
            case 8:
            if (NOT (sub_204459( l_U321 )))
            {
                bVar3 = false;
            }
            break;
        }
        if (NOT bVar3)
        {
            if (g_U12169[l_U321]._fU0)
            {
                if (DOES_BLIP_EXIST( g_U12169[l_U321]._fU4 ))
                {
                    if ((DOES_BLIP_EXIST( g_U11583[l_U321]._fU32 )) || (sub_204597( l_U321 )))
                    {
                        REMOVE_BLIP( g_U12169[l_U321]._fU4 );
                        g_U12169[l_U321]._fU4 = nil;
                    }
                }
                else if (((NOT (DOES_BLIP_EXIST( g_U11583[l_U321]._fU32 ))) AND (NOT (sub_204597( l_U321 )))) AND (NOT (sub_204799( l_U321 ))))
                {
                    if (NOT g_U12303)
                    {
                        sub_37648( ref g_U12169[l_U321]._fU4, g_U11583[l_U321]._fU0, g_U11583[l_U321]._fU24, g_U11583[l_U321]._fU20 );
                        SET_BLIP_AS_SHORT_RANGE( g_U12169[l_U321]._fU4, 1 );
                        sub_38288( l_U321 );
                    }
                }
            }
            else if (NOT (IS_CHAR_DEAD( sub_15549() )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_15549(), g_U11583[l_U321]._fU0._fU0, g_U11583[l_U321]._fU0._fU4, g_U11583[l_U321]._fU0._fU8, 15.00000000, 15.00000000, 7.00000000, 0 ))
                {
                    GET_INTERIOR_FROM_CHAR( sub_15549(), ref iVar4 );
                    if ((NOT (iVar4 == nil)) || (sub_205183( l_U321 )))
                    {
                        if (sub_205605( l_U321 ))
                        {
                            g_U12169[l_U321]._fU0 = 1;
                        }
                    }
                }
            }
        }
        l_U321++;
    }
    return;
}

int sub_204459(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 4: return 1;
    }
    return 0;
}

int sub_204597(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 4:
        if (DOES_BLIP_EXIST( g_U11583[11]._fU32 ))
        {
            return 1;
        }
        break;
        case 11:
        if (DOES_BLIP_EXIST( g_U11583[4]._fU32 ))
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_204799(int iParam0)
{
    boolean bVar3;
    int iVar4;
    unknown uVar5;

    bVar3 = false;
    iVar4 = 0;
    switch (g_U11583[iParam0]._fU12)
    {
        case 11:
        bVar3 = true;
        break;
        case 8: return 1;
    }
    return 0;
    if (bVar3)
    {
        uVar5 = g_U11583[iParam0]._fU16;
        switch (uVar5)
        {
            case 20:
            case 15: return 0;
        }
        if ((iParam0 == 2) || (iParam0 == 30))
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

int sub_205183(unknown uParam0)
{
    unknown uVar3;
    boolean bVar4;
    int iVar5;
    boolean bVar6;
    boolean bVar7;
    boolean bVar8;
    int iVar9;
    float fVar10;

    uVar3 = uParam0;
    bVar4 = false;
    iVar5 = 0;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    iVar9 = g_U11583[uParam0]._fU12;
    if ((iVar9 == 19) || (iVar9 == 5))
    {
        bVar4 = true;
        bVar6 = true;
        bVar8 = false;
    }
    if (iVar9 == 2)
    {
        bVar4 = true;
        bVar7 = true;
        bVar8 = false;
    }
    switch (uVar3)
    {
        case 44:
        case 3:
        case 54:
        case 55:
        bVar4 = true;
        iVar5 = 1;
        bVar8 = true;
        break;
    }
    if (NOT bVar4)
    {
        return 0;
    }
    if (((iVar5) || (bVar6)) || (bVar7))
    {
        fVar10 = 2.50000000;
        if (bVar6)
        {
            fVar10 = 5.00000000;
        }
        if (bVar7)
        {
            fVar10 = 15.00000000;
        }
        if (LOCATE_CHAR_ON_FOOT_3D( sub_15549(), g_U11583[uParam0]._fU0._fU0, g_U11583[uParam0]._fU0._fU4, g_U11583[uParam0]._fU0._fU8, fVar10, fVar10, 5.00000000, 0 ))
        {
            return 1;
        }
        if (bVar8)
        {
            return 0;
        }
        fVar10 = 4.00000000;
        if (bVar6)
        {
            fVar10 = 10.00000000;
        }
        if (bVar7)
        {
            fVar10 = 20.00000000;
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_15549(), g_U11583[uParam0]._fU0._fU0, g_U11583[uParam0]._fU0._fU4, g_U11583[uParam0]._fU0._fU8, fVar10, fVar10, 5.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_205605(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = uParam0;
    iVar4 = g_U11583[uParam0]._fU12;
    if (iVar4 == 19)
    {
        if (IS_PAY_N_SPRAY_ACTIVE())
        {
            return 1;
        }
        return 0;
    }
    if (iVar4 == 22)
    {
        if (g_U38713)
        {
            return 1;
        }
        return 0;
    }
    return 1;
}

void sub_205743()
{
    int iVar2;

    if (g_U15847._fU16 == 0)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U15847._fU16)
    {
        return;
    }
    g_U15847._fU16 = 0;
    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U15847._fU0 )))
    {
        return;
    }
    CLEAR_HELP();
    return;
}

void sub_205843()
{
    boolean bVar2;
    int iVar3;
    int iVar4;
    unknown uVar5;

    bVar2 = false;
    iVar3 = GET_TIME_SINCE_LAST_DEATH();
    if (NOT (iVar3 == -1))
    {
        if (iVar3 < 7000)
        {
            bVar2 = true;
        }
    }
    iVar4 = GET_TIME_SINCE_LAST_ARREST();
    if (NOT bVar2)
    {
        if (NOT (iVar4 == -1))
        {
            if (iVar4 < 7000)
            {
                bVar2 = true;
            }
        }
    }
    if (bVar2)
    {
        sub_48275();
        sub_69138();
        uVar5 = sub_15549();
        sub_205963( ref uVar5, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    return;
}

void sub_205963(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if (((uParam0^) == sub_15549()) AND (g_U15728[19]))
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

void sub_206609()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;

    if (g_U38680._fU4 == nil)
    {
        return;
    }
    if (g_U12303)
    {
        if (g_U38680._fU12)
        {
            return;
        }
        sub_6954();
        return;
    }
    g_U38680._fU12 = 0;
    if (NOT (DOES_CHAR_EXIST( g_U38680._fU4 )))
    {
        sub_6954();
        return;
    }
    if (IS_CHAR_DEAD( sub_15549() ))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_15549(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    if (IS_CHAR_INJURED( g_U38680._fU4 ))
    {
        N_1363505769( g_U38680._fU4, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( g_U38680._fU4, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    }
    fVar8 = sub_39053( uVar2, uVar5 );
    if (fVar8 <= 75.00000000)
    {
        return;
    }
    DELETE_CHAR( ref g_U38680._fU4 );
    sub_6954();
    return;
}

void sub_206889()
{
    if (g_U12303 == g_U11370._fU848)
    {
        return;
    }
    g_U11370._fU848 = g_U12303;
    sub_37474();
    return;
}

void sub_206948()
{
    boolean bVar2;
    int I;

    bVar2 = false;
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        bVar2 = false;
        if ((g_U27892[I]._fU36) AND (g_U27892[I]._fU24))
        {
            bVar2 = true;
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( ref g_U27892[I]._fU60 )) > 0)
            {
                if (g_U27892[I]._fU76)
                {
                    bVar2 = false;
                }
            }
            else
            {
                sub_6135( I );
            }
        }
        if (bVar2)
        {
            if (NOT (DOES_BLIP_EXIST( g_U27892[I]._fU56 )))
            {
                sub_207105( I );
            }
        }
        else if (DOES_BLIP_EXIST( g_U27892[I]._fU56 ))
        {
            sub_6056( I );
        }
    }
    return;
}

void sub_207105(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = {g_U27892[uParam0]._fU40};
    ADD_BLIP_FOR_CONTACT( uVar3._fU0, uVar3._fU4, uVar3._fU8, ref g_U27892[uParam0]._fU56 );
    if (g_U27892[uParam0]._fU52)
    {
        CHANGE_BLIP_SPRITE( g_U27892[uParam0]._fU56, 63 );
    }
    else
    {
        CHANGE_BLIP_SPRITE( g_U27892[uParam0]._fU56, 64 );
    }
    CHANGE_BLIP_SCALE( g_U27892[uParam0]._fU56, 1.00000000 );
    CHANGE_BLIP_DISPLAY( g_U27892[uParam0]._fU56, 2 );
    CHANGE_BLIP_PRIORITY( g_U27892[uParam0]._fU56, 0 );
    return;
}

void sub_207392()
{
    int iVar2;
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar2 = GET_INT_STAT( 270 );
    if (NOT g_U10488)
    {
        if (iVar2 >= ProtectedGet(g_U10489))
        {
            g_U10488 = 1;
        }
    }
    iVar3 = GET_INT_STAT( 143 );
    if (NOT g_U38846)
    {
        if (iVar3 >= g_U38845)
        {
            sub_207495( 0 );
            g_U38846 = 1;
        }
    }
    return;
}

void sub_207495(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U38835[uParam0]._fU0)
    {
        iVar3 = ProtectedGet(g_U38835[uParam0]._fU8);
        if (iVar3 > 0)
        {
            sub_86251( 7, iVar3 );
            g_U38835[uParam0]._fU0 = 1;
            switch (uParam0)
            {
                case 2:
                g_U15728[32] = 1;
                break;
                case 0:
                g_U15728[30] = 1;
                break;
            }
            return;
        }
    }
    return;
}

void sub_207677()
{
    if (NOT (g_U10474 == nil))
    {
        if (NOT (IS_THREAD_ACTIVE( g_U10474 )))
        {
            sub_47391( 0 );
        }
    }
    return;
}

void sub_207732()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (g_U26666[I]._fU0 == 22))
        {
            if (sub_57767( g_U26666[I]._fU0, 1 ))
            {
                sub_58115( ref g_U26666[I]._fU20, ref g_U26666[I]._fU4, 0 );
                sub_61148( ref g_U26666[I]._fU20, ref g_U26666[I]._fU4 );
                sub_48275();
            }
        }
    }
    return;
}

void sub_207873()
{
    int I;

    I = 0;
    for ( I = 0; I < 6; I++ )
    {
        sub_207899( I );
    }
    return;
}

void sub_207899(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = 0;
    if (NOT g_U15792[uParam0]._fU0)
    {
        return;
    }
    if (g_U15792[uParam0]._fU12)
    {
        if (sub_70891())
        {
            return;
        }
        switch (sub_69197())
        {
            case 1:
            case 2:
            g_U15792[uParam0]._fU12 = 0;
            sub_208013( uParam0 );
            g_U15792[uParam0]._fU4 = g_U15792[uParam0]._fU8 + iVar3;
            return;
        }
        g_U15792[uParam0]._fU12 = 0;
        g_U15792[uParam0]._fU0 = 0;
        g_U15792[uParam0]._fU16 = 1;
        sub_208013( uParam0 );
        sub_48275();
        sub_71020( g_U15823._fU0, 0 );
        return;
    }
    if (g_U12303)
    {
        iVar4 = g_U15792[uParam0]._fU4 - iVar3;
        if (iVar4 < 20000)
        {
            g_U15792[uParam0]._fU4 = 30000 + iVar3;
        }
        return;
    }
    if (g_U15792[uParam0]._fU4 > iVar3)
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        g_U15792[uParam0]._fU4 = 30000 + iVar3;
        return;
    }
    if ((((((IS_THREAD_ACTIVE( g_U815 )) || (IS_WANTED_LEVEL_GREATER( sub_7787(), 0 ))) || (sub_69829())) || (sub_69880())) || (sub_70078( 0 ))) || (sub_71842()))
    {
        g_U15792[uParam0]._fU4 = 30000 + iVar3;
        return;
    }
    if (sub_208428( uParam0 ))
    {
        g_U15792[uParam0]._fU4 = 30000 + iVar3;
        return;
    }
    if (sub_208536( uParam0, ref g_U15823._fU0 ))
    {
        g_U15792[uParam0]._fU12 = 1;
        sub_48275();
        return;
    }
    g_U15792[uParam0]._fU4 = 30000 + iVar3;
    return;
}

void sub_208013(int iParam0)
{
    int iVar3;
    int iVar4;
    int I;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = 0;
    I = 0;
    for ( I = 0; I < 6; I++ )
    {
        if (g_U15792[I]._fU0)
        {
            if (NOT (I == iParam0))
            {
                iVar4 = g_U15792[I]._fU4 - iVar3;
                if (iVar4 < 7000)
                {
                    g_U15792[I]._fU4 = iVar3 + 30000;
                }
            }
        }
    }
    return;
}

int sub_208428(int iParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 6; I++ )
    {
        if (NOT (I == iParam0))
        {
            if (g_U15792[I]._fU12)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_208536(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int Result;

    uVar4 = uParam0;
    Result = 0;
    switch (uVar4)
    {
        case 0:
        (uParam1^) = 1;
        if (((((NOT g_U20807[(uParam1^)]) AND (NOT (sub_105212( 1 )))) AND (NOT (sub_208635( (uParam1^) )))) AND (NOT (sub_208705( uParam0, (uParam1^) )))) AND (sub_70446( (uParam1^), 30000 )))
        {
            Result = sub_74267( (uParam1^), "E1MF_NET1", "E1MFAU", 10000, 0 );
        }
        break;
        case 1:
        (uParam1^) = 4;
        if (((((NOT g_U20807[(uParam1^)]) AND (NOT (sub_105212( 4 )))) AND (NOT (sub_208635( (uParam1^) )))) AND (NOT (sub_208705( uParam0, (uParam1^) )))) AND (sub_70446( (uParam1^), 30000 )))
        {
            Result = sub_74267( (uParam1^), "E1MF_LIZ1", "E1MF3AU", 10000, 0 );
        }
        break;
        case 2:
        (uParam1^) = 2;
        if (((((NOT g_U20807[(uParam1^)]) AND (NOT (sub_105212( 2 )))) AND (NOT (sub_208635( (uParam1^) )))) AND (NOT (sub_208705( uParam0, (uParam1^) )))) AND (sub_70446( (uParam1^), 30000 )))
        {
            Result = sub_74267( (uParam1^), "E1MF2_TS1", "E1MF2AU", 10000, 0 );
        }
        break;
        case 3:
        (uParam1^) = 8;
        if (((((NOT g_U20807[(uParam1^)]) AND (NOT (sub_105212( 8 )))) AND (NOT (sub_208635( (uParam1^) )))) AND (NOT (sub_208705( uParam0, (uParam1^) )))) AND (sub_70446( (uParam1^), 30000 )))
        {
            Result = sub_74267( (uParam1^), "E1MF2_BIKES", "E1MF2AU", 10000, 0 );
        }
        break;
        case 4:
        Result = sub_74267( 11, "E1MF3_CAL11", "E1MF3AU", 10000, 0 );
        break;
        case 5:
        Result = sub_74267( 11, "E1MF3_CAL13", "E1MF3AU", 10000, 0 );
        break;
        default: sub_24994( "Flow_Make_Ambient_Phonecall: Unknown ambient phone call ID" );
    }
    return Result;
}

int sub_208635(int iParam0)
{
    if (iParam0 < 9)
    {
        if (g_U18635[iParam0]._fU16)
        {
            return 1;
        }
    }
    if (g_U27681)
    {
        return 1;
    }
    return 0;
}

int sub_208705(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = false;
    if (NOT g_U15862[uParam1]._fU196._fU0)
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        g_U15792[uParam0]._fU0 = 0;
        g_U15792[uParam0]._fU16 = 1;
        return 1;
    }
    return 0;
}

void sub_209384()
{
    int I;

    if (NOT g_U27953._fU0)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U27892[I]._fU0)
        {
            if (g_U27892[I]._fU4)
            {
                if (NOT g_U27892[I]._fU24)
                {
                    if (sub_56964( g_U27892[I]._fU8 ))
                    {
                        g_U27892[I]._fU24 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_209526()
{
    int iVar2;
    int I;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    I = 0;
    for ( I = 0; I < 65; I++ )
    {
        if (DOES_BLIP_EXIST( g_U11583[I]._fU32 ))
        {
            if (NOT (g_U11370._fU584[I] == 0))
            {
                if (g_U11370._fU584[I] < iVar2)
                {
                    FLASH_BLIP( g_U11583[I]._fU32, 0 );
                    g_U11370._fU584[I] = 0;
                    CHANGE_BLIP_PRIORITY( g_U11583[I]._fU32, l_U6 );
                }
            }
        }
    }
    return;
}

void sub_209707()
{
    int J;
    int I;

    if (sub_103263())
    {
        l_U453 = l_U440 + 60000;
        return;
    }
    if (l_U453 == 0)
    {
        return;
    }
    if (l_U440 < l_U453)
    {
        return;
    }
    J = 0;
    for ( J = 0; J < 22; J++ )
    {
        g_U15862[J]._fU4 = 0;
        I = 0;
        for ( I = 0; I < 22; I++ )
        {
            g_U15862[J]._fU8[1]._fU0[I] = 0;
        }
    }
    l_U453 = 0;
    return;
}

void sub_209882()
{
    if (CAN_START_MISSION_PASSED_TUNE())
    {
        if (NOT (g_U24 == 0))
        {
            TRIGGER_MISSION_COMPLETE_AUDIO( g_U24 );
        }
        g_U24 = 0;
    }
    if (IS_AUTO_SAVE_IN_PROGRESS())
    {
        return;
    }
    if (g_U10974._fU4)
    {
        g_U10974._fU4 = 0;
        sub_84956( g_U10974._fU28, 22, 64537 );
        g_U10974._fU28 = 6;
        if (g_U10974._fU16)
        {
            g_U10974._fU16 = 0;
            if (IS_PLAYER_PLAYING( sub_7787() ))
            {
                SET_PLAYER_CONTROL( sub_7787(), 1 );
            }
        }
        return;
    }
    if (NOT g_U10974._fU0)
    {
        return;
    }
    if (g_U12303)
    {
        if (g_U10974._fU12)
        {
            sub_16291();
            return;
        }
        return;
    }
    g_U10974._fU12 = 1;
    if (GET_MISSION_FLAG())
    {
        return;
    }
    if (sub_103263())
    {
        return;
    }
    if (NOT IS_SCREEN_FADED_IN())
    {
        if (NOT g_U10974._fU20)
        {
            return;
        }
        else if (IS_SCREEN_FADING_OUT())
        {
            return;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
    {
        return;
    }
    if (g_U10974._fU8)
    {
        return;
    }
    if (IS_FRONTEND_FADING())
    {
        return;
    }
    g_U10974._fU0 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU20 = 0;
    DO_AUTO_SAVE();
    g_U10974._fU4 = 1;
    if (NOT IS_AUTO_SAVE_IN_PROGRESS())
    {
        PRINTSTRING( "===================AUTOSAVE SWITCHED OFF\n" );
        if (NOT g_U10974._fU24)
        {
            PRINTSTRING( "===================FIRST AUTOSAVE\n" );
            PRINT_HELP( "SAVEOFF" );
        }
    }
    g_U10974._fU24 = 1;
    return;
}

void sub_210418()
{
    int iVar2;
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    boolean bVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (IS_BIT_SET( g_U10959._fU0, 6 ))
    {
        if (IS_BIT_SET( g_U10959._fU0, 9 ))
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
            CLEAR_BIT( ref g_U10959._fU0, 9 );
        }
        g_U12306[g_U10959._fU4]._fU120 = 0;
        return;
    }
    if (NOT (IS_BIT_SET( g_U10959._fU0, 2 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( g_U10959._fU0, 4 )))
    {
        if (IS_BIT_SET( g_U10959._fU0, 3 ))
        {
            return;
        }
        bVar3 = false;
        if (g_U10959._fU12 == 0)
        {
            bVar3 = true;
        }
        if (NOT bVar3)
        {
            if (iVar2 > g_U10959._fU12)
            {
                bVar3 = true;
            }
        }
        bVar4 = false;
        if ((GET_TIME_SINCE_LAST_ARREST() < 10000) AND (NOT (GET_TIME_SINCE_LAST_ARREST() == -1)))
        {
            bVar4 = true;
        }
        bVar5 = false;
        if ((GET_TIME_SINCE_LAST_DEATH() < 10000) AND (NOT (GET_TIME_SINCE_LAST_DEATH() == -1)))
        {
            bVar5 = true;
        }
        bVar6 = false;
        if (NOT (IS_PLAYER_PLAYING( sub_7787() )))
        {
            if ((NOT bVar4) AND (NOT bVar5))
            {
                bVar6 = true;
            }
        }
        bVar7 = false;
        if (NOT IS_SCREEN_FADED_IN())
        {
            bVar7 = true;
        }
        if ((((((NOT g_U12303) AND (NOT bVar6)) AND (NOT bVar7)) AND (NOT sub_103263())) AND (NOT sub_203559())) AND (bVar3))
        {
            if (g_U10959._fU12 == 0)
            {
                g_U10959._fU12 = iVar2 + 500;
                return;
            }
            if (NOT (IS_BIT_SET( g_U10959._fU0, 1 )))
            {
                SET_BIT( ref g_U10959._fU0, 1 );
            }
            if (IS_BIT_SET( g_U10959._fU0, 1 ))
            {
                uVar8 = sub_210884();
                uVar9 = sub_78791( uVar8 );
                sub_210965( uVar9 );
                SET_BIT( ref g_U10959._fU0, 3 );
                sub_211359();
            }
        }
        return;
    }
    if (NOT sub_193732())
    {
        return;
    }
    if (NOT (IS_BIT_SET( g_U10959._fU0, 5 )))
    {
        if (NOT IS_SCREEN_FADED_IN())
        {
            return;
        }
        if (g_U12303)
        {
            sub_24994( "main.sc - Replay requested when 'on mission' - this shouldn't happen" );
            CLEAR_BIT( ref g_U10959._fU0, 4 );
            return;
        }
        SET_TEXT_DRAW_BEFORE_FADE( 0 );
        PRINT_BIG( ref g_U10959._fU16, 5000, 2 );
        SET_PLAYER_CONTROL( sub_7787(), 0 );
        DO_SCREEN_FADE_OUT( 500 );
        SET_BIT( ref g_U10959._fU0, 10 );
        SET_BIT( ref g_U10959._fU0, 5 );
    }
    if (IS_BIT_SET( g_U10959._fU0, 5 ))
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            return;
        }
    }
    CLEAR_WANTED_LEVEL( sub_7787() );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_15549() );
    sub_211716();
    uVar10 = sub_44161( g_U10959._fU4, g_U10959._fU8 );
    uVar11 = g_U20913[uVar10]._fU12;
    uVar12 = uVar11;
    iVar13 = 0;
    sub_211964();
    switch (uVar12)
    {
        case 0:
        if (NOT sub_212681())
        {
            return;
        }
        iVar13 = g_U20913[uVar10]._fU16;
        uVar14 = {g_U10686[iVar13]._fU4};
        g_U10959._fU48 = {uVar14};
        SET_BIT( ref g_U10959._fU0, 6 );
        break;
        case 1:
        if (NOT sub_214887())
        {
            return;
        }
        sub_215041();
        SET_BIT( ref g_U10959._fU0, 6 );
        break;
        default:
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL( sub_7787(), 1 );
        sub_24994( "main.sc - Replay requested on script that doesn't start at a start_point" );
        return;
    }
    if (IS_BIT_SET( g_U10959._fU0, 6 ))
    {
        sub_216021();
        CLEAR_ADDITIONAL_TEXT( 0, 1 );
        CLEAR_ADDITIONAL_TEXT( 6, 1 );
        CLEAR_HELP();
        CLEAR_PRINTS();
        SET_BIT( ref g_U10959._fU0, 9 );
        sub_198274();
    }
    return;
}

void sub_210884()
{
    int Result;

    Result = sub_210893();
    if (NOT (Result == 22))
    {
        return Result;
    }
    return sub_56580( g_U10959._fU4 );
}

int sub_210893()
{
    return 22;
}

void sub_210965(unknown uParam0)
{
    int I;
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
    unknown uVar14;
    unknown uVar15;

    array(ref uVar9._fU0._fU0, 3);
    ref uVar9._fU0;
    ref uVar9;
    sub_79038( uParam0, 0, 0, 0, ref uVar9 );
    iVar4 = sub_79665( uVar9._fU0 );
    if (iVar4 != -1)
    {
        SCRIPT_ASSERT( "REPLAY MESSAGE ALREADY EXISTS" );
        sub_48026( iVar4 );
    }
    if ((g_U572[g_U572 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_79538())
        {
            sub_48026( 0 );
        }
    }
    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (g_U572[I]._fU0[0] == -1)
        {
            g_U572[I] = {uVar9._fU0};
            I = g_U572;
            uVar5 = {g_U10982};
            ConcatString(ref uVar5, "a", 16);
            SET_PHONE_HUD_ITEM( 5, ref uVar5, -1 );
            g_U94._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U94._fU0 == 1000)
            {
                g_U94._fU404 = 1016;
            }
            else if (g_U94._fU0 == 1015)
            {
                g_U94._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U813 = 1;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return;
}

void sub_211359()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + 25000;
    if (iVar3 > g_U38472._fU0)
    {
        g_U38472._fU0 = iVar3;
    }
    return;
}

void sub_211716()
{
    sub_211725();
    sub_211816();
    return;
}

void sub_211725()
{
    sub_211736( 1, 0 );
    g_U11113 = 1;
    return;
}

void sub_211736(boolean bParam0, unknown uParam1)
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

void sub_211816()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_gun_car" )) > 0)
    {
        g_U11219 = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_vehicle" )) > 0)
    {
        g_U11226 = 1;
    }
    return;
}

void sub_211964()
{
    sub_211973();
    if (NOT (sub_99946( ref g_U10959._fU32 )))
    {
        sub_24994( "Replay_Set_Day_And_Time: Date and Time of replay hasn't been set" );
        return;
    }
    sub_212092( ref g_U10959._fU32 );
    return;
}

void sub_211973()
{
    return;
}

void sub_212092(int iParam0)
{
    if (NOT (sub_99946( iParam0 )))
    {
        return;
    }
    if (NOT (sub_56964( (iParam0^) )))
    {
        return;
    }
    while (NOT (sub_212139( iParam0 + 0 )))
    {
        SET_TIME_ONE_DAY_BACK();
    }
    if ((NOT (sub_212239( iParam0->_fU8 ))) AND (NOT (sub_212317( iParam0->_fU8 ))))
    {
        SET_TIME_ONE_DAY_BACK();
    }
    if (NOT (sub_212317( iParam0->_fU8 )))
    {
        FORWARD_TO_TIME_OF_DAY( ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4 );
    }
    if (NOT (sub_212412( iParam0 )))
    {
        sub_24994( "KM_Rewind_GameDateTime_To_DateTime: Game DateTime should now match required DateTime - it doesn't" );
    }
    return;
}

void sub_212139(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    sub_85585( ref uVar3 );
    return sub_212157( uParam0, ref uVar3 );
}

int sub_212157(int iParam0, int iParam1)
{
    if ((iParam0->_fU4 == iParam1->_fU4) AND (iParam0->_fU0 == iParam1->_fU0))
    {
        return 1;
    }
    return 0;
}

int sub_212239(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    GET_TIME_OF_DAY( ref uVar4._fU0, ref uVar4._fU4 );
    if (sub_100626( uParam0, uVar4 ))
    {
        return 0;
    }
    if (sub_100750( uParam0, uVar4 ))
    {
        return 0;
    }
    return 1;
}

void sub_212317(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    GET_TIME_OF_DAY( ref uVar4._fU0, ref uVar4._fU4 );
    return sub_100750( uVar4, uParam0 );
}

void sub_212412(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    sub_85572( ref uVar3 );
    return sub_212430( uParam0, ref uVar3 );
}

int sub_212430(int iParam0, int iParam1)
{
    if (((((ref iParam0->_fU0->_fU4) == (ref iParam1->_fU0->_fU4)) AND ((ref iParam0->_fU0->_fU0) == (ref iParam1->_fU0->_fU0))) AND ((ref iParam0->_fU8->_fU0) == (ref iParam1->_fU8->_fU0))) AND ((ref iParam0->_fU8->_fU4) == (ref iParam1->_fU8->_fU4)))
    {
        return 1;
    }
    return 0;
}

int sub_212681()
{
    if (g_U10959._fU8 == g_U14838[g_U10959._fU4]._fU0._fU4)
    {
        return 1;
    }
    sub_212727();
    return 0;
}

void sub_212727()
{
    switch (g_U10959._fU4)
    {
        case 0:
        sub_212826( ref g_U28063 );
        break;
        case 1:
        sub_212826( ref g_U30224 );
        break;
        case 2:
        sub_212826( ref g_U32385 );
        break;
        case 3:
        sub_212826( ref g_U33186 );
        break;
        case 4:
        sub_212826( ref g_U33747 );
        break;
        case 5:
        sub_212826( ref g_U34388 );
        break;
        case 6:
        sub_212826( ref g_U34949 );
        break;
        case 7:
        sub_212826( ref g_U36390 );
        break;
        case 8:
        SCRIPT_ASSERT( "Advance_Sequence_To_The_Replay_Mission_Gather_Sequence_Variables: CONTACT 9 shouldn't be offering replays" );
        sub_212826( ref g_U37831 );
        break;
        default: sub_24994( "Advance_Sequence_To_The_Replay_Mission_Gather_Sequence_Variables(): Illegal strand" );
    }
    return;
}

void sub_212826(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    int iVar5;
    unknown uVar6;

    bVar3 = true;
    bVar4 = false;
    iVar5 = g_U12306[g_U10959._fU4]._fU16;
    while (bVar3)
    {
        uVar6 = (uParam0^)[iVar5]._fU0;
        switch (uVar6)
        {
            case 10:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 9:
            if ((uParam0^)[iVar5]._fU4._fU0 == g_U10959._fU8)
            {
                bVar3 = false;
                bVar4 = true;
            }
            break;
            case 0:
            case 6:
            case 7:
            case 8:
            case 11:
            case 14:
            case 13:
            case 12:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            case 66:
            case 67:
            case 68:
            case 69:
            case 70:
            case 75:
            case 76:
            case 77:
            case 78:
            case 79:
            case 80:
            case 81:
            case 82:
            case 83:
            case 84:
            case 85:
            case 86:
            case 87:
            case 88:
            case 89:
            case 90:
            case 91:
            case 92:
            case 93:
            case 94:
            case 95:
            case 96:
            case 97:
            case 98:
            case 99:
            case 100:
            case 101:
            case 102:
            case 103:
            case 104:
            case 105:
            case 106:
            case 107:
            case 108:
            case 109:
            case 110:
            case 111:
            case 112:
            case 113:
            case 114:
            case 115:
            case 116:
            case 117:
            case 118:
            case 119:
            case 120:
            case 121:
            case 122:
            case 123:
            case 124:
            case 125:
            case 126:
            case 127:
            case 128:
            case 129:
            case 25:
            case 131:
            case 132:
            case 133:
            case 134:
            case 135:
            case 136:
            case 130:
            case 71:
            case 72:
            case 73:
            case 74:
            case 138:
            case 137:
            case 139:
            case 140:
            case 141:
            case 142:
            case 143:
            case 144:
            case 145:
            case 148:
            case 150: break;
            case 146:
            case 147:
            case 149:
            case 151:
            sub_24994( "replay.sch: Advance_Sequence_To_The_Replay_Mission() - hit an end of strand command" );
            bVar3 = false;
            break;
            default:
            sub_24994( "replay.sch: Advance_Sequence_To_The_Replay_Mission() - unrecognised command" );
            bVar3 = false;
        }
        if (bVar3)
        {
            iVar5++;
        }
    }
    if (bVar4)
    {
        g_U12306[g_U10959._fU4]._fU16 = iVar5;
        return;
    }
    sub_24994( "replay.sch: Advance_Sequence_To_The_Replay_Mission() - found an error" );
    return;
}

int sub_214887()
{
    if (g_U14838[g_U10959._fU4]._fU0._fU0 == 0)
    {
        sub_212727();
        return 1;
    }
    if (NOT (g_U14838[g_U10959._fU4]._fU0._fU0 == 1))
    {
        SET_BIT( ref g_U10959._fU0, 8 );
        sub_212727();
    }
    if (g_U14838[g_U10959._fU4]._fU0._fU0 == 1)
    {
        sub_50558( g_U10959._fU4 );
        sub_212727();
    }
    return 0;
}

void sub_215041()
{
    vector vVar2;
    float fVar5;
    boolean bVar6;

    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    fVar5 = 0.00000000;
    bVar6 = false;
    PRINTSTRING( "********************************** STRAND: " );
    PRINTINT( g_U10959._fU4 );
    PRINTNL();
    switch (g_U10959._fU4)
    {
        case 3:
        if (g_U10959._fU8 == 0)
        {
            vVar2 = {-76.28950000, 1530.15300000, 17.65360000};
            fVar5 = 134.32800000;
            bVar6 = true;
            CLEAR_BIT( ref g_U10959._fU0, 10 );
        }
        break;
        case 5:
        if (g_U10959._fU8 == 1)
        {
            vVar2 = {-392.07390000, 1155, 13.55380000};
            fVar5 = 268.58920000;
            bVar6 = true;
            CLEAR_BIT( ref g_U10959._fU0, 10 );
        }
        break;
        default: sub_24994( "Unknown Strand for Replay Warp" );
    }
    if (bVar6)
    {
        sub_215364( vVar2.x, vVar2.y, vVar2.z, fVar5 );
        CLEAR_AREA_OF_CHARS( vVar2.x, vVar2.y, vVar2.z, 100.00000000 );
        return;
    }
    sub_24994( "Unknown mission for strand for Replay Warp" );
    return;
}

void sub_215364(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_PLAYER_PLAYING( sub_7787() ))
    {
        if (NOT (sub_215396( uParam0, uParam1, uParam2 )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_15549() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_15549(), uParam0, uParam1, uParam2 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_15549(), uParam0, uParam1, uParam2 );
            }
        }
        SET_CHAR_HEADING( sub_15549(), uParam3 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    return;
}

int sub_215396(unknown uParam0, unknown uParam1, unknown uParam2)
{
    LOAD_SCENE( uParam0, uParam1, uParam2 );
    if (sub_215454( uParam0, uParam1, uParam2, g_U11005[0]._fU20, "E1_Lost_grndsave" ))
    {
        return 1;
    }
    return 0;
}

int sub_215454(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    unknown uVar9;
    unknown uVar10;

    if (NOT (sub_215469( uParam0, uParam3 )))
    {
        return 0;
    }
    uVar9 = GET_HASH_KEY( uParam6 );
    GET_INTERIOR_AT_COORDS( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref uVar10 );
    LOAD_SCENE_FOR_ROOM_BY_KEY( uVar10, uVar9 );
    if (IS_CHAR_IN_ANY_CAR( sub_15549() ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( sub_15549(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    else
    {
        SET_CHAR_COORDINATES( sub_15549(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    SET_ROOM_FOR_CHAR_BY_KEY( sub_15549(), uVar9 );
    return 1;
}

int sub_215469(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((uParam0._fU0 == uParam3._fU0) AND (uParam0._fU4 == uParam3._fU4)) AND (uParam0._fU8 == uParam3._fU8))
    {
        return 1;
    }
    return 0;
}

void sub_216021()
{
    if (g_U0)
    {
        return;
    }
    if (g_U10993)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 256, 1 );
    return;
}

int sub_216241()
{
    PRINTSTRING( "Just entered Start_A_Network_Game_From_Single_Player\n" );
    FAKE_DEATHARREST();
    WAIT( 0 );
    WAIT( 0 );
    if (g_U21)
    {
        if (NOT NETWORK_STORE_SINGLE_PLAYER_GAME())
        {
            return 0;
        }
    }
    SHUTDOWN_AND_LAUNCH_NETWORK_GAME( g_U16 );
    WAIT( 0 );
    return 1;
}

int sub_216401()
{
    PRINTSTRING( "Just entered Start_A_Replay_From_Single_Player\n" );
    FAKE_DEATHARREST();
    WAIT( 0 );
    WAIT( 0 );
    ACTIVATE_REPLAY_MENU();
    if (g_U21)
    {
        NETWORK_STORE_SINGLE_PLAYER_GAME();
    }
    return 0;
}

void sub_216542()
{
    unknown uVar2;

    uVar2 = nil;
    if (g_U39170)
    {
        if (g_U15728[29])
        {
            if (NOT (sub_216602( ref uVar2, -1723.75000000, 360.78310000, 24.44400000, 333.79300000 )))
            {
                return;
            }
        }
        else if (NOT (sub_218211( ref uVar2, -1723.75000000, 360.78310000, 24.44400000, 333.79300000 )))
        {
            return;
        }
        g_U39170 = 0;
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar2 );
        return;
    }
    if (g_U39171)
    {
        if (g_U15728[29])
        {
            if (NOT (sub_216602( ref uVar2, -1958.43700000, -87.38830000, 5.60530000, 94.66160000 )))
            {
                return;
            }
        }
        else if (NOT (sub_218211( ref uVar2, -1958.43700000, -87.38830000, 5.60530000, 94.66160000 )))
        {
            return;
        }
        g_U39171 = 0;
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar2 );
        return;
    }
    return;
}

void sub_216602(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_216611();
    return sub_216645( uParam0, uVar7, uParam1, uParam4, 9 );
}

int sub_216611()
{
    return 802082487;
}

int sub_216645(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    sub_216779( (uParam0^), uParam1, uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_216779(unknown uParam0, unknown uParam1, int iParam2)
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

int sub_218211(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    uVar7 = sub_218220();
    SUPPRESS_CAR_MODEL( uVar7 );
    REQUEST_MODEL( uVar7 );
    if (NOT (HAS_MODEL_LOADED( uVar7 )))
    {
        REQUEST_MODEL( uVar7 );
        return 0;
    }
    CLEAR_AREA( uParam1._fU0, uParam1._fU4, uParam1._fU8, 5.00000000, 0 );
    CREATE_CAR( uVar7, uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam4 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_216779( (uParam0^), uVar7, 9 );
    SET_HAS_BEEN_OWNED_BY_PLAYER( (uParam0^), 1 );
    SET_CAN_BURST_CAR_TYRES( (uParam0^), 0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar7 );
    }
    return 1;
}

int sub_218220()
{
    return 301427732;
}
