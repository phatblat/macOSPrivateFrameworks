//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenSharing/SSCredentials.h>

@class NSData;

@interface SSEncryptionKeyCredentials : SSCredentials
{
    NSData *_encryptionKey;
}

+ (id)preauthorizedCredentialsWithKey:(id)arg1;
@property(retain) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
- (void)dealloc;
- (id)initWithAuthenticationType:(id)arg1 withEncryptionKey:(id)arg2;

@end

