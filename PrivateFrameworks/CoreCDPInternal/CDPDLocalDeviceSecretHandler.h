//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CDPLocalDeviceSecretHandlerProtocol.h"

@class CDPContext;

@interface CDPDLocalDeviceSecretHandler : NSObject <CDPLocalDeviceSecretHandlerProtocol>
{
    CDUnknownBlockType _validationHandler;
    CDPContext *_context;
}

@property(readonly, nonatomic) CDPContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)userDidCancelWithError:(id)arg1;
- (void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithContext:(id)arg1 validSecretHandler:(CDUnknownBlockType)arg2;

@end

