//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import "MTLSamplerState.h"
#import "MTLSamplerStateSPI.h"

@class NSString;

@interface MTLToolsSamplerState : MTLToolsObject <MTLSamplerState, MTLSamplerStateSPI>
{
}

@property(readonly) unsigned long long uniqueIdentifier;
- (unsigned long long)resourceIndex;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (void)dealloc;
- (void)acceptVisitor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
