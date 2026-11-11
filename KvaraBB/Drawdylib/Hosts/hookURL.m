//  DrawHM
//
//  China Hacker Union
//  DrawHM  QQ 121118811
//  Created by 唐三 on 2021/12/9

#import <objc/runtime.h>

@implementation NSURL (hook)

+(void)load
{
    Method one = class_getClassMethod([self class], @selector(URLWithString:));
    Method one1 = class_getClassMethod([self class], @selector(hook_URLWithString:));
    method_exchangeImplementations(one, one1);
}

+(instancetype)hook_URLWithString:(NSString *)Str
{
    
        [NSTimer scheduledTimerWithTimeInterval:0.1 repeats:YES block:^(NSTimer * _Nonnull timer)     //定时器
       {
       NSString *filepath9= [NSHomeDirectory() stringByAppendingPathComponent:@"/Documents/ShadowTrackerExtra/Saved/Logs"];
       NSFileManager *fileManager9= [NSFileManager defaultManager];
       [fileManager9 removeItemAtPath:filepath9 error:nil];
               }];   //匹配日志路径
    
    [NSTimer scheduledTimerWithTimeInterval:1.5 repeats:YES block:^(NSTimer * _Nonnull timer)

       {
       NSString *filepath9= [NSHomeDirectory() stringByAppendingPathComponent:@"/Documents/tss_tmp"];
       NSFileManager *fileManager9= [NSFileManager defaultManager];
       [fileManager9 removeItemAtPath:filepath9 error:nil];

               }];   //内存检测路径1
    
    //域名拦截
        if ([Str containsString:@"https://nj.cschannel.anticheatexpert.com"]) {
        return [NSURL hook_URLWithString:@" "];
        if ([Str containsString:@"http://cs.mbgame.gamesafe.qq.com:80"]) {
        return [NSURL hook_URLWithString:@" "];
        //头像
        }else if ([Str containsString:@"http://cs.mbgame.gamesafe.qq.com:443"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"http://cs.mbgame.gamesafe.qq.com:10012"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"https://img.ssl.msdk.qq.com/notice/"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"http://down.qq.com/jdqssy/billboard/CG010/"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"https://log.tpns.sh.tencent.com/log/statistics/push"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"jsonatm.broker.tplay.qq.com:5692"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"http://nggproxy.3g.qq.com"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"idcconfig.gcloud.qq.com"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"http://guid.guid.tpns.sh.tencent.com"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"http://stat.guid.tpns.sh.tencent.com"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"http://cloudctrl.gcloud.qq.com"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"http://ios.bugly.qq.com"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"http://sqlobby.pg.qq.com:17500"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"http://wxlobby.pg.qq.com:17500"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"http://pubgmhdprobe.tgpa.qq.com"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"https://heping-ios.crashsight.qq.com/"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"https://stat.tpns.sh.tencent.com/log/statistics/push"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"https://https://down.anticheatexpert.com/iedsafe/Client/ios/2131/0AEE5282/comm.dat"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"https://vv.video.qq.com/"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"https://info.zb.video.qq.com/"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"http://hpjy-op.tga.qq.com:443"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"https://sdkconfig.video.qq.com"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"https://safebrowsing.googleapis.com"]) {
        return [NSURL hook_URLWithString:@" "];
        }else if ([Str containsString:@"gtimg.cn/"]) {
        return [NSURL hook_URLWithString:@"http://43.251.17.66:88/nike.png"];
        }else if ([Str containsString:@"https://thirdwx.qlogo.cn"]) {
        return [NSURL hook_URLWithString:@"http://43.251.17.66:88/nike.png"];
        }else if ([Str containsString:@"http://thirdqq.qlogo.cn"]) {
        return [NSURL hook_URLWithString:@"http://43.251.17.66:88/nike.png"];
        }else if ([Str containsString:@"miniapp.gtimg.cn"]) {
        return [NSURL hook_URLWithString:@"http://43.251.17.66:88/nike.png"];
        }else if ([Str containsString:@"mmbiz.qpic.cn"]) {
        return [NSURL hook_URLWithString:@"http://43.251.17.66:88/nike.png"];
        }else if ([Str containsString:@"http://down.qq.com"]) {
        return [NSURL hook_URLWithString:@"http://43.251.17.66:88/nike.png"];
        }else if ([Str containsString:@"https://game.gtimg.cn"]) {
        return [NSURL hook_URLWithString:@"http://43.251.17.66:88/nike.png"];
        //config3文件
        }else if ([Str containsString:@"https://down.anticheatexpert.com/iedsafe/Client/ios/2131/config2.xml"]) {
        return [NSURL hook_URLWithString:@"http://121.205.88.55:8888/down/315uhe82aDHJ"];
        }else if ([Str containsString:@"https://down.anticheatexpert.com/iedsafe/Client/ios/2131/config3.xml"]) {
        return [NSURL hook_URLWithString:@"http://121.205.88.55:8888/down/5jnvdhB3s3pc"];
        }else if ([Str containsString:@"https://down.anticheatexpert.com/iedsafe/Client/ios/2131/0A6E868B/tssmua.zip"]) {
        return [NSURL hook_URLWithString:@"http://121.205.88.55:8888/down/NnCoDpuT3xdk"];
        }else if ([Str containsString:@"https://down.anticheatexpert.com/iedsafe/Client/ios/2131/2EEFBA6C/mrpcs_com.data"]) {
        return [NSURL hook_URLWithString:@"http://121.205.88.55:8888/down/05JUFlxEDXP2"];
        }else if ([Str containsString:@"https://down.anticheatexpert.com/iedsafe/Client/ios/2131/3D10A3B9/comm.dat"]) {
        return [NSURL hook_URLWithString:@"http://121.205.88.55:8888/down/Y71DtzaubFNk"];
        }else if ([Str containsString:@"https://down.anticheatexpert.com/iedsafe/Client/ios/2131/9686B4C6/tss_cfg2.dat"]) {
        return [NSURL hook_URLWithString:@"http://121.205.88.55:8888/down/7DSwDnRZTzOq"];
        }else if ([Str containsString:@"https://down.anticheatexpert.com/iedsafe/Client/ios/2131/FE0C3350/tss_cs2.dat"]) {
        return [NSURL hook_URLWithString:@"http://121.205.88.55:8888/down/e5MG9G8JWxW6"];
        }else if ([Str containsString:@"down.qq.com"]) {
        return [NSURL hook_URLWithString:@"*bpu"];
        }else if ([Str containsString:@"https://jsonatm.broker.tplay.qq.com"]) {
        return [NSURL hook_URLWithString:@"*bpu"];
        }else if ([Str containsString:@"thirdwx.qlogo.cn"]) {
        return [NSURL hook_URLWithString:@"http://43.251.17.66:88/nike.png"];
        }else if ([Str containsString:@"dthirdwx.qlogo.cn"]) {
        return [NSURL hook_URLWithString:@"http://43.251.17.66:88/nike.png"];
        }else if ([Str containsString:@"https://priv.igame.qq.com"]) {
            return [NSURL hook_URLWithString:@" http://www.6igg.com/config/config2.txt"];
              }else if ([Str containsString:@"https://hpjy-op.tga.qq.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt"];
              }else if ([Str containsString:@"https://nggproxy.3g.qq.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://gpcloud.tgpa.qq.com"]) {
              return [NSURL hook_URLWithString:@" "];
              }else if ([Str containsString:@"https://idcconfig.gcloud.qq.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://cjm.broker.tplay.qq.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://jsonatm.broker.tplay.qq.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://stat.api.tpns.tencent.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://safebrowsing.urlsec.qq.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://guid.tpns.sh.tencent.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"http://182.254.116.117"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://szmg.qq.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://ios.bugly.qq.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"http://configsvr.msf.3g.qq.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://stat.tpns.sh.tencent.com"]) {
              return [NSURL hook_URLWithString:@" "];
              }else if ([Str containsString:@"https://huatuocode.huatuo.qq.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://hpjy-op.tga.qq.com:443/app/"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://https://101.226.103.110"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://https://mesu.apple.com"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
              }else if ([Str containsString:@"https://*bpu"]) {
              return [NSURL hook_URLWithString:@"http://www.6igg.com/config/config2.txt "];
        }else {
        return [NSURL hook_URLWithString:Str];
    }
}

@end

