//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

#import "WFStatisticsSampleProvider.h"

@class NSArray, NSObject<WFStatisticsSampleProvider>, NSString;

@interface WFConcreteStatisticsSampleProvider : NSProxy <WFStatisticsSampleProvider>
{
    NSObject<WFStatisticsSampleProvider> *_sampleProvider;
}

@property(retain, nonatomic) NSObject<WFStatisticsSampleProvider> *sampleProvider; // @synthesize sampleProvider=_sampleProvider;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithSampleProvider:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BOOL canProvideDataSamples; // @dynamic canProvideDataSamples;
@property(readonly, nonatomic) NSArray *dataSamples; // @dynamic dataSamples;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
