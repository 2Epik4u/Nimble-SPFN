#ifndef _PATCHER_H
#define _PATCHER_H

typedef struct URL_Patch {
    unsigned int address;
    char url[80];
} URL_Patch;

static const URL_Patch url_patches[] = {
        //nim-boss .rodata
        {0xE2282550, "http://pushmorewupshop.altendo.cc/pushmore/r/%s"},
        {0xE229A0A0, "http://npns-devcapp.altendo.cc/bst.dat"},
        {0xE229A0D0, "http://npns-devcapp.altendo.cc/bst2.dat"},
        {0xE2281964, "https://tagayawupshop.altendo.cc/tagaya/versionlist/%s/%s/%s"},
        {0xE22819B4, "https://tagayawupshop.altendo.cc/tagaya/versionlist/%s/%s/latest_version"},
        {0xE2282584, "http://pushmowupshop.altendo.cc/pushmo/d/%s/%u"},
        {0xE22825B8, "http://pushmowupshop.altendo.cc/pushmo/c/%u/%u"},
        {0xE2282DB4, "https://ecswupshop.altendo.cc/ecs/services/ECommerceSOAP"},
        {0xE22830A0, "https://ecswupshop.altendo.cc/ecs/services/ECommerceSOAP"},
        {0xE22830E0, "https://nuswupshop.altendo.cc/nus/services/NetUpdateSOAP"},
        {0xE2299990, "policylist.altendo.cc"},
        {0xE229A600, "https://plswupshop.altendo.cc/pls/upload"},
        {0xE229A6AC, "https://npvk-devapp.altendo.cc/reports"},
        {0xE229A6D8, "https://npvkapp.altendo.cc/reports"},
        {0xE229B1F4, "https://tasksheets.altendo.cc/p01/tasksheet/%s/%s/%s/%s?c=%s&l=%s"},
        {0xE229B238, "https://tasksheets.altendo.cc/p01/tasksheet/%s/%s/%s?c=%s&l=%s"},
        {0xE22AB2D8, "https://idbe-wupcdn.altendo.cc/icondata/%02X/%016llX.idbe"},
        {0xE22AB318, "https://idbe-ctrcdn.altendo.cc/icondata/%02X/%016llX.idbe"},
        {0xE22AB358, "https://idbe-wupcdn.altendo.cc/icondata/%02X/%016llX-%d.idbe"},
        {0xE22AB398, "https://idbe-ctrcdn.altendo.cc/icondata/%02X/%016llX-%d.idbe"},
        {0xE22B3EF8, "https://ecscshop.altendo.cc"},
        {0xE22B3F30, "https://ecscshop.altendo.cc/ecs/services/ECommerceSOAP"},
        {0xE22B3F70, "https://iascshop.altendo.cc/ias/services/IdentityAuthenticationSOAP"},
        {0xE22B3FBC, "https://cascshop.altendo.cc/cas/services/CatalogingSOAP"},
        {0xE22B3FFC, "https://nuscshop.altendo.cc/nus/services/NetUpdateSOAP"},
        {0xE229DE0C, "n.app.altendo.cc"},
        //nim-boss .bss
        {0xE24B8A24, "https://policylist.altendo.cc/p01/policylist/1/1/UNK"},
        {0xE31930D4, "https://%s%saccount.altendo.cc/v%u/api/"}

};

#endif
