#ifndef _PATCHER_H
#define _PATCHER_H

typedef struct URL_Patch {
    unsigned int address;
    char url[80];
} URL_Patch;

static const URL_Patch url_patches[] = {
        //nim-boss .rodata
        {0xE2282550, "http://pushmorewupshop.spbr.net/pushmore/r/%s"},
        {0xE229A0A0, "http://npns-devcapp.spbr.net/bst.dat"},
        {0xE229A0D0, "http://npns-devcapp.spbr.net/bst2.dat"},
        {0xE2281964, "https://tagayawupshop.spbr.net/tagaya/versionlist/%s/%s/%s"},
        {0xE22819B4, "https://tagayawupshop.spbr.net/tagaya/versionlist/%s/%s/latest_version"},
        {0xE2282584, "http://pushmowupshop.spbr.net/pushmo/d/%s/%u"},
        {0xE22825B8, "http://pushmowupshop.spbr.net/pushmo/c/%u/%u"},
        {0xE2282DB4, "https://ecswupshop.spbr.net/ecs/services/ECommerceSOAP"},
        {0xE22830A0, "https://ecswupshop.spbr.net/ecs/services/ECommerceSOAP"},
        {0xE22830E0, "https://nuswupshop.spbr.net/nus/services/NetUpdateSOAP"},
        {0xE2299990, "policylist.spbr.net"},
        {0xE229A600, "https://plswupshop.spbr.net/pls/upload"},
        {0xE229A6AC, "https://npvk-devapp.spbr.net/reports"},
        {0xE229A6D8, "https://npvkapp.spbr.net/reports"},
        {0xE229B1F4, "https://tasksheets.spbr.net/p01/tasksheet/%s/%s/%s/%s?c=%s&l=%s"},
        {0xE229B238, "https://tasksheets.spbr.net/p01/tasksheet/%s/%s/%s?c=%s&l=%s"},
        {0xE22AB2D8, "https://idbe-wupcdn.spbr.net/icondata/%02X/%016llX.idbe"},
        {0xE22AB318, "https://idbe-ctrcdn.spbr.net/icondata/%02X/%016llX.idbe"},
        {0xE22AB358, "https://idbe-wupcdn.spbr.net/icondata/%02X/%016llX-%d.idbe"},
        {0xE22AB398, "https://idbe-ctrcdn.spbr.net/icondata/%02X/%016llX-%d.idbe"},
        {0xE22B3EF8, "https://ecscshop.spbr.net"},
        {0xE22B3F30, "https://ecscshop.spbr.net/ecs/services/ECommerceSOAP"},
        {0xE22B3F70, "https://iascshop.spbr.net/ias/services/IdentityAuthenticationSOAP"},
        {0xE22B3FBC, "https://cascshop.spbr.net/cas/services/CatalogingSOAP"},
        {0xE22B3FFC, "https://nuscshop.spbr.net/nus/services/NetUpdateSOAP"},
        {0xE229DE0C, "n.app.spbr.net"},
        //nim-boss .bss
        {0xE24B8A24, "https://policylist.spbr.net/p01/policylist/1/1/UNK"},
        {0xE31930D4, "https://%s%saccount.spbr.net/v%u/api/"}

};

#endif
