


#import "NSObject+URL.h"
#import "EtcHostsURLProtocol.h"

@implementation NSObject (URL)

+ (void)load
{
    [NSURLProtocol registerClass:[EtcHostsURLProtocol class]];
    [EtcHostsURLProtocol configureHostsWithBlock:^(id <EtcHostsConfiguration> configuration) {
        [configuration resolveHostName:@"dlied1.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"livew.l.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"oth.eve.mdt.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"hpjy-op.tga.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"api.unipay.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"priv.igame.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"nggproxy.3g.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"idcconfig.gcloud.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"cloudctrl.gcloud.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"cjm.broker.tplay.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"jsonatm.broker.tplay.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"cdn.wetest.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"huatuocode.huatuo.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"configsvr.msf.3g.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"szmg.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"ios.bugly.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"down.pandora.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"ios.crashsight.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"cs.mbgame.gamesafe.qq.com" toIPAddress:@"127.0.0.1"];
        [configuration resolveHostName:@"nj.cschannel.anticheatexpert.com" toIPAddress:@"127.0.0.1"];
    }];
}
   

@end
