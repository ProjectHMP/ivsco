void main()
{
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    g_U864._fU324 = 0;
    sub_33( ref l_U0._fU0, 1, 0 );
    while (NOT g_U864._fU16)
    {
        WAIT( 0 );
        switch (g_U858._fU12)
        {
            case 2:
            g_U973 = 2;
            sub_437( ref g_U838, "www.goldberglignerandshyster.com/careers.html", -1, -1, -1 );
            g_U837 = 1;
            break;
            default:
        }
    }
    g_U864._fU16 = 0;
    return;
}

void sub_33(unknown uParam0, unknown uParam1, boolean bParam2)
{
    sub_44( uParam1 );
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
    sub_182();
    return;
}

void sub_44(boolean bParam0)
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

void sub_182()
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

void sub_437(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    StrCopy( ref iParam0->_fU0, uParam1, 64 );
    iParam0->_fU64[0] = uParam2;
    iParam0->_fU64[1] = uParam3;
    iParam0->_fU64[2] = uParam4;
    return;
}