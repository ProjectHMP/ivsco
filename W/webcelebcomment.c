void main()
{
    unknown uVar2;

    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    DELETE_ALL_HTML_SCRIPT_OBJECTS();
    LOAD_ADDITIONAL_TEXT( "CELEBIN", 3 );
    g_U864._fU324 = 0;
    sub_52();
    uVar2 = CREATE_HTML_SCRIPT_OBJECT( "celebSubmit" );
    if (g_U972 == 2)
    {
        sub_718( ref uVar2, "CELEB_SUBMIT", 1 );
    }
    sub_883( ref l_U0._fU0, 1, 0 );
    while (NOT g_U864._fU16)
    {
        WAIT( 0 );
        switch (g_U858._fU12)
        {
            case 1:
            sub_1264( ref g_U838, "www.youvebeencelebinated.com", -1, 1, -1 );
            g_U837 = 1;
            if (g_U972 == 2)
            {
                g_U42935 = 1;
            }
            break;
            default:
        }
    }
    g_U864._fU16 = 0;
    return;
}

void sub_52()
{
    unknown uVar2;
    unknown uVar3;
    char[16] cVar4;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    uVar2 = CREATE_HTML_SCRIPT_OBJECT( "celebPost" );
    uVar3 = CREATE_HTML_SCRIPT_OBJECT( "celebComment" );
    StrCopy( ref cVar4, "CELEB12_", 16 );
    sub_146( ref uVar2, "celeb_divider.jpg", -1, 544, 20 );
    sub_146( ref uVar2, "celeb_story3_partyfortwo.jpg", -1, 544, 256 );
    uVar8 = {cVar4};
    ConcatString(ref uVar8, "HEAD", 16);
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "<p><span class="headline">" );
    sub_488( ref uVar2, ref uVar8 );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "</span></p>" );
    iVar12 = 1;
    uVar13 = {cVar4};
    ConcatString(ref uVar13, "PAR", 16);
    ConcatString(ref uVar13, iVar12, 16);
    sub_488( ref uVar2, ref uVar13 );
    ADD_TO_HTML_SCRIPT_OBJECT( uVar2, "<br/><br/></span>" );
    sub_488( ref uVar3, "MESSAGE" );
    return;
}

void sub_146(unknown uParam0, unknown uParam1, int iParam2, int iParam3, int iParam4)
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

void sub_488(unknown uParam0, unknown uParam1)
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

void sub_718(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_883(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_894( uParam1 );
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
    sub_1032();
    return;
}

void sub_894(boolean bParam0)
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

void sub_1032()
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

void sub_1264(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}
