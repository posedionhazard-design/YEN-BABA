//
//  AES2.m
//  iOSAESObjc
//
//  Created by Muneeb Ahmad on 17/10/2016.
//  Copyright (c) 2016 Muneeb Ahmad. All rights reserved.
//

//
// The Base64 class is used from a snippet on Internet instead of adding it as a dependency.
// So this project can be built easily without dependency management or framework integration.
//

// TOOLS: XCode 6.3
// Exception handling is not done, you can deal with it yourself if you face any.

#import "AES2.h"
#import <CommonCrypto/CommonCryptor.h>

@implementation NSData (AES2)


- (NSData *) enProfessorr:(NSString *)one {
    return [self Professorrencrypt:kCCEncrypt one:one tow:nil ecb:true];
}


- (NSData *) deProfessorr:(NSString *)one {
    return [self Professorrencrypt:kCCDecrypt one:one tow:nil ecb:true];
}


- (NSData *) enProfessorrc:(NSString *)one tow:(NSString *)tow {
    return [self Professorrencrypt:kCCEncrypt one:one tow:tow ecb:false];
}


- (NSData *) deProfessorrc:(NSString *)one tow:(NSString *)tow {
    return [self Professorrencrypt:kCCDecrypt one:one tow:tow ecb:false];
}

- (NSData *) Professorrencrypt:(CCOperation)operation one:(NSString *)one tow:(NSString *)tow ecb:(BOOL) ecb {
    char keyPtr[kCCKeySizeAES128 + 1];
    bzero(keyPtr, sizeof(keyPtr));
    [one getCString:keyPtr maxLength:sizeof(keyPtr) encoding:NSUTF8StringEncoding];
    
    char ivPtr[kCCBlockSizeAES128 + 1];
    bzero(ivPtr, sizeof(ivPtr));
    if (tow) {
        [tow getCString:ivPtr maxLength:sizeof(ivPtr) encoding:NSUTF8StringEncoding];
    }
    
    NSUInteger dataLength = [self length];
    size_t bufferSize = dataLength + kCCBlockSizeAES128;
    void *buffer = malloc(bufferSize);
    
    size_t numBytesEncrypted = 0;
    CCCryptorStatus cryptStatus;
    if (ecb) {
        cryptStatus = CCCrypt(operation, kCCAlgorithmAES128, kCCOptionPKCS7Padding | kCCOptionECBMode, keyPtr,  kCCBlockSizeAES128, ivPtr, [self bytes], dataLength, buffer, bufferSize, &numBytesEncrypted);
    } else {
        cryptStatus = CCCrypt(operation, kCCAlgorithmAES128, kCCOptionPKCS7Padding, keyPtr,  kCCBlockSizeAES128, ivPtr, [self bytes], dataLength, buffer, bufferSize, &numBytesEncrypted);
    }
    if (cryptStatus == kCCSuccess) {
        return [NSData dataWithBytesNoCopy:buffer length:numBytesEncrypted];
    }
    free(buffer);
    return nil;
}

@end
