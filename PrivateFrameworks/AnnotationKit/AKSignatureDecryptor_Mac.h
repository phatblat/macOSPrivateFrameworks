//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AKSignatureDecryptor_Mac : NSObject
{
    BOOL _keyInitialized;
    BOOL _haveKey;
    unsigned char _key[16];
}

+ (id)sharedInstance;
- (void)initializeKey;
- (id)decryptedData:(id)arg1;
- (id)init;

@end

