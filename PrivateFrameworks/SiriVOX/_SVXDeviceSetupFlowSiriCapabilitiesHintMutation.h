//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVXDeviceSetupFlowSiriCapabilitiesHintMutating.h"

@class NSString, SVXDeviceSetupFlowSiriCapabilitiesHint;

@interface _SVXDeviceSetupFlowSiriCapabilitiesHintMutation : NSObject <SVXDeviceSetupFlowSiriCapabilitiesHintMutating>
{
    SVXDeviceSetupFlowSiriCapabilitiesHint *_baseModel;
    long long _style;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasStyle:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setStyle:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
