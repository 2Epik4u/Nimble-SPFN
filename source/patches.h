#ifndef _PATCHER_H
#define _PATCHER_H

typedef struct URL_Patch
{
    int address;
    char url[80];
} URL_Patch;

static  const URL_Patch url_patches[] = {
        //nim-boss .rodata
        {0xE2282550, "http://pushmorewupshop.spfn.net/pushmore/r/%s"},
        {0xE229A0A0, "http://npns-devcapp.spfn.net/bst.dat"},
        {0xE229A0D0, "http://npns-devcapp.spfn.net/bst2.dat"},
        {0xE2281964, "https://tagayawupshop.spfn.net/tagaya/versionlist/%s/%s/%s"},
        {0xE22819B4, "https://tagayawupshop.spfn.net/tagaya/versionlist/%s/%s/latest_version"},
        {0xE2282584, "http://pushmowupshop.spfn.net/pushmo/d/%s/%u"},
        {0xE22825B8, "http://pushmowupshop.spfn.net/pushmo/c/%u/%u"},
        {0xE2282DB4, "https://ecswupshop.spfn.net/ecs/services/ECommerceSOAP"},
        {0xE22830A0, "https://ecswupshop.spfn.net/ecs/services/ECommerceSOAP"},
        {0xE22830E0, "https://nuswupshop.spfn.net/nus/services/NetUpdateSOAP"},
        {0xE2299990, "npplapp.spfn.net"},
        {0xE229A600, "https://plswupshop.spfn.net/pls/upload"},
        {0xE229A6AC, "https://npvk-devapp.spfn.net/reports"},
        {0xE229A6D8, "https://npvkapp.spfn.net/reports"},
        {0xE229B1F4, "https://nptsapp.spfn.net/p01/tasksheet/%s/%s/%s/%s?c=%s&l=%s"},
        {0xE229B238, "https://nptsapp.spfn.net/p01/tasksheet/%s/%s/%s?c=%s&l=%s"},
        {0xE22AB2D8, "https://idbe-wupcdn.spfn.net/icondata/%02X/%016llX.idbe"},
        {0xE22AB318, "https://idbe-ctrcdn.spfn.net/icondata/%02X/%016llX.idbe"},
        {0xE22AB358, "https://idbe-wupcdn.spfn.net/icondata/%02X/%016llX-%d.idbe"},
        {0xE22AB398, "https://idbe-ctrcdn.spfn.net/icondata/%02X/%016llX-%d.idbe"},
        {0xE22B3EF8, "https://ecscshop.spfn.net"},
        {0xE22B3F30, "https://ecscshop.spfn.net/ecs/services/ECommerceSOAP"},
        {0xE22B3F70, "https://iascshop.spfn.net/ias/services/IdentityAuthenticationSOAP"},
        {0xE22B3FBC, "https://cascshop.spfn.net/cas/services/CatalogingSOAP"},
        {0xE22B3FFC, "https://nuscshop.spfn.net/nus/services/NetUpdateSOAP"},
        {0xE229DE0C, "n.app.spfn.net"},
        //nim-boss .bss
        {0xE24B8A24, "https://npplapp.spfn.net/p01/policylist/1/1/UNK"},
        {0xE31930D4, "https://%s%saccount.spfn.net/v%u/api/"}

};

#endif
