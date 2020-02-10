//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "InputSourceOwnerProtocol.h"

@class NSBundle, NSNumber, NSString;

@interface InputSourceOwner : NSObject <InputSourceOwnerProtocol>
{
    struct ProcessSerialNumber _targetApp;
    NSNumber *_targetTSMDocument;
}

@property(readonly, nonatomic) NSNumber *targetTSMDocument; // @synthesize targetTSMDocument=_targetTSMDocument;
@property(readonly, nonatomic) BOOL isSecureMode;
@property(readonly, nonatomic) NSBundle *bundle;
- (void)sourceWasChangedTo:(id)arg1;
@property(readonly, nonatomic) struct ProcessSerialNumber *targetApp;
- (void)dealloc;
- (id)initWithTargetApp:(struct ProcessSerialNumber *)arg1 targetTSMDocument:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
