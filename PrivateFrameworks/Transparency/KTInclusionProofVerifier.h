//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTApplicationPublicKeyStore, NSString;

@interface KTInclusionProofVerifier : NSObject
{
    KTApplicationPublicKeyStore *_keyStore;
    NSString *_application;
}

@property(retain) NSString *application; // @synthesize application=_application;
@property(readonly) KTApplicationPublicKeyStore *keyStore; // @synthesize keyStore=_keyStore;
- (void).cxx_destruct;
- (BOOL)verifyInclusionProofWithMapEntry:(id)arg1 perAppLogEntry:(id)arg2 topLevelTreeEntry:(id)arg3 error:(id *)arg4;
- (id)initWithKeyStore:(id)arg1 application:(id)arg2;

@end

