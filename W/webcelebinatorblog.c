void main()
{
    int I;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    LOAD_ADDITIONAL_TEXT( "CELEBIN", 3 );
    g_U864._fU324 = 0;
    for ( I = 0; I < 13; I++ )
    {
        sub_82( I );
    }
    sub_2382( ref l_U25._fU0, 1, 0 );
    while (NOT g_U864._fU16)
    {
        WAIT( 0 );
        switch (g_U858._fU12)
        {
            case 1:
            sub_2776( ref g_U838, "www.youvebeencelebinated.com/comment.html", -1, 1, -1 );
            g_U837 = 1;
            break;
            default:
        }
    }
    g_U864._fU16 = 0;
    return;
}

void sub_82(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
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
    unknown uVar15;

    sub_109( ref l_U16, "celebPost", iParam0, -1, -1 );
    l_U2[iParam0] = CREATE_HTML_SCRIPT_OBJECT( ref l_U16 );
    uVar3 = {sub_219( iParam0 )};
    if ((((((((iParam0 == 0) || (iParam0 == 1)) || (((iParam0 == 11) || (iParam0 == 12)) AND ((g_U972 == 2) || (g_U42941[0])))) || ((((iParam0 == 2) || (iParam0 == 3)) AND (g_U42941[1])) AND (g_U972 != 2))) || ((((iParam0 == 4) || (iParam0 == 5)) AND (g_U42941[2])) AND (g_U972 != 2))) || (((iParam0 == 6) AND (g_U42941[3])) AND (g_U972 != 2))) || ((((iParam0 == 7) || (iParam0 == 8)) AND (g_U42941[4])) AND (g_U972 != 2))) || ((((iParam0 == 9) || (iParam0 == 10)) AND (g_U42941[5])) AND (g_U972 != 2)))
    {
        sub_821( ref l_U2[iParam0], "celeb_divider.jpg", -1, 544, 20 );
        sub_821( ref l_U2[iParam0], sub_1068( iParam0 ), -1, 544, 256 );
        uVar7 = {uVar3};
        ConcatString(ref uVar7, "HEAD", 16);
        ADD_TO_HTML_SCRIPT_OBJECT( l_U2[iParam0], "<p><span class="headline">" );
        sub_1768( ref l_U2[iParam0], ref uVar7 );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U2[iParam0], "</span>" );
        iVar11 = 1;
        uVar12 = {uVar3};
        ConcatString(ref uVar12, "PAR", 16);
        ConcatString(ref uVar12, iVar11, 16);
        while (DOES_TEXT_LABEL_EXIST( ref uVar12 ))
        {
            ADD_TO_HTML_SCRIPT_OBJECT( l_U2[iParam0], "<br/><br/>" );
            sub_1768( ref l_U2[iParam0], ref uVar12 );
            iVar11++;
            uVar12 = {uVar3};
            ConcatString(ref uVar12, "PAR", 16);
            ConcatString(ref uVar12, iVar11, 16);
        }
        ADD_TO_HTML_SCRIPT_OBJECT( l_U2[iParam0], "<br/><br/>" );
        ADD_TO_HTML_SCRIPT_OBJECT( l_U2[iParam0], "<span class="lcomment">" );
        if (((g_U972 == 2) AND (iParam0 == 12)) AND (NOT g_U42935))
        {
            sub_2091( ref l_U2[iParam0], "CELEB_LEAVE", 1 );
        }
        else if ((iParam0 == 12) AND (g_U42935))
        {
            sub_2091( ref l_U2[iParam0], "CELEB_LEFT", -1 );
        }
        else
        {
            sub_2091( ref l_U2[iParam0], "CELEB_CLOSED", -1 );
        }
        ADD_TO_HTML_SCRIPT_OBJECT( l_U2[iParam0], "</span></p>" );
    }
    return;
}

void sub_109(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    StrCopy( (uParam0^), uParam1, 16 );
    if (iParam2 != -1)
    {
        ConcatString((uParam0^), "_", 16);
        ConcatString((uParam0^), iParam2, 16);
        if (iParam3 != -1)
        {
            ConcatString((uParam0^), "_", 16);
            ConcatString((uParam0^), iParam3, 16);
            if (iParam4 != -1)
            {
                ConcatString((uParam0^), "_", 16);
                ConcatString((uParam0^), iParam4, 16);
            }
        }
    }
    return;
}

void sub_219(unknown uParam0)
{
    char[16] Result;

    StrCopy( ref Result, "CELEB11_", 16 );
    switch (uParam0)
    {
        case 0:
        StrCopy( ref Result, "CELEB1_", 16 );
        break;
        case 1:
        StrCopy( ref Result, "CELEB2_", 16 );
        break;
        case 2:
        StrCopy( ref Result, "CELEB3_", 16 );
        break;
        case 3:
        StrCopy( ref Result, "CELEB4_", 16 );
        break;
        case 4:
        StrCopy( ref Result, "CELEB5_", 16 );
        break;
        case 5:
        StrCopy( ref Result, "CELEB6_", 16 );
        break;
        case 6:
        StrCopy( ref Result, "CELEB7_", 16 );
        break;
        case 7:
        StrCopy( ref Result, "CELEB8_", 16 );
        break;
        case 8:
        StrCopy( ref Result, "CELEB9_", 16 );
        break;
        case 9:
        StrCopy( ref Result, "CELEB10_", 16 );
        break;
        case 10:
        StrCopy( ref Result, "CELEB11_", 16 );
        break;
        case 11:
        StrCopy( ref Result, "CELEB13_", 16 );
        break;
        case 12:
        StrCopy( ref Result, "CELEB12_", 16 );
        break;
    }
    return Result;
}

void sub_821(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
{
    char[16] cVar7;

    string(ref cVar7, iParam2, 16);
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<img src="imgs/" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" width="" );
    string(ref cVar7, iParam3, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" height="" );
    string(ref cVar7, iParam4, 16);
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar7 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

string sub_1068(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "celeb_story1_crown.jpg";
        break;
        case 1:
        return "celeb_story2_queens.jpg";
        break;
        case 2:
        return "celeb_story5_prince.jpg";
        break;
        case 3:
        return "celeb_story6_grumpiness.jpg";
        break;
        case 4:
        return "celeb_story7_party.jpg";
        break;
        case 5:
        return "celeb_story8_teenblues.jpg";
        break;
        case 6:
        return "celeb_story9_poppies.jpg";
        break;
        case 7:
        return "celeb_story10_hangover.jpg";
        break;
        case 8:
        return "celeb_story11_aceofspades.jpg";
        break;
        case 9:
        return "celeb_story12_huntison.jpg";
        break;
        case 10:
        return "celeb_story13_regalairs.jpg";
        break;
        case 11:
        return "celeb_story4_clay.jpg";
        break;
        case 12:
        return "celeb_story3_partyfortwo.jpg";
        break;
    }
    return "celeb_story1_crown.jpg";
}

void sub_1768(unknown uParam0, unknown uParam1)
{
    if (NOT IS_JAPANESE_VERSION())
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), GET_STRING_FROM_TEXT_FILE( uParam1 ) );
    }
    else
    {
        ADD_STRING_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    }
    return;
}

void sub_2091(unknown uParam0, unknown uParam1, int iParam2)
{
    char[16] cVar5;

    string(ref cVar5, iParam2, 16);
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<a href="" );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), ref cVar5 );
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "">" );
    }
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "<text name="" );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), uParam1 );
    ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "" />" );
    if (iParam2 != -1)
    {
        ADD_TO_HTML_SCRIPT_OBJECT( (uParam0^), "</a>" );
    }
    return;
}

void sub_2382(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_2393( uParam1 );
    if (bParam2)
    {
        RELOAD_WEB_PAGE( g_U864._fU4 );
    }
    else
    {
        LOAD_WEB_PAGE( g_U864._fU4, uParam0 );
        StrCopy( ref g_U864._fU168, uParam0, 64 );
        g_U864._fU164 = 1;
    }
    sub_2531();
    return;
}

void sub_2393(boolean bParam0)
{
    if (bParam0)
    {
        g_U864._fU20 = g_U949;
    }
    else
    {
        g_U864._fU20 = 0.00000000;
    }
    SET_WEB_PAGE_SCROLL( g_U864._fU4, g_U864._fU20 );
    return;
}

void sub_2531()
{
    float fVar2;

    fVar2 = GET_WEB_PAGE_HEIGHT( g_U864._fU4 );
    if (fVar2 > (g_U948 - (g_U946 * g_U948)))
    {
        g_U864._fU28 = 1;
        g_U864._fU32 = (1.00000000 - g_U946) / fVar2;
        g_U864._fU36 = (1.00000000 - g_U946) * ((g_U948 - (g_U946 * g_U948)) / fVar2);
    }
    else
    {
        g_U864._fU28 = 0;
    }
    return;
}

void sub_2776(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}
