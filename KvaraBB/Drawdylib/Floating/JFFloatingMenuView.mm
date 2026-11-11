

#import "JFFloatingMenuView.h"
#import "Drawzb.h"
#import <AVFoundation/AVFoundation.h>
#import "mahoa.h"
#include <stdio.h>
#include <stdint.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import "FTNotificationIndicator.h"
#import "FCUUID.h"
#import "menuButtonConfigLQ.h"
#import "MBProgressHUD.h"
#import "Reachability.h"




#define kWidth  [UIScreen mainScreen].bounds.size.width
#define kHeight [UIScreen mainScreen].bounds.size.height
#define timer(sec) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^
UIButton *menuButton;
@interface JFFloatingMenuView()
@property (nonatomic, assign) float currentVolum;
@property (nonatomic) UIButton *btnConsole;
@property (strong, nonatomic) NSTimer * timer;
@end

@implementation JFFloatingMenuView
static JFFloatingMenuView *extraInfo;
+ (void)load{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        extraInfo =  [JFFloatingMenuView new];
        [extraInfo load1];
        
        
        
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(5 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            
            [extraInfo thongbao];
            [extraInfo checkcrack];
            
        });
        
        //[extraInfo logost];
        //[extraInfo didTapIconView];
        
    });
}
-(void)logost{
    
    self.currentVolum = [[AVAudioSession sharedInstance] outputVolume];
    
    self.timer = [NSTimer scheduledTimerWithTimeInterval:1/120 repeats:YES block:^(NSTimer * _Nonnull timer) {
        AVAudioSession *audioSession = [AVAudioSession sharedInstance];
        [audioSession setActive:YES error:nil];
        
        float changedVolume = [audioSession outputVolume];
        
        if (changedVolume < self.currentVolum) {
            dispatch_async(dispatch_get_main_queue(), ^{
                [self didTapIconView];
            });
        }
        self.currentVolum = changedVolume;
    }];
    [[NSRunLoop currentRunLoop] addTimer:self.timer forMode:NSRunLoopCommonModes];
    
}

#pragma mark - Event
- (void)buttonDragged:(UIButton *)button withEvent:(UIEvent *)event {
    UITouch *touch = [[event touchesForView:button] anyObject];
    CGPoint previousLocation = [touch previousLocationInView:button];
    CGPoint location = [touch locationInView:button];
    CGFloat delta_x = location.x - previousLocation.x;
    CGFloat delta_y = location.y - previousLocation.y;
    button.center = CGPointMake(button.center.x + delta_x, button.center.y + delta_y);
}


#pragma mark - Event
- (void)didTapIconView
{
    [IFuckYou getInstance].overlayView.isShowMenu = ![IFuckYou getInstance].overlayView.isShowMenu;
    
    [[IFuckYou getInstance] entry];

    
    
    
}






















-(void)load1
{
    
    //Try this
    Reachability *reachability = [Reachability reachabilityForInternetConnection];
    [reachability startNotifier];
    
    NetworkStatus status = [reachability currentReachabilityStatus];
    
    if(status == NotReachable)
    {
        // NSLog(@"none");
        //No internet
        
        
        
        MBProgressHUD *progress = [MBProgressHUD showHUDAddedTo:[UIApplication sharedApplication].keyWindow animated:YES];
        progress.mode = MBProgressHUDModeText;
        progress.label.numberOfLines = 10;
        progress.label.textColor = [UIColor redColor];
        progress.label.text = NSSENCRYPT("Erorr 3\n There is on server connection \n please check the network connection and try again");
        progress.detailsLabel.numberOfLines = 5;
        
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
            [MBProgressHUD hideHUDForView:[UIApplication sharedApplication].keyWindow animated:YES];
            exit(0);
        });
        
        
        
    }
    else if (status == ReachableViaWiFi)
    {
        NSLog(@"Wifi");
        //WiFi
    }
    else if (status == ReachableViaWWAN)
    {
        NSLog(@"WWAN");
        
    }
}



-(void)sucsses
{
    
    NSString *menuButtonBase64 = menuButtonConfigLQ;
    
    NSData* data = [[NSData alloc] initWithBase64EncodedString:menuButtonBase64 options:0];
    UIImage* img = [UIImage imageWithData:data];
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    NSUserDefaults *check;
    check = [NSUserDefaults standardUserDefaults];
    
    NSString *loggedin = [check stringForKey:NSSENCRYPT("loggedin")];
    NSString *key = [check stringForKey:NSSENCRYPT("key")];
    
    
    
    
    NSString *uuid = [FCUUID uuidForDevice];
    NSError *errorAgentData;
    
    
    key=[NSString stringWithFormat:@"%@",key];
    
    char* keylogin = (char*) [key cStringUsingEncoding:NSUTF8StringEncoding];
    
    
    NSString *uri = [NSString stringWithFormat:NSSENCRYPT("phongjinoo.xyz/trangthai.php?udid=%@&key=%@"), uuid, key];
    
    
    NSData *resp = [NSData dataWithContentsOfURL: [NSURL URLWithString:uri]];
    NSString* respData = [[NSString alloc] initWithData:resp encoding:NSUTF8StringEncoding];
    NSData* DCs=[respData dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:DCs options:kNilOptions error:&errorAgentData];
    //NSLog(@"JSON：%@\r",JSON);
    NSString *Authstatus = [JSON objectForKey:NSSENCRYPT("status")];
    NSString *uuidRes = [JSON objectForKey:NSSENCRYPT("uuid")];
    NSString *uuidResb = [JSON objectForKey:NSSENCRYPT("endtime")];
    
    
    
    
    [check setObject:uuidRes forKey:NSSENCRYPT("uuid")];
    [check setObject:uuidResb forKey:NSSENCRYPT("endtime")];
    [check synchronize];
    
    
    
    
    
    /*
     [FTNotificationIndicator showNotificationWithImage:img
     title:NSSENCRYPT("        LOGIN SUCSSES")
     message:[NSString stringWithFormat:NSSENCRYPT("       Key: %s                    \n       Expires at: %@ "),keylogin,uuidResb]];
     
     */
    
    
    
    [FTNotificationIndicator showNotificationWithImage:img
                                                 title:NSSENCRYPT("You are still one of us ♥️")
                                               message:[NSString stringWithFormat:NSSENCRYPT("Key: %s      Expires at: %@"),keylogin,uuidResb]];
    
    
    
    [self logost];
}




-(void)wrong
{
    
    
    NSString *menuButtonBase64 = menuButtonConfigLQ;
    
    NSData* data = [[NSData alloc] initWithBase64EncodedString:menuButtonBase64 options:0];
    UIImage* img = [UIImage imageWithData:data];
    
    
    [FTNotificationIndicator showNotificationWithImage:img
                                                 title:NSSENCRYPT("Erorr 1")
                                               message:NSSENCRYPT("Wrong Key , Please Enter a valid key !")];
    
    
    
}





-(void)checkcrack
{
#define timer(sec) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^
    
    
    timer(300) {
        [self crash];
    });
    
    
    timer(600) {
        [self crash];
    });
    
    timer(1200) {
        [self crash];
    });
    
    
    
}








-(void)crash
{
    
    
    
    
#define timer(sec) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^
    NSUserDefaults *check;
    check = [NSUserDefaults standardUserDefaults];
    NSString *key = [check stringForKey:NSSENCRYPT("key")];
    timer(0) {
        
        NSString *uuid = [FCUUID uuidForDevice];
        NSError *errorAgentData;
        NSString *uri = [NSString stringWithFormat:NSSENCRYPT("phongjinoo.xyz/trangthai.php?udid=%@&key=%@"), uuid, key];
        //
        NSData *resp = [NSData dataWithContentsOfURL: [NSURL URLWithString:uri]];
        NSString* respData = [[NSString alloc] initWithData:resp encoding:NSUTF8StringEncoding];
        NSData* DCs=[respData dataUsingEncoding:NSUTF8StringEncoding];
        NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:DCs options:kNilOptions error:&errorAgentData];
        NSString *Authstatus = [JSON objectForKey:NSSENCRYPT("status")];
        NSString *uuidRes = [JSON objectForKey:NSSENCRYPT("uuid")];
        
        if ([Authstatus isEqualToString:@"true"] && [uuidRes isEqualToString:uuid]) {
            
        }else{
          
        }
    });
}











-(void)time{
    
    
    NSUserDefaults *check;
    check = [NSUserDefaults standardUserDefaults];
    
    NSString *loggedin = [check stringForKey:NSSENCRYPT("loggedin")];
    NSString *key = [check stringForKey:NSSENCRYPT("key")];
    
    
    
    
    NSString *uuid = [FCUUID uuidForDevice];
    NSError *errorAgentData;
    
    
    
    
    NSString *uri = [NSString stringWithFormat:NSSENCRYPT("phongjinoo.xyz/trangthai.php?udid=%@&key=%@"), uuid, key];
    
    
    NSData *resp = [NSData dataWithContentsOfURL: [NSURL URLWithString:uri]];
    NSString* respData = [[NSString alloc] initWithData:resp encoding:NSUTF8StringEncoding];
    NSData* DCs=[respData dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:DCs options:kNilOptions error:&errorAgentData];
    //NSLog(@"JSON：%@\r",JSON);
    NSString *Authstatus = [JSON objectForKey:NSSENCRYPT("status")];
    NSString *uuidRes = [JSON objectForKey:NSSENCRYPT("uuid")];
    NSString *uuidResb = [JSON objectForKey:NSSENCRYPT("endtime")];
    
    
    
    
    [check setObject:uuidRes forKey:NSSENCRYPT("uuid")];
    [check setObject:uuidResb forKey:NSSENCRYPT("endtime")];
    [check synchronize];
    
    
    
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:[NSString stringWithFormat:NSSENCRYPT("ModGameOnline"),uuidResb]
                                                    message:NSSENCRYPT("Copyright © 2022 - SNIPER")
                                                   delegate:self
                                          cancelButtonTitle:NSSENCRYPT("OK")
                                          otherButtonTitles:nil];
    [alert show];
    
}




-(void)thongbao
{
    
    NSUserDefaults *check;
    check = [NSUserDefaults standardUserDefaults];
    
    NSError *errorAgentData;
    
    
    
    NSString * uri (@"phongjinoo.xyz/trangthai.php?udid=%@&key=%@");
    
    
    NSData *resp = [NSData dataWithContentsOfURL: [NSURL URLWithString:uri]];
    NSString* respData = [[NSString alloc] initWithData:resp encoding:NSUTF8StringEncoding];
    NSData* DCs=[respData dataUsingEncoding:NSUTF8StringEncoding];
    NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:DCs options:kNilOptions error:&errorAgentData];
    
    NSString *status = [JSON objectForKey:@"status"];
    
    
    [check setObject:status forKey:@"status"];
    
    
    
    if ([status isEqualToString:@"false"]) {
        
        
        MBProgressHUD *progress = [MBProgressHUD showHUDAddedTo:[UIApplication sharedApplication].keyWindow animated:YES];
        progress.mode = MBProgressHUDModeText;
        progress.label.numberOfLines = 10;
        progress.label.textColor = [UIColor blackColor];
        progress.label.text = NSSENCRYPT("Erorr 5 /n Cheats Under Updating, Please wait !");
        progress.detailsLabel.numberOfLines = 5;
        
        
    }else {
        
        
        
        
        
        
        
        [self login];
        
        
        
    }
    
}















-(void) resetkey
{
    
    
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:nil message:@"Enter the reset key" preferredStyle:UIAlertControllerStyleAlert];
    
    [alert addTextFieldWithConfigurationHandler:^(UITextField *Text) {
        Text.placeholder = @"Request";
        //Text.secureTextEntry=true;
        Text.textColor = [UIColor redColor];
    }];
    
    UIAlertAction *ok = [UIAlertAction
                         actionWithTitle:@"Reset" style:UIAlertActionStyleDefault
                         handler:^(UIAlertAction * _Nonnull action) {
                             
                             UITextField *text = alert.textFields.firstObject;
                             
                             
                             
                             NSError *errorAgentData;
                             NSString *uri = [NSString stringWithFormat:NSSENCRYPT("phongjinoo.xyz/trangthai.php?udid=%@&key=%@"), text.text];
                             
                             
                             NSData *resp = [NSData dataWithContentsOfURL: [NSURL URLWithString:uri]];
                             NSString* respData = [[NSString alloc] initWithData:resp encoding:NSUTF8StringEncoding];
                             NSData* DCs=[respData dataUsingEncoding:NSUTF8StringEncoding];
                             NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:DCs options:kNilOptions error:&errorAgentData];
                             
                             NSString *nguyennam = [JSON objectForKey:@"status"];
                             
                             
                             
                             
                             if ([nguyennam isEqualToString:@"ok"]) {
                                 
                                 
                                 UIAlertController *sucsses = [UIAlertController alertControllerWithTitle:@"Reset is in progress" message:nil preferredStyle:UIAlertControllerStyleAlert];
                                 
                                 [[UIApplication sharedApplication].keyWindow.rootViewController presentViewController:sucsses animated:true completion:nil];
                                 
                                 dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                                     [sucsses dismissViewControllerAnimated:YES completion:nil];
                                     [self login];
                                 });
                                 
                                 
                             }else{
                                 
                                 
                                 UIAlertController *WrongKey = [UIAlertController alertControllerWithTitle:@"Reset is in progress" message:@"Please Wait..." preferredStyle:UIAlertControllerStyleAlert];
                                 
                                 [[UIApplication sharedApplication].keyWindow.rootViewController presentViewController:WrongKey animated:true completion:nil];
                                 
                                 dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                                     [WrongKey dismissViewControllerAnimated:YES completion:nil];
                                     [self login];
                                 });
                             }
                             
                         }];
    
    [alert addAction:ok];
    
    [[UIApplication sharedApplication].keyWindow.rootViewController presentViewController:alert animated:true completion:nil];
    
    
    
    
    
    
}




















- (void)login

{
    
    
#define timer(sec) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, sec * NSEC_PER_SEC), dispatch_get_main_queue(), ^
    
    
    
    
    NSUserDefaults *check;
    check = [NSUserDefaults standardUserDefaults];
    
    
    NSString *loggedin = [check stringForKey:NSSENCRYPT("loggedin")];
    NSString *key = [check stringForKey:NSSENCRYPT("key")];
    
    
    
    
    timer(0) {
        if([loggedin isEqualToString:@"1"]) {
            
            
            NSString *uuid = [FCUUID uuidForDevice];
            NSError *errorAgentData;
            
            
            
            NSString *uri = [NSString stringWithFormat:NSSENCRYPT("phongjinoo.xyz/trangthai.php?udid=%@&key=%@"), uuid, key];
            //
            NSData *resp = [NSData dataWithContentsOfURL: [NSURL URLWithString:uri]];
            
            
            
            NSString* respData = [[NSString alloc] initWithData:resp encoding:NSUTF8StringEncoding];
            NSData* DCs=[respData dataUsingEncoding:NSUTF8StringEncoding];
            NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:DCs options:kNilOptions error:&errorAgentData];
            
            NSString *Authstatus = [JSON objectForKey:NSSENCRYPT("status")];
            NSString *uuidRes = [JSON objectForKey:NSSENCRYPT("uuid")];
            
            if ([Authstatus isEqualToString:@"true"] && [uuidRes isEqualToString:uuid]) {
                
                
                [self sucsses];
                
                
                
                
            }
            else
            {
                timer(0) {
                    [check setObject:@"7985656" forKey:@"loggedin"];
                    [check synchronize];
                    
                    
                    [self login];
                    
                    
                });
            }
            
        }
    });
    
    
    
    
    UIAlertController *alert = [UIAlertController alertControllerWithTitle:NSSENCRYPT("Sniper") message:NSSENCRYPT("PUBG MOBILE 2.2.0") preferredStyle:UIAlertControllerStyleAlert];
    
    
    
    
    
    
    [alert addTextFieldWithConfigurationHandler:^(UITextField *Text) {
        Text.placeholder = NSSENCRYPT("Request");
        Text.textColor = [UIColor redColor]; Text.clearButtonMode=UITextFieldViewModeWhileEditing;
        
    }];
    
    
    
    
    
    
    UIAlertAction *Login = [UIAlertAction
                            actionWithTitle:NSSENCRYPT("Login") style:UIAlertActionStyleDefault
                            handler:^(UIAlertAction * _Nonnull action) {
                                
                                
                                
                                UITextField *text = alert.textFields.firstObject;
                                
                                
                                
                                
                                NSString *uuid = [FCUUID uuidForDevice];
                                NSError *errorAgentData;
                                NSString *uri = [NSString stringWithFormat:NSSENCRYPT("phongjinoo.xyz/trangthai.php?udid=%@&key=%@"), uuid, text.text];
                                
                                
                                NSData *resp = [NSData dataWithContentsOfURL: [NSURL URLWithString:uri]];
                                NSString* respData = [[NSString alloc] initWithData:resp encoding:NSUTF8StringEncoding];
                                NSData* DCs=[respData dataUsingEncoding:NSUTF8StringEncoding];
                                NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:DCs options:kNilOptions error:&errorAgentData];
                                
                                NSString *Authstatus = [JSON objectForKey:NSSENCRYPT("status")];
                                NSString *uuidRes = [JSON objectForKey:NSSENCRYPT("uuid")];
                                NSString *uuidResb = [JSON objectForKey:NSSENCRYPT("endtime")];
                                
                                
                                if ([Authstatus isEqualToString:@"true"] && [uuidRes isEqualToString:uuid]) {
                                    
                                    
                                    
                                    [check setObject:text.text forKey:@"key"];
                                    [check setObject:uuidRes forKey:@"uuid"];
                                    [check setObject:uuidResb forKey:@"endtime"];
                                    [check setObject:@"1" forKey:@"loggedin"];
                                    [check synchronize];
                                    timer(0) {
                                        
                                       
                                         
                                        UIAlertController *sucsses = [UIAlertController alertControllerWithTitle:@"Successfully The Game Will Crash after a few seconds" message:nil preferredStyle:UIAlertControllerStyleAlert];
                                         
                                         
                                         [[UIApplication sharedApplication].keyWindow.rootViewController presentViewController:sucsses animated:true completion:nil];
                                         
                                         dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(3 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                                         [sucsses dismissViewControllerAnimated:YES completion:nil];
                                         // [self ok];
                                         
                                         timer(10) {
                                         exit(2);
                                         });
                                         
                                         });
                                         
                                         
                                         
                                         
                                         
                                         
                                        
                                         
                            
                                         
                                
                                        
                                        
                                        [self sucsses];
                                        [self logost];
                                        [self didTapIconView];
                                        
                                    });
                                    
                                }
                                
                                
                                
                                
                                else{
                                    
                                    
                                    [self login];
                                    [self wrong];
                                }
                                
                            }];
    if(![loggedin isEqualToString:@"1"]) {
        //[alert addAction:reset];
        [alert addAction:Login];
        [[UIApplication sharedApplication].keyWindow.rootViewController presentViewController:alert animated:true completion:nil];
        
    }
    
    
}












@end
