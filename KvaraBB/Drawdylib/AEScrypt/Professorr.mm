//
//  md5.m
//  key
//
//  Created by mac on 3/22/21.
//  Copyright © 2021 mac. All rights reserved.
//

#import "Professorr.h"
#import "AES2.h"
#import "Base64.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "writeData.h"

//instance key + type


NSString * Dream;


@implementation DREM
@synthesize vll; // تروح الى اي كلاس تحمل القيمة

+ (void)load {
    
Dream = @"**     ل و ف يو     م %$84377+*&53&%$^$&%@$%&%$^$^##^%#^#$^#^$&#$^#Y*(&^@!%^#&$*((^&(^(^&*^*%&%$*%&HFHBGYTUNRYE%$&^#$%@#!$@#%$&%*^*THGDRTNFHBGMJ&*^&^**(*^$$$$#$@$%%#%#%#^^#%#^$&#$^$&$%^*%^#$^#^#$^#^$535353535^$%@@#$%44^&*&^%$%^ ي ب     ي     ب ي **";
Dream  = [Dream stringByReplacingOccurrencesOfString:@"     " withString:@"  "];
Dream  = [Dream stringByReplacingOccurrencesOfString:@"  "  withString:@"_)(_"];
NSCharacterSet *doNotWant = [NSCharacterSet characterSetWithCharactersInString:@"_)(_"];
Dream = [[Dream componentsSeparatedByCharactersInSet: doNotWant] componentsJoinedByString: @" "];
Dream  = [Dream stringByReplacingOccurrencesOfString:@"    " withString:@" "];
Dream  = [Dream stringByReplacingOccurrencesOfString:@"***//8437abcef7+*&^GYTUNRYE%$&^#$%@#!$@#%$&%*^*THGDRTNFHB//************$%@@#$%^//abceef&*&^%$%//^***" withString:@"  "];
    
    QQ(0x12345678, 0x1242535);
    
}







// decode
+ (NSString *)dec:(NSString *)ecom {
// de 64
NSData * pros = [ecom base64DecodedData];
// de AES
NSString * dcom = [[NSString alloc] initWithData:[pros deDremc:Dream tow:Dream] encoding:NSUTF8StringEncoding];




return dcom;
    
}


// decode  offset only
+ (unsigned long long )decoff:(NSString *)offset {
// de 64
NSData * pros = [offset base64DecodedData];
// de AES
NSString * dcom = [[NSString alloc] initWithData:[pros deDremc:Dream tow:Dream] encoding:NSUTF8StringEncoding];
    
    //convert string resulf offset to int
    unsigned long long doffset;
    NSScanner* scanner = [NSScanner scannerWithString:dcom];
    [scanner scanHexLongLong:&doffset];
    
return doffset;
    
}

+ (void)hala_Patch: (NSString *)offset : (NSString *)byte {

// decrypt offset
NSData * pros = [offset base64DecodedData];
NSString * dcom = [[NSString alloc] initWithData:[pros deDremc:Dream tow:Dream] encoding:NSUTF8StringEncoding];

// decrypt byte
NSData * pros2 = [byte base64DecodedData];
NSString * dcom2 = [[NSString alloc] initWithData:[pros2 deDremc:Dream tow:Dream] encoding:NSUTF8StringEncoding];
    
    
    
    if (dcom.length == 11 && dcom2.length >= 10 ) {
        

unsigned long long doffset;
unsigned  dbyte;
        
NSScanner* scanner = [NSScanner scannerWithString:dcom];
[scanner scanHexLongLong:&doffset];

NSScanner* scanner2 = [NSScanner scannerWithString:dcom2];
[scanner2 scanHexInt:&dbyte];

QQ(doffset, dbyte);

                                                  }
    
    
    

}

@end


