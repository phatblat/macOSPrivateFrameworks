//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface HMCameraClipEncryptionManager : NSObject
{
    NSData *_key;
}

@property(readonly, copy) NSData *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)encryptedDataContextFromData:(id)arg1;
- (id)initWithKey:(id)arg1;
- (id)init;

@end

